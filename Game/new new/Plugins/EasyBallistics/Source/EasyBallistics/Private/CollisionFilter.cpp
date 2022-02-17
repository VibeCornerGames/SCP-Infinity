#include "EBBullet.h"

bool AEBBullet::CollisionFilter_Implementation(FHitResult HitResult) const{
	return true;
};

FHitResult AEBBullet::FilterHits(TArray<FHitResult> Results, bool &hit) const{
	TArray<FHitResult> OutResults;

	for (FHitResult Result : Results) {
		if (Result.bBlockingHit) {

			hit = true;
			return Result;
		}else{
			if (CollisionFilter(Result)) {
				hit = true;
				return Result;
			}
		}
	}

	hit = false;
	return FHitResult(); //blank
};