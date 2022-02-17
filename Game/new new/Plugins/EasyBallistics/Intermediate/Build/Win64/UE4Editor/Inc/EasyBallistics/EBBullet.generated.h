// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
struct FVector;
class AActor;
class APawn;
struct FHitResult;
class UWorld;
class USceneComponent;
class UPhysicalMaterial;
class AEBBullet;
#ifdef EASYBALLISTICS_EBBullet_generated_h
#error "EBBullet.generated.h already included, missing '#pragma once' in EBBullet.h"
#endif
#define EASYBALLISTICS_EBBullet_generated_h

#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_SPARSE_DATA
#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_RPC_WRAPPERS \
	virtual void DeactivationBroadcast_Implementation(); \
	virtual void ReactivationBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator); \
	virtual bool CollisionFilter_Implementation(FHitResult HitResult) const; \
	virtual float GetSpeedOfSound_Implementation(UWorld* World, FVector Location) const; \
	virtual float GetAirDensity_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector GetWind_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector UpdateVelocity_Implementation(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const; \
	virtual void OnDeactivated_Implementation(); \
	virtual void OnNetPredictedImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void OnImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void VelocityChangeBroadcastReliable_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
	virtual void VelocityChangeBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
 \
	DECLARE_FUNCTION(execDeactivationBroadcast); \
	DECLARE_FUNCTION(execReactivationBroadcast); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execCollisionFilter); \
	DECLARE_FUNCTION(execGetSpeedOfSound); \
	DECLARE_FUNCTION(execGetAirDensity); \
	DECLARE_FUNCTION(execGetWind); \
	DECLARE_FUNCTION(execUpdateVelocity); \
	DECLARE_FUNCTION(execOnDeactivated); \
	DECLARE_FUNCTION(execOnNetPredictedImpact); \
	DECLARE_FUNCTION(execOnImpact); \
	DECLARE_FUNCTION(execVelocityChangeBroadcastReliable); \
	DECLARE_FUNCTION(execVelocityChangeBroadcast); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnWithExactVelocity);


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DeactivationBroadcast_Implementation(); \
	virtual void ReactivationBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator); \
	virtual bool CollisionFilter_Implementation(FHitResult HitResult) const; \
	virtual float GetSpeedOfSound_Implementation(UWorld* World, FVector Location) const; \
	virtual float GetAirDensity_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector GetWind_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector UpdateVelocity_Implementation(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const; \
	virtual void OnDeactivated_Implementation(); \
	virtual void OnNetPredictedImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void OnImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void VelocityChangeBroadcastReliable_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
	virtual void VelocityChangeBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
 \
	DECLARE_FUNCTION(execDeactivationBroadcast); \
	DECLARE_FUNCTION(execReactivationBroadcast); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execCollisionFilter); \
	DECLARE_FUNCTION(execGetSpeedOfSound); \
	DECLARE_FUNCTION(execGetAirDensity); \
	DECLARE_FUNCTION(execGetWind); \
	DECLARE_FUNCTION(execUpdateVelocity); \
	DECLARE_FUNCTION(execOnDeactivated); \
	DECLARE_FUNCTION(execOnNetPredictedImpact); \
	DECLARE_FUNCTION(execOnImpact); \
	DECLARE_FUNCTION(execVelocityChangeBroadcastReliable); \
	DECLARE_FUNCTION(execVelocityChangeBroadcast); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnWithExactVelocity);


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_EVENT_PARMS \
	struct EBBullet_eventCollisionFilter_Parms \
	{ \
		FHitResult HitResult; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EBBullet_eventCollisionFilter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EBBullet_eventGetAirDensity_Parms \
	{ \
		UWorld* World; \
		FVector Location; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EBBullet_eventGetAirDensity_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EBBullet_eventGetSpeedOfSound_Parms \
	{ \
		UWorld* World; \
		FVector Location; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EBBullet_eventGetSpeedOfSound_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EBBullet_eventGetWind_Parms \
	{ \
		UWorld* World; \
		FVector Location; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EBBullet_eventGetWind_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct EBBullet_eventOnImpact_Parms \
	{ \
		bool Ricochet; \
		bool PassedThrough; \
		FVector Location; \
		FVector IncomingVelocity; \
		FVector Normal; \
		FVector ExitLocation; \
		FVector ExitVelocity; \
		FVector Impulse; \
		float PenetrationDepth; \
		AActor* Actor; \
		USceneComponent* Component; \
		FName BoneName; \
		UPhysicalMaterial* PhysMaterial; \
		FHitResult HitResult; \
	}; \
	struct EBBullet_eventOnNetPredictedImpact_Parms \
	{ \
		bool Ricochet; \
		bool PassedThrough; \
		FVector Location; \
		FVector IncomingVelocity; \
		FVector Normal; \
		FVector ExitLocation; \
		FVector ExitVelocity; \
		FVector Impulse; \
		float PenetrationDepth; \
		AActor* Actor; \
		USceneComponent* Component; \
		FName BoneName; \
		UPhysicalMaterial* PhysMaterial; \
		FHitResult HitResult; \
	}; \
	struct EBBullet_eventOnTrace_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
	}; \
	struct EBBullet_eventOnTrajectoryUpdateReceived_Parms \
	{ \
		FVector Location; \
		FVector OldVelocity; \
		FVector NewVelocity; \
	}; \
	struct EBBullet_eventReactivationBroadcast_Parms \
	{ \
		FVector_NetQuantize NewLocation; \
		FVector NewVelocity; \
		AActor* BulletOwner; \
		APawn* BulletInstigator; \
	}; \
	struct EBBullet_eventUpdateVelocity_Parms \
	{ \
		UWorld* World; \
		FVector Location; \
		FVector PreviousVelocity; \
		float DeltaTime; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EBBullet_eventUpdateVelocity_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct EBBullet_eventVelocityChangeBroadcast_Parms \
	{ \
		FVector_NetQuantize NewLocation; \
		FVector NewVelocity; \
	}; \
	struct EBBullet_eventVelocityChangeBroadcastReliable_Parms \
	{ \
		FVector_NetQuantize NewLocation; \
		FVector NewVelocity; \
	};


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_CALLBACK_WRAPPERS
#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEBBullet(); \
	friend struct Z_Construct_UClass_AEBBullet_Statics; \
public: \
	DECLARE_CLASS(AEBBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(AEBBullet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		RandomStream, \
		NETFIELD_REP_END=RandomStream	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAEBBullet(); \
	friend struct Z_Construct_UClass_AEBBullet_Statics; \
public: \
	DECLARE_CLASS(AEBBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(AEBBullet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		RandomStream, \
		NETFIELD_REP_END=RandomStream	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEBBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEBBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEBBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEBBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEBBullet(AEBBullet&&); \
	NO_API AEBBullet(const AEBBullet&); \
public:


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEBBullet(AEBBullet&&); \
	NO_API AEBBullet(const AEBBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEBBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEBBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEBBullet)


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pooled() { return STRUCT_OFFSET(AEBBullet, Pooled); }


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_26_PROLOG \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_EVENT_PARMS


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_SPARSE_DATA \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_RPC_WRAPPERS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_INCLASS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_SPARSE_DATA \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYBALLISTICS_API UClass* StaticClass<class AEBBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h


#define FOREACH_ENUM_EEBATMOSPHERETYPE(op) \
	op(EEBAtmosphereType::AT_Constant) \
	op(EEBAtmosphereType::AT_Curve) \
	op(EEBAtmosphereType::AT_Earth) 

enum class EEBAtmosphereType : uint8;
template<> EASYBALLISTICS_API UEnum* StaticEnum<EEBAtmosphereType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
