// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TillyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTillyCharacter() {}
// Cross Module References
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyCharacter_NoRegister();
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TillysAdventure();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyWeaponProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATillyCharacter::StaticRegisterNativesATillyCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATillyCharacter_NoRegister()
	{
		return ATillyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ATillyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TillysAdventure,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "TillyCharacter.h" },
				{ "ModuleRelativePath", "TillyCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpawnOffset_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "TillyCharacter.h" },
				{ "ToolTip", "Weapon offset" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WeaponSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ATillyCharacter, WeaponSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_WeaponSpawnOffset_MetaData, ARRAY_COUNT(NewProp_WeaponSpawnOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProjectile_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "TillyCharacter.h" },
				{ "ToolTip", "Weapon Projectile" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponProjectile = { UE4CodeGen_Private::EPropertyClass::Class, "WeaponProjectile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATillyCharacter, WeaponProjectile), Z_Construct_UClass_ATillyWeaponProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WeaponProjectile_MetaData, ARRAY_COUNT(NewProp_WeaponProjectile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCamera_MetaData[] = {
				{ "Category", "TillyCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TillyCharacter.h" },
				{ "ToolTip", "Our Camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCamera = { UE4CodeGen_Private::EPropertyClass::Object, "OurCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ATillyCharacter, OurCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_OurCamera_MetaData, ARRAY_COUNT(NewProp_OurCamera_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponSpawnOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponProjectile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OurCamera,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATillyCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATillyCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ATillyCharacter, 3896984298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATillyCharacter(Z_Construct_UClass_ATillyCharacter, &ATillyCharacter::StaticClass, TEXT("/Script/TillysAdventure"), TEXT("ATillyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATillyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
