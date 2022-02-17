// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBullet.h"

FVector AEBBullet::UpdateVelocity_Implementation(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const {
	FVector NewVelocity = PreviousVelocity;

	//airDensity
	float air;
	float speedOfSound;

	air = GetAirDensity(World, Location);
	speedOfSound = GetSpeedOfSound(World, Location);

	//gravity
	if (!OverrideGravity) {
		NewVelocity += FVector(0, 0, World->GetGravityZ())*DeltaTime;
	}
	else {
		NewVelocity += Gravity*DeltaTime;
	};

	//drag
	FVector relVel = (NewVelocity - GetWind(World, Location));
	float speed = relVel.Size();
	float mach = speed / speedOfSound;
	float profile = FMath::Pow(Diameter / 200.0f, 2.0f)*3.141592f;
	float drag = GetCurveValue(MachDragCurve, mach, 0.25f)*FMath::Pow(speed / 100.0f, 2.0f)*profile*air*FormFactor*50.0f;
	NewVelocity -= relVel.GetSafeNormal() * drag / Mass * DeltaTime / WorldScale;

	return NewVelocity;
}
