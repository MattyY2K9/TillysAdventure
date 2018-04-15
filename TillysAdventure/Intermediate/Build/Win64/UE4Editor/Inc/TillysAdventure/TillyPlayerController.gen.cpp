// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TillyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTillyPlayerController() {}
// Cross Module References
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyPlayerController_NoRegister();
	TILLYSADVENTURE_API UClass* Z_Construct_UClass_ATillyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TillysAdventure();
// End Cross Module References
	void ATillyPlayerController::StaticRegisterNativesATillyPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATillyPlayerController_NoRegister()
	{
		return ATillyPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATillyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_TillysAdventure,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TillyPlayerController.h" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookYSensitivity_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookYSensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "LookYSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, LookYSensitivity), METADATA_PARAMS(NewProp_LookYSensitivity_MetaData, ARRAY_COUNT(NewProp_LookYSensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookXSensitivity_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookXSensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "LookXSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, LookXSensitivity), METADATA_PARAMS(NewProp_LookXSensitivity_MetaData, ARRAY_COUNT(NewProp_LookXSensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityStrength_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "GravityStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, GravityStrength), METADATA_PARAMS(NewProp_GravityStrength_MetaData, ARRAY_COUNT(NewProp_GravityStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeight = { UE4CodeGen_Private::EPropertyClass::Float, "JumpHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, JumpHeight), METADATA_PARAMS(NewProp_JumpHeight_MetaData, ARRAY_COUNT(NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "SprintSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, SprintSpeed), METADATA_PARAMS(NewProp_SprintSpeed_MetaData, ARRAY_COUNT(NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSpeed_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TillyPlayerController.h" },
				{ "ToolTip", "Movement" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATillyPlayerController, MaximumSpeed), METADATA_PARAMS(NewProp_MaximumSpeed_MetaData, ARRAY_COUNT(NewProp_MaximumSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookYSensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookXSensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GravityStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SprintSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATillyPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATillyPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATillyPlayerController, 367627677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATillyPlayerController(Z_Construct_UClass_ATillyPlayerController, &ATillyPlayerController::StaticClass, TEXT("/Script/TillysAdventure"), TEXT("ATillyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATillyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
