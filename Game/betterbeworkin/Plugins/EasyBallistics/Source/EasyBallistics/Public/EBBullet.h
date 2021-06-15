// Copyright 2016 Mookie. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Curves/CurveFloat.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

#include "EBMaterialResponseMap.h"

#include "EBBullet.generated.h"

UENUM(BlueprintType)
enum class EEBAtmosphereType : uint8
{
	AT_Constant UMETA(DisplayName = "Constant"),
	AT_Curve UMETA(DisplayName = "Density Curve"),
	AT_Earth UMETA(DisplayName = "Earth/IGL")
};

UCLASS(Blueprintable, BlueprintType)
class EASYBALLISTICS_API AEBBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEBBullet();

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "State") FVector Velocity;
	UPROPERTY(Replicated, BlueprintReadWrite, Category = "State") FRandomStream RandomStream;

	UPROPERTY(BlueprintReadWrite, Category = "State") bool OwnerSafe=false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") bool DebugEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") float DebugTrailTime=1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") float DebugTrailWidth=0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") FLinearColor DebugTrailColorFast = FLinearColor(0, 1, 0, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") FLinearColor DebugTrailColorSlow = FLinearColor(1, 0, 0, 1);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug") bool DebugPooling;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") FVector Wind;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Select atmosphere model")) EEBAtmosphereType AtmosphereType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World", meta = (ToolTip = "Air Density at sea level - in KG/m^3")) float SeaLevelAirDensity = 1.21;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World", meta = (ToolTip = "in cm/s")) float SeaLevelSpeedOfSound = 34300;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World", meta = (ToolTip = "Used for Density Curve atmosphere model")) UCurveFloat* AirDensityCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") bool SpeedOfSoundVariesWithAltitude = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") UCurveFloat* SpeedOfSoundCurve;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") float WorldScale = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Atmosphere pressure at 0,0,0 - in millibars")) float SeaLevelAirPressure = 1012.5f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Atmosphere Temperature at 0,0,0 - in degrees C")) float SeaLevelAirTemperature = 20.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Temperature Decrease With Altitude, degrees per meter")) float TemperatureLapseRate = 0.00649f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Altitude at which temperature stops decreasing, in meters")) float TropopauseAltitude = 11000.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Specific Gas Constant, dry air = 287.058")) float SpecificGasConstant = 287.058;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "World Origin Location")) FVector WorldCenterLocation = FVector(0, 0, 0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Use spherical planet model to get altitude")) bool SphericalAltitude = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "World", meta = (ToolTip = "Planet radius"), Meta = (EditCondition = "SphericalAltitude")) float SeaLevelRadius = 637100000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") bool OverrideGravity = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "World") FVector Gravity = FVector(0,0,-980);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Safe launch") bool SafeLaunch = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Safe launch", Meta = (EditCondition = "SafeLaunch")) bool SafeLaunchIgnoreAttachParent = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Safe launch", Meta = (EditCondition = "SafeLaunchIgnoreAttachParent")) bool SafeLaunchIgnoreAllAttached = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Safe launch", Meta = (EditCondition = "SafeLaunch")) float SafeDelay = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Safe launch", Meta = (EditCondition = "SafeLaunch")) TArray<AActor*> SafeLaunchIgnoredActors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shotgun") bool Shotgun=false;
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shotgun", meta = (EditCondition = "Shotgun")) int ShotCount=10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shotgun", meta = (EditCondition = "Shotgun")) float ShotSpread=0.01;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shotgun", meta = (EditCondition = "Shotgun")) float ShotVelocitySpread = 0.01;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float MuzzleVelocityMin = 100000.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float MuzzleVelocityMax = 100000.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float Spread =0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float Mass = 0.005;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float Diameter = 0.556;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") float FormFactor = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flight") UCurveFloat* MachDragCurve;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float GrazingAngleExponent = 2.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float MinPenetration = 10.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float MaxPenetration = 20.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float PenetrationNormalization = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float PenetrationNormalizationGrazing = 0.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float PenetrationEntryAngleSpread = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float PenetrationExitAngleSpread = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float RicochetProbability = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float RicochetProbabilityGrazing = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float RicochetRestitution = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float RicochetFriction = 0.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float RicochetSpread = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") bool SpeedControlsRicochetProbability = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") bool AddImpulse = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") float ImpulseMultiplier = 1.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") EPenTraceType DefaultPenTraceType = EPenTraceType::PT_BackTrace;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") UEBMaterialResponseMap* MaterialResponseMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") bool MaterialDensityControlsPenetrationDepth = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Impact") bool MaterialRestitutionControlsRicochet = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Replication") bool ReliableReplication = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (ToolTip = "Allow components to collide, intended for use with trigger volumes. Do not use for actual collisions.")) bool AllowComponentCollisions = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision") TEnumAsByte<ECollisionChannel> TraceChannel;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision") bool TraceComplex;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision") float CollisionMargin=1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (ToolTip = "Bullets with lower velocity will automatically despawn on impact, never despawn if set to zero or negative")) float DespawnVelocity=100.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision") TArray<AActor*> IgnoredActors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simulation") bool DoFirstStepImmediately = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simulation", meta = (EditCondition = "DoFirstStepImmediately")) bool RandomFirstStepDelta = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simulation") bool FixedStep = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simulation", meta = (EditCondition = "FixedStep")) float FixedStepSeconds = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simulation") int MaxTracesPerStep = 8;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Retrace") bool Retrace = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Retrace") bool RetraceOnAnotherChannel = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Retrace", meta=(EditCondition="RetraceOnAnotherChannel")) TEnumAsByte<ECollisionChannel> RetraceChannel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Rotation") bool RotateActor = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Rotation") bool RotateRandomRoll = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pooling") bool EnablePooling = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pooling") int MaxPoolSize = 50;

	//rebase
	virtual void ApplyWorldOffset(const FVector& InOffset, bool bWorldShift) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	virtual void LifeSpanExpired() override;

	UFUNCTION(BlueprintCallable, Category = "EBBullet|Spawn")
		static void SpawnWithExactVelocity(TSubclassOf<class AEBBullet> BulletClass, AActor* BulletOwner, APawn* BulletInstigator, FVector BulletLocation, FVector BulletVelocity);

	UFUNCTION(BlueprintCallable, Category = "EBBullet|Spawn")
		static void Spawn(TSubclassOf<class AEBBullet> BulletClass, AActor* BulletOwner, APawn* BulletInstigator, FVector BulletLocation, FVector BulletVelocity);

	UFUNCTION(NetMulticast, Unreliable)
		void VelocityChangeBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity);
	UFUNCTION(NetMulticast, Reliable)
		void VelocityChangeBroadcastReliable(FVector_NetQuantize NewLocation, FVector NewVelocity);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent, Category = "EBBullet|Impact")
		void OnImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult);

	UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent, Category = "EBBullet|Impact")
		void OnNetPredictedImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "EBBullet|Impact")
		void OnTrace(FVector StartLocation, FVector EndLocation);

	UFUNCTION(BlueprintImplementableEvent, Category = "EBBullet|Remote")
		void OnTrajectoryUpdateReceived(FVector Location, FVector OldVelocity, FVector NewVelocity);

	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|Activation")
		void OnDeactivated();

	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|Flight")FVector UpdateVelocity(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const;
	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|World") FVector GetWind(UWorld* World, FVector Location) const;
	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|World") float GetAirDensity(UWorld* World, FVector Location) const;
	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|World") float GetSpeedOfSound(UWorld* World, FVector Location) const;
	UFUNCTION(BlueprintNativeEvent, Category = "EBBullet|World") bool CollisionFilter(FHitResult HitResult) const;

	//pooling
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "EBBullet|Pooling")void Deactivate();

	UFUNCTION(NetMulticast, Reliable)
		void ReactivationBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator);
	UFUNCTION(NetMulticast, Reliable)
		void DeactivationBroadcast();
private:
	UPROPERTY() TArray<TWeakObjectPtr<AEBBullet>> Pooled;
	static AEBBullet* GetFromPool(UWorld* World, UClass* BulletClass);
	static AEBBullet* SpawnOrReactivate(UWorld* World, TSubclassOf<class AEBBullet> BulletClass, const FTransform& Transform, FVector BulletVelocity, AActor* BulletOwner, APawn* BulletInstigator);
	void DeactivateToPool();

	void Step(float DeltaTime);

	float Trace(FVector start, FVector PreviousVelocity, float delta, TEnumAsByte<ECollisionChannel> channel);

	TArray<AActor*> GetAttachedActorsRecursive(AActor* Actor,uint16 Depth=0) const;

	float PenetrationTrace(FVector start, FVector end, TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> comp, EPenTraceType penType, TEnumAsByte<ECollisionChannel> channel, FVector &exitLoc, FVector &exitNormal);

	inline float GetCurveValue(const UCurveFloat* curve, float in, float deflt) const;

	float AccumulatedDelta;

	bool CanRetrace = false;
	FVector LastTraceStart;
	float LastTraceDelta;
	FVector LastTraceVelocity;
	FVector LastTracePrevVelocity;

	bool IsRecycled;

	FHitResult FilterHits(TArray<FHitResult> Results, bool &hit) const;
	TArray<AActor*>GetSafeLaunchIgnoredActors(AActor* Owner) const;

	float GetAltitude(UWorld* World, FVector Location) const;
	float GetAltitudePressure(float AltitudeMeter) const;
	float GetAltitudeTemperature(float AltitudeMeter) const;
	float GetAltitudeDensity(float AltitudeMeter) const;

#ifdef WITH_EDITOR
	inline FLinearColor GetDebugColor(float In) const{
		return FMath::Lerp(DebugTrailColorSlow, DebugTrailColorFast, In);
	}
#endif
};