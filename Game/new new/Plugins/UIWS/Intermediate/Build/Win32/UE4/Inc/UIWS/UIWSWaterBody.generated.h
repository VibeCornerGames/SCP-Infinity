// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UIWS_UIWSWaterBody_generated_h
#error "UIWSWaterBody.generated.h already included, missing '#pragma once' in UIWSWaterBody.h"
#endif
#define UIWS_UIWSWaterBody_generated_h

#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_EVENT_PARMS \
	struct UIWSWaterBody_eventForceAppliedAtLocation_Parms \
	{ \
		FVector RippleLoc; \
		float Strength; \
	}; \
	struct UIWSWaterBody_eventOnPointDamageEffect_Parms \
	{ \
		FVector RippleLocation; \
		float RippleStrengthScaled; \
		float RippleSizeScaled; \
		float DamageAmount; \
	}; \
	struct UIWSWaterBody_eventOnRadialDamageEffect_Parms \
	{ \
		FVector RippleLocation; \
		float RippleStrengthScaled; \
		float RippleSizeScaled; \
		float DamageAmount; \
	}; \
	struct UIWSWaterBody_eventSplashedAtLocation_Parms \
	{ \
		FVector SplashLoc; \
		FVector SplashVelocity; \
		float Strength; \
	};


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIWSWaterBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public:


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIWSWaterBody)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(AUIWSWaterBody, BoxComp); } \
	FORCEINLINE static uint32 __PPO__myCaptureActor() { return STRUCT_OFFSET(AUIWSWaterBody, myCaptureActor); } \
	FORCEINLINE static uint32 __PPO__XMeshes() { return STRUCT_OFFSET(AUIWSWaterBody, XMeshes); } \
	FORCEINLINE static uint32 __PPO__YMeshes() { return STRUCT_OFFSET(AUIWSWaterBody, YMeshes); } \
	FORCEINLINE static uint32 __PPO__CurrentYArray() { return STRUCT_OFFSET(AUIWSWaterBody, CurrentYArray); } \
	FORCEINLINE static uint32 __PPO__WaterSurfaceMeshes() { return STRUCT_OFFSET(AUIWSWaterBody, WaterSurfaceMeshes); } \
	FORCEINLINE static uint32 __PPO__WaterMeshComp() { return STRUCT_OFFSET(AUIWSWaterBody, WaterMeshComp); } \
	FORCEINLINE static uint32 __PPO__hellmats() { return STRUCT_OFFSET(AUIWSWaterBody, hellmats); } \
	FORCEINLINE static uint32 __PPO__activeheight0() { return STRUCT_OFFSET(AUIWSWaterBody, activeheight0); } \
	FORCEINLINE static uint32 __PPO__activeheight1() { return STRUCT_OFFSET(AUIWSWaterBody, activeheight1); } \
	FORCEINLINE static uint32 __PPO__activeheight2() { return STRUCT_OFFSET(AUIWSWaterBody, activeheight2); } \
	FORCEINLINE static uint32 __PPO__activenormal() { return STRUCT_OFFSET(AUIWSWaterBody, activenormal); } \
	FORCEINLINE static uint32 __PPO__localheight0() { return STRUCT_OFFSET(AUIWSWaterBody, localheight0); } \
	FORCEINLINE static uint32 __PPO__localheight1() { return STRUCT_OFFSET(AUIWSWaterBody, localheight1); } \
	FORCEINLINE static uint32 __PPO__localheight2() { return STRUCT_OFFSET(AUIWSWaterBody, localheight2); } \
	FORCEINLINE static uint32 __PPO__localnormal() { return STRUCT_OFFSET(AUIWSWaterBody, localnormal); } \
	FORCEINLINE static uint32 __PPO__globalheight0() { return STRUCT_OFFSET(AUIWSWaterBody, globalheight0); } \
	FORCEINLINE static uint32 __PPO__globalheight1() { return STRUCT_OFFSET(AUIWSWaterBody, globalheight1); } \
	FORCEINLINE static uint32 __PPO__globalheight2() { return STRUCT_OFFSET(AUIWSWaterBody, globalheight2); } \
	FORCEINLINE static uint32 __PPO__globalnormal() { return STRUCT_OFFSET(AUIWSWaterBody, globalnormal); } \
	FORCEINLINE static uint32 __PPO__myCaptureRT() { return STRUCT_OFFSET(AUIWSWaterBody, myCaptureRT); } \
	FORCEINLINE static uint32 __PPO__ForceSplatMat() { return STRUCT_OFFSET(AUIWSWaterBody, ForceSplatMat); } \
	FORCEINLINE static uint32 __PPO__ManForceSplatMat() { return STRUCT_OFFSET(AUIWSWaterBody, ManForceSplatMat); } \
	FORCEINLINE static uint32 __PPO__HeightSimMat() { return STRUCT_OFFSET(AUIWSWaterBody, HeightSimMat); } \
	FORCEINLINE static uint32 __PPO__ComputeNormalMat() { return STRUCT_OFFSET(AUIWSWaterBody, ComputeNormalMat); } \
	FORCEINLINE static uint32 __PPO__PPUnderWaterMat() { return STRUCT_OFFSET(AUIWSWaterBody, PPUnderWaterMat); } \
	FORCEINLINE static uint32 __PPO__PPUnderWaterMID() { return STRUCT_OFFSET(AUIWSWaterBody, PPUnderWaterMID); } \
	FORCEINLINE static uint32 __PPO__DefaultSplashEffect() { return STRUCT_OFFSET(AUIWSWaterBody, DefaultSplashEffect); } \
	FORCEINLINE static uint32 __PPO__WaterMID() { return STRUCT_OFFSET(AUIWSWaterBody, WaterMID); } \
	FORCEINLINE static uint32 __PPO__WaterMIDLOD1() { return STRUCT_OFFSET(AUIWSWaterBody, WaterMIDLOD1); } \
	FORCEINLINE static uint32 __PPO__WaterMeshSM() { return STRUCT_OFFSET(AUIWSWaterBody, WaterMeshSM); } \
	FORCEINLINE static uint32 __PPO__WaterVolume() { return STRUCT_OFFSET(AUIWSWaterBody, WaterVolume); } \
	FORCEINLINE static uint32 __PPO__HeightSimInst() { return STRUCT_OFFSET(AUIWSWaterBody, HeightSimInst); } \
	FORCEINLINE static uint32 __PPO__ForceSplatInst() { return STRUCT_OFFSET(AUIWSWaterBody, ForceSplatInst); } \
	FORCEINLINE static uint32 __PPO__ManualSplatInst() { return STRUCT_OFFSET(AUIWSWaterBody, ManualSplatInst); } \
	FORCEINLINE static uint32 __PPO__ComputeNormalInst() { return STRUCT_OFFSET(AUIWSWaterBody, ComputeNormalInst); } \
	FORCEINLINE static uint32 __PPO__Canvas() { return STRUCT_OFFSET(AUIWSWaterBody, Canvas); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(AUIWSWaterBody, Size); } \
	FORCEINLINE static uint32 __PPO__Context() { return STRUCT_OFFSET(AUIWSWaterBody, Context); } \
	FORCEINLINE static uint32 __PPO__CanvasMan() { return STRUCT_OFFSET(AUIWSWaterBody, CanvasMan); } \
	FORCEINLINE static uint32 __PPO__SizeMan() { return STRUCT_OFFSET(AUIWSWaterBody, SizeMan); } \
	FORCEINLINE static uint32 __PPO__ContextMan() { return STRUCT_OFFSET(AUIWSWaterBody, ContextMan); }


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_24_PROLOG \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_EVENT_PARMS


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIWS_API UClass* StaticClass<class AUIWSWaterBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
