// Copyright 2020 Mookie. All Rights Reserved.

#include "EBBullet.h"

TArray<AActor*>AEBBullet::GetSafeLaunchIgnoredActors(AActor* BulletOwner) const{
	TArray<AActor*> Results = SafeLaunchIgnoredActors;

	Results.Add(BulletOwner);

	if (SafeLaunchIgnoreAttachParent && BulletOwner) {
		AActor* AttachedRoot = BulletOwner;

		while (true) { //find attachment root
			AActor* AttachedTo;
			AttachedTo = AttachedRoot->GetAttachParentActor();

			if (AttachedTo) {
				Results.Add(AttachedTo);
				AttachedRoot = AttachedTo;
			}
			else break;
		}
		Results.Add(AttachedRoot);
		if (SafeLaunchIgnoreAllAttached) Results.Append(GetAttachedActorsRecursive(AttachedRoot));
	}

	return Results;
}