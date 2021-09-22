// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/AnimNode_PowerIK_Ground.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PowerIK_Ground() {}
// Cross Module References
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundFoot();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundCollision();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundSlope();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PowerIK_Ground>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_PowerIK_Ground cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_PowerIK_Ground::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("AnimNode_PowerIK_Ground"), sizeof(FAnimNode_PowerIK_Ground), Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PowerIK_Ground>()
{
	return FAnimNode_PowerIK_Ground::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PowerIK_Ground(FAnimNode_PowerIK_Ground::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("AnimNode_PowerIK_Ground"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK_Ground
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK_Ground()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PowerIK_Ground")),new UScriptStruct::TCppStructOps<FAnimNode_PowerIK_Ground>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK_Ground;
	struct Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInertia_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInertia;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Feet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Feet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetDeltaSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeetDeltaSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundSlope;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendDirections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendDirections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BendDirections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JointLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSquashIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSquashIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStretchIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStretchIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFinalIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFinalIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowBoneTranslation_MetaData[];
#endif
		static void NewProp_AllowBoneTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowBoneTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugDrawSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PowerIK_Ground>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, CharacterRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Apply inertial damping to character body. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Apply inertial damping to character body." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia = { "BodyInertia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, BodyInertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_Inner = { "Feet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKGroundFoot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** List of feet that are grounded. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "List of feet that are grounded." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, Feet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Rig" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in centimeters per second that feet adjust to changing positions. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed in centimeters per second that feet adjust to changing positions. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed = { "FeetDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, FeetDeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, RootRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Settings for ray-casting to place feet on ground. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Settings for ray-casting to place feet on ground." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision = { "GroundCollision", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, GroundCollision), Z_Construct_UScriptStruct_FPowerIKGroundCollision, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Settings for leaning on slopes and scaling stride lengths. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for leaning on slopes and scaling stride lengths." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope = { "GroundSlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, GroundSlope), Z_Construct_UScriptStruct_FPowerIKGroundSlope, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of excluded bones." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxSquashIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxStretchIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to cleanup final pose. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to cleanup final pose." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxFinalIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
	{
		((FAnimNode_PowerIK_Ground*)Obj)->AllowBoneTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Ground), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, SolverAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Adjust size of debug gizmos. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Adjust size of debug gizmos." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize = { "DebugDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, DebugDrawSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_PowerIK_Ground",
		sizeof(FAnimNode_PowerIK_Ground),
		alignof(FAnimNode_PowerIK_Ground),
		Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PowerIK_Ground"), sizeof(FAnimNode_PowerIK_Ground), Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Hash() { return 2931695216U; }
class UScriptStruct* FPowerIKGroundSlope::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundSlope_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundSlope, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundSlope"), sizeof(FPowerIKGroundSlope), Get_Z_Construct_UScriptStruct_FPowerIKGroundSlope_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKGroundSlope>()
{
	return FPowerIKGroundSlope::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKGroundSlope(FPowerIKGroundSlope::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKGroundSlope"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundSlope
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundSlope()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKGroundSlope")),new UScriptStruct::TCppStructOps<FPowerIKGroundSlope>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundSlope;
	struct Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrideDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrideDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGroundAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGroundAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNormalAngularSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNormalAngularSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientToGround_MetaData[];
#endif
		static void NewProp_OrientToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OrientToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientToPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientToPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientToRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientToRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleStride_MetaData[];
#endif
		static void NewProp_ScaleStride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleStride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UphillStrideScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UphillStrideScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownhillStrideScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownhillStrideScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillStrideScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillStrideScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillPushOuterFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillPushOuterFeet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static void NewProp_Lean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UphillLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UphillLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownhillLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownhillLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterLean_MetaData[];
#endif
		static void NewProp_CounterLean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CounterLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterLeanBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CounterLeanBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UphillCounterLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UphillCounterLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownhillCounterLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownhillCounterLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillCounterLean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillCounterLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRoot_MetaData[];
#endif
		static void NewProp_MoveRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MoveRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UphillVertOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UphillVertOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UphillHorizOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UphillHorizOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownhillVertOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownhillVertOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownhillHorizOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownhillHorizOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillHorizOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillHorizOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidehillVertOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidehillVertOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateFootToGround_MetaData[];
#endif
		static void NewProp_RotateFootToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateFootToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchFootAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchFootAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollFootAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollFootAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootAngleDeltaSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootAngleDeltaSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFeetPositions_MetaData[];
#endif
		static void NewProp_OffsetFeetPositions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OffsetFeetPositions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFootOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundSlope>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Normalized vector that describes the direction of travel. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Normalized vector that describes the direction of travel." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection = { "StrideDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, StrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle relative to gravity vector to apply leaning and stride scaling. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum angle relative to gravity vector to apply leaning and stride scaling." },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle = { "MaxGroundAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, MaxGroundAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum speed, in degrees/second, that body angle will adjust to changing slopes. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum speed, in degrees/second, that body angle will adjust to changing slopes." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed = { "MaxNormalAngularSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, MaxNormalAngularSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_MetaData[] = {
		{ "Category", "Strude" },
		{ "Comment", "/** If true, entire skeleton is rotated to align to the ground. Useful for quadrupeds.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, entire skeleton is rotated to align to the ground. Useful for quadrupeds." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->OrientToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround = { "OrientToGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Orient entire skeleton to the PITCH direction of ground angle. Range is -1 to 1. Default 0.9. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Orient entire skeleton to the PITCH direction of ground angle. Range is -1 to 1. Default 0.9." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch = { "OrientToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, OrientToPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Orient entire skeleton to the ROLL direction of ground angle. Range is -1 to 1. Default 0.1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Orient entire skeleton to the ROLL direction of ground angle. Range is -1 to 1. Default 0.1." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll = { "OrientToRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, OrientToRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_MetaData[] = {
		{ "Category", "Strude" },
		{ "Comment", "/** If true, stride of IsGrounded effectors will be scaled in Stride Direction. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, stride of IsGrounded effectors will be scaled in Stride Direction." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->ScaleStride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride = { "ScaleStride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when going uphill. Range is 0-1. Default 0.4.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when going uphill. Range is 0-1. Default 0.4." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale = { "UphillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillStrideScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when going downhill. Range is 0-1. Default 0.2.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when going downhill. Range is 0-1. Default 0.2." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale = { "DownhillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillStrideScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when on a side-hill. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when on a side-hill. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale = { "SidehillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillStrideScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet_MetaData[] = {
		{ "Category", "Stride" },
		{ "Comment", "/** Percentage (in centimeters) to push feet outwards on sidehills. Default is 20cm.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage (in centimeters) to push feet outwards on sidehills. Default is 20cm." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet = { "SidehillPushOuterFeet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillPushOuterFeet), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_MetaData[] = {
		{ "Category", "Lean" },
		{ "Comment", "/** If True, character root bone is rotated in opposite direction of ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, character root bone is rotated in opposite direction of ground normal." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->Lean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean forward when going uphill. Range is 0-1. Default 0.3.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean forward when going uphill. Range is 0-1. Default 0.3." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean = { "UphillLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean backward when going downhill. Range is 0-1. Default 0.5.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean backward when going downhill. Range is 0-1. Default 0.5." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean = { "DownhillLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean sideways into side-hills. Range is 0-1. Default 0.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean sideways into side-hills. Range is 0-1. Default 0.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean = { "SidehillLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "Comment", "/** If True, will counter lean CounterLeanBone. Usually this is the head. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, will counter lean CounterLeanBone. Usually this is the head." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->CounterLean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean = { "CounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName_MetaData[] = {
		{ "Category", "LeCounterLeanan" },
		{ "Comment", "/** Name of base of counter lean bone. Usually this is the base Head bone.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Name of base of counter lean bone. Usually this is the base Head bone." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName = { "CounterLeanBoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, CounterLeanBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean backward when going uphill. Range is 0-1. Default 0.8.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean backward when going uphill. Range is 0-1. Default 0.8." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean = { "UphillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillCounterLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean backward when going downhill. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean backward when going downhill. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean = { "DownhillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillCounterLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean sideways into side-hills. Range is 0-1. Default 0.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean sideways into side-hills. Range is 0-1. Default 0.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean = { "SidehillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillCounterLean), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** If True, character root bone position is gradually pushed vertically and horizontally. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, character root bone position is gradually pushed vertically and horizontally." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->MoveRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot = { "MoveRoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when going UP hill. Default is 10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when going UP hill. Default is 10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset = { "UphillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillVertOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when going UP hill. Default is -20.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when going UP hill. Default is -20.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset = { "UphillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillHorizOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when going DOWN hill. Default is 10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when going DOWN hill. Default is 10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset = { "DownhillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillVertOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when going DOWN hill. Default is 20.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when going DOWN hill. Default is 20.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset = { "DownhillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillHorizOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when on a SIDE hill. Default is -10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when on a SIDE hill. Default is -10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset = { "SidehillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillHorizOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when on a SIDE hill. Default is -10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when on a SIDE hill. Default is -10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset = { "SidehillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillVertOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "Comment", "/** If True, feet are oriented to ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, feet are oriented to ground normal." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->RotateFootToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround = { "RotateFootToGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to pitch foot to orient to up/down hills. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to pitch foot to orient to up/down hills. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount = { "PitchFootAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, PitchFootAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to roll foot to orient to sidehills. Range is 0-1. Default 0.6.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to roll foot to orient to sidehills. Range is 0-1. Default 0.6." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount = { "RollFootAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, RollFootAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Rig" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in degrees per second that feet adjust to changing ground normals. Instant if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed in degrees per second that feet adjust to changing ground normals. Instant if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed = { "FootAngleDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, FootAngleDeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_MetaData[] = {
		{ "Category", "FootOffset" },
		{ "Comment", "/** If True, applies static offset to foot positions along normal direction. Useful for nudging feet into contact with ground. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, applies static offset to foot positions along normal direction. Useful for nudging feet into contact with ground." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_SetBit(void* Obj)
	{
		((FPowerIKGroundSlope*)Obj)->OffsetFeetPositions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions = { "OffsetFeetPositions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset_MetaData[] = {
		{ "Category", "FootOffset" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/** Amount in centimeters to offset the foot in the direction of the foot's ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount in centimeters to offset the foot in the direction of the foot's ground normal." },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset = { "StaticFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundSlope, StaticFootOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKGroundSlope",
		sizeof(FPowerIKGroundSlope),
		alignof(FPowerIKGroundSlope),
		Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundSlope()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundSlope_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKGroundSlope"), sizeof(FPowerIKGroundSlope), Get_Z_Construct_UScriptStruct_FPowerIKGroundSlope_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundSlope_Hash() { return 342040703U; }
class UScriptStruct* FPowerIKGroundCollision::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundCollision_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundCollision, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundCollision"), sizeof(FPowerIKGroundCollision), Get_Z_Construct_UScriptStruct_FPowerIKGroundCollision_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKGroundCollision>()
{
	return FPowerIKGroundCollision::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKGroundCollision(FPowerIKGroundCollision::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKGroundCollision"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundCollision
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundCollision()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKGroundCollision")),new UScriptStruct::TCppStructOps<FPowerIKGroundCollision>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundCollision;
	struct Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[];
#endif
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayCastUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayCastUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayCastDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayCastDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableWallCollision_MetaData[];
#endif
		static void NewProp_EnableWallCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableWallCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundCollision>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** The collision channel used for \"Grounded\" effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "The collision channel used for \"Grounded\" effectors." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundCollision, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Do you want to cast against complex collision geometry (if mesh has it). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Do you want to cast against complex collision geometry (if mesh has it)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((FPowerIKGroundCollision*)Obj)->TraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundCollision), &Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum height to move Grounded effector UPWARDS. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum height to move Grounded effector UPWARDS." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp = { "RayCastUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundCollision, RayCastUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum height to move Grounded effector DOWNWARDS. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum height to move Grounded effector DOWNWARDS." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown = { "RayCastDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundCollision, RayCastDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Will raycast sideways to prevent feet from penetrating walls. Requires twice as many raycasts. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Will raycast sideways to prevent feet from penetrating walls. Requires twice as many raycasts." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_SetBit(void* Obj)
	{
		((FPowerIKGroundCollision*)Obj)->EnableWallCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision = { "EnableWallCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundCollision), &Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Distance to push feet away from walls when they collide with a wall. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Distance to push feet away from walls when they collide with a wall." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset = { "WallOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundCollision, WallOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKGroundCollision",
		sizeof(FPowerIKGroundCollision),
		alignof(FPowerIKGroundCollision),
		Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundCollision()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundCollision_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKGroundCollision"), sizeof(FPowerIKGroundCollision), Get_Z_Construct_UScriptStruct_FPowerIKGroundCollision_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundCollision_Hash() { return 3163275492U; }
class UScriptStruct* FPowerIKGroundFoot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundFoot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundFoot, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundFoot"), sizeof(FPowerIKGroundFoot), Get_Z_Construct_UScriptStruct_FPowerIKGroundFoot_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKGroundFoot>()
{
	return FPowerIKGroundFoot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerIKGroundFoot(FPowerIKGroundFoot::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("PowerIKGroundFoot"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundFoot
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundFoot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerIKGroundFoot")),new UScriptStruct::TCppStructOps<FPowerIKGroundFoot>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFPowerIKGroundFoot;
	struct Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundFoot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Foot" },
		{ "Comment", "/** Name of foot joint. This will be tip of IK effect. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Name of foot joint. This will be tip of IK effect." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundFoot, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much this effector pulls un-affected parts of body. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "How much this effector pulls un-affected parts of body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight = { "PullWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundFoot, PullWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Use normalized PullWeight values in solver. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Use normalized PullWeight values in solver." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_SetBit(void* Obj)
	{
		((FPowerIKGroundFoot*)Obj)->NormalizePulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling = { "NormalizePulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKGroundFoot), &Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Positive direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Positive direction scale factor for effector weights." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor = { "PositivePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundFoot, PositivePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Negative direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Negative direction scale factor for effector weights." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor = { "NegativePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKGroundFoot, NegativePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKGroundFoot",
		sizeof(FPowerIKGroundFoot),
		alignof(FPowerIKGroundFoot),
		Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundFoot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundFoot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerIKGroundFoot"), sizeof(FPowerIKGroundFoot), Get_Z_Construct_UScriptStruct_FPowerIKGroundFoot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerIKGroundFoot_Hash() { return 3505940931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
