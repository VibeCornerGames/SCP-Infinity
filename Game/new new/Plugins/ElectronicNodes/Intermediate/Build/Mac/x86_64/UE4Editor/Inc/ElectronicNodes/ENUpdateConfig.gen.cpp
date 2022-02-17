// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodes/Private/Popup/ENUpdateConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENUpdateConfig() {}
// Cross Module References
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UENUpdateConfig_NoRegister();
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UENUpdateConfig();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
// End Cross Module References
	void UENUpdateConfig::StaticRegisterNativesUENUpdateConfig()
	{
	}
	UClass* Z_Construct_UClass_UENUpdateConfig_NoRegister()
	{
		return UENUpdateConfig::StaticClass();
	}
	struct Z_Construct_UClass_UENUpdateConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UENUpdateConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UENUpdateConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Popup/ENUpdateConfig.h" },
		{ "ModuleRelativePath", "Private/Popup/ENUpdateConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Popup/ENUpdateConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UENUpdateConfig, PluginVersionUpdate), METADATA_PARAMS(Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UENUpdateConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UENUpdateConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UENUpdateConfig_Statics::ClassParams = {
		&UENUpdateConfig::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UENUpdateConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UENUpdateConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UENUpdateConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UENUpdateConfig, 1419878150);
	template<> ELECTRONICNODES_API UClass* StaticClass<UENUpdateConfig>()
	{
		return UENUpdateConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UENUpdateConfig(Z_Construct_UClass_UENUpdateConfig, &UENUpdateConfig::StaticClass, TEXT("/Script/ElectronicNodes"), TEXT("UENUpdateConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UENUpdateConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
