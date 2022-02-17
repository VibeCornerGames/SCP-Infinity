// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadingScreen/Public/AsyncLoadingScreenLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLoadingScreenLibrary() {}
// Cross Module References
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary_NoRegister();
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AsyncLoadingScreen();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execStopLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAsyncLoadingScreenLibrary::StopLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayMovieIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAsyncLoadingScreenLibrary::SetDisplayMovieIndex(Z_Param_MovieIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayTipTextIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TipTextIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAsyncLoadingScreenLibrary::SetDisplayTipTextIndex(Z_Param_TipTextIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayBackgroundIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BackgroundIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAsyncLoadingScreenLibrary::SetDisplayBackgroundIndex(Z_Param_BackgroundIndex);
		P_NATIVE_END;
	}
	void UAsyncLoadingScreenLibrary::StaticRegisterNativesUAsyncLoadingScreenLibrary()
	{
		UClass* Class = UAsyncLoadingScreenLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDisplayBackgroundIndex", &UAsyncLoadingScreenLibrary::execSetDisplayBackgroundIndex },
			{ "SetDisplayMovieIndex", &UAsyncLoadingScreenLibrary::execSetDisplayMovieIndex },
			{ "SetDisplayTipTextIndex", &UAsyncLoadingScreenLibrary::execSetDisplayTipTextIndex },
			{ "StopLoadingScreen", &UAsyncLoadingScreenLibrary::execStopLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics
	{
		struct AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms
		{
			int32 BackgroundIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackgroundIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::NewProp_BackgroundIndex = { "BackgroundIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms, BackgroundIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::NewProp_BackgroundIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
		{ "Comment", "/**\n\x09 * Set which background will be displayed on the loading screen by index. The \"SetDisplayBackgroundManually\" option in Background setting needs to be \"true\" to use this function.\n\x09 * \n\x09 * @param BackgroundIndex Valid index of the Background in \"Images\" array in Background setting. If the index is not valid, then it will display random background instead.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
		{ "ToolTip", "Set which background will be displayed on the loading screen by index. The \"SetDisplayBackgroundManually\" option in Background setting needs to be \"true\" to use this function.\n\n@param BackgroundIndex Valid index of the Background in \"Images\" array in Background setting. If the index is not valid, then it will display random background instead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayBackgroundIndex", nullptr, nullptr, sizeof(AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics
	{
		struct AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms
		{
			int32 MovieIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::NewProp_MovieIndex = { "MovieIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms, MovieIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::NewProp_MovieIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
		{ "Comment", "/**\n\x09 * Set which movie will be displayed on the loading screen by index. The \"SetDisplayMovieIndexManually\" option needs to be \"true\" to use this function.\n\x09 *\n\x09 * @param MovieIndex Valid index of the movie in \"MoviePaths\" array.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
		{ "ToolTip", "Set which movie will be displayed on the loading screen by index. The \"SetDisplayMovieIndexManually\" option needs to be \"true\" to use this function.\n\n@param MovieIndex Valid index of the movie in \"MoviePaths\" array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayMovieIndex", nullptr, nullptr, sizeof(AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics
	{
		struct AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms
		{
			int32 TipTextIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TipTextIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::NewProp_TipTextIndex = { "TipTextIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms, TipTextIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::NewProp_TipTextIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
		{ "Comment", "/**\n\x09 * Set which text will be displayed on the loading screen by index. The \"SetDisplayTipTextManually\" option in Tip Widget setting needs to be \"true\" to use this function.\n\x09 *\n\x09 * @param TipTextIndex Valid index of the text in \"TipText\" array in Tip Widget setting. If the index is not valid, then it will display random text instead.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
		{ "ToolTip", "Set which text will be displayed on the loading screen by index. The \"SetDisplayTipTextManually\" option in Tip Widget setting needs to be \"true\" to use this function.\n\n@param TipTextIndex Valid index of the text in \"TipText\" array in Tip Widget setting. If the index is not valid, then it will display random text instead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayTipTextIndex", nullptr, nullptr, sizeof(AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
		{ "Comment", "/**\n\x09 * Stop the loading screen. To use this function, you must enable the \"bAllowEngineTick\" option.\n\x09 * Call this function in BeginPlay event to stop the Loading Screen (works with Delay node).\n\x09 *\n\x09 **/" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
		{ "ToolTip", "Stop the loading screen. To use this function, you must enable the \"bAllowEngineTick\" option.\nCall this function in BeginPlay event to stop the Loading Screen (works with Delay node)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "StopLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary_NoRegister()
	{
		return UAsyncLoadingScreenLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex, "SetDisplayBackgroundIndex" }, // 3297875869
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex, "SetDisplayMovieIndex" }, // 499633890
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex, "SetDisplayTipTextIndex" }, // 702613459
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen, "StopLoadingScreen" }, // 928272974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async Loading Screen Function Library\n */" },
		{ "IncludePath", "AsyncLoadingScreenLibrary.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
		{ "ToolTip", "Async Loading Screen Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadingScreenLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::ClassParams = {
		&UAsyncLoadingScreenLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncLoadingScreenLibrary, 1070682624);
	template<> ASYNCLOADINGSCREEN_API UClass* StaticClass<UAsyncLoadingScreenLibrary>()
	{
		return UAsyncLoadingScreenLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncLoadingScreenLibrary(Z_Construct_UClass_UAsyncLoadingScreenLibrary, &UAsyncLoadingScreenLibrary::StaticClass, TEXT("/Script/AsyncLoadingScreen"), TEXT("UAsyncLoadingScreenLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadingScreenLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
