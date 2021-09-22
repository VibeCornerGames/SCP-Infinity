// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSRiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSRiver() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSRiver_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSRiver();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AUIWSRiver::StaticRegisterNativesAUIWSRiver()
	{
	}
	UClass* Z_Construct_UClass_AUIWSRiver_NoRegister()
	{
		return AUIWSRiver::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSRiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowCameraUnder_MetaData[];
#endif
		static void NewProp_AllowCameraUnder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowCameraUnder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSRiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUIWSWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Cooking Input Replication Actor Tick" },
		{ "IncludePath", "UIWSRiver.h" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "UIWSRiver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x001004000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSRiver, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData[] = {
		{ "Category", "UIWSRiver" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_SetBit(void* Obj)
	{
		((AUIWSRiver*)Obj)->AllowCameraUnder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder = { "AllowCameraUnder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSRiver), &Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSRiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSRiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSRiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIWSRiver_Statics::ClassParams = {
		&AUIWSRiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSRiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSRiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIWSRiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIWSRiver, 3536164278);
	template<> UIWS_API UClass* StaticClass<AUIWSRiver>()
	{
		return AUIWSRiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIWSRiver(Z_Construct_UClass_AUIWSRiver, &AUIWSRiver::StaticClass, TEXT("/Script/UIWS"), TEXT("AUIWSRiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSRiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
