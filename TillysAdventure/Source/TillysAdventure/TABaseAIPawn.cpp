// Fill out your copyright notice in the Description page of Project Settings.

#include "TABaseAIPawn.h"

#include "TillyWeaponProjectile.h"

ATABaseAIPawn::ATABaseAIPawn()
{
	CurrentAIState = Patrolling;
}

void ATABaseAIPawn::Death()
{
	Super::Death();
}

void ATABaseAIPawn::OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	if (OtherActor)
	{
		ATillyWeaponProjectile* WP = Cast<ATillyWeaponProjectile>(OtherActor);
		if (WP)
		{
			TakeBulletDamage(WP->DamageToDeal);
		}
	}
}
