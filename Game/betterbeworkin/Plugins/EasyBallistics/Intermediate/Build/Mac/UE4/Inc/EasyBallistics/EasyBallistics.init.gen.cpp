// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyBallistics_init() {}
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EasyBallistics()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyBallistics",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x98F74430,
				0xF3D799C8,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
