// Copyright 2016 Mookie. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EBMaterialResponseMap.generated.h"

UENUM(BlueprintType)
enum class EPenTraceType : uint8
{
	PT_BackTrace UMETA(DisplayName = "Back Trace"),
	PT_ByComponent UMETA(DisplayName = "By Component"),
	PT_TwoSidedGeometry UMETA(DisplayName = "Double Sided Geometry"),
};

USTRUCT(BlueprintType)
struct FEBMaterialResponseMapEntry {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Material") EPenTraceType PenTraceType = EPenTraceType::PT_BackTrace;
	UPROPERTY(EditAnywhere, Category = "Material") bool NeverPenetrate;
	UPROPERTY(EditAnywhere, Category = "Material") float PenetrationDepthMultiplier = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float PenetrationNormalization = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float PenetrationNormalizationGrazing = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float PenetrationEntryAngleSpread = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float PenetrationExitAngleSpread = 0.0;
	UPROPERTY(EditAnywhere, Category = "Material") bool NeverRicochet;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetProbabilityMultiplier = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetRestitution = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetRestitutionInfluence = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetFriction = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetFrictionInfluence = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Material") float RicochetSpread = 0.0f;
};

UCLASS(BlueprintType)
class UEBMaterialResponseMap : public UDataAsset{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Responses") TMap<UPhysicalMaterial*, FEBMaterialResponseMapEntry> Map;
};