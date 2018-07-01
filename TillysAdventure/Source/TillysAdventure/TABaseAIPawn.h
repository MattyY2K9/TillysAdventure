// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TAPawn.h"
#include "TABaseAIPawn.generated.h"

/**
 * 
 */
UCLASS()
class TILLYSADVENTURE_API ATABaseAIPawn : public ATAPawn
{
	GENERATED_BODY()
	
		enum AIState
	{
		Patrolling,
		Fleeing,
		Hunting,
		Attacking,
		Idle,
		Subdued
	};

public:
	// Sets default values for this character's properties
	ATABaseAIPawn();

	// Overrides
public:
	// Handle AI Death
	virtual void Death() override;

	// Called when projectile hits something
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	// What state are we in
	AIState CurrentAIState;
};
