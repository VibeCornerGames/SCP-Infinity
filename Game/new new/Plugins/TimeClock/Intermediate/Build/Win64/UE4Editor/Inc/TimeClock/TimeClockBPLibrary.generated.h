// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTimeClockAlarm;
class UTimeClockCore;
#ifdef TIMECLOCK_TimeClockBPLibrary_generated_h
#error "TimeClockBPLibrary.generated.h already included, missing '#pragma once' in TimeClockBPLibrary.h"
#endif
#define TIMECLOCK_TimeClockBPLibrary_generated_h

#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_SPARSE_DATA
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddEditorNotification); \
	DECLARE_FUNCTION(execGetTimeClockAlarmObject); \
	DECLARE_FUNCTION(execGetTimeClockObject);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEditorNotification); \
	DECLARE_FUNCTION(execGetTimeClockAlarmObject); \
	DECLARE_FUNCTION(execGetTimeClockObject);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeClockBPLibrary(); \
	friend struct Z_Construct_UClass_UTimeClockBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeClockBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockBPLibrary)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTimeClockBPLibrary(); \
	friend struct Z_Construct_UClass_UTimeClockBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeClockBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockBPLibrary)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeClockBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeClockBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockBPLibrary(UTimeClockBPLibrary&&); \
	NO_API UTimeClockBPLibrary(const UTimeClockBPLibrary&); \
public:


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeClockBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockBPLibrary(UTimeClockBPLibrary&&); \
	NO_API UTimeClockBPLibrary(const UTimeClockBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeClockBPLibrary)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_15_PROLOG
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_RPC_WRAPPERS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_INCLASS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMECLOCK_API UClass* StaticClass<class UTimeClockBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
