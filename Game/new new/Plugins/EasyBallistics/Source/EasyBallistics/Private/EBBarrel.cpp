// Copyright 2018 Mookie. All Rights Reserved.
#include "EBBarrel.h"

UEBBarrel::UEBBarrel() {
	PrimaryComponentTick.bCanEverTick = true;
	bHiddenInGame = true;
	bAutoActivate = true;
	SetIsReplicatedByDefault(ReplicateVariables);

	RandomStream.GenerateNewSeed();

	GatlingRPS = FireRateMin;
}

void UEBBarrel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (ClientSideAim){
		if (GetOwner()->GetRemoteRole()==ROLE_Authority){
			TimeSinceAimUpdate += DeltaTime;
			if ((TimeSinceAimUpdate >= 1.0f / ClientAimUpdateFrequency) && Shooting) {
				Aim = GetComponentTransform().GetUnitAxis(EAxis::X);
				Location = GetComponentTransform().GetLocation();
				ClientAim(UGameplayStatics::RebaseLocalOriginOntoZero(GetWorld(),Location), Aim);
				TimeSinceAimUpdate = FMath::Fmod(TimeSinceAimUpdate, 1.0f / ClientAimUpdateFrequency);
			};
		}else{
			if (!RemoteAimReceived) {
				Aim = GetComponentTransform().GetUnitAxis(EAxis::X);
				Location = GetComponentTransform().GetLocation();
			}
			else {
				FVector LocOffset = (Location - GetComponentLocation());
				if (LocOffset.Size() > ClientAimDistanceLimit) {
					//lag or cheater???
					Location = GetComponentLocation() + LocOffset.GetSafeNormal()*ClientAimDistanceLimit;
				}
			}
		}
	}
	else {
		Aim = GetComponentTransform().GetUnitAxis(EAxis::X);
		Location = GetComponentTransform().GetLocation();
	}

	//Only server can tick
	if (GetOwner()->GetLocalRole() == ROLE_Authority){

		float RemainingDelta;

		if (FireMode == EFireMode::FM_Gatling) {
			if (Spooling || (GatlingAutoSpool && Shooting)) {
				GatlingRPS = FMath::Lerp(GatlingRPS, FireRateMax, FMath::Min(GatlingSpoolUpTime*DeltaTime, 1.0f));
			}
			else {
				GatlingRPS = FMath::Lerp(GatlingRPS, FireRateMin, FMath::Min(GatlingSpoolUpTime*DeltaTime, 1.0f));
			}
			GatlingPhase += GatlingRPS*DeltaTime;
			for (int i = 1; i <= GatlingPhase; i++) {
				if (Cooldown <= 0.0f && LoadNext) {
					NextBullet();
				}

				if (Shooting && ChamberedBullet != nullptr && (!ShootingBlocked)) {
					SpawnBullet(GetOwner(), Location, Aim);
				}
			}
			GatlingPhase = FMath::Fmod(GatlingPhase, 1.0f);

		}
		else {
			RemainingDelta = DeltaTime;
			do {
				float step = FMath::Min(Cooldown, RemainingDelta);

				Cooldown -= step;

				RemainingDelta -= step;

				if (Cooldown <= 0.0f && LoadNext) {
					NextBullet();
				}

				//shoot when ready
				if (Shooting && ChamberedBullet != nullptr && (!ShootingBlocked)) {
					if (BurstRemaining > 0 || (FireMode != EFireMode::FM_Burst && FireMode != EFireMode::FM_InterBurst)) {
						SpawnBullet(GetOwner(), Location, Aim);
					}
					else {
						Shooting = false;
					}
				}
			} while (RemainingDelta > 0 && Cooldown > 0);
		}
	}
}

void UEBBarrel::NextBullet() {
	if (ChamberedBullet == nullptr) {
		if (Ammo.Num() > 0 && (CycleAmmoCount > 0 || CycleAmmoUnlimited || (!CycleAmmo))) {

			//cycle ammo
			if (CycleAmmo) {
				if (CycleAmmoPos >= Ammo.Num()) { CycleAmmoPos = 0; }
				ChamberedBullet = Ammo[CycleAmmoPos];
				CycleAmmoPos++;

				if (!CycleAmmoUnlimited) {
					CycleAmmoCount--;
				}
			}
			else {
				ChamberedBullet = Ammo[0];
				Ammo.RemoveAt(0, 1, true);
			}

			ReadyToShoot.Broadcast();
		}
		else {
			AmmoDepleted.Broadcast();
		}
	}
}

void UEBBarrel::SpawnBullet(AActor* Owner, FVector InLocation, FVector InAim) {
	TSubclassOf<class AEBBullet> BulletClass = ChamberedBullet;

	if (BulletClass != nullptr) {
		FVector OutLocation;
		FVector OutAim;

		InitialBulletTransform(InLocation, InAim, OutLocation, OutAim);

		AEBBullet* Default = Cast<AEBBullet>(BulletClass->GetDefaultObject());

		OutAim = RandomStream.VRandCone(OutAim, Spread + Default->Spread);
		float BulletVelocity = FMath::Lerp(MuzzleVelocityMultiplierMin* Default->MuzzleVelocityMin, MuzzleVelocityMultiplierMax*Default->MuzzleVelocityMax, RandomStream.FRand());
		FVector Velocity = OutAim*BulletVelocity;

		//get parent physics body
		UPrimitiveComponent* parent = Cast<UPrimitiveComponent>(GetAttachParent());
		Velocity += AdditionalVelocity;

		if (parent != nullptr) {

			if (parent->IsSimulatingPhysics()) {
				Velocity += parent->GetPhysicsLinearVelocityAtPoint(OutLocation)*InheritVelocity;
			}

			if (Default->Shotgun) {
				ApplyRecoil(parent, OutLocation, -Velocity*Default->Mass*RecoilMultiplier*Default->ShotCount);
			}
			else{
				ApplyRecoil(parent, OutLocation, -Velocity*Default->Mass*RecoilMultiplier);
			}
		}

		BeforeShotFired.Broadcast();

		AEBBullet::SpawnWithExactVelocity(BulletClass, Owner, Owner->GetInstigator(), OutLocation, Velocity);

		//spend ammo
		ChamberedBullet = nullptr;
		if (FireMode != EFireMode::FM_Gatling) {
			Cooldown = 1.0f / FMath::Lerp(FireRateMin, FireRateMax, RandomStream.FRand());
		}

		//fire modes
		switch (FireMode) {
		case EFireMode::FM_Auto:
			LoadNext = true;
			break;

		case EFireMode::FM_Burst:
			LoadNext = true;
			break;

		case EFireMode::FM_InterBurst:
			LoadNext = true;
			break;

		case EFireMode::FM_Semiauto:
			Shooting = false;
			LoadNext = true;
			break;

		case EFireMode::FM_Manual:
			Shooting = false;
			LoadNext = false;
			break;

		case EFireMode::FM_Slamfire:
			LoadNext = false;
			break;

		case EFireMode::FM_Gatling:
			LoadNext = true;
			break;
		};

		if (BurstRemaining > 0) {
			BurstRemaining--;
		}

		if (ReplicateShotFiredEvents) {
			ShotFiredMulticast();
		}
		else {
			ShotFired.Broadcast();
		}
	}
}

void UEBBarrel::InitialBulletTransform_Implementation(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection) {
	OutLocation = InLocation;
	OutDirection = InDirection;
}

void UEBBarrel::ApplyRecoil_Implementation(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse){
	if (Component->IsSimulatingPhysics()) {
		Component->AddImpulseAtLocation(Impulse, InLocation);
	}
}