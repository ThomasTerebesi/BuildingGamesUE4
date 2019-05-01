// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GOLDENEGG_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define GOLDENEGG_NPC_generated_h

#define GoldenEgg_Source_GoldenEgg_NPC_h_14_RPC_WRAPPERS \
	virtual void Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_EVENT_PARMS \
	struct NPC_eventProx_Parms \
	{ \
		UPrimitiveComponent* OverlappedComponent; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_CALLBACK_WRAPPERS
#define GoldenEgg_Source_GoldenEgg_NPC_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_PRIVATE_PROPERTY_OFFSET
#define GoldenEgg_Source_GoldenEgg_NPC_h_11_PROLOG \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_EVENT_PARMS


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_RPC_WRAPPERS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_CALLBACK_WRAPPERS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_INCLASS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoldenEgg_Source_GoldenEgg_NPC_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_CALLBACK_WRAPPERS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_INCLASS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoldenEgg_Source_GoldenEgg_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
