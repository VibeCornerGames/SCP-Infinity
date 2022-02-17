// Copyright 2020 Mookie. All Rights Reserved.

#include "EBBarrel.h"
#include "EBBullet.h"

void UEBBarrel::PredictHit(bool& Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<class AEBBullet> BulletClass, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const {
	FVector StartLocation = GetComponentLocation();
	FVector AimDirection = GetComponentQuat().GetForwardVector();
	PredictHitFromLocation(Hit, HitLocation, HitTime, HitActor, Trajectory, BulletClass, StartLocation, AimDirection, IgnoredActors, MaxTime, Step);
}

void UEBBarrel::PredictHitFromLocation(bool &Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<class AEBBullet> BulletClass, FVector StartLocation, FVector AimDirection, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const{
	if (!BulletClass->IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("PredictHit - invalid bullet class"));
		return;
	}

	float Time = 0;
	Trajectory = TArray<FVector>();

	FVector CurrentLocation = StartLocation;
	AEBBullet* Bullet = Cast<AEBBullet>(BulletClass->GetDefaultObject());
	FVector Velocity = AimDirection.GetSafeNormal()*(FMath::Lerp(MuzzleVelocityMultiplierMin, MuzzleVelocityMultiplierMax, 0.5)*FMath::Lerp(Bullet->MuzzleVelocityMin, Bullet->MuzzleVelocityMax, 0.5));

	UPrimitiveComponent* Parent = Cast<UPrimitiveComponent>(GetAttachParent());

	Velocity += AdditionalVelocity;

	if (Parent != nullptr) {
		if (Parent->IsSimulatingPhysics()) {
			Velocity += Parent->GetPhysicsLinearVelocityAtPoint(CurrentLocation)*InheritVelocity;
		}
	}

	while (Time < MaxTime) {
		FVector PreviousVelocity = Velocity;
		Velocity = Bullet->UpdateVelocity(GetWorld(), CurrentLocation, Velocity, Step);
		float TraceHitTime;
		Hit = UEBBarrel::PredictTrace(GetWorld(), Bullet, CurrentLocation, CurrentLocation + FMath::Lerp(PreviousVelocity, Velocity, 0.5f)*Step, HitLocation,TraceHitTime, HitActor, IgnoredActors);
		if (Hit) {
			Trajectory.Add(HitLocation);
			HitTime = Time+(TraceHitTime*Step);
			return;
		}
		else {
			Trajectory.Add(CurrentLocation);
			CurrentLocation += FMath::Lerp(PreviousVelocity, Velocity, 0.5f)*Step;
			Time += Step;
		}
	}

	Hit = false;
	HitTime = MaxTime;
	HitLocation = CurrentLocation;
	HitActor = nullptr;
}

bool UEBBarrel::PredictTrace(UWorld* World, AEBBullet* Bullet, FVector Start, FVector End, FVector &HitLocation, float &Time, AActor* &Actor, TArray<AActor*> IgnoredActors)  const {
	FHitResult Result;

	FCollisionResponseParams ResponseParams;

	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = Bullet->TraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;

	if (Bullet->SafeLaunch) {
		QueryParams.AddIgnoredActor(GetOwner());
	}

	QueryParams.AddIgnoredActors(IgnoredActors);
		
	bool Hit = World->LineTraceSingleByChannel(Result, Start, End, Bullet->TraceChannel, QueryParams, ResponseParams);

	if (Hit) {
		Time = Result.Time;
		Actor = Result.Actor.Get();
		HitLocation = Result.Location;
	}
	return Hit;
}