// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeClock/Public/TimeClockBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeClockBPLibrary() {}
// Cross Module References
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockBPLibrary_NoRegister();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TimeClock();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockAlarm_NoRegister();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockCore_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTimeClockBPLibrary::execAddEditorNotification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_PlaySound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTimeClockBPLibrary::AddEditorNotification(Z_Param_Message,Z_Param_Duration,Z_Param_PlaySound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockBPLibrary::execGetTimeClockAlarmObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimeClockAlarm**)Z_Param__Result=UTimeClockBPLibrary::GetTimeClockAlarmObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeClockBPLibrary::execGetTimeClockObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimeClockCore**)Z_Param__Result=UTimeClockBPLibrary::GetTimeClockObject();
		P_NATIVE_END;
	}
	void UTimeClockBPLibrary::StaticRegisterNativesUTimeClockBPLibrary()
	{
		UClass* Class = UTimeClockBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEditorNotification", &UTimeClockBPLibrary::execAddEditorNotification },
			{ "GetTimeClockAlarmObject", &UTimeClockBPLibrary::execGetTimeClockAlarmObject },
			{ "GetTimeClockObject", &UTimeClockBPLibrary::execGetTimeClockObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics
	{
		struct TimeClockBPLibrary_eventAddEditorNotification_Parms
		{
			FString Message;
			float Duration;
			bool PlaySound;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_PlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlaySound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockBPLibrary_eventAddEditorNotification_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockBPLibrary_eventAddEditorNotification_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_PlaySound_SetBit(void* Obj)
	{
		((TimeClockBPLibrary_eventAddEditorNotification_Parms*)Obj)->PlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_PlaySound = { "PlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeClockBPLibrary_eventAddEditorNotification_Parms), &Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_PlaySound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::NewProp_PlaySound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "// Creates and spawns an editor notification.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockBPLibrary.h" },
		{ "ToolTip", "Creates and spawns an editor notification." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockBPLibrary, nullptr, "AddEditorNotification", nullptr, nullptr, sizeof(TimeClockBPLibrary_eventAddEditorNotification_Parms), Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics
	{
		struct TimeClockBPLibrary_eventGetTimeClockAlarmObject_Parms
		{
			UTimeClockAlarm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockBPLibrary_eventGetTimeClockAlarmObject_Parms, ReturnValue), Z_Construct_UClass_UTimeClockAlarm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "//The Time Clock Object is responsible for anything the TimeClock plugin can do.\n" },
		{ "Keywords", "Time Clock Alarm" },
		{ "ModuleRelativePath", "Public/TimeClockBPLibrary.h" },
		{ "ToolTip", "The Time Clock Object is responsible for anything the TimeClock plugin can do." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockBPLibrary, nullptr, "GetTimeClockAlarmObject", nullptr, nullptr, sizeof(TimeClockBPLibrary_eventGetTimeClockAlarmObject_Parms), Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics
	{
		struct TimeClockBPLibrary_eventGetTimeClockObject_Parms
		{
			UTimeClockCore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeClockBPLibrary_eventGetTimeClockObject_Parms, ReturnValue), Z_Construct_UClass_UTimeClockCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time Clock" },
		{ "Comment", "//The Time Clock Object is responsible for anything the TimeClock plugin can do.\n" },
		{ "Keywords", "Time Clock" },
		{ "ModuleRelativePath", "Public/TimeClockBPLibrary.h" },
		{ "ToolTip", "The Time Clock Object is responsible for anything the TimeClock plugin can do." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeClockBPLibrary, nullptr, "GetTimeClockObject", nullptr, nullptr, sizeof(TimeClockBPLibrary_eventGetTimeClockObject_Parms), Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeClockBPLibrary_NoRegister()
	{
		return UTimeClockBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTimeClockBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeClockBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeClockBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeClockBPLibrary_AddEditorNotification, "AddEditorNotification" }, // 657054525
		{ &Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockAlarmObject, "GetTimeClockAlarmObject" }, // 1785795450
		{ &Z_Construct_UFunction_UTimeClockBPLibrary_GetTimeClockObject, "GetTimeClockObject" }, // 1353714946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeClockBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TimeClockBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeClockBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeClockBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeClockBPLibrary_Statics::ClassParams = {
		&UTimeClockBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimeClockBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeClockBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeClockBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeClockBPLibrary, 2390705848);
	template<> TIMECLOCK_API UClass* StaticClass<UTimeClockBPLibrary>()
	{
		return UTimeClockBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeClockBPLibrary(Z_Construct_UClass_UTimeClockBPLibrary, &UTimeClockBPLibrary::StaticClass, TEXT("/Script/TimeClock"), TEXT("UTimeClockBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeClockBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
