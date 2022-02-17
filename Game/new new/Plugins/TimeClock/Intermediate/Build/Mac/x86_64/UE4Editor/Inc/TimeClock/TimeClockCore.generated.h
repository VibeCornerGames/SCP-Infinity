// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimeClockData;
#ifdef TIMECLOCK_TimeClockCore_generated_h
#error "TimeClockCore.generated.h already included, missing '#pragma once' in TimeClockCore.h"
#endif
#define TIMECLOCK_TimeClockCore_generated_h

#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeClockData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TIMECLOCK_API UScriptStruct* StaticStruct<struct FTimeClockData>();

#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_SPARSE_DATA
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportDataToCSV); \
	DECLARE_FUNCTION(execGetAllSavedProjectData); \
	DECLARE_FUNCTION(execGetSavedDataForProject); \
	DECLARE_FUNCTION(execDeleteSavedProjectData); \
	DECLARE_FUNCTION(execSaveProjectData); \
	DECLARE_FUNCTION(execGetCurrentProjectData); \
	DECLARE_FUNCTION(execSaveCurrentProjectData); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execRefreshWorkTime);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportDataToCSV); \
	DECLARE_FUNCTION(execGetAllSavedProjectData); \
	DECLARE_FUNCTION(execGetSavedDataForProject); \
	DECLARE_FUNCTION(execDeleteSavedProjectData); \
	DECLARE_FUNCTION(execSaveProjectData); \
	DECLARE_FUNCTION(execGetCurrentProjectData); \
	DECLARE_FUNCTION(execSaveCurrentProjectData); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execRefreshWorkTime);


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeClockCore(); \
	friend struct Z_Construct_UClass_UTimeClockCore_Statics; \
public: \
	DECLARE_CLASS(UTimeClockCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockCore)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUTimeClockCore(); \
	friend struct Z_Construct_UClass_UTimeClockCore_Statics; \
public: \
	DECLARE_CLASS(UTimeClockCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeClock"), NO_API) \
	DECLARE_SERIALIZER(UTimeClockCore)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeClockCore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeClockCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockCore(UTimeClockCore&&); \
	NO_API UTimeClockCore(const UTimeClockCore&); \
public:


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeClockCore(UTimeClockCore&&); \
	NO_API UTimeClockCore(const UTimeClockCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeClockCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeClockCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimeClockCore)


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_58_PROLOG
#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_RPC_WRAPPERS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_INCLASS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_SPARSE_DATA \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMECLOCK_API UClass* StaticClass<class UTimeClockCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TimeClock_Source_TimeClock_Public_TimeClockCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
