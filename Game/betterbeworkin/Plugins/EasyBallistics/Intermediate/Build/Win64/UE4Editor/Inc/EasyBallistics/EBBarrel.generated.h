// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
struct FVector;
class AEBBullet;
class AActor;
enum class EFireMode : uint8;
#ifdef EASYBALLISTICS_EBBarrel_generated_h
#error "EBBarrel.generated.h already included, missing '#pragma once' in EBBarrel.h"
#endif
#define EASYBALLISTICS_EBBarrel_generated_h

#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_107_DELEGATE \
static inline void FReadyToShoot_DelegateWrapper(const FMulticastScriptDelegate& ReadyToShoot) \
{ \
	ReadyToShoot.ProcessMulticastDelegate<UObject>(NULL); \
}


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_103_DELEGATE \
static inline void FAmmoDepleted_DelegateWrapper(const FMulticastScriptDelegate& AmmoDepleted) \
{ \
	AmmoDepleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_99_DELEGATE \
static inline void FShotFired_DelegateWrapper(const FMulticastScriptDelegate& ShotFired) \
{ \
	ShotFired.ProcessMulticastDelegate<UObject>(NULL); \
}


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_95_DELEGATE \
static inline void FBeforeShotFired_DelegateWrapper(const FMulticastScriptDelegate& BeforeShotFired) \
{ \
	BeforeShotFired.ProcessMulticastDelegate<UObject>(NULL); \
}


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_SPARSE_DATA
#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_RPC_WRAPPERS \
	virtual void ShotFiredMulticast_Implementation(); \
	virtual bool ShootRepCSA_Validate(bool , FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ShootRepCSA_Implementation(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual bool ShootRep_Validate(bool ); \
	virtual void ShootRep_Implementation(bool Trigger); \
	virtual bool ClientAim_Validate(FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ClientAim_Implementation(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual void ApplyRecoil_Implementation(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse); \
	virtual void InitialBulletTransform_Implementation(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection); \
	virtual bool GatlingSpool_Validate(bool ); \
	virtual void GatlingSpool_Implementation(bool Spool); \
	virtual bool SwitchFireMode_Validate(EFireMode ); \
	virtual void SwitchFireMode_Implementation(EFireMode NewFireMode); \
	virtual bool UnloadChambered_Validate(bool ); \
	virtual void UnloadChambered_Implementation(bool ManualCharge); \
	virtual bool Charge_Validate(); \
	virtual void Charge_Implementation(); \
 \
	DECLARE_FUNCTION(execShotFiredMulticast); \
	DECLARE_FUNCTION(execShootRepCSA); \
	DECLARE_FUNCTION(execShootRep); \
	DECLARE_FUNCTION(execClientAim); \
	DECLARE_FUNCTION(execApplyRecoil); \
	DECLARE_FUNCTION(execInitialBulletTransform); \
	DECLARE_FUNCTION(execCalculateAimDirectionFromLocation); \
	DECLARE_FUNCTION(execCalculateAimDirection); \
	DECLARE_FUNCTION(execPredictHitFromLocation); \
	DECLARE_FUNCTION(execPredictHit); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGatlingSpool); \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execUnloadChambered); \
	DECLARE_FUNCTION(execCharge); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execGetAmmoCount); \
	DECLARE_FUNCTION(execNextBullet);


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShotFiredMulticast_Implementation(); \
	virtual bool ShootRepCSA_Validate(bool , FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ShootRepCSA_Implementation(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual bool ShootRep_Validate(bool ); \
	virtual void ShootRep_Implementation(bool Trigger); \
	virtual bool ClientAim_Validate(FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ClientAim_Implementation(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual void ApplyRecoil_Implementation(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse); \
	virtual void InitialBulletTransform_Implementation(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection); \
	virtual bool GatlingSpool_Validate(bool ); \
	virtual void GatlingSpool_Implementation(bool Spool); \
	virtual bool SwitchFireMode_Validate(EFireMode ); \
	virtual void SwitchFireMode_Implementation(EFireMode NewFireMode); \
	virtual bool UnloadChambered_Validate(bool ); \
	virtual void UnloadChambered_Implementation(bool ManualCharge); \
	virtual bool Charge_Validate(); \
	virtual void Charge_Implementation(); \
 \
	DECLARE_FUNCTION(execShotFiredMulticast); \
	DECLARE_FUNCTION(execShootRepCSA); \
	DECLARE_FUNCTION(execShootRep); \
	DECLARE_FUNCTION(execClientAim); \
	DECLARE_FUNCTION(execApplyRecoil); \
	DECLARE_FUNCTION(execInitialBulletTransform); \
	DECLARE_FUNCTION(execCalculateAimDirectionFromLocation); \
	DECLARE_FUNCTION(execCalculateAimDirection); \
	DECLARE_FUNCTION(execPredictHitFromLocation); \
	DECLARE_FUNCTION(execPredictHit); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGatlingSpool); \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execUnloadChambered); \
	DECLARE_FUNCTION(execCharge); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execGetAmmoCount); \
	DECLARE_FUNCTION(execNextBullet);


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_EVENT_PARMS \
	struct EBBarrel_eventApplyRecoil_Parms \
	{ \
		UPrimitiveComponent* Component; \
		FVector InLocation; \
		FVector Impulse; \
	}; \
	struct EBBarrel_eventClientAim_Parms \
	{ \
		FVector_NetQuantize NewLocation; \
		FVector_NetQuantizeNormal NewAim; \
	}; \
	struct EBBarrel_eventGatlingSpool_Parms \
	{ \
		bool Spool; \
	}; \
	struct EBBarrel_eventInitialBulletTransform_Parms \
	{ \
		FVector InLocation; \
		FVector InDirection; \
		FVector OutLocation; \
		FVector OutDirection; \
	}; \
	struct EBBarrel_eventShootRep_Parms \
	{ \
		bool Trigger; \
	}; \
	struct EBBarrel_eventShootRepCSA_Parms \
	{ \
		bool Trigger; \
		FVector_NetQuantize NewLocation; \
		FVector_NetQuantizeNormal NewAim; \
	}; \
	struct EBBarrel_eventSwitchFireMode_Parms \
	{ \
		EFireMode NewFireMode; \
	}; \
	struct EBBarrel_eventUnloadChambered_Parms \
	{ \
		bool ManualCharge; \
	};


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_CALLBACK_WRAPPERS
#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEBBarrel(); \
	friend struct Z_Construct_UClass_UEBBarrel_Statics; \
public: \
	DECLARE_CLASS(UEBBarrel, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(UEBBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FireMode=NETFIELD_REP_START, \
		ShootingBlocked, \
		Ammo, \
		CycleAmmoCount, \
		CycleAmmoPos, \
		ChamberedBullet, \
		Shooting, \
		Spooling, \
		NETFIELD_REP_END=Spooling	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUEBBarrel(); \
	friend struct Z_Construct_UClass_UEBBarrel_Statics; \
public: \
	DECLARE_CLASS(UEBBarrel, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(UEBBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FireMode=NETFIELD_REP_START, \
		ShootingBlocked, \
		Ammo, \
		CycleAmmoCount, \
		CycleAmmoPos, \
		ChamberedBullet, \
		Shooting, \
		Spooling, \
		NETFIELD_REP_END=Spooling	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEBBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEBBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEBBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEBBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEBBarrel(UEBBarrel&&); \
	NO_API UEBBarrel(const UEBBarrel&); \
public:


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEBBarrel(UEBBarrel&&); \
	NO_API UEBBarrel(const UEBBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEBBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEBBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEBBarrel)


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_PRIVATE_PROPERTY_OFFSET
#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_21_PROLOG \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_EVENT_PARMS


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_PRIVATE_PROPERTY_OFFSET \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_SPARSE_DATA \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_RPC_WRAPPERS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_CALLBACK_WRAPPERS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_INCLASS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_PRIVATE_PROPERTY_OFFSET \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_SPARSE_DATA \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_CALLBACK_WRAPPERS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_INCLASS_NO_PURE_DECLS \
	betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYBALLISTICS_API UClass* StaticClass<class UEBBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID betterbeworkin_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::FM_Auto) \
	op(EFireMode::FM_Semiauto) \
	op(EFireMode::FM_Burst) \
	op(EFireMode::FM_InterBurst) \
	op(EFireMode::FM_Manual) \
	op(EFireMode::FM_Slamfire) \
	op(EFireMode::FM_Gatling) 

enum class EFireMode : uint8;
template<> EASYBALLISTICS_API UEnum* StaticEnum<EFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
