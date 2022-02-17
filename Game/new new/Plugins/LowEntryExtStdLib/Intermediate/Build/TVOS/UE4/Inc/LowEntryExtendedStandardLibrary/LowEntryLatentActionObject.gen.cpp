// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/ClassesLatentAction/LowEntryLatentActionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionObject() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionObject_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryLatentActionObject::execGetResult)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResult(Z_Param_Out_Result_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionObject::execIsDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionObject::execDone)
	{
		P_GET_OBJECT(UObject,Z_Param_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Done(Z_Param_Result_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionObject::execWaitTillDone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
		P_NATIVE_END;
	}
	void ULowEntryLatentActionObject::StaticRegisterNativesULowEntryLatentActionObject()
	{
		UClass* Class = ULowEntryLatentActionObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Done", &ULowEntryLatentActionObject::execDone },
			{ "GetResult", &ULowEntryLatentActionObject::execGetResult },
			{ "IsDone", &ULowEntryLatentActionObject::execIsDone },
			{ "WaitTillDone", &ULowEntryLatentActionObject::execWaitTillDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics
	{
		struct LowEntryLatentActionObject_eventDone_Parms
		{
			UObject* Result_;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventDone_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "Done", nullptr, nullptr, sizeof(LowEntryLatentActionObject_eventDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_Done()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics
	{
		struct LowEntryLatentActionObject_eventGetResult_Parms
		{
			UObject* Result_;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventGetResult_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "GetResult", nullptr, nullptr, sizeof(LowEntryLatentActionObject_eventGetResult_Parms), Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics
	{
		struct LowEntryLatentActionObject_eventIsDone_Parms
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
	void Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLatentActionObject_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryLatentActionObject_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "IsDone", nullptr, nullptr, sizeof(LowEntryLatentActionObject_eventIsDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics
	{
		struct LowEntryLatentActionObject_eventWaitTillDone_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UObject* Result_;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "WaitTillDone", nullptr, nullptr, sizeof(LowEntryLatentActionObject_eventWaitTillDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryLatentActionObject_NoRegister()
	{
		return ULowEntryLatentActionObject::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryLatentActionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static void NewProp_Finished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Finished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryLatentActionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryLatentActionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_Done, "Done" }, // 669440207
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult, "GetResult" }, // 2955605210
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone, "IsDone" }, // 3295579996
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone, "WaitTillDone" }, // 3689296115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
#endif
	void Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_SetBit(void* Obj)
	{
		((ULowEntryLatentActionObject*)Obj)->Finished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULowEntryLatentActionObject), &Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryLatentActionObject, Result), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryLatentActionObject, KeepAliveCount), METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryLatentActionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::ClassParams = {
		&ULowEntryLatentActionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryLatentActionObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryLatentActionObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryLatentActionObject, 1902999163);
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryLatentActionObject>()
	{
		return ULowEntryLatentActionObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryLatentActionObject(Z_Construct_UClass_ULowEntryLatentActionObject, &ULowEntryLatentActionObject::StaticClass, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ULowEntryLatentActionObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryLatentActionObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
