// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSCustomBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSCustomBody() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSCustomBody_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSCustomBody();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AUIWSCustomBody::StaticRegisterNativesAUIWSCustomBody()
	{
	}
	UClass* Z_Construct_UClass_AUIWSCustomBody_NoRegister()
	{
		return AUIWSCustomBody::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSCustomBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWaterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomWaterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowCameraUnder_MetaData[];
#endif
		static void NewProp_AllowCameraUnder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowCameraUnder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSCustomBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUIWSWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Cooking Input Replication Actor Tick" },
		{ "IncludePath", "UIWSCustomBody.h" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh = { "CustomStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp = { "CustomMeshComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume = { "CustomWaterVolume", nullptr, (EPropertyFlags)0x00200c000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomWaterVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_SetBit(void* Obj)
	{
		((AUIWSCustomBody*)Obj)->AllowCameraUnder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder = { "AllowCameraUnder", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSCustomBody), &Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSCustomBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSCustomBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIWSCustomBody_Statics::ClassParams = {
		&AUIWSCustomBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSCustomBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIWSCustomBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIWSCustomBody, 3040053695);
	template<> UIWS_API UClass* StaticClass<AUIWSCustomBody>()
	{
		return AUIWSCustomBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIWSCustomBody(Z_Construct_UClass_AUIWSCustomBody, &AUIWSCustomBody::StaticClass, TEXT("/Script/UIWS"), TEXT("AUIWSCustomBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSCustomBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
