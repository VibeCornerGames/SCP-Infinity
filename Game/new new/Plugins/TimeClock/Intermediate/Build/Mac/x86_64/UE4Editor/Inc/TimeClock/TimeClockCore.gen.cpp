// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeClock/Public/TimeClockCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeClockCore() {}
// Cross Module References
	TIMECLOCK_API UScriptStruct* Z_Construct_UScriptStruct_FTimeClockData();
	UPackage* Z_Construct_UPackage__Script_TimeClock();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockCore_NoRegister();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTimeClockData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TIMECLOCK_API uint32 Get_Z_Construct_UScriptStruct_FTimeClockData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeClockData, Z_Construct_UPackage__Script_TimeClock(), TEXT("TimeClockData"), sizeof(FTimeClockData), Get_Z_Construct_UScriptStruct_FTimeClockData_Hash());
	}
	return Singleton;
}
template<> TIMECLOCK_API UScriptStruct* StaticStruct<FTimeClockData>()
{
	return FTimeClockData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeClockData(FTimeClockData::StaticStruct, TEXT("/Script/TimeClock"), TEXT("TimeClockData"), false, nullptr, nullptr);
static struct FScriptStruct_TimeClock_StaticRegisterNativesFTimeClockData
{
	FScriptStruct_TimeClock_StaticRegisterNativesFTimeClockData()
	{
		UScriptStruct::DeferCppStructOps<FTimeClockData>(FName(TEXT("TimeClockData")));
	}
} ScriptStruct_TimeClock_StaticRegisterNativesFTimeClockData;
	struct Z_Construct_UScriptStruct_FTimeClockData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSaved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSaved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSecondsSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalSecondsSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSavedBeforeToday_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSavedBeforeToday;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentBeforeToday_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SecondsSpentBeforeToday;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeClockData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeClockData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Name of the project these stats were taken from.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Name of the project these stats were taken from." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, ProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// The date at which the stats started being recorded.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "The date at which the stats started being recorded." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSaved_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Last time this project's stats were saved.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Last time this project's stats were saved." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSaved = { "LastSaved", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, LastSaved), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSaved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_TotalSecondsSpent_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// The total second spent with project opened.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "The total second spent with project opened." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_TotalSecondsSpent = { "TotalSecondsSpent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, TotalSecondsSpent), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_TotalSecondsSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_TotalSecondsSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSavedBeforeToday_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Last time this project's stats were saved before today. Only used to calculate time spent today.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Last time this project's stats were saved before today. Only used to calculate time spent today." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSavedBeforeToday = { "LastSavedBeforeToday", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, LastSavedBeforeToday), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSavedBeforeToday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSavedBeforeToday_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_SecondsSpentBeforeToday_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// The total second spent with project opened before today. Only used to calculate time spent today.\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "The total second spent with project opened before today. Only used to calculate time spent today." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_SecondsSpentBeforeToday = { "SecondsSpentBeforeToday", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeClockData, SecondsSpentBeforeToday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_SecondsSpentBeforeToday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_SecondsSpentBeforeToday_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeClockData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSaved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_TotalSecondsSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_LastSavedBeforeToday,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeClockData_Statics::NewProp_SecondsSpentBeforeToday,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeClockData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
		nullptr,
		&NewStructOps,
		"TimeClockData",
		sizeof(FTimeClockData),
		alignof(FTimeClockData),
		Z_Construct_UScriptStruct_FTimeClockData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeClockData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeClockData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeClockData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeClockData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TimeClock();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeClockData"), sizeof(FTimeClockData), Get_Z_Construct_UScriptStruct_FTimeClockData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeClockData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeClockData_Hash() { return 2042894171U; }
	DEFINE_FUNCTION(UTimeClockCore::execExportDataToCSV)
	{
		P_GET_TARRAY(FTimeClockData,Z_Param_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_UBOOL(Z_Param_AsTextFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportDataToCSV(Z_Param_Data,Z_Param_Directory,Z_Param_AsTextFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execGetAllSavedProjectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimeClockData>*)Z_Param__Result=P_THIS->GetAllSavedProjectData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execGetSavedDataForProject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectName);
		P_GET_STRUCT_REF(FTimeClockData,Z_Param_Out_ProjectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSavedDataForProject(Z_Param_ProjectName,Z_Param_Out_ProjectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execDeleteSavedProjectData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSavedProjectData(Z_Param_ProjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execSaveProjectData)
	{
		P_GET_STRUCT(FTimeClockData,Z_Param_TimeClockData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveProjectData(Z_Param_TimeClockData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execGetCurrentProjectData)
	{
		P_GET_STRUCT_REF(FTimeClockData,Z_Param_Out_ProjectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentProjectData(Z_Param_Out_ProjectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execSaveCurrentProjectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveCurrentProjectData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execGetProjectName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProjectName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockCore::execRefreshWorkTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWorkTime();
		P_NATIVE_END;
	}
	void UTimeClockCore::StaticRegisterNativesUTimeClockCore()
	{
		UClass* Class = UTimeClockCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSavedProjectData", &UTimeClockCore::execDeleteSavedProjectData },
			{ "ExportDataToCSV", &UTimeClockCore::execExportDataToCSV },
			{ "GetAllSavedProjectData", &UTimeClockCore::execGetAllSavedProjectData },
			{ "GetCurrentProjectData", &UTimeClockCore::execGetCurrentProjectData },
			{ "GetProjectName", &UTimeClockCore::execGetProjectName },
			{ "GetSavedDataForProject", &UTimeClockCore::execGetSavedDataForProject },
			{ "RefreshWorkTime", &UTimeClockCore::execRefreshWorkTime },
			{ "SaveCurrentProjectData", &UTimeClockCore::execSaveCurrentProjectData },
			{ "SaveProjectData", &UTimeClockCore::execSaveProjectData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics
	{
		struct TimeClockCore_eventDeleteSavedProjectData_Parms
		{
			FString ProjectName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventDeleteSavedProjectData_Parms, ProjectName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventDeleteSavedProjectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventDeleteSavedProjectData_Parms), &Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Deletes the saved data for a project.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Deletes the saved data for a project." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "DeleteSavedProjectData", nullptr, nullptr, sizeof(TimeClockCore_eventDeleteSavedProjectData_Parms), Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics
	{
		struct TimeClockCore_eventExportDataToCSV_Parms
		{
			TArray<FTimeClockData> Data;
			FString Directory;
			bool AsTextFile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static void NewProp_AsTextFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsTextFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeClockData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventExportDataToCSV_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventExportDataToCSV_Parms, Directory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_AsTextFile_SetBit(void* Obj)
	{
		((TimeClockCore_eventExportDataToCSV_Parms*)Obj)->AsTextFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_AsTextFile = { "AsTextFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventExportDataToCSV_Parms), &Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_AsTextFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventExportDataToCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventExportDataToCSV_Parms), &Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_AsTextFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Export the input data in a CSV format.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Export the input data in a CSV format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "ExportDataToCSV", nullptr, nullptr, sizeof(TimeClockCore_eventExportDataToCSV_Parms), Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics
	{
		struct TimeClockCore_eventGetAllSavedProjectData_Parms
		{
			TArray<FTimeClockData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeClockData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventGetAllSavedProjectData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Returns all saved project data.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Returns all saved project data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "GetAllSavedProjectData", nullptr, nullptr, sizeof(TimeClockCore_eventGetAllSavedProjectData_Parms), Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics
	{
		struct TimeClockCore_eventGetCurrentProjectData_Parms
		{
			FTimeClockData ProjectData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ProjectData = { "ProjectData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventGetCurrentProjectData_Parms, ProjectData), Z_Construct_UScriptStruct_FTimeClockData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventGetCurrentProjectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventGetCurrentProjectData_Parms), &Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ProjectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Returns the TimeClock data for the current project.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Returns the TimeClock data for the current project." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "GetCurrentProjectData", nullptr, nullptr, sizeof(TimeClockCore_eventGetCurrentProjectData_Parms), Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics
	{
		struct TimeClockCore_eventGetProjectName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Returns the currently opened project's name.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Returns the currently opened project's name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "GetProjectName", nullptr, nullptr, sizeof(TimeClockCore_eventGetProjectName_Parms), Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_GetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_GetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics
	{
		struct TimeClockCore_eventGetSavedDataForProject_Parms
		{
			FString ProjectName;
			FTimeClockData ProjectData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventGetSavedDataForProject_Parms, ProjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ProjectData = { "ProjectData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventGetSavedDataForProject_Parms, ProjectData), Z_Construct_UScriptStruct_FTimeClockData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventGetSavedDataForProject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventGetSavedDataForProject_Parms), &Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ProjectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Returns the saved data project for the input project name if any.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Returns the saved data project for the input project name if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "GetSavedDataForProject", nullptr, nullptr, sizeof(TimeClockCore_eventGetSavedDataForProject_Parms), Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Manually update the data for the current project. This will update the time spent today. Does not save the updated data (use SaveCurrentProjectData() instead).\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Manually update the data for the current project. This will update the time spent today. Does not save the updated data (use SaveCurrentProjectData() instead)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "RefreshWorkTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics
	{
		struct TimeClockCore_eventSaveCurrentProjectData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventSaveCurrentProjectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventSaveCurrentProjectData_Parms), &Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Save the ActiveTimeClockData.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Save the ActiveTimeClockData." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "SaveCurrentProjectData", nullptr, nullptr, sizeof(TimeClockCore_eventSaveCurrentProjectData_Parms), Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics
	{
		struct TimeClockCore_eventSaveProjectData_Parms
		{
			FTimeClockData TimeClockData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeClockData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_TimeClockData = { "TimeClockData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockCore_eventSaveProjectData_Parms, TimeClockData), Z_Construct_UScriptStruct_FTimeClockData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeClockCore_eventSaveProjectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockCore_eventSaveProjectData_Parms), &Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_TimeClockData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Saves the input TimeClockData (useful to update closed project).\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "Saves the input TimeClockData (useful to update closed project)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockCore, nullptr, "SaveProjectData", nullptr, nullptr, sizeof(TimeClockCore_eventSaveProjectData_Parms), Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockCore_SaveProjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockCore_SaveProjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeClockCore_NoRegister()
	{
		return UTimeClockCore::StaticClass();
	}
	struct Z_Construct_UClass_UTimeClockCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSessionStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSessionStartDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeClockCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeClockCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeClockCore_DeleteSavedProjectData, "DeleteSavedProjectData" }, // 2906820541
		{ &Z_Construct_UFunction_UTimeClockCore_ExportDataToCSV, "ExportDataToCSV" }, // 3354865309
		{ &Z_Construct_UFunction_UTimeClockCore_GetAllSavedProjectData, "GetAllSavedProjectData" }, // 80106546
		{ &Z_Construct_UFunction_UTimeClockCore_GetCurrentProjectData, "GetCurrentProjectData" }, // 2356580640
		{ &Z_Construct_UFunction_UTimeClockCore_GetProjectName, "GetProjectName" }, // 2237272523
		{ &Z_Construct_UFunction_UTimeClockCore_GetSavedDataForProject, "GetSavedDataForProject" }, // 1205167761
		{ &Z_Construct_UFunction_UTimeClockCore_RefreshWorkTime, "RefreshWorkTime" }, // 801828447
		{ &Z_Construct_UFunction_UTimeClockCore_SaveCurrentProjectData, "SaveCurrentProjectData" }, // 449188750
		{ &Z_Construct_UFunction_UTimeClockCore_SaveProjectData, "SaveProjectData" }, // 3931389900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockCore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TimeClockCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockCore_Statics::NewProp_ActiveSessionStartDate_MetaData[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "//The date at which the current session started (date at which the project was opened).\n" },
		{ "ModuleRelativePath", "Public/TimeClockCore.h" },
		{ "ToolTip", "The date at which the current session started (date at which the project was opened)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimeClockCore_Statics::NewProp_ActiveSessionStartDate = { "ActiveSessionStartDate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeClockCore, ActiveSessionStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UTimeClockCore_Statics::NewProp_ActiveSessionStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockCore_Statics::NewProp_ActiveSessionStartDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeClockCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeClockCore_Statics::NewProp_ActiveSessionStartDate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeClockCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeClockCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeClockCore_Statics::ClassParams = {
		&UTimeClockCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimeClockCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockCore_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeClockCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeClockCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeClockCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeClockCore, 1073259308);
	template<> TIMECLOCK_API UClass* StaticClass<UTimeClockCore>()
	{
		return UTimeClockCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeClockCore(Z_Construct_UClass_UTimeClockCore, &UTimeClockCore::StaticClass, TEXT("/Script/TimeClock"), TEXT("UTimeClockCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeClockCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
