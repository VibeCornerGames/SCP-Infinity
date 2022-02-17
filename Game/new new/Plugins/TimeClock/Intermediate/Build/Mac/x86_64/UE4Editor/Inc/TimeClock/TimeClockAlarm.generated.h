// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimeClockAlarmData;
#ifdef TIMECLOCK_TimeClockAlarm_generated_h
#error "TimeClockAlarm.generated.h already included, missing '#pragma once' in TimeClockAlarm.h"
#endif
#define TIMECLOCK_TimeClockAlarm_generated_h

#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TIMECLOCK_API UScriptStruct* StaticStruct<struct FTimeClockAlarmData>();

#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_SPARSE_DATA
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllAlarms); \
	DECLARE_FUNCTION(execRemoveAlarm); \
	DECLARE_FUNCTION(execAddAlarm); \
	DECLARE_FUNCTION(execTriggerAlarm); \
	DECLARE_FUNCTION(execTimeClockAlarmTick); \
	DECLARE_FUNCTION(execStartAlarmTimer); \
	DECLARE_FUNCTION(execInitialiseTimeClockAlarm);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllAlarms); \
	DECLARE_FUNCTION(execRemoveAlarm); \
	DECLARE_FUNCTION(execAddAlarm); \
	DECLARE_FUNCTION(execTriggerAlarm); \
	DECLARE_FUNCTION(execTimeClockAlarmTick); \
	DECLARE_FUNCTION(execStartAlarmTimer); \
	DECLARE_FUNCTION(execInitialiseTimeClockAlarm);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeClockAlarm(); \
	friend struct Z_Construct_UClass_UTimeClockAlarm_Statics; \
public: \
	DECLARE_CLASS(UTimeClockAlarm, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockAlarm)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUTimeClockAlarm(); \
	friend struct Z_Construct_UClass_UTimeClockAlarm_Statics; \
public: \
	DECLARE_CLASS(UTimeClockAlarm, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockAlarm)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeClockAlarm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeClockAlarm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockAlarm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockAlarm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockAlarm(UTimeClockAlarm&&); \
	NO_API UTimeClockAlarm(const UTimeClockAlarm&); \
public:


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockAlarm(UTimeClockAlarm&&); \
	NO_API UTimeClockAlarm(const UTimeClockAlarm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockAlarm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockAlarm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimeClockAlarm)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_39_PROLOG
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_RPC_WRAPPERS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_INCLASS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMECLOCK_API UClass* StaticClass<class UTimeClockAlarm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockAlarm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
