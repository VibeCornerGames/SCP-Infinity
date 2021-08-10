#include "EBBarrel.h"
#include "EBBullet.h"

void UEBBarrel::CalculateAimDirection(TSubclassOf<class AEBBullet> BulletClass, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int NumIterations) const {
	FVector StartLocation = GetComponentLocation();
	CalculateAimDirectionFromLocation(BulletClass, StartLocation, TargetLocation, TargetVelocity, AimDirection, PredictedTargetLocation, PredictedIntersectionLocation, PredictedFlightTime, Error, MaxTime, Step, NumIterations);
}

void UEBBarrel::CalculateAimDirectionFromLocation(TSubclassOf<class AEBBullet> BulletClass, FVector StartLocation, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int NumIterations) const {
	if (!BulletClass->IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("CalculateAimDirection - invalid bullet class"));
		return;
	}

	AEBBullet* bullet = Cast<AEBBullet>(BulletClass->GetDefaultObject());

	FVector AddVelocity = AdditionalVelocity;
	UPrimitiveComponent* parent = Cast<UPrimitiveComponent>(GetAttachParent());
	if (parent != nullptr) {
		if (parent->IsSimulatingPhysics()) {
			AddVelocity += parent->GetPhysicsLinearVelocityAtPoint(StartLocation) * InheritVelocity;
		}
	}


	FVector InitialAimDirection = (TargetLocation - StartLocation).GetSafeNormal(); //initial prediction
	AimDirection = InitialAimDirection;
	FVector PreviousAimDirection = AimDirection;

	for (int Iteration = 0; Iteration < NumIterations; Iteration++) {
		FVector CurrentBulletLocation = StartLocation;
		FVector Velocity = (AimDirection * (FMath::Lerp(MuzzleVelocityMultiplierMin, MuzzleVelocityMultiplierMax, 0.5) * FMath::Lerp(bullet->MuzzleVelocityMin, bullet->MuzzleVelocityMax, 0.5))) + AddVelocity;
		bool hit = 0;
		for (float time = 0; time <= MaxTime; time += Step) {
			FVector PreviousVelocity = Velocity;
			Velocity = bullet->UpdateVelocity(GetWorld(), CurrentBulletLocation, Velocity, Step);

			FVector TraceVector = ((((PreviousVelocity + Velocity) * 0.5) - TargetVelocity) * Step);
			FVector TraceEndLocation = CurrentBulletLocation + TraceVector;
			FVector IntersectionPoint;

			hit = FMath::SegmentPlaneIntersection(CurrentBulletLocation - TraceVector, TraceEndLocation, FPlane(TargetLocation, InitialAimDirection), IntersectionPoint); //actual hit test

			if (hit) {
				PredictedIntersectionLocation = IntersectionPoint;
				FQuat AimCorrection = FQuat::FindBetween((IntersectionPoint - StartLocation), (TargetLocation - StartLocation));
				AimDirection = AimCorrection.RotateVector(AimDirection).GetSafeNormal();
				Error = (IntersectionPoint - TargetLocation).Size();

				float AdditionalFlightTime = (FVector(CurrentBulletLocation - IntersectionPoint).Size() / TraceVector.Size()) * Step;
				PredictedFlightTime = time + AdditionalFlightTime;
				PredictedTargetLocation = TargetLocation + TargetVelocity * AdditionalFlightTime;

				break;
			}

			//no hit, keep going
			CurrentBulletLocation = TraceEndLocation;
		}
		if (!hit) {
			Error = 99999999999999999.0f;
			return; //no solution
		}
	}
}