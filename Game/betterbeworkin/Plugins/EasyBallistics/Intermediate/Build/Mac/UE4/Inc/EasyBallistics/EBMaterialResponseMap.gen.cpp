// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyBallistics/Public/EBMaterialResponseMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBMaterialResponseMap() {}
// Cross Module References
	EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType();
	UPackage* Z_Construct_UPackage__Script_EasyBallistics();
	EASYBALLISTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry();
	EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister();
	EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	static UEnum* EPenTraceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyBallistics_EPenTraceType, Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EPenTraceType"));
		}
		return Singleton;
	}
	template<> EASYBALLISTICS_API UEnum* StaticEnum<EPenTraceType>()
	{
		return EPenTraceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPenTraceType(EPenTraceType_StaticEnum, TEXT("/Script/EasyBallistics"), TEXT("EPenTraceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyBallistics_EPenTraceType_Hash() { return 1027678402U; }
	UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyBallistics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPenTraceType"), 0, Get_Z_Construct_UEnum_EasyBallistics_EPenTraceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPenTraceType::PT_BackTrace", (int64)EPenTraceType::PT_BackTrace },
				{ "EPenTraceType::PT_ByComponent", (int64)EPenTraceType::PT_ByComponent },
				{ "EPenTraceType::PT_TwoSidedGeometry", (int64)EPenTraceType::PT_TwoSidedGeometry },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
				{ "PT_BackTrace.DisplayName", "Back Trace" },
				{ "PT_BackTrace.Name", "EPenTraceType::PT_BackTrace" },
				{ "PT_ByComponent.DisplayName", "By Component" },
				{ "PT_ByComponent.Name", "EPenTraceType::PT_ByComponent" },
				{ "PT_TwoSidedGeometry.DisplayName", "Double Sided Geometry" },
				{ "PT_TwoSidedGeometry.Name", "EPenTraceType::PT_TwoSidedGeometry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyBallistics,
				nullptr,
				"EPenTraceType",
				"EPenTraceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEBMaterialResponseMapEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYBALLISTICS_API uint32 Get_Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry, Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EBMaterialResponseMapEntry"), sizeof(FEBMaterialResponseMapEntry), Get_Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Hash());
	}
	return Singleton;
}
template<> EASYBALLISTICS_API UScriptStruct* StaticStruct<FEBMaterialResponseMapEntry>()
{
	return FEBMaterialResponseMapEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEBMaterialResponseMapEntry(FEBMaterialResponseMapEntry::StaticStruct, TEXT("/Script/EasyBallistics"), TEXT("EBMaterialResponseMapEntry"), false, nullptr, nullptr);
static struct FScriptStruct_EasyBallistics_StaticRegisterNativesFEBMaterialResponseMapEntry
{
	FScriptStruct_EasyBallistics_StaticRegisterNativesFEBMaterialResponseMapEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EBMaterialResponseMapEntry")),new UScriptStruct::TCppStructOps<FEBMaterialResponseMapEntry>);
	}
} ScriptStruct_EasyBallistics_StaticRegisterNativesFEBMaterialResponseMapEntry;
	struct Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PenTraceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenTraceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PenTraceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeverPenetrate_MetaData[];
#endif
		static void NewProp_NeverPenetrate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeverPenetrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepthMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepthMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalizationGrazing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalizationGrazing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationEntryAngleSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationEntryAngleSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationExitAngleSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationExitAngleSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeverRicochet_MetaData[];
#endif
		static void NewProp_NeverRicochet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeverRicochet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetProbabilityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetProbabilityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitutionInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitutionInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetFrictionInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetFrictionInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEBMaterialResponseMapEntry>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType = { "PenTraceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenTraceType), Z_Construct_UEnum_EasyBallistics_EPenTraceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_SetBit(void* Obj)
	{
		((FEBMaterialResponseMapEntry*)Obj)->NeverPenetrate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate = { "NeverPenetrate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEBMaterialResponseMapEntry), &Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier = { "PenetrationDepthMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationDepthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization = { "PenetrationNormalization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationNormalization), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing = { "PenetrationNormalizationGrazing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationNormalizationGrazing), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread = { "PenetrationEntryAngleSpread", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationEntryAngleSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread = { "PenetrationExitAngleSpread", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationExitAngleSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_SetBit(void* Obj)
	{
		((FEBMaterialResponseMapEntry*)Obj)->NeverRicochet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet = { "NeverRicochet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEBMaterialResponseMapEntry), &Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier = { "RicochetProbabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetProbabilityMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution = { "RicochetRestitution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetRestitution), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence = { "RicochetRestitutionInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetRestitutionInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction = { "RicochetFriction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence = { "RicochetFrictionInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetFrictionInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread = { "RicochetSpread", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
		nullptr,
		&NewStructOps,
		"EBMaterialResponseMapEntry",
		sizeof(FEBMaterialResponseMapEntry),
		alignof(FEBMaterialResponseMapEntry),
		Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyBallistics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EBMaterialResponseMapEntry"), sizeof(FEBMaterialResponseMapEntry), Get_Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Hash() { return 1585533419U; }
	void UEBMaterialResponseMap::StaticRegisterNativesUEBMaterialResponseMap()
	{
	}
	UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister()
	{
		return UEBMaterialResponseMap::StaticClass();
	}
	struct Z_Construct_UClass_UEBMaterialResponseMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEBMaterialResponseMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEBMaterialResponseMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EBMaterialResponseMap.h" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "Responses" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEBMaterialResponseMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEBMaterialResponseMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEBMaterialResponseMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::ClassParams = {
		&UEBMaterialResponseMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEBMaterialResponseMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEBMaterialResponseMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEBMaterialResponseMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEBMaterialResponseMap, 1321191697);
	template<> EASYBALLISTICS_API UClass* StaticClass<UEBMaterialResponseMap>()
	{
		return UEBMaterialResponseMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEBMaterialResponseMap(Z_Construct_UClass_UEBMaterialResponseMap, &UEBMaterialResponseMap::StaticClass, TEXT("/Script/EasyBallistics"), TEXT("UEBMaterialResponseMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEBMaterialResponseMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
