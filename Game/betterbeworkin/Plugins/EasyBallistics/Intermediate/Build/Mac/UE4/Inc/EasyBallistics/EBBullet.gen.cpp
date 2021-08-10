// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyBallistics/Public/EBBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBBullet() {}
// Cross Module References
	EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType();
	UPackage* Z_Construct_UPackage__Script_EasyBallistics();
	EASYBALLISTICS_API UClass* Z_Construct_UClass_AEBBullet_NoRegister();
	EASYBALLISTICS_API UClass* Z_Construct_UClass_AEBBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType();
	EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* EEBAtmosphereType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType, Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EEBAtmosphereType"));
		}
		return Singleton;
	}
	template<> EASYBALLISTICS_API UEnum* StaticEnum<EEBAtmosphereType>()
	{
		return EEBAtmosphereType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEBAtmosphereType(EEBAtmosphereType_StaticEnum, TEXT("/Script/EasyBallistics"), TEXT("EEBAtmosphereType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Hash() { return 2808567197U; }
	UEnum* Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyBallistics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEBAtmosphereType"), 0, Get_Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEBAtmosphereType::AT_Constant", (int64)EEBAtmosphereType::AT_Constant },
				{ "EEBAtmosphereType::AT_Curve", (int64)EEBAtmosphereType::AT_Curve },
				{ "EEBAtmosphereType::AT_Earth", (int64)EEBAtmosphereType::AT_Earth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_Constant.DisplayName", "Constant" },
				{ "AT_Constant.Name", "EEBAtmosphereType::AT_Constant" },
				{ "AT_Curve.DisplayName", "Density Curve" },
				{ "AT_Curve.Name", "EEBAtmosphereType::AT_Curve" },
				{ "AT_Earth.DisplayName", "Earth/IGL" },
				{ "AT_Earth.Name", "EEBAtmosphereType::AT_Earth" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBBullet.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyBallistics,
				nullptr,
				"EEBAtmosphereType",
				"EEBAtmosphereType",
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
	DEFINE_FUNCTION(AEBBullet::execDeactivationBroadcast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivationBroadcast_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execReactivationBroadcast)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_GET_OBJECT(AActor,Z_Param_BulletOwner);
		P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReactivationBroadcast_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity,Z_Param_BulletOwner,Z_Param_BulletInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deactivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execCollisionFilter)
	{
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CollisionFilter_Implementation(Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execGetSpeedOfSound)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeedOfSound_Implementation(Z_Param_World,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execGetAirDensity)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAirDensity_Implementation(Z_Param_World,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execGetWind)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWind_Implementation(Z_Param_World,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execUpdateVelocity)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_PreviousVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->UpdateVelocity_Implementation(Z_Param_World,Z_Param_Location,Z_Param_PreviousVelocity,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execOnDeactivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeactivated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execOnNetPredictedImpact)
	{
		P_GET_UBOOL(Z_Param_Ricochet);
		P_GET_UBOOL(Z_Param_PassedThrough);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_IncomingVelocity);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_ExitLocation);
		P_GET_STRUCT(FVector,Z_Param_ExitVelocity);
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PenetrationDepth);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetPredictedImpact_Implementation(Z_Param_Ricochet,Z_Param_PassedThrough,Z_Param_Location,Z_Param_IncomingVelocity,Z_Param_Normal,Z_Param_ExitLocation,Z_Param_ExitVelocity,Z_Param_Impulse,Z_Param_PenetrationDepth,Z_Param_Actor,Z_Param_Component,Z_Param_BoneName,Z_Param_PhysMaterial,Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execOnImpact)
	{
		P_GET_UBOOL(Z_Param_Ricochet);
		P_GET_UBOOL(Z_Param_PassedThrough);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_IncomingVelocity);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_STRUCT(FVector,Z_Param_ExitLocation);
		P_GET_STRUCT(FVector,Z_Param_ExitVelocity);
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PenetrationDepth);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImpact_Implementation(Z_Param_Ricochet,Z_Param_PassedThrough,Z_Param_Location,Z_Param_IncomingVelocity,Z_Param_Normal,Z_Param_ExitLocation,Z_Param_ExitVelocity,Z_Param_Impulse,Z_Param_PenetrationDepth,Z_Param_Actor,Z_Param_Component,Z_Param_BoneName,Z_Param_PhysMaterial,Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execVelocityChangeBroadcastReliable)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VelocityChangeBroadcastReliable_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execVelocityChangeBroadcast)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VelocityChangeBroadcast_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execSpawn)
	{
		P_GET_OBJECT(UClass,Z_Param_BulletClass);
		P_GET_OBJECT(AActor,Z_Param_BulletOwner);
		P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
		P_GET_STRUCT(FVector,Z_Param_BulletLocation);
		P_GET_STRUCT(FVector,Z_Param_BulletVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		AEBBullet::Spawn(Z_Param_BulletClass,Z_Param_BulletOwner,Z_Param_BulletInstigator,Z_Param_BulletLocation,Z_Param_BulletVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEBBullet::execSpawnWithExactVelocity)
	{
		P_GET_OBJECT(UClass,Z_Param_BulletClass);
		P_GET_OBJECT(AActor,Z_Param_BulletOwner);
		P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
		P_GET_STRUCT(FVector,Z_Param_BulletLocation);
		P_GET_STRUCT(FVector,Z_Param_BulletVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		AEBBullet::SpawnWithExactVelocity(Z_Param_BulletClass,Z_Param_BulletOwner,Z_Param_BulletInstigator,Z_Param_BulletLocation,Z_Param_BulletVelocity);
		P_NATIVE_END;
	}
	static FName NAME_AEBBullet_CollisionFilter = FName(TEXT("CollisionFilter"));
	bool AEBBullet::CollisionFilter(FHitResult HitResult) const
	{
		EBBullet_eventCollisionFilter_Parms Parms;
		Parms.HitResult=HitResult;
		const_cast<AEBBullet*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEBBullet_CollisionFilter),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AEBBullet_DeactivationBroadcast = FName(TEXT("DeactivationBroadcast"));
	void AEBBullet::DeactivationBroadcast()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_DeactivationBroadcast),NULL);
	}
	static FName NAME_AEBBullet_GetAirDensity = FName(TEXT("GetAirDensity"));
	float AEBBullet::GetAirDensity(UWorld* World, FVector Location) const
	{
		EBBullet_eventGetAirDensity_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEBBullet_GetAirDensity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEBBullet_GetSpeedOfSound = FName(TEXT("GetSpeedOfSound"));
	float AEBBullet::GetSpeedOfSound(UWorld* World, FVector Location) const
	{
		EBBullet_eventGetSpeedOfSound_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEBBullet_GetSpeedOfSound),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEBBullet_GetWind = FName(TEXT("GetWind"));
	FVector AEBBullet::GetWind(UWorld* World, FVector Location) const
	{
		EBBullet_eventGetWind_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEBBullet_GetWind),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEBBullet_OnDeactivated = FName(TEXT("OnDeactivated"));
	void AEBBullet::OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_OnDeactivated),NULL);
	}
	static FName NAME_AEBBullet_OnImpact = FName(TEXT("OnImpact"));
	void AEBBullet::OnImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult)
	{
		EBBullet_eventOnImpact_Parms Parms;
		Parms.Ricochet=Ricochet ? true : false;
		Parms.PassedThrough=PassedThrough ? true : false;
		Parms.Location=Location;
		Parms.IncomingVelocity=IncomingVelocity;
		Parms.Normal=Normal;
		Parms.ExitLocation=ExitLocation;
		Parms.ExitVelocity=ExitVelocity;
		Parms.Impulse=Impulse;
		Parms.PenetrationDepth=PenetrationDepth;
		Parms.Actor=Actor;
		Parms.Component=Component;
		Parms.BoneName=BoneName;
		Parms.PhysMaterial=PhysMaterial;
		Parms.HitResult=HitResult;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_OnImpact),&Parms);
	}
	static FName NAME_AEBBullet_OnNetPredictedImpact = FName(TEXT("OnNetPredictedImpact"));
	void AEBBullet::OnNetPredictedImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult)
	{
		EBBullet_eventOnNetPredictedImpact_Parms Parms;
		Parms.Ricochet=Ricochet ? true : false;
		Parms.PassedThrough=PassedThrough ? true : false;
		Parms.Location=Location;
		Parms.IncomingVelocity=IncomingVelocity;
		Parms.Normal=Normal;
		Parms.ExitLocation=ExitLocation;
		Parms.ExitVelocity=ExitVelocity;
		Parms.Impulse=Impulse;
		Parms.PenetrationDepth=PenetrationDepth;
		Parms.Actor=Actor;
		Parms.Component=Component;
		Parms.BoneName=BoneName;
		Parms.PhysMaterial=PhysMaterial;
		Parms.HitResult=HitResult;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_OnNetPredictedImpact),&Parms);
	}
	static FName NAME_AEBBullet_OnTrace = FName(TEXT("OnTrace"));
	void AEBBullet::OnTrace(FVector StartLocation, FVector EndLocation)
	{
		EBBullet_eventOnTrace_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_OnTrace),&Parms);
	}
	static FName NAME_AEBBullet_OnTrajectoryUpdateReceived = FName(TEXT("OnTrajectoryUpdateReceived"));
	void AEBBullet::OnTrajectoryUpdateReceived(FVector Location, FVector OldVelocity, FVector NewVelocity)
	{
		EBBullet_eventOnTrajectoryUpdateReceived_Parms Parms;
		Parms.Location=Location;
		Parms.OldVelocity=OldVelocity;
		Parms.NewVelocity=NewVelocity;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_OnTrajectoryUpdateReceived),&Parms);
	}
	static FName NAME_AEBBullet_ReactivationBroadcast = FName(TEXT("ReactivationBroadcast"));
	void AEBBullet::ReactivationBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator)
	{
		EBBullet_eventReactivationBroadcast_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.NewVelocity=NewVelocity;
		Parms.BulletOwner=BulletOwner;
		Parms.BulletInstigator=BulletInstigator;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_ReactivationBroadcast),&Parms);
	}
	static FName NAME_AEBBullet_UpdateVelocity = FName(TEXT("UpdateVelocity"));
	FVector AEBBullet::UpdateVelocity(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const
	{
		EBBullet_eventUpdateVelocity_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		Parms.PreviousVelocity=PreviousVelocity;
		Parms.DeltaTime=DeltaTime;
		const_cast<AEBBullet*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEBBullet_UpdateVelocity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEBBullet_VelocityChangeBroadcast = FName(TEXT("VelocityChangeBroadcast"));
	void AEBBullet::VelocityChangeBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity)
	{
		EBBullet_eventVelocityChangeBroadcast_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.NewVelocity=NewVelocity;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_VelocityChangeBroadcast),&Parms);
	}
	static FName NAME_AEBBullet_VelocityChangeBroadcastReliable = FName(TEXT("VelocityChangeBroadcastReliable"));
	void AEBBullet::VelocityChangeBroadcastReliable(FVector_NetQuantize NewLocation, FVector NewVelocity)
	{
		EBBullet_eventVelocityChangeBroadcastReliable_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.NewVelocity=NewVelocity;
		ProcessEvent(FindFunctionChecked(NAME_AEBBullet_VelocityChangeBroadcastReliable),&Parms);
	}
	void AEBBullet::StaticRegisterNativesAEBBullet()
	{
		UClass* Class = AEBBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollisionFilter", &AEBBullet::execCollisionFilter },
			{ "Deactivate", &AEBBullet::execDeactivate },
			{ "DeactivationBroadcast", &AEBBullet::execDeactivationBroadcast },
			{ "GetAirDensity", &AEBBullet::execGetAirDensity },
			{ "GetSpeedOfSound", &AEBBullet::execGetSpeedOfSound },
			{ "GetWind", &AEBBullet::execGetWind },
			{ "OnDeactivated", &AEBBullet::execOnDeactivated },
			{ "OnImpact", &AEBBullet::execOnImpact },
			{ "OnNetPredictedImpact", &AEBBullet::execOnNetPredictedImpact },
			{ "ReactivationBroadcast", &AEBBullet::execReactivationBroadcast },
			{ "Spawn", &AEBBullet::execSpawn },
			{ "SpawnWithExactVelocity", &AEBBullet::execSpawnWithExactVelocity },
			{ "UpdateVelocity", &AEBBullet::execUpdateVelocity },
			{ "VelocityChangeBroadcast", &AEBBullet::execVelocityChangeBroadcast },
			{ "VelocityChangeBroadcastReliable", &AEBBullet::execVelocityChangeBroadcastReliable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventCollisionFilter_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EBBullet_eventCollisionFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EBBullet_eventCollisionFilter_Parms), &Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "CollisionFilter", nullptr, nullptr, sizeof(EBBullet_eventCollisionFilter_Parms), Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_CollisionFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Pooling" },
		{ "Comment", "//pooling\n" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "pooling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "DeactivationBroadcast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_DeactivationBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetAirDensity", nullptr, nullptr, sizeof(EBBullet_eventGetAirDensity_Parms), Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_GetAirDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetSpeedOfSound", nullptr, nullptr, sizeof(EBBullet_eventGetSpeedOfSound_Parms), Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_GetSpeedOfSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_GetWind_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_GetWind_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetWind", nullptr, nullptr, sizeof(EBBullet_eventGetWind_Parms), Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_GetWind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetWind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_GetWind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_GetWind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Activation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_OnImpact_Statics
	{
		static void NewProp_Ricochet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ricochet;
		static void NewProp_PassedThrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassedThrough;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet_SetBit(void* Obj)
	{
		((EBBullet_eventOnImpact_Parms*)Obj)->Ricochet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet = { "Ricochet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EBBullet_eventOnImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough_SetBit(void* Obj)
	{
		((EBBullet_eventOnImpact_Parms*)Obj)->PassedThrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough = { "PassedThrough", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EBBullet_eventOnImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitVelocity = { "ExitVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, ExitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, PenetrationDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_IncomingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PenetrationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnImpact", nullptr, nullptr, sizeof(EBBullet_eventOnImpact_Parms), Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_OnImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_OnImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics
	{
		static void NewProp_Ricochet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ricochet;
		static void NewProp_PassedThrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassedThrough;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet_SetBit(void* Obj)
	{
		((EBBullet_eventOnNetPredictedImpact_Parms*)Obj)->Ricochet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet = { "Ricochet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EBBullet_eventOnNetPredictedImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough_SetBit(void* Obj)
	{
		((EBBullet_eventOnNetPredictedImpact_Parms*)Obj)->PassedThrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough = { "PassedThrough", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EBBullet_eventOnNetPredictedImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitVelocity = { "ExitVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, ExitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, PenetrationDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_IncomingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PenetrationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnNetPredictedImpact", nullptr, nullptr, sizeof(EBBullet_eventOnNetPredictedImpact_Parms), Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_OnTrace_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnTrace_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_EndLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnTrace", nullptr, nullptr, sizeof(EBBullet_eventOnTrace_Parms), Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_OnTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_OnTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_OldVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Remote" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnTrajectoryUpdateReceived", nullptr, nullptr, sizeof(EBBullet_eventOnTrajectoryUpdateReceived_Parms), Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "ReactivationBroadcast", nullptr, nullptr, sizeof(EBBullet_eventReactivationBroadcast_Parms), Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_ReactivationBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_Spawn_Statics
	{
		struct EBBullet_eventSpawn_Parms
		{
			TSubclassOf<AEBBullet>  BulletClass;
			AActor* BulletOwner;
			APawn* BulletInstigator;
			FVector BulletLocation;
			FVector BulletVelocity;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletClass), Z_Construct_UClass_AEBBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletLocation = { "BulletLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletVelocity = { "BulletVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Spawn" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "Spawn", nullptr, nullptr, sizeof(EBBullet_eventSpawn_Parms), Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics
	{
		struct EBBullet_eventSpawnWithExactVelocity_Parms
		{
			TSubclassOf<AEBBullet>  BulletClass;
			AActor* BulletOwner;
			APawn* BulletInstigator;
			FVector BulletLocation;
			FVector BulletVelocity;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletClass), Z_Construct_UClass_AEBBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletLocation = { "BulletLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletVelocity = { "BulletVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Spawn" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "SpawnWithExactVelocity", nullptr, nullptr, sizeof(EBBullet_eventSpawnWithExactVelocity_Parms), Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_PreviousVelocity = { "PreviousVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, PreviousVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_PreviousVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "UpdateVelocity", nullptr, nullptr, sizeof(EBBullet_eventUpdateVelocity_Parms), Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_UpdateVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcast_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "VelocityChangeBroadcast", nullptr, nullptr, sizeof(EBBullet_eventVelocityChangeBroadcast_Parms), Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcastReliable_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcastReliable_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "VelocityChangeBroadcastReliable", nullptr, nullptr, sizeof(EBBullet_eventVelocityChangeBroadcastReliable_Parms), Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEBBullet_NoRegister()
	{
		return AEBBullet::StaticClass();
	}
	struct Z_Construct_UClass_AEBBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSafe_MetaData[];
#endif
		static void NewProp_OwnerSafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OwnerSafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[];
#endif
		static void NewProp_DebugEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTrailTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugTrailTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTrailWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugTrailWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTrailColorFast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugTrailColorFast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTrailColorSlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugTrailColorSlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPooling_MetaData[];
#endif
		static void NewProp_DebugPooling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugPooling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AtmosphereType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphereType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AtmosphereType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevelSpeedOfSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevelSpeedOfSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirDensityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirDensityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundVariesWithAltitude_MetaData[];
#endif
		static void NewProp_SpeedOfSoundVariesWithAltitude_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpeedOfSoundVariesWithAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpeedOfSoundCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirPressure_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirPressure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirTemperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemperatureLapseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TemperatureLapseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TropopauseAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TropopauseAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificGasConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecificGasConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldCenterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldCenterLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalAltitude_MetaData[];
#endif
		static void NewProp_SphericalAltitude_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SphericalAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeaLevelRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeaLevelRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideGravity_MetaData[];
#endif
		static void NewProp_OverrideGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeLaunch_MetaData[];
#endif
		static void NewProp_SafeLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SafeLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoreAttachParent_MetaData[];
#endif
		static void NewProp_SafeLaunchIgnoreAttachParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SafeLaunchIgnoreAttachParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoreAllAttached_MetaData[];
#endif
		static void NewProp_SafeLaunchIgnoreAllAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SafeLaunchIgnoreAllAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafeDelay;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SafeLaunchIgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SafeLaunchIgnoredActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shotgun_MetaData[];
#endif
		static void NewProp_Shotgun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shotgun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ShotCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotVelocitySpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotVelocitySpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FormFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachDragCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachDragCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrazingAngleExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrazingAngleExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalizationGrazing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalizationGrazing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationEntryAngleSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationEntryAngleSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationExitAngleSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationExitAngleSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetProbabilityGrazing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetProbabilityGrazing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RicochetSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RicochetSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedControlsRicochetProbability_MetaData[];
#endif
		static void NewProp_SpeedControlsRicochetProbability_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpeedControlsRicochetProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddImpulse_MetaData[];
#endif
		static void NewProp_AddImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPenTraceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPenTraceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPenTraceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialResponseMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialResponseMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDensityControlsPenetrationDepth_MetaData[];
#endif
		static void NewProp_MaterialDensityControlsPenetrationDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaterialDensityControlsPenetrationDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRestitutionControlsRicochet_MetaData[];
#endif
		static void NewProp_MaterialRestitutionControlsRicochet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaterialRestitutionControlsRicochet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReliableReplication_MetaData[];
#endif
		static void NewProp_ReliableReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReliableReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowComponentCollisions_MetaData[];
#endif
		static void NewProp_AllowComponentCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowComponentCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[];
#endif
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DespawnVelocity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoFirstStepImmediately_MetaData[];
#endif
		static void NewProp_DoFirstStepImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoFirstStepImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomFirstStepDelta_MetaData[];
#endif
		static void NewProp_RandomFirstStepDelta_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomFirstStepDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedStep_MetaData[];
#endif
		static void NewProp_FixedStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixedStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedStepSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedStepSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxTracesPerStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Retrace_MetaData[];
#endif
		static void NewProp_Retrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Retrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetraceOnAnotherChannel_MetaData[];
#endif
		static void NewProp_RetraceOnAnotherChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetraceOnAnotherChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RetraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateActor_MetaData[];
#endif
		static void NewProp_RotateActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateRandomRoll_MetaData[];
#endif
		static void NewProp_RotateRandomRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateRandomRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnablePooling_MetaData[];
#endif
		static void NewProp_EnablePooling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnablePooling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxPoolSize;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Pooled_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pooled_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pooled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEBBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEBBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEBBullet_CollisionFilter, "CollisionFilter" }, // 1444821504
		{ &Z_Construct_UFunction_AEBBullet_Deactivate, "Deactivate" }, // 2210532774
		{ &Z_Construct_UFunction_AEBBullet_DeactivationBroadcast, "DeactivationBroadcast" }, // 4234126395
		{ &Z_Construct_UFunction_AEBBullet_GetAirDensity, "GetAirDensity" }, // 3004665261
		{ &Z_Construct_UFunction_AEBBullet_GetSpeedOfSound, "GetSpeedOfSound" }, // 2151940907
		{ &Z_Construct_UFunction_AEBBullet_GetWind, "GetWind" }, // 1932724630
		{ &Z_Construct_UFunction_AEBBullet_OnDeactivated, "OnDeactivated" }, // 1412254025
		{ &Z_Construct_UFunction_AEBBullet_OnImpact, "OnImpact" }, // 2426144213
		{ &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact, "OnNetPredictedImpact" }, // 2652937591
		{ &Z_Construct_UFunction_AEBBullet_OnTrace, "OnTrace" }, // 3781553267
		{ &Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived, "OnTrajectoryUpdateReceived" }, // 2354404852
		{ &Z_Construct_UFunction_AEBBullet_ReactivationBroadcast, "ReactivationBroadcast" }, // 2707409970
		{ &Z_Construct_UFunction_AEBBullet_Spawn, "Spawn" }, // 1799999555
		{ &Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity, "SpawnWithExactVelocity" }, // 262278721
		{ &Z_Construct_UFunction_AEBBullet_UpdateVelocity, "UpdateVelocity" }, // 493782141
		{ &Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast, "VelocityChangeBroadcast" }, // 3301981015
		{ &Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable, "VelocityChangeBroadcastReliable" }, // 3420872747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EBBullet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->OwnerSafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe = { "OwnerSafe", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->DebugEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime = { "DebugTrailTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DebugTrailTime), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth = { "DebugTrailWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DebugTrailWidth), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast = { "DebugTrailColorFast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DebugTrailColorFast), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow = { "DebugTrailColorSlow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DebugTrailColorSlow), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->DebugPooling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling = { "DebugPooling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind = { "Wind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Wind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Select atmosphere model" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType = { "AtmosphereType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, AtmosphereType), Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Air Density at sea level - in KG/m^3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity = { "SeaLevelAirDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirDensity), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "in cm/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound = { "SeaLevelSpeedOfSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SeaLevelSpeedOfSound), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Used for Density Curve atmosphere model" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve = { "AirDensityCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, AirDensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SpeedOfSoundVariesWithAltitude = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude = { "SpeedOfSoundVariesWithAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve = { "SpeedOfSoundCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SpeedOfSoundCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale = { "WorldScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, WorldScale), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Atmosphere pressure at 0,0,0 - in millibars" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure = { "SeaLevelAirPressure", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirPressure), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Atmosphere Temperature at 0,0,0 - in degrees C" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature = { "SeaLevelAirTemperature", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirTemperature), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Temperature Decrease With Altitude, degrees per meter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate = { "TemperatureLapseRate", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, TemperatureLapseRate), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Altitude at which temperature stops decreasing, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude = { "TropopauseAltitude", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, TropopauseAltitude), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Specific Gas Constant, dry air = 287.058" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant = { "SpecificGasConstant", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SpecificGasConstant), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "World Origin Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation = { "WorldCenterLocation", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, WorldCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Use spherical planet model to get altitude" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SphericalAltitude = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude = { "SphericalAltitude", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius_MetaData[] = {
		{ "Category", "World" },
		{ "EditCondition", "SphericalAltitude" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Planet radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius = { "SeaLevelRadius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SeaLevelRadius), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->OverrideGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity = { "OverrideGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SafeLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch = { "SafeLaunch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SafeLaunchIgnoreAttachParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent = { "SafeLaunchIgnoreAttachParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunchIgnoreAttachParent" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SafeLaunchIgnoreAllAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached = { "SafeLaunchIgnoreAllAttached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay = { "SafeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SafeDelay), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_Inner = { "SafeLaunchIgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors = { "SafeLaunchIgnoredActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, SafeLaunchIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->Shotgun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun = { "Shotgun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount = { "ShotCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, ShotCount), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread = { "ShotSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, ShotSpread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread = { "ShotVelocitySpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, ShotVelocitySpread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin = { "MuzzleVelocityMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MuzzleVelocityMin), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax = { "MuzzleVelocityMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MuzzleVelocityMax), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Spread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Mass), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter = { "Diameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Diameter), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor = { "FormFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, FormFactor), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve = { "MachDragCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MachDragCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent = { "GrazingAngleExponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, GrazingAngleExponent), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration = { "MinPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MinPenetration), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration = { "MaxPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MaxPenetration), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization = { "PenetrationNormalization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, PenetrationNormalization), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing = { "PenetrationNormalizationGrazing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, PenetrationNormalizationGrazing), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread = { "PenetrationEntryAngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, PenetrationEntryAngleSpread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread = { "PenetrationExitAngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, PenetrationExitAngleSpread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability = { "RicochetProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RicochetProbability), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing = { "RicochetProbabilityGrazing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RicochetProbabilityGrazing), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution = { "RicochetRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RicochetRestitution), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction = { "RicochetFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RicochetFriction), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread = { "RicochetSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RicochetSpread), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->SpeedControlsRicochetProbability = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability = { "SpeedControlsRicochetProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->AddImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse = { "AddImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier = { "ImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, ImpulseMultiplier), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType = { "DefaultPenTraceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DefaultPenTraceType), Z_Construct_UEnum_EasyBallistics_EPenTraceType, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap = { "MaterialResponseMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MaterialResponseMap), Z_Construct_UClass_UEBMaterialResponseMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->MaterialDensityControlsPenetrationDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth = { "MaterialDensityControlsPenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->MaterialRestitutionControlsRicochet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet = { "MaterialRestitutionControlsRicochet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->ReliableReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication = { "ReliableReplication", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Allow components to collide, intended for use with trigger volumes. Do not use for actual collisions." },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->AllowComponentCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions = { "AllowComponentCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->TraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin = { "CollisionMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, CollisionMargin), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Bullets with lower velocity will automatically despawn on impact, never despawn if set to zero or negative" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity = { "DespawnVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, DespawnVelocity), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->DoFirstStepImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately = { "DoFirstStepImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_MetaData[] = {
		{ "Category", "Simulation" },
		{ "EditCondition", "DoFirstStepImmediately" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->RandomFirstStepDelta = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta = { "RandomFirstStepDelta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->FixedStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep = { "FixedStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds_MetaData[] = {
		{ "Category", "Simulation" },
		{ "EditCondition", "FixedStep" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds = { "FixedStepSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, FixedStepSeconds), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep = { "MaxTracesPerStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MaxTracesPerStep), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_MetaData[] = {
		{ "Category", "Retrace" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->Retrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace = { "Retrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_MetaData[] = {
		{ "Category", "Retrace" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->RetraceOnAnotherChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel = { "RetraceOnAnotherChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel_MetaData[] = {
		{ "Category", "Retrace" },
		{ "EditCondition", "RetraceOnAnotherChannel" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel = { "RetraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, RetraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->RotateActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor = { "RotateActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->RotateRandomRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll = { "RotateRandomRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	void Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_SetBit(void* Obj)
	{
		((AEBBullet*)Obj)->EnablePooling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling = { "EnablePooling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, MaxPoolSize), METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_Inner = { "Pooled", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_MetaData[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled = { "Pooled", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEBBullet, Pooled), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEBBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEBBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEBBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEBBullet_Statics::ClassParams = {
		&AEBBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEBBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEBBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEBBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEBBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEBBullet, 3948618052);
	template<> EASYBALLISTICS_API UClass* StaticClass<AEBBullet>()
	{
		return AEBBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEBBullet(Z_Construct_UClass_AEBBullet, &AEBBullet::StaticClass, TEXT("/Script/EasyBallistics"), TEXT("AEBBullet"), false, nullptr, nullptr, nullptr);

	void AEBBullet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Velocity(TEXT("Velocity"));
		static const FName Name_RandomStream(TEXT("RandomStream"));

		const bool bIsValid = true
			&& Name_Velocity == ClassReps[(int32)ENetFields_Private::Velocity].Property->GetFName()
			&& Name_RandomStream == ClassReps[(int32)ENetFields_Private::RandomStream].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AEBBullet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEBBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
