// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TAPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTAPawn() {}
// Cross Module References
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATAPawn_NoRegister();
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATAPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TillysAdventure();
// End Cross Module References
	void ATAPawn::StaticRegisterNativesATAPawn()
	{
	}
	UClass* Z_Construct_UClass_ATAPawn_NoRegister()
	{
		return ATAPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ATAPawn()
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
				{ "IncludePath", "TAPawn.h" },
				{ "ModuleRelativePath", "TAPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
				{ "Category", "TAPawn" },
				{ "ModuleRelativePath", "TAPawn.h" },
				{ "ToolTip", "Projectile variables" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATAPawn, MaxHealth), METADATA_PARAMS(NewProp_MaxHealth_MetaData, ARRAY_COUNT(NewProp_MaxHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHealth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATAPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATAPawn::StaticClass,
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
	IMPLEMENT_CLASS(ATAPawn, 3885043361);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATAPawn(Z_Construct_UClass_ATAPawn, &ATAPawn::StaticClass, TEXT("/Script/TillysAdventure"), TEXT("ATAPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATAPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
