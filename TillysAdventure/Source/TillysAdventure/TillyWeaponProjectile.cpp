// Fill out your copyright notice in the Description page of Project Settings.

#include "TillyWeaponProjectile.h"

// For physics reactions
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ATillyWeaponProjectile::ATillyWeaponProjectile()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(0.1f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &ATillyWeaponProjectile::OnHit);		// set up a notification for when this component hits something blocking

																						// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComp);
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;


	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void ATillyWeaponProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void ATillyWeaponProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATillyWeaponProjectile::OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}
}

#pragma optimize("", off)
void ATillyWeaponProjectile::FireInDirection(FVector FireDirection)
{
	ProjectileMovementComponent->SetVelocityInLocalSpace(FireDirection.GetSafeNormal() * ProjectileMovementComponent->InitialSpeed);
}

