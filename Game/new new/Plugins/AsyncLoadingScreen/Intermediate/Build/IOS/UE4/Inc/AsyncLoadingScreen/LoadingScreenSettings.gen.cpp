// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadingScreen/Public/LoadingScreenSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSettings() {}
// Cross Module References
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType();
	UPackage* Z_Construct_UPackage__Script_AsyncLoadingScreen();
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType();
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings();
	MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTipSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister();
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* ELoadingWidgetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingWidgetType"));
		}
		return Singleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingWidgetType>()
	{
		return ELoadingWidgetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadingWidgetType(ELoadingWidgetType_StaticEnum, TEXT("/Script/AsyncLoadingScreen"), TEXT("ELoadingWidgetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Hash() { return 1590021890U; }
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadingWidgetType"), 0, Get_Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadingWidgetType::LWT_Horizontal", (int64)ELoadingWidgetType::LWT_Horizontal },
				{ "ELoadingWidgetType::LWT_Vertical", (int64)ELoadingWidgetType::LWT_Vertical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Loading Widget type */" },
				{ "LWT_Horizontal.Comment", "/** Horizontal alignment */" },
				{ "LWT_Horizontal.DisplayName", "Horizontal" },
				{ "LWT_Horizontal.Name", "ELoadingWidgetType::LWT_Horizontal" },
				{ "LWT_Horizontal.ToolTip", "Horizontal alignment" },
				{ "LWT_Vertical.Comment", "/** Vertical alignment */" },
				{ "LWT_Vertical.DisplayName", "Vertical" },
				{ "LWT_Vertical.Name", "ELoadingWidgetType::LWT_Vertical" },
				{ "LWT_Vertical.ToolTip", "Vertical alignment" },
				{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
				{ "ToolTip", "Loading Widget type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
				nullptr,
				"ELoadingWidgetType",
				"ELoadingWidgetType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELoadingIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingIconType"));
		}
		return Singleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingIconType>()
	{
		return ELoadingIconType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadingIconType(ELoadingIconType_StaticEnum, TEXT("/Script/AsyncLoadingScreen"), TEXT("ELoadingIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Hash() { return 1798902796U; }
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadingIconType"), 0, Get_Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadingIconType::LIT_Throbber", (int64)ELoadingIconType::LIT_Throbber },
				{ "ELoadingIconType::LIT_CircularThrobber", (int64)ELoadingIconType::LIT_CircularThrobber },
				{ "ELoadingIconType::LIT_ImageSequence", (int64)ELoadingIconType::LIT_ImageSequence },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Loading Icon Type*/" },
				{ "LIT_CircularThrobber.Comment", "/** SCircularThrobber widget */" },
				{ "LIT_CircularThrobber.DisplayName", "Circular Throbber" },
				{ "LIT_CircularThrobber.Name", "ELoadingIconType::LIT_CircularThrobber" },
				{ "LIT_CircularThrobber.ToolTip", "SCircularThrobber widget" },
				{ "LIT_ImageSequence.Comment", "/** Animated images */" },
				{ "LIT_ImageSequence.DisplayName", "Image Sequence" },
				{ "LIT_ImageSequence.Name", "ELoadingIconType::LIT_ImageSequence" },
				{ "LIT_ImageSequence.ToolTip", "Animated images" },
				{ "LIT_Throbber.Comment", "/** SThrobber widget */" },
				{ "LIT_Throbber.DisplayName", "Throbber" },
				{ "LIT_Throbber.Name", "ELoadingIconType::LIT_Throbber" },
				{ "LIT_Throbber.ToolTip", "SThrobber widget" },
				{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
				{ "ToolTip", "Loading Icon Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
				nullptr,
				"ELoadingIconType",
				"ELoadingIconType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAsyncLoadingScreenLayout_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("EAsyncLoadingScreenLayout"));
		}
		return Singleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<EAsyncLoadingScreenLayout>()
	{
		return EAsyncLoadingScreenLayout_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAsyncLoadingScreenLayout(EAsyncLoadingScreenLayout_StaticEnum, TEXT("/Script/AsyncLoadingScreen"), TEXT("EAsyncLoadingScreenLayout"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Hash() { return 3563713849U; }
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAsyncLoadingScreenLayout"), 0, Get_Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAsyncLoadingScreenLayout::ALSL_Classic", (int64)EAsyncLoadingScreenLayout::ALSL_Classic },
				{ "EAsyncLoadingScreenLayout::ALSL_Center", (int64)EAsyncLoadingScreenLayout::ALSL_Center },
				{ "EAsyncLoadingScreenLayout::ALSL_Letterbox", (int64)EAsyncLoadingScreenLayout::ALSL_Letterbox },
				{ "EAsyncLoadingScreenLayout::ALSL_Sidebar", (int64)EAsyncLoadingScreenLayout::ALSL_Sidebar },
				{ "EAsyncLoadingScreenLayout::ALSL_DualSidebar", (int64)EAsyncLoadingScreenLayout::ALSL_DualSidebar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALSL_Center.Comment", "/** \n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
				{ "ALSL_Center.DisplayName", "Center" },
				{ "ALSL_Center.Name", "EAsyncLoadingScreenLayout::ALSL_Center" },
				{ "ALSL_Center.ToolTip", "The loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
				{ "ALSL_Classic.Comment", "/**\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * Loading and tip widgets can be at the bottom or top.\n\x09 */" },
				{ "ALSL_Classic.DisplayName", "Classic" },
				{ "ALSL_Classic.Name", "EAsyncLoadingScreenLayout::ALSL_Classic" },
				{ "ALSL_Classic.ToolTip", "The Classic is a simple, generic layout and fits well with many designs.\nLoading and tip widgets can be at the bottom or top." },
				{ "ALSL_DualSidebar.Comment", "/**\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
				{ "ALSL_DualSidebar.DisplayName", "Dual Sidebar" },
				{ "ALSL_DualSidebar.Name", "EAsyncLoadingScreenLayout::ALSL_DualSidebar" },
				{ "ALSL_DualSidebar.ToolTip", "Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
				{ "ALSL_Letterbox.Comment", "/**\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget \n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
				{ "ALSL_Letterbox.DisplayName", "Letterbox" },
				{ "ALSL_Letterbox.Name", "EAsyncLoadingScreenLayout::ALSL_Letterbox" },
				{ "ALSL_Letterbox.ToolTip", "The Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
				{ "ALSL_Sidebar.Comment", "/**\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
				{ "ALSL_Sidebar.DisplayName", "Sidebar" },
				{ "ALSL_Sidebar.Name", "EAsyncLoadingScreenLayout::ALSL_Sidebar" },
				{ "ALSL_Sidebar.ToolTip", "The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** \n * Asynce Loading Screen Layouts\n */" },
				{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
				{ "ToolTip", "Asynce Loading Screen Layouts" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
				nullptr,
				"EAsyncLoadingScreenLayout",
				"EAsyncLoadingScreenLayout",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDualSidebarLayoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("DualSidebarLayoutSettings"), sizeof(FDualSidebarLayoutSettings), Get_Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FDualSidebarLayoutSettings>()
{
	return FDualSidebarLayoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDualSidebarLayoutSettings(FDualSidebarLayoutSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("DualSidebarLayoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFDualSidebarLayoutSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFDualSidebarLayoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FDualSidebarLayoutSettings>(FName(TEXT("DualSidebarLayoutSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFDualSidebarLayoutSettings;
	struct Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtRight_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBorderVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftBorderVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBorderVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightBorderVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftBorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightBorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftBorderBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightBorderBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Dual Sidebar Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Dual Sidebar Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualSidebarLayoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Is loading widget on the right or left border? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the right or left border?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj)
	{
		((FDualSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight = { "bIsLoadingWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDualSidebarLayoutSettings), &Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the left widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the left widget." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment = { "LeftVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the right widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the right widget." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment = { "RightVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the left border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the left border background that contains all widgets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment = { "LeftBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the right border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the right border background that contains all widgets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment = { "RightBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The padding area between the left border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the left border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding = { "LeftBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The padding area between the right border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the right border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding = { "RightBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the left border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the left border widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground = { "LeftBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the right border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the right border widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground = { "RightBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"DualSidebarLayoutSettings",
		sizeof(FDualSidebarLayoutSettings),
		alignof(FDualSidebarLayoutSettings),
		Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DualSidebarLayoutSettings"), sizeof(FDualSidebarLayoutSettings), Get_Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Hash() { return 2142543961U; }
class UScriptStruct* FSidebarLayoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FSidebarLayoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidebarLayoutSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("SidebarLayoutSettings"), sizeof(FSidebarLayoutSettings), Get_Z_Construct_UScriptStruct_FSidebarLayoutSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FSidebarLayoutSettings>()
{
	return FSidebarLayoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSidebarLayoutSettings(FSidebarLayoutSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("SidebarLayoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFSidebarLayoutSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFSidebarLayoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FSidebarLayoutSettings>(FName(TEXT("SidebarLayoutSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFSidebarLayoutSettings;
	struct Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtRight_MetaData[];
#endif
		static void NewProp_bIsWidgetAtRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BorderVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderHorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sidebar Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Sidebar Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidebarLayoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Is the border that contains loading and tip widgets located at the right or left? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is the border that contains loading and tip widgets located at the right or left?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit(void* Obj)
	{
		((FSidebarLayoutSettings*)Obj)->bIsWidgetAtRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight = { "bIsWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Is loading widget on the top of the tip? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the top of the tip?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
	{
		((FSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The empty space between loading widget and the tip." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the vertical box that contains loading/tip widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the vertical box that contains loading/tip widgets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The alignment of the loading widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the border background that contains all widgets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment = { "BorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset = { "BorderHorizontalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderHorizontalOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the border widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"SidebarLayoutSettings",
		sizeof(FSidebarLayoutSettings),
		alignof(FSidebarLayoutSettings),
		Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSidebarLayoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SidebarLayoutSettings"), sizeof(FSidebarLayoutSettings), Get_Z_Construct_UScriptStruct_FSidebarLayoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSidebarLayoutSettings_Hash() { return 1957172341U; }
class UScriptStruct* FLetterboxLayoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLetterboxLayoutSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LetterboxLayoutSettings"), sizeof(FLetterboxLayoutSettings), Get_Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLetterboxLayoutSettings>()
{
	return FLetterboxLayoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLetterboxLayoutSettings(FLetterboxLayoutSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("LetterboxLayoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLetterboxLayoutSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLetterboxLayoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FLetterboxLayoutSettings>(FName(TEXT("LetterboxLayoutSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLetterboxLayoutSettings;
	struct Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopBorderHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TopBorderHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomBorderHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BottomBorderHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopBorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopBorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomBorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomBorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopBorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopBorderBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomBorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomBorderBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Letterbox Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Letterbox Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLetterboxLayoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Is loading widget located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
	{
		((FLetterboxLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLetterboxLayoutSettings), &Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The alignment of the loading widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The horizontal alignment of the top border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the top border." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment = { "TopBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The horizontal alignment of the bottom border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the bottom border." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment = { "BottomBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The top padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The top padding area between the border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding = { "TopBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The bottom padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The bottom padding area between the border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding = { "BottomBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Background appearance settings for top border */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for top border" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground = { "TopBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Background appearance settings for bottom border */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for bottom border" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground = { "BottomBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LetterboxLayoutSettings",
		sizeof(FLetterboxLayoutSettings),
		alignof(FLetterboxLayoutSettings),
		Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LetterboxLayoutSettings"), sizeof(FLetterboxLayoutSettings), Get_Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Hash() { return 803688472U; }
class UScriptStruct* FCenterLayoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FCenterLayoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCenterLayoutSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CenterLayoutSettings"), sizeof(FCenterLayoutSettings), Get_Z_Construct_UScriptStruct_FCenterLayoutSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FCenterLayoutSettings>()
{
	return FCenterLayoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCenterLayoutSettings(FCenterLayoutSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("CenterLayoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCenterLayoutSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCenterLayoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FCenterLayoutSettings>(FName(TEXT("CenterLayoutSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCenterLayoutSettings;
	struct Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTipAtBottom_MetaData[];
#endif
		static void NewProp_bIsTipAtBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTipAtBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Center Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Center Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCenterLayoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Is tip located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is tip located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit(void* Obj)
	{
		((FCenterLayoutSettings*)Obj)->bIsTipAtBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom = { "bIsTipAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCenterLayoutSettings), &Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCenterLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The horizontal alignment of the border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the border." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Offset to bottom or top of the screen depending on the tip located at the bottom or top position.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Offset to bottom or top of the screen depending on the tip located at the bottom or top position." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset = { "BorderVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderVerticalOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The padding area between the border and the tips it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the tips it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Background appearance settings for tip area */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for tip area" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"CenterLayoutSettings",
		sizeof(FCenterLayoutSettings),
		alignof(FCenterLayoutSettings),
		Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCenterLayoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CenterLayoutSettings"), sizeof(FCenterLayoutSettings), Get_Z_Construct_UScriptStruct_FCenterLayoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCenterLayoutSettings_Hash() { return 2171023618U; }
class UScriptStruct* FClassicLayoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FClassicLayoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassicLayoutSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ClassicLayoutSettings"), sizeof(FClassicLayoutSettings), Get_Z_Construct_UScriptStruct_FClassicLayoutSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FClassicLayoutSettings>()
{
	return FClassicLayoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassicLayoutSettings(FClassicLayoutSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("ClassicLayoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFClassicLayoutSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFClassicLayoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FClassicLayoutSettings>(FName(TEXT("ClassicLayoutSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFClassicLayoutSettings;
	struct Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtBottom_MetaData[];
#endif
		static void NewProp_bIsWidgetAtBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtLeft_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Classic Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Classic Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassicLayoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Is the border that contains loading and tip widget located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is the border that contains loading and tip widget located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit(void* Obj)
	{
		((FClassicLayoutSettings*)Obj)->bIsWidgetAtBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom = { "bIsWidgetAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Is loading widget on the left of the tip? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the left of the tip?" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj)
	{
		((FClassicLayoutSettings*)Obj)->bIsLoadingWidgetAtLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft = { "bIsLoadingWidgetAtLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The empty space between loading widget and the tip." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassicLayoutSettings, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassicLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The horizontal alignment of the border background.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the border background." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the widget it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Background appearance settings for the border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the border widget" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ClassicLayoutSettings",
		sizeof(FClassicLayoutSettings),
		alignof(FClassicLayoutSettings),
		Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassicLayoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassicLayoutSettings"), sizeof(FClassicLayoutSettings), Get_Z_Construct_UScriptStruct_FClassicLayoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassicLayoutSettings_Hash() { return 3973888284U; }
class UScriptStruct* FALoadingScreenSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FALoadingScreenSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FALoadingScreenSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ALoadingScreenSettings"), sizeof(FALoadingScreenSettings), Get_Z_Construct_UScriptStruct_FALoadingScreenSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FALoadingScreenSettings>()
{
	return FALoadingScreenSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FALoadingScreenSettings(FALoadingScreenSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("ALoadingScreenSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFALoadingScreenSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFALoadingScreenSettings()
	{
		UScriptStruct::DeferCppStructOps<FALoadingScreenSettings>(FName(TEXT("ALoadingScreenSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFALoadingScreenSettings;
	struct Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumLoadingScreenDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumLoadingScreenDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[];
#endif
		static void NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteWhenLoadingCompletes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[];
#endif
		static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForManualStop_MetaData[];
#endif
		static void NewProp_bWaitForManualStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForManualStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowInEarlyStartup_MetaData[];
#endif
		static void NewProp_bAllowInEarlyStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInEarlyStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowEngineTick_MetaData[];
#endif
		static void NewProp_bAllowEngineTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowEngineTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaybackType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoviePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShuffle_MetaData[];
#endif
		static void NewProp_bShuffle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShuffle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayMovieIndexManually_MetaData[];
#endif
		static void NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayMovieIndexManually;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetOverlay_MetaData[];
#endif
		static void NewProp_bShowWidgetOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLoadingCompleteText_MetaData[];
#endif
		static void NewProp_bShowLoadingCompleteText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingCompleteText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteTextSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingCompleteTextSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Loading Screen Settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Screen Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALoadingScreenSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime = { "MinimumLoadingScreenDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, MinimumLoadingScreenDisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// If true, the loading screen will disappear as soon as loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, the loading screen will disappear as soon as loading is done." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAutoCompleteWhenLoadingCompletes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes = { "bAutoCompleteWhenLoadingCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// If true, movies can be skipped by clicking the loading screen as long as loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, movies can be skipped by clicking the loading screen as long as loading is done." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bMoviesAreSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** \n\x09 * If true, movie playback continue until Stop is called.\n\x09 * \n\x09 * NOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\n\x09 * If \"Minimum Loading Screen Display Time\" >= 0, you will need to call \"StopLoadingScreen\" in BeginPlay event to stop the loading screen (\"bAllowEngineTick\" must be true)\n\x09 **/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, movie playback continue until Stop is called.\n\nNOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\nIf \"Minimum Loading Screen Display Time\" >= 0, you will need to call \"StopLoadingScreen\" in BeginPlay event to stop the loading screen (\"bAllowEngineTick\" must be true)" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bWaitForManualStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop = { "bWaitForManualStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAllowInEarlyStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup = { "bAllowInEarlyStartup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAllowEngineTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick = { "bAllowEngineTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType = { "PlaybackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, PlaybackType), Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner = { "MoviePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\n\x09 * E.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\nE.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths = { "MoviePaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, MoviePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * If true, shuffle the movies list before playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, shuffle the movies list before playing." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShuffle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle = { "bShuffle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen \n\x09 * by calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen\nby calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bSetDisplayMovieIndexManually = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually = { "bSetDisplayMovieIndexManually", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** \n\x09 * Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShowWidgetOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay = { "bShowWidgetOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\x09 *\n\x09 * NOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\n\x09 * This also allows players press any button to stop the Loading Screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\nNOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\nThis also allows players press any button to stop the Loading Screen." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShowLoadingCompleteText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText = { "bShowLoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings = { "LoadingCompleteTextSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingCompleteTextSettings), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, Background), Z_Construct_UScriptStruct_FBackgroundSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget = { "TipWidget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, TipWidget), Z_Construct_UScriptStruct_FTipSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingWidget), Z_Construct_UScriptStruct_FLoadingWidgetSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FALoadingScreenSettings, Layout), Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ALoadingScreenSettings",
		sizeof(FALoadingScreenSettings),
		alignof(FALoadingScreenSettings),
		Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FALoadingScreenSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ALoadingScreenSettings"), sizeof(FALoadingScreenSettings), Get_Z_Construct_UScriptStruct_FALoadingScreenSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FALoadingScreenSettings_Hash() { return 2718763169U; }
class UScriptStruct* FLoadingCompleteTextSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingCompleteTextSettings"), sizeof(FLoadingCompleteTextSettings), Get_Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLoadingCompleteTextSettings>()
{
	return FLoadingCompleteTextSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingCompleteTextSettings(FLoadingCompleteTextSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("LoadingCompleteTextSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingCompleteTextSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingCompleteTextSettings()
	{
		UScriptStruct::DeferCppStructOps<FLoadingCompleteTextSettings>(FName(TEXT("LoadingCompleteTextSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingCompleteTextSettings;
	struct Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadingCompleteText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeInOutAnim_MetaData[];
#endif
		static void NewProp_bFadeInOutAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeInOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingCompleteTextSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// The text that shows up when level loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that shows up when level loading is done." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText = { "LoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, LoadingCompleteText), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// Text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text appearance settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the text.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Alignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "/** Text padding. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text padding." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// Animate the text?\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Animate the text?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit(void* Obj)
	{
		((FLoadingCompleteTextSettings*)Obj)->bFadeInOutAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim = { "bFadeInOutAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingCompleteTextSettings), &Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Animation speed\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Animation speed" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, AnimationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LoadingCompleteTextSettings",
		sizeof(FLoadingCompleteTextSettings),
		alignof(FLoadingCompleteTextSettings),
		Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingCompleteTextSettings"), sizeof(FLoadingCompleteTextSettings), Get_Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Hash() { return 897527194U; }
class UScriptStruct* FTipSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FTipSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TipSettings"), sizeof(FTipSettings), Get_Z_Construct_UScriptStruct_FTipSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FTipSettings>()
{
	return FTipSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipSettings(FTipSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("TipSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTipSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTipSettings()
	{
		UScriptStruct::DeferCppStructOps<FTipSettings>(FName(TEXT("TipSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTipSettings;
	struct Z_Construct_UScriptStruct_FTipSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TipText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TipText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipWrapAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TipWrapAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayTipTextManually_MetaData[];
#endif
		static void NewProp_bSetDisplayTipTextManually_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayTipTextManually;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tips text settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tips text settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipSettings>();
	}
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner = { "TipText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// The tip text randomly display in the loading screen.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The tip text randomly display in the loading screen." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText = { "TipText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipSettings, TipText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// Tip text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tip text appearance settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// The size of the tip before it's wrapped to the next line\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The size of the tip before it's wrapped to the next line" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt = { "TipWrapAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipSettings, TipWrapAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array." },
	};
#endif
	void Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit(void* Obj)
	{
		((FTipSettings*)Obj)->bSetDisplayTipTextManually = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually = { "bSetDisplayTipTextManually", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTipSettings), &Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"TipSettings",
		sizeof(FTipSettings),
		alignof(FTipSettings),
		Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipSettings"), sizeof(FTipSettings), Get_Z_Construct_UScriptStruct_FTipSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipSettings_Hash() { return 3639198301U; }
class UScriptStruct* FLoadingWidgetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FLoadingWidgetSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingWidgetSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingWidgetSettings"), sizeof(FLoadingWidgetSettings), Get_Z_Construct_UScriptStruct_FLoadingWidgetSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLoadingWidgetSettings>()
{
	return FLoadingWidgetSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingWidgetSettings(FLoadingWidgetSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("LoadingWidgetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings()
	{
		UScriptStruct::DeferCppStructOps<FLoadingWidgetSettings>(FName(TEXT("LoadingWidgetSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings;
	struct Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingIconType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingIconType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingIconType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingWidgetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingWidgetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformPivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextRightPosition_MetaData[];
#endif
		static void NewProp_bLoadingTextRightPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextRightPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextTopPosition_MetaData[];
#endif
		static void NewProp_bLoadingTextTopPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextTopPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrobberSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrobberSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircularThrobberSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircularThrobberSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSequenceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSequenceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingIconAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingIconAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideLoadingWidgetWhenCompletes_MetaData[];
#endif
		static void NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLoadingWidgetWhenCompletes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Loading widget settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading widget settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingWidgetSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Loading icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading icon type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType = { "LoadingIconType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Loading Widget type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Widget type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType = { "LoadingWidgetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingWidgetType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform translation of the loading icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform translation of the loading icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation = { "TransformTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformTranslation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform scale of the loading icon, a negative value will flip the icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform scale of the loading icon, a negative value will flip the icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform pivot of the loading icon (in normalized local space).*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform pivot of the loading icon (in normalized local space)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot = { "TransformPivot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "// Text displayed beside the animated icon\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text displayed beside the animated icon" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingText), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal." },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bLoadingTextRightPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition = { "bLoadingTextRightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical." },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bLoadingTextTopPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition = { "bLoadingTextTopPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// Loading text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading text appearance settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Throbber settings. Ignore this if you don't choose the 'Throbber' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Throbber settings. Ignore this if you don't choose the 'Throbber' icon type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings = { "ThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ThrobberSettings), Z_Construct_UScriptStruct_FThrobberSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings = { "CircularThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, CircularThrobberSettings), Z_Construct_UScriptStruct_FCircularThrobberSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings = { "ImageSequenceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ImageSequenceSettings), Z_Construct_UScriptStruct_FImageSequenceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the loading text.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment = { "TextAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TextAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the loading icon. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment = { "LoadingIconAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Empty space between the loading text and the loading icon */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Empty space between the loading text and the loading icon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Hide the loading widget when the level loading is complete*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Hide the loading widget when the level loading is complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bHideLoadingWidgetWhenCompletes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes = { "bHideLoadingWidgetWhenCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LoadingWidgetSettings",
		sizeof(FLoadingWidgetSettings),
		alignof(FLoadingWidgetSettings),
		Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingWidgetSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingWidgetSettings"), sizeof(FLoadingWidgetSettings), Get_Z_Construct_UScriptStruct_FLoadingWidgetSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingWidgetSettings_Hash() { return 3010663233U; }
class UScriptStruct* FBackgroundSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FBackgroundSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackgroundSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("BackgroundSettings"), sizeof(FBackgroundSettings), Get_Z_Construct_UScriptStruct_FBackgroundSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FBackgroundSettings>()
{
	return FBackgroundSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBackgroundSettings(FBackgroundSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("BackgroundSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFBackgroundSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFBackgroundSettings()
	{
		UScriptStruct::DeferCppStructOps<FBackgroundSettings>(FName(TEXT("BackgroundSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFBackgroundSettings;
	struct Z_Construct_UScriptStruct_FBackgroundSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageStretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageStretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayBackgroundManually_MetaData[];
#endif
		static void NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayBackgroundManually;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Background widget for the widget loading screen\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background widget for the widget loading screen" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackgroundSettings>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "Background" },
		{ "Comment", "// The images randomly display while in the loading screen on top of the movie \n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The images randomly display while in the loading screen on top of the movie" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBackgroundSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// The scaling type to apply to images.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The scaling type to apply to images." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch = { "ImageStretch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBackgroundSettings, ImageStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The padding area between the border and the image it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the image it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBackgroundSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// The border's background color if there is any image defined. If padding = 0 you will not see the border color.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The border's background color if there is any image defined. If padding = 0 you will not see the border color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBackgroundSettings, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array." },
	};
#endif
	void Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj)
	{
		((FBackgroundSettings*)Obj)->bSetDisplayBackgroundManually = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually = { "bSetDisplayBackgroundManually", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBackgroundSettings), &Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"BackgroundSettings",
		sizeof(FBackgroundSettings),
		alignof(FBackgroundSettings),
		Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBackgroundSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BackgroundSettings"), sizeof(FBackgroundSettings), Get_Z_Construct_UScriptStruct_FBackgroundSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBackgroundSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBackgroundSettings_Hash() { return 4142398331U; }
class UScriptStruct* FImageSequenceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FImageSequenceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageSequenceSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ImageSequenceSettings"), sizeof(FImageSequenceSettings), Get_Z_Construct_UScriptStruct_FImageSequenceSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FImageSequenceSettings>()
{
	return FImageSequenceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageSequenceSettings(FImageSequenceSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("ImageSequenceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFImageSequenceSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFImageSequenceSettings()
	{
		UScriptStruct::DeferCppStructOps<FImageSequenceSettings>(FName(TEXT("ImageSequenceSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFImageSequenceSettings;
	struct Z_Construct_UScriptStruct_FImageSequenceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayReverse_MetaData[];
#endif
		static void NewProp_bPlayReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayReverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageSequenceSettings>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** An array of images for animating the loading icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "An array of images for animating the loading icon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageSequenceSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Scale of the images.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Scale of the images." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageSequenceSettings, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageSequenceSettings, Interval), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Play the image sequence in reverse.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Play the image sequence in reverse." },
	};
#endif
	void Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit(void* Obj)
	{
		((FImageSequenceSettings*)Obj)->bPlayReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse = { "bPlayReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImageSequenceSettings), &Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ImageSequenceSettings",
		sizeof(FImageSequenceSettings),
		alignof(FImageSequenceSettings),
		Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageSequenceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageSequenceSettings"), sizeof(FImageSequenceSettings), Get_Z_Construct_UScriptStruct_FImageSequenceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageSequenceSettings_Hash() { return 1841064806U; }
class UScriptStruct* FCircularThrobberSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FCircularThrobberSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircularThrobberSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CircularThrobberSettings"), sizeof(FCircularThrobberSettings), Get_Z_Construct_UScriptStruct_FCircularThrobberSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FCircularThrobberSettings>()
{
	return FCircularThrobberSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCircularThrobberSettings(FCircularThrobberSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("CircularThrobberSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCircularThrobberSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCircularThrobberSettings()
	{
		UScriptStruct::DeferCppStructOps<FCircularThrobberSettings>(FName(TEXT("CircularThrobberSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFCircularThrobberSettings;
	struct Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircularThrobberSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularThrobberSettings, NumberOfPieces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time for a full circle (in seconds) */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularThrobberSettings, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularThrobberSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for each segment of the throbber */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircularThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"CircularThrobberSettings",
		sizeof(FCircularThrobberSettings),
		alignof(FCircularThrobberSettings),
		Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCircularThrobberSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CircularThrobberSettings"), sizeof(FCircularThrobberSettings), Get_Z_Construct_UScriptStruct_FCircularThrobberSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCircularThrobberSettings_Hash() { return 3328801035U; }
class UScriptStruct* FThrobberSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FThrobberSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FThrobberSettings, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ThrobberSettings"), sizeof(FThrobberSettings), Get_Z_Construct_UScriptStruct_FThrobberSettings_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FThrobberSettings>()
{
	return FThrobberSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FThrobberSettings(FThrobberSettings::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("ThrobberSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFThrobberSettings
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFThrobberSettings()
	{
		UScriptStruct::DeferCppStructOps<FThrobberSettings>(FName(TEXT("ThrobberSettings")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFThrobberSettings;
	struct Z_Construct_UScriptStruct_FThrobberSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[];
#endif
		static void NewProp_bAnimateHorizontally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[];
#endif
		static void NewProp_bAnimateVertically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[];
#endif
		static void NewProp_bAnimateOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThrobberSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThrobberSettings, NumberOfPieces), METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate horizontally? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate horizontally?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateHorizontally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally = { "bAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate vertically? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate vertically?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateVertically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically = { "bAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate their opacity? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate their opacity?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity = { "bAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for each segment of the throbber */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ThrobberSettings",
		sizeof(FThrobberSettings),
		alignof(FThrobberSettings),
		Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FThrobberSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ThrobberSettings"), sizeof(FThrobberSettings), Get_Z_Construct_UScriptStruct_FThrobberSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FThrobberSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FThrobberSettings_Hash() { return 656708545U; }
class UScriptStruct* FTextAppearance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FTextAppearance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextAppearance, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TextAppearance"), sizeof(FTextAppearance), Get_Z_Construct_UScriptStruct_FTextAppearance_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FTextAppearance>()
{
	return FTextAppearance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextAppearance(FTextAppearance::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("TextAppearance"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTextAppearance
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTextAppearance()
	{
		UScriptStruct::DeferCppStructOps<FTextAppearance>(FName(TEXT("TextAppearance")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFTextAppearance;
	struct Z_Construct_UScriptStruct_FTextAppearance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text appearance settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextAppearance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextAppearance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Text color and opacity */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextAppearance, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "// The font to render the text with.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The font to render the text with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextAppearance, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Drop shadow offset in pixels */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Drop shadow offset in pixels" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextAppearance, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Shadow color and opacity */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Shadow color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextAppearance, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextAppearance, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextAppearance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"TextAppearance",
		sizeof(FTextAppearance),
		alignof(FTextAppearance),
		Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextAppearance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextAppearance"), sizeof(FTextAppearance), Get_Z_Construct_UScriptStruct_FTextAppearance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextAppearance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextAppearance_Hash() { return 4072190132U; }
class UScriptStruct* FWidgetAlignment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASYNCLOADINGSCREEN_API uint32 Get_Z_Construct_UScriptStruct_FWidgetAlignment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAlignment, Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("WidgetAlignment"), sizeof(FWidgetAlignment), Get_Z_Construct_UScriptStruct_FWidgetAlignment_Hash());
	}
	return Singleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FWidgetAlignment>()
{
	return FWidgetAlignment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetAlignment(FWidgetAlignment::StaticStruct, TEXT("/Script/AsyncLoadingScreen"), TEXT("WidgetAlignment"), false, nullptr, nullptr);
static struct FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFWidgetAlignment
{
	FScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFWidgetAlignment()
	{
		UScriptStruct::DeferCppStructOps<FWidgetAlignment>(FName(TEXT("WidgetAlignment")));
	}
} ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFWidgetAlignment;
	struct Z_Construct_UScriptStruct_FWidgetAlignment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Alignment for widget*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Alignment for widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAlignment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
		{ "Comment", "/** The horizontal alignment of the widget.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the widget." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAlignment, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
		{ "Comment", "/** The vertical alignment of the widget.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the widget." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAlignment, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"WidgetAlignment",
		sizeof(FWidgetAlignment),
		alignof(FWidgetAlignment),
		Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetAlignment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsyncLoadingScreen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetAlignment"), sizeof(FWidgetAlignment), Get_Z_Construct_UScriptStruct_FWidgetAlignment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetAlignment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetAlignment_Hash() { return 3801356087U; }
	void ULoadingScreenSettings::StaticRegisterNativesULoadingScreenSettings()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupLoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartupLoadingScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLoadingScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Classic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Classic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Letterbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Letterbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sidebar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sidebar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DualSidebar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DualSidebar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async Loading Screen Settings \n */" },
		{ "DisplayName", "Async Loading Screen" },
		{ "IncludePath", "LoadingScreenSettings.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Async Loading Screen Settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * The startup loading screen when you first open the game. Setup any studio logo movies here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The startup loading screen when you first open the game. Setup any studio logo movies here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen = { "StartupLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, StartupLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * The default loading screen that shows up whenever you open a new level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The default loading screen that shows up whenever you open a new level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen = { "DefaultLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, DefaultLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Classic Layout settings.\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * A border that contains loading and tip widgets can be at the bottom or top.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Classic Layout settings.\nThe Classic is a simple, generic layout and fits well with many designs.\nA border that contains loading and tip widgets can be at the bottom or top." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic = { "Classic", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, Classic), Z_Construct_UScriptStruct_FClassicLayoutSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Center Layout settings.\n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Center Layout settings.\nThe loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, Center), Z_Construct_UScriptStruct_FCenterLayoutSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Letterbox Layout settings.\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget\n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Letterbox Layout settings.\nThe Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox = { "Letterbox", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, Letterbox), Z_Construct_UScriptStruct_FLetterboxLayoutSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Sidebar Layout settings.\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Sidebar Layout settings.\nThe Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar = { "Sidebar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, Sidebar), Z_Construct_UScriptStruct_FSidebarLayoutSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Dual Sidebar Layout settings\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Dual Sidebar Layout settings\nSimilar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar = { "DualSidebar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, DualSidebar), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams = {
		&ULoadingScreenSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenSettings, 3700147940);
	template<> ASYNCLOADINGSCREEN_API UClass* StaticClass<ULoadingScreenSettings>()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenSettings(Z_Construct_UClass_ULoadingScreenSettings, &ULoadingScreenSettings::StaticClass, TEXT("/Script/AsyncLoadingScreen"), TEXT("ULoadingScreenSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
