// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TillyWeaponProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTillyWeaponProjectile() {}
// Cross Module References
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyWeaponProjectile_NoRegister();
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyWeaponProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TillysAdventure();
	TILLYSADVENTURE_API UFunction* Z_Construct_UFunction_ATillyWeaponProjectile_BeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TILLYSADVENTURE_API UFunction* Z_Construct_UFunction_ATillyWeaponProjectile_OnHit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ATillyWeaponProjectile::StaticRegisterNativesATillyWeaponProjectile()
	{
		UClass* Class = ATillyWeaponProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &ATillyWeaponProjectile::execBeginOverlap },
			{ "OnHit", &ATillyWeaponProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATillyWeaponProjectile_BeginOverlap()
	{
		struct TillyWeaponProjectile_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((TillyWeaponProjectile_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TillyWeaponProjectile_eventBeginOverlap_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventBeginOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Other,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
				{ "ToolTip", "Called when projectile hits something" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATillyWeaponProjectile, "BeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(TillyWeaponProjectile_eventBeginOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATillyWeaponProjectile_OnHit()
	{
		struct TillyWeaponProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TillyWeaponProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_HitComp_MetaData, ARRAY_COUNT(NewProp_HitComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
				{ "ToolTip", "Called when projectile hits something" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATillyWeaponProjectile, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(TillyWeaponProjectile_eventOnHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATillyWeaponProjectile_NoRegister()
	{
		return ATillyWeaponProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ATillyWeaponProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TillysAdventure,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATillyWeaponProjectile_BeginOverlap, "BeginOverlap" }, // 1472054732
				{ &Z_Construct_UFunction_ATillyWeaponProjectile_OnHit, "OnHit" }, // 502747121
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TillyWeaponProjectile.h" },
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageToDeal_MetaData[] = {
				{ "Category", "TillyWeaponProjectile" },
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
				{ "ToolTip", "Projectile variables" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageToDeal = { UE4CodeGen_Private::EPropertyClass::Float, "DamageToDeal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyWeaponProjectile, DamageToDeal), METADATA_PARAMS(NewProp_DamageToDeal_MetaData, ARRAY_COUNT(NewProp_DamageToDeal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Movement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
				{ "ToolTip", "Projectile movement component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATillyWeaponProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_ProjectileMovementComponent_MetaData, ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
				{ "Category", "Projectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TillyWeaponProjectile.h" },
				{ "ToolTip", "Sphere collision component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(ATillyWeaponProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComp_MetaData, ARRAY_COUNT(NewProp_CollisionComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageToDeal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileMovementComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATillyWeaponProjectile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATillyWeaponProjectile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATillyWeaponProjectile, 1112324556);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATillyWeaponProjectile(Z_Construct_UClass_ATillyWeaponProjectile, &ATillyWeaponProjectile::StaticClass, TEXT("/Script/TillysAdventure"), TEXT("ATillyWeaponProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATillyWeaponProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
