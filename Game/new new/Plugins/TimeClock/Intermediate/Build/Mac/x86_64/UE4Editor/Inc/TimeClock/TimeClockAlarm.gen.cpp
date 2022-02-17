// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeClock/Public/TimeClockAlarm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeClockAlarm() {}
// Cross Module References
	TIMECLOCK_API UScriptStruct* Z_Construct_UScriptStruct_FTimeClockAlarmData();
	UPackage* Z_Construct_UPackage__Script_TimeClock();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockAlarm_NoRegister();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockAlarm();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTimeClockAlarmData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TIMECLOCK_API uint32 Get_Z_Construct_UScriptStruct_FTimeClockAlarmData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeClockAlarmData, Z_Construct_UPackage__Script_TimeClock(), TEXT("TimeClockAlarmData"), sizeof(FTimeClockAlarmData), Get_Z_Construct_UScriptStruct_FTimeClockAlarmData_Hash());
	}
	return Singleton;
}
template<> TIMECLOCK_API UScriptStruct* StaticStruct<FTimeClockAlarmData>()
{
	return FTimeClockAlarmData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeClockAlarmData(FTimeClockAlarmData::StaticStruct, TEXT("/Script/TimeClock"), TEXT("TimeClockAlarmData"), false, nullptr, nullptr);
static struct FScriptStruct_TimeClock_StaticRegisterNativesFTimeClockAlarmData
{
	FScriptStruct_TimeClock_StaticRegisterNativesFTimeClockAlarmData()
	{
		UScriptStruct::DeferCppStructOps<FTimeClockAlarmData>(FName(TEXT("TimeClockAlarmData")));
	}
} ScriptStruct_TimeClock_StaticRegisterNativesFTimeClockAlarmData;
	struct Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AlarmText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlarmTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeClockAlarmData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmText_MetaData[] = {
		{ "Category", "Time Clock Alarm" },
		{ "Comment", "// Name of the project these stats were taken from.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Name of the project these stats were taken from." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmText = { "AlarmText", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockAlarmData, AlarmText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmTime_MetaData[] = {
		{ "Category", "Time Clock Alarm" },
		{ "Comment", "// The data at which the stats started being recorded.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "The data at which the stats started being recorded." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmTime = { "AlarmTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockAlarmData, AlarmTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::NewProp_AlarmTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
		nullptr,
		&NewStructOps,
		"TimeClockAlarmData",
		sizeof(FTimeClockAlarmData),
		alignof(FTimeClockAlarmData),
		Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeClockAlarmData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeClockAlarmData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TimeClock();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeClockAlarmData"), sizeof(FTimeClockAlarmData), Get_Z_Construct_UScriptStruct_FTimeClockAlarmData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeClockAlarmData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeClockAlarmData_Hash() { return 84034499U; }
	DEFINE_FUNCTION(UTimeClockAlarm::execGetAllAlarms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimeClockAlarmData>*)Z_Param__Result=P_THIS->GetAllAlarms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execRemoveAlarm)
	{
		P_GET_STRUCT(FTimeClockAlarmData,Z_Param_Alarm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAlarm(Z_Param_Alarm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execAddAlarm)
	{
		P_GET_STRUCT(FTimeClockAlarmData,Z_Param_Alarm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAlarm(Z_Param_Alarm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execTriggerAlarm)
	{
		P_GET_STRUCT(FTimeClockAlarmData,Z_Param_Alarm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAlarm(Z_Param_Alarm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execTimeClockAlarmTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimeClockAlarmTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execStartAlarmTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAlarmTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockAlarm::execInitialiseTimeClockAlarm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialiseTimeClockAlarm();
		P_NATIVE_END;
	}
	void UTimeClockAlarm::StaticRegisterNativesUTimeClockAlarm()
	{
		UClass* Class = UTimeClockAlarm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAlarm", &UTimeClockAlarm::execAddAlarm },
			{ "GetAllAlarms", &UTimeClockAlarm::execGetAllAlarms },
			{ "InitialiseTimeClockAlarm", &UTimeClockAlarm::execInitialiseTimeClockAlarm },
			{ "RemoveAlarm", &UTimeClockAlarm::execRemoveAlarm },
			{ "StartAlarmTimer", &UTimeClockAlarm::execStartAlarmTimer },
			{ "TimeClockAlarmTick", &UTimeClockAlarm::execTimeClockAlarmTick },
			{ "TriggerAlarm", &UTimeClockAlarm::execTriggerAlarm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics
	{
		struct TimeClockAlarm_eventAddAlarm_Parms
		{
			FTimeClockAlarmData Alarm;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::NewProp_Alarm = { "Alarm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockAlarm_eventAddAlarm_Parms, Alarm), Z_Construct_UScriptStruct_FTimeClockAlarmData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::NewProp_Alarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock Alarm" },
		{ "Comment", "// Adds and saves a new alarm.\n" },
		{ "Keywords", "Time Clock Alarm" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Adds and saves a new alarm." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "AddAlarm", nullptr, nullptr, sizeof(TimeClockAlarm_eventAddAlarm_Parms), Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_AddAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_AddAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics
	{
		struct TimeClockAlarm_eventGetAllAlarms_Parms
		{
			TArray<FTimeClockAlarmData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeClockAlarmData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockAlarm_eventGetAllAlarms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock Alarm" },
		{ "Comment", "// Returns all saved alarms.\n" },
		{ "Keywords", "Time Clock Alarm" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Returns all saved alarms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "GetAllAlarms", nullptr, nullptr, sizeof(TimeClockAlarm_eventGetAllAlarms_Parms), Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Prepares the alarm object, and ensures the timer starts when the editor has loaded.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Prepares the alarm object, and ensures the timer starts when the editor has loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "InitialiseTimeClockAlarm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics
	{
		struct TimeClockAlarm_eventRemoveAlarm_Parms
		{
			FTimeClockAlarmData Alarm;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::NewProp_Alarm = { "Alarm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockAlarm_eventRemoveAlarm_Parms, Alarm), Z_Construct_UScriptStruct_FTimeClockAlarmData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::NewProp_Alarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock Alarm" },
		{ "Comment", "// Removes and saves an alarm if it exists.\n" },
		{ "Keywords", "Time Clock Alarm" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Removes and saves an alarm if it exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "RemoveAlarm", nullptr, nullptr, sizeof(TimeClockAlarm_eventRemoveAlarm_Parms), Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Starts the timer which regularly checks for any alarms to trigger.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Starts the timer which regularly checks for any alarms to trigger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "StartAlarmTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The function called to chekc for any alarms to trigger.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "The function called to chekc for any alarms to trigger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "TimeClockAlarmTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics
	{
		struct TimeClockAlarm_eventTriggerAlarm_Parms
		{
			FTimeClockAlarmData Alarm;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::NewProp_Alarm = { "Alarm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockAlarm_eventTriggerAlarm_Parms, Alarm), Z_Construct_UScriptStruct_FTimeClockAlarmData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::NewProp_Alarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Triggers the alarm notification from FTimeClockAlarmData struct.\n" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
		{ "ToolTip", "Triggers the alarm notification from FTimeClockAlarmData struct." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockAlarm, nullptr, "TriggerAlarm", nullptr, nullptr, sizeof(TimeClockAlarm_eventTriggerAlarm_Parms), Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeClockAlarm_NoRegister()
	{
		return UTimeClockAlarm::StaticClass();
	}
	struct Z_Construct_UClass_UTimeClockAlarm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeClockAlarm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeClockAlarm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeClockAlarm_AddAlarm, "AddAlarm" }, // 1464769125
		{ &Z_Construct_UFunction_UTimeClockAlarm_GetAllAlarms, "GetAllAlarms" }, // 1588639078
		{ &Z_Construct_UFunction_UTimeClockAlarm_InitialiseTimeClockAlarm, "InitialiseTimeClockAlarm" }, // 1189970641
		{ &Z_Construct_UFunction_UTimeClockAlarm_RemoveAlarm, "RemoveAlarm" }, // 3617915837
		{ &Z_Construct_UFunction_UTimeClockAlarm_StartAlarmTimer, "StartAlarmTimer" }, // 897153475
		{ &Z_Construct_UFunction_UTimeClockAlarm_TimeClockAlarmTick, "TimeClockAlarmTick" }, // 2780872816
		{ &Z_Construct_UFunction_UTimeClockAlarm_TriggerAlarm, "TriggerAlarm" }, // 795434975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockAlarm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TimeClockAlarm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TimeClockAlarm.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeClockAlarm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeClockAlarm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeClockAlarm_Statics::ClassParams = {
		&UTimeClockAlarm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeClockAlarm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockAlarm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeClockAlarm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeClockAlarm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeClockAlarm, 2897267537);
	template<> TIMECLOCK_API UClass* StaticClass<UTimeClockAlarm>()
	{
		return UTimeClockAlarm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeClockAlarm(Z_Construct_UClass_UTimeClockAlarm, &UTimeClockAlarm::StaticClass, TEXT("/Script/TimeClock"), TEXT("UTimeClockAlarm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeClockAlarm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
