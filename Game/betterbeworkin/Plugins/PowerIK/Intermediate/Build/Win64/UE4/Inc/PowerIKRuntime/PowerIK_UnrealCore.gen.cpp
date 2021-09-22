// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/PowerIK_UnrealCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerIK_UnrealCore() {}
// Cross Module References
	POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
// End Cross Module References
	static UEnum* EEffectorSpaceEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EEffectorSpaceEnum"));
		}
		return Singleton;
	}
	template<> POWERIKRUNTIME_API UEnum* StaticEnum<EEffectorSpaceEnum>()
	{
		return EEffectorSpaceEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectorSpaceEnum(EEffectorSpaceEnum_StaticEnum, TEXT("/Script/PowerIKRuntime"), TEXT("EEffectorSpaceEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Hash() { return 3749918825U; }
	UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectorSpaceEnum"), 0, Get_Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ES_Additive", (int64)ES_Additive },
				{ "ES_World", (int64)ES_World },
				{ "ES_Component", (int64)ES_Component },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ES_Additive.DisplayName", "Relative to Input Pose" },
				{ "ES_Additive.Name", "ES_Additive" },
				{ "ES_Component.DisplayName", "Component Space" },
				{ "ES_Component.Name", "ES_Component" },
				{ "ES_World.DisplayName", "World Space" },
				{ "ES_World.Name", "ES_World" },
				{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
				nullptr,
				"EEffectorSpaceEnum",
				"EEffectorSpaceEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPoleVectorModeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EPoleVectorModeEnum"));
		}
		return Singleton;
	}
	template<> POWERIKRUNTIME_API UEnum* StaticEnum<EPoleVectorModeEnum>()
	{
		return EPoleVectorModeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPoleVectorModeEnum(EPoleVectorModeEnum_StaticEnum, TEXT("/Script/PowerIKRuntime"), TEXT("EPoleVectorModeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Hash() { return 1328740405U; }
	UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPoleVectorModeEnum"), 0, Get_Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PV_None", (int64)PV_None },
				{ "PV_Position", (int64)PV_Position },
				{ "PV_Bone", (int64)PV_Bone },
				{ "PV_AngleOffset", (int64)PV_AngleOffset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
				{ "PV_AngleOffset.DisplayName", "Float Angle Offset" },
				{ "PV_AngleOffset.Name", "PV_AngleOffset" },
				{ "PV_Bone.DisplayName", "Bone" },
				{ "PV_Bone.Name", "PV_Bone" },
				{ "PV_None.DisplayName", "None" },
				{ "PV_None.Name", "PV_None" },
				{ "PV_Position.DisplayName", "Character Space Position" },
				{ "PV_Position.Name", "PV_Position" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
				nullptr,
				"EPoleVectorModeEnum",
				"EPoleVectorModeEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPowerIKCore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKCore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCore, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCore"), sizeof(FPowerIKCore), Get_Z_Construct_UScriptStruct_FPowerIKCore_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKCore>()
{
	return FPowerIKCore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKCore(FPowerIKCore::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKCore"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCore
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKCore")),new UScriptStruct::TCppStructOps<FPowerIKCore>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCore;
	struct Z_Construct_UScriptStruct_FPowerIKCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCore>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKCore",
		sizeof(FPowerIKCore),
		alignof(FPowerIKCore),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKCore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKCore"), sizeof(FPowerIKCore), Get_Z_Construct_UScriptStruct_FPowerIKCore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKCore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKCore_Hash() { return 4127170031U; }
class UScriptStruct* FPowerIKRootData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKRootData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKRootData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKRootData"), sizeof(FPowerIKRootData), Get_Z_Construct_UScriptStruct_FPowerIKRootData_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKRootData>()
{
	return FPowerIKRootData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKRootData(FPowerIKRootData::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKRootData"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKRootData
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKRootData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKRootData")),new UScriptStruct::TCppStructOps<FPowerIKRootData>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKRootData;
	struct Z_Construct_UScriptStruct_FPowerIKRootData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKRootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKRootData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKRootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKRootData",
		sizeof(FPowerIKRootData),
		alignof(FPowerIKRootData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKRootData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKRootData"), sizeof(FPowerIKRootData), Get_Z_Construct_UScriptStruct_FPowerIKRootData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKRootData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKRootData_Hash() { return 2772333786U; }
class UScriptStruct* FPowerIKBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneData"), sizeof(FPowerIKBoneData), Get_Z_Construct_UScriptStruct_FPowerIKBoneData_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneData>()
{
	return FPowerIKBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKBoneData(FPowerIKBoneData::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneData
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKBoneData")),new UScriptStruct::TCppStructOps<FPowerIKBoneData>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneData;
	struct Z_Construct_UScriptStruct_FPowerIKBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneData",
		sizeof(FPowerIKBoneData),
		alignof(FPowerIKBoneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKBoneData"), sizeof(FPowerIKBoneData), Get_Z_Construct_UScriptStruct_FPowerIKBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneData_Hash() { return 3098959099U; }
class UScriptStruct* FPowerIKEffectorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffectorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffectorData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffectorData"), sizeof(FPowerIKEffectorData), Get_Z_Construct_UScriptStruct_FPowerIKEffectorData_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKEffectorData>()
{
	return FPowerIKEffectorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKEffectorData(FPowerIKEffectorData::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKEffectorData"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffectorData
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffectorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKEffectorData")),new UScriptStruct::TCppStructOps<FPowerIKEffectorData>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffectorData;
	struct Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffectorData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKEffectorData",
		sizeof(FPowerIKEffectorData),
		alignof(FPowerIKEffectorData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffectorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKEffectorData"), sizeof(FPowerIKEffectorData), Get_Z_Construct_UScriptStruct_FPowerIKEffectorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffectorData_Hash() { return 902793440U; }
class UScriptStruct* FPowerIKEffector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffector, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffector"), sizeof(FPowerIKEffector), Get_Z_Construct_UScriptStruct_FPowerIKEffector_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKEffector>()
{
	return FPowerIKEffector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKEffector(FPowerIKEffector::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKEffector"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffector
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKEffector")),new UScriptStruct::TCppStructOps<FPowerIKEffector>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKEffector;
	struct Z_Construct_UScriptStruct_FPowerIKEffector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PullWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PullWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizePulling_MetaData[];
#endif
		static void NewProp_NormalizePulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NormalizePulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositivePullFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositivePullFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativePullFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativePullFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateBone_MetaData[];
#endif
		static void NewProp_RotateBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateLimb_MetaData[];
#endif
		static void NewProp_RotateLimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateLimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDeltaSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDeltaSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Smoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectsCenterOfGravity_MetaData[];
#endif
		static void NewProp_AffectsCenterOfGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectsCenterOfGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The bone to affect. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The bone to affect." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Where to move this effector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Where to move this effector." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the position in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the position in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace = { "PositionSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PositionSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Rotation used by RotateBone and RotateLimb. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Rotation used by RotateBone and RotateLimb." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the rotation in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the rotation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, RotationSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much this effector pulls un-affected parts of body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much this effector pulls un-affected parts of body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight = { "PullWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PullWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Use normalized PullWeight values in solver. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use normalized PullWeight values in solver." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->NormalizePulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling = { "NormalizePulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Positive direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Positive direction scale factor for effector weights." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor = { "PositivePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PositivePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Negative direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Negative direction scale factor for effector weights." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor = { "NegativePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, NegativePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the bone it affects? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the bone it affects?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->RotateBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone = { "RotateBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the limb surrounding it? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the limb surrounding it?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->RotateLimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb = { "RotateLimb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed = { "DeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, DeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed = { "AngularDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, AngularDeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** Analytic, simple velocity clamping on effector position, rotation and distance to input.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Analytic, simple velocity clamping on effector position, rotation and distance to input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Smoothing), Z_Construct_UScriptStruct_FPowerIKSmoothing, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Optional, explicit control over the direction of the limb controlled by this effector.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Optional, explicit control over the direction of the limb controlled by this effector." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PoleVector), Z_Construct_UScriptStruct_FPowerIKPoleVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData[] = {
		{ "Category", "COG" },
		{ "Comment", "/** Does this effector pull the center of gravity? (usually only feet). */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector pull the center of gravity? (usually only feet)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->AffectsCenterOfGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity = { "AffectsCenterOfGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Blend" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Blend entire effector on/off */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Blend entire effector on/off" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKEffector",
		sizeof(FPowerIKEffector),
		alignof(FPowerIKEffector),
		Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKEffector"), sizeof(FPowerIKEffector), Get_Z_Construct_UScriptStruct_FPowerIKEffector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKEffector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKEffector_Hash() { return 360321240U; }
class UScriptStruct* FPowerIKBodyInertia::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKBodyInertia_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBodyInertia, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBodyInertia"), sizeof(FPowerIKBodyInertia), Get_Z_Construct_UScriptStruct_FPowerIKBodyInertia_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBodyInertia>()
{
	return FPowerIKBodyInertia::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKBodyInertia(FPowerIKBodyInertia::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKBodyInertia"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBodyInertia
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBodyInertia()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKBodyInertia")),new UScriptStruct::TCppStructOps<FPowerIKBodyInertia>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBodyInertia;
	struct Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyInertiaToBody_MetaData[];
#endif
		static void NewProp_ApplyInertiaToBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyInertiaToBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSpring_MetaData[];
#endif
		static void NewProp_UseSpring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBodyInertia>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Whether to use inertia to smooth root motion. Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Whether to use inertia to smooth root motion. Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit(void* Obj)
	{
		((FPowerIKBodyInertia*)Obj)->ApplyInertiaToBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody = { "ApplyInertiaToBody", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "!UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor = { "SmoothFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SmoothFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Use a spring instead of smooth motion (can overshoot). Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use a spring instead of smooth motion (can overshoot). Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit(void* Obj)
	{
		((FPowerIKBodyInertia*)Obj)->UseSpring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring = { "UseSpring", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Dampen the motion over time. Range is 0-1. Default is 0.2. )*/" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Dampen the motion over time. Range is 0-1. Default is 0.2. )" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBodyInertia",
		sizeof(FPowerIKBodyInertia),
		alignof(FPowerIKBodyInertia),
		Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKBodyInertia_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKBodyInertia"), sizeof(FPowerIKBodyInertia), Get_Z_Construct_UScriptStruct_FPowerIKBodyInertia_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKBodyInertia_Hash() { return 675664879U; }
class UScriptStruct* FPowerIKCenterOfGravity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCenterOfGravity"), sizeof(FPowerIKCenterOfGravity), Get_Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKCenterOfGravity>()
{
	return FPowerIKCenterOfGravity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKCenterOfGravity(FPowerIKCenterOfGravity::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKCenterOfGravity"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCenterOfGravity
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCenterOfGravity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKCenterOfGravity")),new UScriptStruct::TCppStructOps<FPowerIKCenterOfGravity>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKCenterOfGravity;
	struct Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PullBodyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PullBodyAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCenterOfGravity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothly blend effect of this constraint on/off. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Smoothly blend effect of this constraint on/off." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root towards feet in horiz direction. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root towards feet in horiz direction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount = { "HorizAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, HorizAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root downwards when root pulled away from feet. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root downwards when root pulled away from feet." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount = { "VertAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, VertAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull the root with the rest of the body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull the root with the rest of the body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount = { "PullBodyAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, PullBodyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKCenterOfGravity",
		sizeof(FPowerIKCenterOfGravity),
		alignof(FPowerIKCenterOfGravity),
		Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKCenterOfGravity"), sizeof(FPowerIKCenterOfGravity), Get_Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Hash() { return 4243175235U; }
class UScriptStruct* FPowerIKSmoothing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKSmoothing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKSmoothing, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKSmoothing"), sizeof(FPowerIKSmoothing), Get_Z_Construct_UScriptStruct_FPowerIKSmoothing_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKSmoothing>()
{
	return FPowerIKSmoothing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKSmoothing(FPowerIKSmoothing::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKSmoothing"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKSmoothing
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKSmoothing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKSmoothing")),new UScriptStruct::TCppStructOps<FPowerIKSmoothing>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKSmoothing;
	struct Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothPositionOverTime_MetaData[];
#endif
		static void NewProp_SmoothPositionOverTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SmoothPositionOverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPositionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPositionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPositionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPositionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationOverTime_MetaData[];
#endif
		static void NewProp_SmoothRotationOverTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SmoothRotationOverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKSmoothing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit(void* Obj)
	{
		((FPowerIKSmoothing*)Obj)->SmoothPositionOverTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime = { "SmoothPositionOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed effector can react to input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed effector can react to input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed = { "MaxPositionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance effector can be from input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance effector can be from input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance = { "MaxPositionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit(void* Obj)
	{
		((FPowerIKSmoothing*)Obj)->SmoothRotationOverTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime = { "SmoothRotationOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed, in degrees/second, effector can react to input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed, in degrees/second, effector can react to input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed = { "MaxDegreesSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance, in degrees, effector can be from input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance, in degrees, effector can be from input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance = { "MaxDegreesDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKSmoothing",
		sizeof(FPowerIKSmoothing),
		alignof(FPowerIKSmoothing),
		Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKSmoothing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKSmoothing"), sizeof(FPowerIKSmoothing), Get_Z_Construct_UScriptStruct_FPowerIKSmoothing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKSmoothing_Hash() { return 731382343U; }
class UScriptStruct* FPowerIKPoleVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKPoleVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKPoleVector, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKPoleVector"), sizeof(FPowerIKPoleVector), Get_Z_Construct_UScriptStruct_FPowerIKPoleVector_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKPoleVector>()
{
	return FPowerIKPoleVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKPoleVector(FPowerIKPoleVector::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKPoleVector"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKPoleVector
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKPoleVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKPoleVector")),new UScriptStruct::TCppStructOps<FPowerIKPoleVector>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKPoleVector;
	struct Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKPoleVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Type of Pole Vector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Type of Pole Vector." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, Mode), Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, AngleOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKPoleVector",
		sizeof(FPowerIKPoleVector),
		alignof(FPowerIKPoleVector),
		Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKPoleVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKPoleVector"), sizeof(FPowerIKPoleVector), Get_Z_Construct_UScriptStruct_FPowerIKPoleVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKPoleVector_Hash() { return 4105311616U; }
class UScriptStruct* FPowerIKExcludedBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKExcludedBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKExcludedBone, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKExcludedBone"), sizeof(FPowerIKExcludedBone), Get_Z_Construct_UScriptStruct_FPowerIKExcludedBone_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKExcludedBone>()
{
	return FPowerIKExcludedBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKExcludedBone(FPowerIKExcludedBone::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKExcludedBone"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKExcludedBone
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKExcludedBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKExcludedBone")),new UScriptStruct::TCppStructOps<FPowerIKExcludedBone>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKExcludedBone;
	struct Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKExcludedBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKExcludedBone, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKExcludedBone",
		sizeof(FPowerIKExcludedBone),
		alignof(FPowerIKExcludedBone),
		Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKExcludedBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKExcludedBone"), sizeof(FPowerIKExcludedBone), Get_Z_Construct_UScriptStruct_FPowerIKExcludedBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKExcludedBone_Hash() { return 2367807817U; }
class UScriptStruct* FPowerIKBoneBendDirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneBendDirection"), sizeof(FPowerIKBoneBendDirection), Get_Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneBendDirection>()
{
	return FPowerIKBoneBendDirection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKBoneBendDirection(FPowerIKBoneBendDirection::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKBoneBendDirection"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneBendDirection
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneBendDirection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKBoneBendDirection")),new UScriptStruct::TCppStructOps<FPowerIKBoneBendDirection>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneBendDirection;
	struct Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneBendDirection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection = { "BendDirection", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BendDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneBendDirection",
		sizeof(FPowerIKBoneBendDirection),
		alignof(FPowerIKBoneBendDirection),
		Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKBoneBendDirection"), sizeof(FPowerIKBoneBendDirection), Get_Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Hash() { return 2017201265U; }
class UScriptStruct* FPowerIKBoneLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneLimit, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneLimit"), sizeof(FPowerIKBoneLimit), Get_Z_Construct_UScriptStruct_FPowerIKBoneLimit_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneLimit>()
{
	return FPowerIKBoneLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKBoneLimit(FPowerIKBoneLimit::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKBoneLimit"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneLimit
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKBoneLimit")),new UScriptStruct::TCppStructOps<FPowerIKBoneLimit>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKBoneLimit;
	struct Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneLimit, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneLimit, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneLimit",
		sizeof(FPowerIKBoneLimit),
		alignof(FPowerIKBoneLimit),
		Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKBoneLimit"), sizeof(FPowerIKBoneLimit), Get_Z_Construct_UScriptStruct_FPowerIKBoneLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKBoneLimit_Hash() { return 220916815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
