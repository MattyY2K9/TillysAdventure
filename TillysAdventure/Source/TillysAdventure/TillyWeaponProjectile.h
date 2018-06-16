// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TillyWeaponProjectile.generated.h"

UCLASS()
class TILLYSADVENTURE_API ATillyWeaponProjectile : public AActor
{
	GENERATED_BODY()

	// Sphere collision component
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	class USphereComponent* CollisionComp;

	// Projectile movement component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovementComponent;

public:	
	// Sets default values for this actor's properties
	ATillyWeaponProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called when projectile hits something
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Fire the projectile
	void FireInDirection(FVector FireDirection);
public:
	// Projectile variables
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	float DamageToDeal;
};
