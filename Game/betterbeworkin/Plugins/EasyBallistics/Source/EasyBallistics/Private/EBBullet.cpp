// Copyright 2018 Mookie. All Rights Reserved.
#include "EBBullet.h"

// Sets default values
AEBBullet::AEBBullet() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetTickGroup(ETickingGroup::TG_PrePhysics);
	//SetReplicates(true);
}

// Called when the game starts or when spawned
void AEBBullet::BeginPlay() {
	SetActorEnableCollision(AllowComponentCollisions);

	if(!IsRecycled){
		Super::BeginPlay();
		IsRecycled = true;
	}
	else{
		ReceiveBeginPlay();
	}

	if (SafeLaunch) {
		OwnerSafe = true;
	}

	if (DoFirstStepImmediately) {
		float DeltaTime = GetWorld()->GetDeltaSeconds();

		if (RandomFirstStepDelta) {
			DeltaTime *= RandomStream.FRand();
		};

		if (FixedStep) {
			Step(FixedStepSeconds);
		}
		else {
			Step(DeltaTime);
		}
	}
}

// Called every frame
void AEBBullet::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (FixedStep) {
		AccumulatedDelta += DeltaTime;
		
		while (AccumulatedDelta >= FixedStepSeconds) {
			Step(FixedStepSeconds);
			AccumulatedDelta -= FixedStepSeconds;
		}

	}
	else {
		Step(DeltaTime);
	}
}

void AEBBullet::Step(float DeltaTime) {
	FVector start = GetActorLocation();
	bool sendUpdate = false;

	if (Retrace && CanRetrace) {
		//time travel
		float remainingTime = LastTraceDelta;
		int remainingSteps = MaxTracesPerStep;
		FVector PreviousVelocity = LastTracePrevVelocity;
		SetActorLocation(LastTraceStart);
		Velocity = LastTraceVelocity;

		do {
			if (RetraceOnAnotherChannel) {
				remainingTime = Trace(GetActorLocation(),
					PreviousVelocity,
					remainingTime,
					RetraceChannel);
			}
			else {
				remainingTime = Trace(GetActorLocation(),
					PreviousVelocity,
					remainingTime,
					TraceChannel);
			}
			PreviousVelocity = Velocity;
			remainingSteps -= 1;
			if (remainingTime > 0.0f) { sendUpdate = true; };
		} while (remainingTime > 0.0f && remainingSteps > 0);
	}
	CanRetrace = false;

	FVector PreviousVelocity = Velocity;
	Velocity = UpdateVelocity(GetWorld(), GetActorLocation(), Velocity, DeltaTime);

	//trace
	float remainingTime = DeltaTime;
	int remainingSteps = MaxTracesPerStep;
	do {
		remainingTime = Trace(GetActorLocation(), 
			PreviousVelocity, 
			remainingTime,
			TraceChannel
		);
		PreviousVelocity = Velocity;
		remainingSteps -= 1;
		if (remainingTime > 0.0f) { sendUpdate = true; };
	} while (remainingTime > 0.0f && remainingSteps > 0);

	if (sendUpdate) {
		if (ReliableReplication) {
			VelocityChangeBroadcastReliable(UGameplayStatics::RebaseLocalOriginOntoZero(GetWorld(),GetActorLocation()), Velocity);
		}
		else {
			VelocityChangeBroadcast(UGameplayStatics::RebaseLocalOriginOntoZero(GetWorld(), GetActorLocation()), Velocity);
		}
	}

	if(SafeDelay <= 0.0f){
		OwnerSafe = false;
	}
	else {
		SafeDelay -= DeltaTime;
	}

	if (RotateActor) {
		FRotator NewRot = UKismetMathLibrary::MakeRotFromX(Velocity);
		NewRot.Roll = GetActorRotation().Roll;
		SetActorRotation(NewRot);
	}
}

inline float AEBBullet::GetCurveValue(const UCurveFloat* curve, float in, float deflt) const {
	if (curve == nullptr) return deflt;
	return curve->GetFloatValue(in);
}

void AEBBullet::ApplyWorldOffset(const FVector& InOffset, bool bWorldShift) {
	Super::ApplyWorldOffset(InOffset, bWorldShift);
	LastTraceStart += InOffset;
}