// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeClock/Public/TimeClockSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeClockSettings() {}
// Cross Module References
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockSettings_NoRegister();
	TIMECLOCK_API UClass* Z_Construct_UClass_UTimeClockSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TimeClock();
	TIMECLOCK_API UScriptStruct* Z_Construct_UScriptStruct_FTimeClockAlarmData();
// End Cross Module References
	void UTimeClockSettings::StaticRegisterNativesUTimeClockSettings()
	{
	}
	UClass* Z_Construct_UClass_UTimeClockSettings_NoRegister()
	{
		return UTimeClockSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTimeClockSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alarms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alarms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Alarms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeClockSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeClock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements settings for the TimeClock plugin.\n */" },
		{ "IncludePath", "TimeClockSettings.h" },
		{ "ModuleRelativePath", "Public/TimeClockSettings.h" },
		{ "ToolTip", "Implements settings for the TimeClock plugin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms_Inner = { "Alarms", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeClockAlarmData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms_MetaData[] = {
		{ "Category", "Alarms" },
		{ "Comment", "// List of all alarms saved for this project. You can export/import these to any other project like you would other settings (see buttons top right of the Project Settings window).\n" },
		{ "ModuleRelativePath", "Public/TimeClockSettings.h" },
		{ "ToolTip", "List of all alarms saved for this project. You can export/import these to any other project like you would other settings (see buttons top right of the Project Settings window)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms = { "Alarms", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeClockSettings, Alarms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeClockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeClockSettings_Statics::NewProp_Alarms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeClockSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeClockSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeClockSettings_Statics::ClassParams = {
		&UTimeClockSettings::StaticClass,
		"TimeClock",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimeClockSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeClockSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeClockSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeClockSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeClockSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeClockSettings, 917678129);
	template<> TIMECLOCK_API UClass* StaticClass<UTimeClockSettings>()
	{
		return UTimeClockSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeClockSettings(Z_Construct_UClass_UTimeClockSettings, &UTimeClockSettings::StaticClass, TEXT("/Script/TimeClock"), TEXT("UTimeClockSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeClockSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
