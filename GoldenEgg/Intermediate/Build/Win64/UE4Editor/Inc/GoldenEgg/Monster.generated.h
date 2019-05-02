// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOLDENEGG_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define GOLDENEGG_Monster_generated_h

#define GoldenEgg_Source_GoldenEgg_Monster_h_15_RPC_WRAPPERS
#define GoldenEgg_Source_GoldenEgg_Monster_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GoldenEgg_Source_GoldenEgg_Monster_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define GoldenEgg_Source_GoldenEgg_Monster_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoldenEgg"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define GoldenEgg_Source_GoldenEgg_Monster_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public:


#define GoldenEgg_Source_GoldenEgg_Monster_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster)


#define GoldenEgg_Source_GoldenEgg_Monster_h_15_PRIVATE_PROPERTY_OFFSET
#define GoldenEgg_Source_GoldenEgg_Monster_h_12_PROLOG
#define GoldenEgg_Source_GoldenEgg_Monster_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_RPC_WRAPPERS \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_INCLASS \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoldenEgg_Source_GoldenEgg_Monster_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_PRIVATE_PROPERTY_OFFSET \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_INCLASS_NO_PURE_DECLS \
	GoldenEgg_Source_GoldenEgg_Monster_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoldenEgg_Source_GoldenEgg_Monster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
