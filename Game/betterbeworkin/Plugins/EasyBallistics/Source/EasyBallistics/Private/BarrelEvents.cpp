// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBarrel.h"
#include "Net/UnrealNetwork.h"

#define REPOWNERONLY false

void UEBBarrel::ShotFiredMulticast_Implementation() {
	ShotFired.Broadcast();
}


void UEBBarrel::Shoot(bool Trigger) {
	if (ClientSideAim && GetOwner()->GetRemoteRole() == ROLE_Authority && Trigger) {
		Aim = GetComponentTransform().GetUnitAxis(EAxis::X);
		Location = GetComponentTransform().GetLocation();
		ShootRepCSA(Trigger, UGameplayStatics::RebaseLocalOriginOntoZero(GetWorld(), Location), Aim);
	}
	else {
		ShootRep(Trigger);
	}
}

void UEBBarrel::ShootRep_Implementation(bool Trigger) {
	if (Trigger) {
		if (FireMode == EFireMode::FM_Burst || FireMode == EFireMode::FM_InterBurst) {
			BurstRemaining = BurstCount;
		};
		Shooting = true;
	}
	else {
		//burst cannot be interrupted
		if (FireMode != EFireMode::FM_Burst || BurstRemaining<=0) {
			Shooting = false;
		}
	}
}

bool UEBBarrel::ShootRep_Validate(bool Trigger) {
	return true;
}

void UEBBarrel::ShootRepCSA_Implementation(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
	Location = UGameplayStatics::RebaseZeroOriginOntoLocal(GetWorld(), NewLocation);
	Aim = NewAim;
	RemoteAimReceived = true;

	if (Trigger) {
		if (FireMode == EFireMode::FM_Burst || FireMode == EFireMode::FM_InterBurst) {
			BurstRemaining = BurstCount;
		};
		Shooting = true;
	}
	else {
		//burst cannot be interrupted
		if (FireMode != EFireMode::FM_Burst || BurstRemaining <= 0) {
			Shooting = false;
		}
	}
}

bool UEBBarrel::ShootRepCSA_Validate(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
	return true;
}

void UEBBarrel::GatlingSpool_Implementation(bool Spool) {
	Spooling = Spool;
}

bool UEBBarrel::GatlingSpool_Validate(bool Spool) {
	return true;
}

void UEBBarrel::SwitchFireMode_Implementation(EFireMode NewFireMode) {
	FireMode = NewFireMode;
}
bool UEBBarrel::SwitchFireMode_Validate(EFireMode NewFireMode) {
	return true;
}

void UEBBarrel::ClientAim_Implementation(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
	Location = UGameplayStatics::RebaseZeroOriginOntoLocal(GetWorld(),NewLocation);
	Aim = NewAim;
	RemoteAimReceived = true;
}
bool UEBBarrel::ClientAim_Validate(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
	return true;
}

void UEBBarrel::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

#if REPOWNERONLY
		DOREPLIFETIME_CONDITION(UEBBarrel, FireMode, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, CycleAmmoCount, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, CycleAmmoPos, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, Ammo, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, ChamberedBullet, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, Shooting, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, ShootingBlocked, COND_OwnerOnly);
		DOREPLIFETIME_CONDITION(UEBBarrel, Spooling, COND_OwnerOnly);
#else
		DOREPLIFETIME(UEBBarrel, FireMode);
		DOREPLIFETIME(UEBBarrel, CycleAmmoCount);
		DOREPLIFETIME(UEBBarrel, CycleAmmoPos);
		DOREPLIFETIME(UEBBarrel, Ammo);
		DOREPLIFETIME(UEBBarrel, ChamberedBullet);
		DOREPLIFETIME(UEBBarrel, Shooting);
		DOREPLIFETIME(UEBBarrel, ShootingBlocked);
		DOREPLIFETIME(UEBBarrel, Spooling);
#endif
}