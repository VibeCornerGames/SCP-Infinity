// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSManager() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSManager_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
// End Cross Module References
	void AUIWSManager::StaticRegisterNativesAUIWSManager()
	{
	}
	UClass* Z_Construct_UClass_AUIWSManager_NoRegister()
	{
		return AUIWSManager::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLightInfo_MetaData[];
#endif
		static void NewProp_UpdateLightInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateLightInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawnGlobalPostProcess_MetaData[];
#endif
		static void NewProp_bShouldSpawnGlobalPostProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawnGlobalPostProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousLightUpdate_MetaData[];
#endif
		static void NewProp_ContinuousLightUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContinuousLightUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterSimOnPawn_MetaData[];
#endif
		static void NewProp_CenterSimOnPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CenterSimOnPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomCollisionProfile_MetaData[];
#endif
		static void NewProp_bCustomCollisionProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindTurbulence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindTurbulence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CausticBrightnessMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CausticBrightnessMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_UIWSWaterBodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC_UIWSWaterBodies;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ManagedWaterBodies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagedWaterBodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManagedWaterBodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPriorityBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPriorityBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPriorityBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastPriorityBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// One of these per level.  If using level streaming, only one manager in the persistent level is required.  Non needed in sublevels.\n" },
		{ "HideCategories", "Rendering Input Actor Cooking" },
		{ "IncludePath", "UIWSManager.h" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "One of these per level.  If using level streaming, only one manager in the persistent level is required.  Non needed in sublevels." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData[] = {
		{ "Category", "UIWS: Update" },
		{ "Comment", "/** Enable to update light info for the current level.  Just for ease of us in the editor*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Enable to update light info for the current level.  Just for ease of us in the editor" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->UpdateLightInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo = { "UpdateLightInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck this uproperty*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck this uproperty" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->bShouldSpawnGlobalPostProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess = { "bShouldSpawnGlobalPostProcess", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Enable to allow caustic strength and direction to be updated in real-time in game.  Useful if you update your directional light as part of a time of day system*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Enable to allow caustic strength and direction to be updated in real-time in game.  Useful if you update your directional light as part of a time of day system" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->ContinuousLightUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate = { "ContinuousLightUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** If true, water sim will center on pawn.  If disabled sim will center on camera.  If pawn is invalid (ie dead or not a APawn) sim centers on camera */" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "If true, water sim will center on pawn.  If disabled sim will center on camera.  If pawn is invalid (ie dead or not a APawn) sim centers on camera" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->CenterSimOnPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn = { "CenterSimOnPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Set to true to assign your own collision preset for all water bodies*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Set to true to assign your own collision preset for all water bodies" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->bCustomCollisionProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile = { "bCustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Custom collision preset */" },
		{ "EditCondition", "bCustomCollisionProfile" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Custom collision preset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile = { "CustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, CustomCollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData[] = {
		{ "Category", "UIWS: Water Params" },
		{ "Comment", "/** Adjusts water ripple panner for wind speed*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Adjusts water ripple panner for wind speed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector = { "WindVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, WindVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData[] = {
		{ "Category", "UIWS: Water Params" },
		{ "Comment", "/** Adjusts water ripple motion chaos for wind turbulence*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Adjusts water ripple motion chaos for wind turbulence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence = { "WindTurbulence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, WindTurbulence), METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData[] = {
		{ "Category", "UIWS: Tweaks" },
		{ "Comment", "/** Brightness multiplier applied to caustics.  Set this per level if you need specific overrides*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Brightness multiplier applied to caustics.  Set this per level if you need specific overrides" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult = { "CausticBrightnessMult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, CausticBrightnessMult), METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies = { "MPC_UIWSWaterBodies", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, MPC_UIWSWaterBodies), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_Inner = { "ManagedWaterBodies", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies = { "ManagedWaterBodies", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, ManagedWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData[] = {
		{ "Category", "UIWS" },
		{ "Comment", "/** This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck SpawnPostProcess uproperty on this actor*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck SpawnPostProcess uproperty on this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp = { "PostProcessComp", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, PostProcessComp), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody = { "CurrentPriorityBody", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, CurrentPriorityBody), Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody = { "LastPriorityBody", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSManager, LastPriorityBody), Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIWSManager_Statics::ClassParams = {
		&AUIWSManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIWSManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIWSManager, 259151866);
	template<> UIWS_API UClass* StaticClass<AUIWSManager>()
	{
		return AUIWSManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIWSManager(Z_Construct_UClass_AUIWSManager, &AUIWSManager::StaticClass, TEXT("/Script/UIWS"), TEXT("AUIWSManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
