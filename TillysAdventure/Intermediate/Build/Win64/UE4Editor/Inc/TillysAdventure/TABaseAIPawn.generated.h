// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TILLYSADVENTURE_TABaseAIPawn_generated_h
#error "TABaseAIPawn.generated.h already included, missing '#pragma once' in TABaseAIPawn.h"
#endif
#define TILLYSADVENTURE_TABaseAIPawn_generated_h

#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATABaseAIPawn(); \
	friend TILLYSADVENTURE_API class UClass* Z_Construct_UClass_ATABaseAIPawn(); \
public: \
	DECLARE_CLASS(ATABaseAIPawn, ATAPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TillysAdventure"), NO_API) \
	DECLARE_SERIALIZER(ATABaseAIPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATABaseAIPawn(); \
	friend TILLYSADVENTURE_API class UClass* Z_Construct_UClass_ATABaseAIPawn(); \
public: \
	DECLARE_CLASS(ATABaseAIPawn, ATAPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TillysAdventure"), NO_API) \
	DECLARE_SERIALIZER(ATABaseAIPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATABaseAIPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATABaseAIPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATABaseAIPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATABaseAIPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATABaseAIPawn(ATABaseAIPawn&&); \
	NO_API ATABaseAIPawn(const ATABaseAIPawn&); \
public:


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATABaseAIPawn(ATABaseAIPawn&&); \
	NO_API ATABaseAIPawn(const ATABaseAIPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATABaseAIPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATABaseAIPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATABaseAIPawn)


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_12_PROLOG
#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_RPC_WRAPPERS \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_INCLASS \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_INCLASS_NO_PURE_DECLS \
	TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TillysAdventure_Source_TillysAdventure_TABaseAIPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
