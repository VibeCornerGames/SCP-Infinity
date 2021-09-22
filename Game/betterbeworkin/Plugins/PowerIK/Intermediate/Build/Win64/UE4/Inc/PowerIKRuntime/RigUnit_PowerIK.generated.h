// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POWERIKRUNTIME_RigUnit_PowerIK_generated_h
#error "RigUnit_PowerIK.generated.h already included, missing '#pragma once' in RigUnit_PowerIK.h"
#endif
#define POWERIKRUNTIME_RigUnit_PowerIK_generated_h


#define FRigUnit_PowerIK_Execute() \
	void FRigUnit_PowerIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const FRigVMFixedArray<FPowerIKEffector>& Effectors, \
		const FRigVMFixedArray<FPowerIKBoneBendDirection>& BendDirections, \
		const FRigVMFixedArray<FPowerIKExcludedBone>& ExcludedBones, \
		const FRigVMFixedArray<FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics; \
	POWERIKRUNTIME_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const FRigVMFixedArray<FPowerIKEffector>& Effectors, \
		const FRigVMFixedArray<FPowerIKBoneBendDirection>& BendDirections, \
		const FRigVMFixedArray<FPowerIKExcludedBone>& ExcludedBones, \
		const FRigVMFixedArray<FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& CharacterRoot = *(FName*)RigVMMemoryHandles[0].GetData(); \
		const float RootRotationMultiplier = *(float*)RigVMMemoryHandles[1].GetData(); \
		FRigVMFixedArray<FPowerIKEffector> Effectors((FPowerIKEffector*)RigVMMemoryHandles[2].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[3].GetData())); \
		FRigVMFixedArray<FPowerIKBoneBendDirection> BendDirections((FPowerIKBoneBendDirection*)RigVMMemoryHandles[4].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[5].GetData())); \
		FRigVMFixedArray<FPowerIKExcludedBone> ExcludedBones((FPowerIKExcludedBone*)RigVMMemoryHandles[6].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[7].GetData())); \
		FRigVMFixedArray<FPowerIKBoneLimit> JointLimits((FPowerIKBoneLimit*)RigVMMemoryHandles[8].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[9].GetData())); \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint = *(FPowerIKCenterOfGravity*)RigVMMemoryHandles[10].GetData(); \
		const FPowerIKBodyInertia& Inertia = *(FPowerIKBodyInertia*)RigVMMemoryHandles[11].GetData(); \
		const int32 MaxSquashIterations = *(int32*)RigVMMemoryHandles[12].GetData(); \
		const int32 MaxStretchIterations = *(int32*)RigVMMemoryHandles[13].GetData(); \
		const int32 MaxFinalIterations = *(int32*)RigVMMemoryHandles[14].GetData(); \
		const bool AllowBoneTranslation = *(bool*)RigVMMemoryHandles[15].GetData(); \
		const float SolverAlpha = *(float*)RigVMMemoryHandles[16].GetData(); \
		FRigVMDynamicArray<FPowerIKCore> Core_17_Array(*((FRigVMByteArray*)RigVMMemoryHandles[17].GetData(0, false))); \
		Core_17_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FPowerIKCore& Core = Core_17_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[18].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			CharacterRoot, \
			RootRotationMultiplier, \
			Effectors, \
			BendDirections, \
			ExcludedBones, \
			JointLimits, \
			CenterOfGravityConstraint, \
			Inertia, \
			MaxSquashIterations, \
			MaxStretchIterations, \
			MaxFinalIterations, \
			AllowBoneTranslation, \
			SolverAlpha, \
			Core, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<struct FRigUnit_PowerIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
