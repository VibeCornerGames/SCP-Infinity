// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBullet.h"

float AEBBullet::Trace(FVector start, FVector PreviousVelocity, float delta, TEnumAsByte<ECollisionChannel> CollisionChannel) {

	bool Hit;
	FHitResult HitResult;
	TArray<FHitResult> Results;

	FCollisionResponseParams ResponseParameters;

	FCollisionQueryParams CollisionParameters;
	CollisionParameters.bTraceComplex = TraceComplex;
	CollisionParameters.bReturnPhysicalMaterial = true;
	CollisionParameters.AddIgnoredActor(this);
	CollisionParameters.AddIgnoredActors(IgnoredActors);
	CollisionParameters.bReturnFaceIndex = true;

	if (OwnerSafe) {
		CollisionParameters.AddIgnoredActors(GetSafeLaunchIgnoredActors(GetOwner()));
	}

	FVector TraceDistance = (PreviousVelocity + Velocity)*0.5*delta;

	GetWorld()->LineTraceMultiByChannel(Results, start, start + TraceDistance, CollisionChannel, CollisionParameters, ResponseParameters);
	if (Results.Num() > 0) {
		HitResult = FilterHits(Results, Hit);
	}
	else { Hit = false; }

	if (Hit) {
		//Reduce velocity
		Velocity = FMath::Lerp(PreviousVelocity, Velocity, HitResult.Time);

		bool Ricochet = false;
		bool Penetration = false;
		FVector exitLoc;
		FVector exitNormal;
		FVector NewVelocity = Velocity;

		//material mods
		bool neverPenetrate = false;
		bool neverRicochet = false;
		float penDepthMultiplier = 1.0f;
		float penNormalization = PenetrationNormalization;
		float penNormalizationGrazing = PenetrationNormalizationGrazing;
		float penEnterSpread = PenetrationEntryAngleSpread;
		float penExitSpread = PenetrationExitAngleSpread;
		float ricProbMultiplier = 1.0f;
		float ricRestitution = RicochetRestitution;
		float ricFriction = RicochetFriction;
		float ricSpread = RicochetSpread;
		EPenTraceType PenTraceType = DefaultPenTraceType;

		UPhysicalMaterial* PhysMaterial = HitResult.PhysMaterial.Get();



		if (PhysMaterial) {
			//material response modifiers
			if (MaterialResponseMap != nullptr) {
				FEBMaterialResponseMapEntry* ResponseEntry = MaterialResponseMap->Map.Find(PhysMaterial);
				if (ResponseEntry != nullptr) {
					neverPenetrate = ResponseEntry->NeverPenetrate;
					neverRicochet = ResponseEntry->NeverRicochet;
					PenTraceType = ResponseEntry->PenTraceType;

					penDepthMultiplier = ResponseEntry->PenetrationDepthMultiplier;
					penNormalization = PenetrationNormalization + ResponseEntry->PenetrationNormalization;
					penNormalizationGrazing = PenetrationNormalizationGrazing + ResponseEntry->PenetrationNormalizationGrazing;
					penEnterSpread = PenetrationEntryAngleSpread + ResponseEntry->PenetrationEntryAngleSpread;
					penExitSpread = PenetrationExitAngleSpread + ResponseEntry->PenetrationExitAngleSpread;

					ricProbMultiplier = ResponseEntry->RicochetProbabilityMultiplier;
					ricRestitution = FMath::Lerp(RicochetRestitution, ResponseEntry->RicochetRestitution, ResponseEntry->RicochetRestitutionInfluence);
					ricFriction = FMath::Lerp(RicochetFriction, ResponseEntry->RicochetFriction, ResponseEntry->RicochetFrictionInfluence);
					ricSpread = RicochetSpread + ResponseEntry->RicochetSpread;
				}	
			}

			if (MaterialDensityControlsPenetrationDepth) {
				penDepthMultiplier /= PhysMaterial->Density;
			}

			if (MaterialRestitutionControlsRicochet) {
				RicochetRestitution *= PhysMaterial->Restitution;
			}
		}


		float dot = FVector::DotProduct(Velocity.GetSafeNormal(), HitResult.Normal) + 1.0f;
		FVector cross = FVector::CrossProduct(Velocity.GetSafeNormal(), HitResult.Normal);
		FVector flat = HitResult.Normal.RotateAngleAxis(-90.0f, cross);

#ifdef WITH_EDITOR
		if (DebugEnabled) {
			FColor DebugColor = FColor::MakeRedToGreenColorFromScalar(Velocity.Size() / MuzzleVelocityMax);
			DrawDebugLine(GetWorld(), start, HitResult.Location, DebugColor, false, DebugTrailTime, 0, DebugTrailWidth);
		};
#endif

		float GrazingAngle = FMath::Pow(dot, GrazingAngleExponent);
		FVector PenetrationVector = RandomStream.VRandCone(Velocity, penEnterSpread);
		PenetrationVector = FMath::Lerp(PenetrationVector, -HitResult.Normal, FMath::Lerp(penNormalization, penNormalizationGrazing, GrazingAngle));
		float PenetrationDistance = FMath::Lerp(MinPenetration, MaxPenetration, RandomStream.FRand()) * FMath::Pow((Velocity.Size() / ((MuzzleVelocityMin + MuzzleVelocityMax) * 0.5f)), 2.0f) * penDepthMultiplier;
		float PenetrationDepth = -FVector::DotProduct(PenetrationVector, HitResult.Normal) * PenetrationDistance;

		float BlockTIme = 1.0f;

		if (PenetrationDistance > 0.0f) {
			if (!neverPenetrate) {
					BlockTIme = PenetrationTrace(HitResult.Location - (HitResult.Normal * CollisionMargin), HitResult.Location + PenetrationVector * PenetrationDistance, HitResult.Component, PenTraceType, CollisionChannel, exitLoc, exitNormal);
				}
			}

		if (BlockTIme >= 0.999999f) {

			//no pen
			SetActorLocation(HitResult.Location + HitResult.Normal * CollisionMargin);

			float ricThreshold = 1.0f;
			if (SpeedControlsRicochetProbability) { ricThreshold *= Velocity.Size() / MuzzleVelocityMax; };

			if (!neverRicochet && RandomStream.FRand() * ricThreshold < FMath::Lerp(RicochetProbability * ricProbMultiplier, RicochetProbabilityGrazing * ricProbMultiplier, GrazingAngle)) {
				//bounce
				FVector bounceAngle = flat * dot * (1.0f - ricFriction);
				bounceAngle += HitResult.Normal * (1.0f - dot) * ricRestitution;
				bounceAngle = RandomStream.VRandCone(bounceAngle, ricSpread) * bounceAngle.Size();

				NewVelocity = bounceAngle * Velocity.Size();
				Ricochet = true;
				OwnerSafe = false;
			}
			else {
				//stopped
				NewVelocity = FVector(0, 0, 0);
			}
		}
		else {
			//penetration
			float RemainingEnergy = FMath::Pow(1.0f - BlockTIme, 2.0f);
			SetActorLocation(exitLoc + exitNormal * CollisionMargin);
			NewVelocity = RandomStream.VRandCone(PenetrationVector, penExitSpread * (1.0f - RemainingEnergy));
			NewVelocity = FMath::Lerp(NewVelocity, Velocity.GetSafeNormal(), RemainingEnergy);
			NewVelocity *= RemainingEnergy * Velocity.Size();
			Penetration = true;
			OwnerSafe = false;
		}


		//response
		FVector Impulse = (Velocity - NewVelocity) * Mass * ImpulseMultiplier;

		if (AddImpulse && HitResult.Component->IsSimulatingPhysics()) {
			HitResult.Component->AddImpulseAtLocation(Impulse, HitResult.Location, HitResult.BoneName);
		}

		//impact actual
		if (HasAuthority()) {
			OnImpact(Ricochet, Penetration, HitResult.Location, Velocity, HitResult.Normal, GetActorLocation(), NewVelocity, Impulse, PenetrationDepth, HitResult.Actor.Get(), HitResult.Component.Get(), HitResult.BoneName, PhysMaterial, HitResult);
		}
		else {
			OnNetPredictedImpact(Ricochet, Penetration, HitResult.Location, Velocity, HitResult.Normal, GetActorLocation(), NewVelocity, Impulse, PenetrationDepth, HitResult.Actor.Get(), HitResult.Component.Get(), HitResult.BoneName, PhysMaterial, HitResult);
		}

		Velocity = NewVelocity;

		if ((Velocity.Size() < DespawnVelocity) || (!Ricochet && !Penetration && (DespawnVelocity>0.0f))){
			Deactivate();
		}
		CanRetrace = false;
	}
	else {
		//prepare for time travel
		if (Retrace) {
			CanRetrace = true;
			LastTraceStart = start;
			LastTraceDelta = delta;
			LastTracePrevVelocity = PreviousVelocity;
			LastTraceVelocity = Velocity;
		}

		SetActorLocation(start + TraceDistance);
		HitResult.Time = 1.0f;

		OnTrace(start, GetActorLocation());

#ifdef WITH_EDITOR
		if (DebugEnabled) {
			FLinearColor Color = GetDebugColor(Velocity.Size() / ((MuzzleVelocityMin + MuzzleVelocityMax)*0.5f));
			DrawDebugLine(GetWorld(), start, start + TraceDistance, Color.ToFColor(true), false, DebugTrailTime, 0, 0);
		}
	}
#endif

	return delta*(1.0f - HitResult.Time);
}

TArray<AActor*> AEBBullet::GetAttachedActorsRecursive(AActor* Actor, uint16 Depth) const{
	TArray<AActor*> Attached;
	Actor->GetAttachedActors(Attached);

	TArray<AActor*> AttachedRecursive;
	for (AActor* ActorRecursive : Attached) {
		AttachedRecursive += GetAttachedActorsRecursive(ActorRecursive);
	}
	Attached += AttachedRecursive;
	return Attached;
}