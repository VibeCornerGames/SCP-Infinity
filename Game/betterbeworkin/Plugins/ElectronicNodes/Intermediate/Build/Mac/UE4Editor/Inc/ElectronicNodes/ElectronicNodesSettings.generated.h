// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICNODES_ElectronicNodesSettings_generated_h
#error "ElectronicNodesSettings.generated.h already included, missing '#pragma once' in ElectronicNodesSettings.h"
#endif
#define ELECTRONICNODES_ElectronicNodesSettings_generated_h

#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_SPARSE_DATA
#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_RPC_WRAPPERS
#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElectronicNodesSettings(); \
	friend struct Z_Construct_UClass_UElectronicNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UElectronicNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectronicNodes"), NO_API) \
	DECLARE_SERIALIZER(UElectronicNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUElectronicNodesSettings(); \
	friend struct Z_Construct_UClass_UElectronicNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UElectronicNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectronicNodes"), NO_API) \
	DECLARE_SERIALIZER(UElectronicNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElectronicNodesSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElectronicNodesSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectronicNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectronicNodesSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElectronicNodesSettings(UElectronicNodesSettings&&); \
	NO_API UElectronicNodesSettings(const UElectronicNodesSettings&); \
public:


#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElectronicNodesSettings(UElectronicNodesSettings&&); \
	NO_API UElectronicNodesSettings(const UElectronicNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectronicNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectronicNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElectronicNodesSettings)


#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_48_PROLOG
#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_SPARSE_DATA \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_RPC_WRAPPERS \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_INCLASS \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_SPARSE_DATA \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICNODES_API UClass* StaticClass<class UElectronicNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h


#define FOREACH_ENUM_ESELECTIONRULE(op) \
	op(ESelectionRule::Near) \
	op(ESelectionRule::Far) 

enum class ESelectionRule : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<ESelectionRule>();

#define FOREACH_ENUM_EBUBBLEDISPLAYRULE(op) \
	op(EBubbleDisplayRule::Always) \
	op(EBubbleDisplayRule::DisplayOnSelection) \
	op(EBubbleDisplayRule::MoveOnSelection) 

enum class EBubbleDisplayRule : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleDisplayRule>();

#define FOREACH_ENUM_EWIREPRIORITY(op) \
	op(EWirePriority::None) \
	op(EWirePriority::Node) \
	op(EWirePriority::Pin) 

enum class EWirePriority : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWirePriority>();

#define FOREACH_ENUM_EWIREALIGNMENT(op) \
	op(EWireAlignment::Right) \
	op(EWireAlignment::Left) 

enum class EWireAlignment : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireAlignment>();

#define FOREACH_ENUM_EWIRESTYLE(op) \
	op(EWireStyle::Default) \
	op(EWireStyle::Manhattan) \
	op(EWireStyle::Subway) 

enum class EWireStyle : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
