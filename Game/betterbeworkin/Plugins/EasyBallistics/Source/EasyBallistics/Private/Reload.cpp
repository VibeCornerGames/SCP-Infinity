// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBarrel.h"
#include "EBBullet.h"

TArray<TSubclassOf<class AEBBullet>> UEBBarrel::GetAmmo(bool CountChambered) const {
	if (!CountChambered || ChamberedBullet == nullptr) {
		return Ammo;
	}
	else {
		TArray<TSubclassOf<class AEBBullet>> RetAmmo;
		RetAmmo.Add(ChamberedBullet);
		RetAmmo.Append(Ammo);
		return RetAmmo;
	};
};

int UEBBarrel::GetAmmoCount(bool CountChambered) const {

	int remainingAmmo;
	if (CycleAmmo) {
		remainingAmmo = CycleAmmoCount;
	}
	else {
		remainingAmmo = Ammo.Num();
	};

	if (CountChambered) {
		if (ChamberedBullet != nullptr) {
			remainingAmmo++;
		};
	};

	return remainingAmmo;
};

void UEBBarrel::SetAmmo(int Count, bool UnloadChambered, bool CancelShooting, bool ManualCharge, const TArray<TSubclassOf<class AEBBullet>>& NewAmmo) {
	Ammo = NewAmmo;

	CycleAmmoCount = Count;

	if (UnloadChambered) {
		ChamberedBullet = nullptr;
	};

	if (CancelShooting) {
		BurstRemaining = 0;
		Shooting = false;
	};

	if (ManualCharge) {
		LoadNext = false;
	};
};

void UEBBarrel::Charge_Implementation() {
	LoadNext = true;
};

bool UEBBarrel::Charge_Validate() {
	return true;
};

void UEBBarrel::UnloadChambered_Implementation(bool ManualCharge) {
	ChamberedBullet = nullptr;

	if (ManualCharge) {
		LoadNext = false;
	};
};

bool UEBBarrel::UnloadChambered_Validate(bool ManualCharge) {
	return true;
};