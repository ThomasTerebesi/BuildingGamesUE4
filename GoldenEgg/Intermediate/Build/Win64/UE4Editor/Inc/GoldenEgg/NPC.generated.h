// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOLDENEGG_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define GOLDENEGG_NPC_generated_h

#define GoldenEgg_Source_GoldenEgg_NPC_h_12_RPC_WRAPPERS
#define GoldenEgg_Source_GoldenEgg_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GoldenEgg_Source_GoldenEgg_NPC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define GoldenEgg_Source_GoldenEgg_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define GoldenEgg_Source_GoldenEgg_NPC_h_12_PRIVATE_PROPERTY_OFFSET
#define GoldenEgg_Source_GoldenEgg_NPC_h_9_PROLOG
#define GoldenEgg_Source_GoldenEgg_NPC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_RPC_WRAPPERS \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_INCLASS \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoldenEgg_Source_GoldenEgg_NPC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_INCLASS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoldenEgg_Source_GoldenEgg_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
