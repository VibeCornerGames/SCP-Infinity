// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibraryEditor/Public/Classes/K2Node_LowEntry_LocalVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_LocalVariable() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// End Cross Module References
	void UK2Node_LowEntry_LocalVariable::StaticRegisterNativesUK2Node_LowEntry_LocalVariable()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_NoRegister()
	{
		return UK2Node_LowEntry_LocalVariable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_LocalVariable.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_LocalVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_LocalVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::ClassParams = {
		&UK2Node_LowEntry_LocalVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LowEntry_LocalVariable, 3934808177);
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* StaticClass<UK2Node_LowEntry_LocalVariable>()
	{
		return UK2Node_LowEntry_LocalVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LowEntry_LocalVariable(Z_Construct_UClass_UK2Node_LowEntry_LocalVariable, &UK2Node_LowEntry_LocalVariable::StaticClass, TEXT("/Script/LowEntryExtendedStandardLibraryEditor"), TEXT("UK2Node_LowEntry_LocalVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LowEntry_LocalVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
