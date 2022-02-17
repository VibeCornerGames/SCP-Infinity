// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIWS_UIWSCapture_generated_h
#error "UIWSCapture.generated.h already included, missing '#pragma once' in UIWSCapture.h"
#endif
#define UIWS_UIWSCapture_generated_h

#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_SPARSE_DATA
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_RPC_WRAPPERS
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIWSCapture(); \
	friend struct Z_Construct_UClass_AUIWSCapture_Statics; \
public: \
	DECLARE_CLASS(AUIWSCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSCapture)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAUIWSCapture(); \
	friend struct Z_Construct_UClass_AUIWSCapture_Statics; \
public: \
	DECLARE_CLASS(AUIWSCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSCapture)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIWSCapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSCapture(AUIWSCapture&&); \
	NO_API AUIWSCapture(const AUIWSCapture&); \
public:


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSCapture(AUIWSCapture&&); \
	NO_API AUIWSCapture(const AUIWSCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIWSCapture)


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(AUIWSCapture, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__DrawMID() { return STRUCT_OFFSET(AUIWSCapture, DrawMID); } \
	FORCEINLINE static uint32 __PPO__moveoffset() { return STRUCT_OFFSET(AUIWSCapture, moveoffset); } \
	FORCEINLINE static uint32 __PPO__RTPersistent() { return STRUCT_OFFSET(AUIWSCapture, RTPersistent); } \
	FORCEINLINE static uint32 __PPO__RTCapture() { return STRUCT_OFFSET(AUIWSCapture, RTCapture); } \
	FORCEINLINE static uint32 __PPO__MPC_UIWSWaterBodies() { return STRUCT_OFFSET(AUIWSCapture, MPC_UIWSWaterBodies); } \
	FORCEINLINE static uint32 __PPO__DrawToPMat() { return STRUCT_OFFSET(AUIWSCapture, DrawToPMat); } \
	FORCEINLINE static uint32 __PPO__DynamicDrawToPMat() { return STRUCT_OFFSET(AUIWSCapture, DynamicDrawToPMat); } \
	FORCEINLINE static uint32 __PPO__PostProcessComp() { return STRUCT_OFFSET(AUIWSCapture, PostProcessComp); }


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_16_PROLOG
#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_SPARSE_DATA \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_RPC_WRAPPERS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_INCLASS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_SPARSE_DATA \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIWS_API UClass* StaticClass<class AUIWSCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
