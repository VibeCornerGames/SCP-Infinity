// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/AnimNode_PowerIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PowerIK() {}
// Cross Module References
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PowerIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_PowerIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_PowerIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POWERIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PowerIK, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("AnimNode_PowerIK"), sizeof(FAnimNode_PowerIK), Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Hash());
	}
	return Singleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PowerIK>()
{
	return FAnimNode_PowerIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PowerIK(FAnimNode_PowerIK::StaticStruct, TEXT("/Script/PowerIKRuntime"), TEXT("AnimNode_PowerIK"), false, nullptr, nullptr);
static struct FScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK
{
	FScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PowerIK")),new UScriptStruct::TCppStructOps<FAnimNode_PowerIK>);
	}
} ScriptStruct_PowerIKRuntime_StaticRegisterNativesFAnimNode_PowerIK;
	struct Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInertia_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInertia;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothingMaxSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothingMaxSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothingMaxDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothingMaxDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOfGravityConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterOfGravityConstraint;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PowerIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, CharacterRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CharacterRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CharacterRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, RootRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BodyInertia_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Apply inertial damping to Character Root bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Apply inertial damping to Character Root bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BodyInertia = { "BodyInertia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, BodyInertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BodyInertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BodyInertia_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "List of excluded bones." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKEffector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Category", "Effectors" },
		{ "Comment", "/** List of effectors to pull the rig. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "List of effectors to pull the rig." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxSpeedMultiplier_MetaData[] = {
		{ "Category", "Effectors" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Global multiplier applied to maximum speed effectors can react to input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Global multiplier applied to maximum speed effectors can react to input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxSpeedMultiplier = { "SmoothingMaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, SmoothingMaxSpeedMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxDistanceMultiplier_MetaData[] = {
		{ "Category", "Effectors" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Global multiplier applied to maximum speed effectors can react to input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Global multiplier applied to maximum speed effectors can react to input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxDistanceMultiplier = { "SmoothingMaxDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, SmoothingMaxDistanceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** Center of Gravity Constraint, applied to Character Root bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Center of Gravity Constraint, applied to Character Root bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CenterOfGravityConstraint = { "CenterOfGravityConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, CenterOfGravityConstraint), Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
		{ "UIMax", "80" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, MaxSquashIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
		{ "UIMax", "80" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, MaxStretchIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of iterations to cleanup final pose. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Number of iterations to cleanup final pose." },
		{ "UIMax", "80" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, MaxFinalIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
	{
		((FAnimNode_PowerIK*)Obj)->AllowBoneTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_PowerIK), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, SolverAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SolverAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SolverAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_DebugDrawSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Adjust size of debug gizmos. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK.h" },
		{ "ToolTip", "Adjust size of debug gizmos." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_DebugDrawSize = { "DebugDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK, DebugDrawSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_DebugDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_DebugDrawSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CharacterRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_RootRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BodyInertia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_BendDirections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_ExcludedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_JointLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_Effectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SmoothingMaxDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_CenterOfGravityConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxSquashIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxStretchIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_MaxFinalIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_AllowBoneTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_SolverAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::NewProp_DebugDrawSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_PowerIK",
		sizeof(FAnimNode_PowerIK),
		alignof(FAnimNode_PowerIK),
		Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PowerIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PowerIK"), sizeof(FAnimNode_PowerIK), Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PowerIK_Hash() { return 2557698214U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
