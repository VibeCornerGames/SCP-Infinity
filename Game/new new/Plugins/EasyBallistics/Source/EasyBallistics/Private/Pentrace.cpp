// Copyright 2020 Mookie. All Rights Reserved.

#include "EBBullet.h"

float AEBBullet::PenetrationTrace(FVector StartLocation, FVector EndLocation, TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr> Component, EPenTraceType PenTraceType, TEnumAsByte<ECollisionChannel> CollisionChannel, FVector &ExitLocation, FVector &ExitNormal) {
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = TraceComplex;
	QueryParams.bFindInitialOverlaps = true;

	FHitResult Result;

switch (PenTraceType) {
	case(EPenTraceType::PT_BackTrace): {
		bool Hit = GetWorld()->LineTraceSingleByChannel(Result, EndLocation, StartLocation, CollisionChannel, QueryParams);
		if (!Hit) return 1.0f;
		ExitNormal = Result.Normal;
		ExitLocation = Result.Location;
		return (1.0f - Result.Time);
	}

	case(EPenTraceType::PT_ByComponent): {
		bool Hit = Component->LineTraceComponent(Result, EndLocation, StartLocation, QueryParams);
		if (!Hit) return 1.0f;
		ExitNormal = Result.Normal;
		ExitLocation = Result.Location;
		return (1.0f - Result.Time);
	}

	case(EPenTraceType::PT_TwoSidedGeometry): {
		bool Hit = GetWorld()->LineTraceSingleByChannel(Result, StartLocation, EndLocation, CollisionChannel, QueryParams);
		if (!Hit) return 1.0f;
		ExitLocation = Result.Location;
		ExitNormal = -Result.Normal;
		return Result.Time;
	}

	default:
		return 1.0f;
	}
}