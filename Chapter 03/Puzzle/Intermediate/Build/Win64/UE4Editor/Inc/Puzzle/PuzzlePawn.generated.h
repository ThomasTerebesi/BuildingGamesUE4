// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLE_PuzzlePawn_generated_h
#error "PuzzlePawn.generated.h already included, missing '#pragma once' in PuzzlePawn.h"
#endif
#define PUZZLE_PuzzlePawn_generated_h

#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_RPC_WRAPPERS
#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzlePawn(); \
	friend struct Z_Construct_UClass_APuzzlePawn_Statics; \
public: \
	DECLARE_CLASS(APuzzlePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), NO_API) \
	DECLARE_SERIALIZER(APuzzlePawn)


#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzlePawn(); \
	friend struct Z_Construct_UClass_APuzzlePawn_Statics; \
public: \
	DECLARE_CLASS(APuzzlePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), NO_API) \
	DECLARE_SERIALIZER(APuzzlePawn)


#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzlePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzlePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzlePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzlePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzlePawn(APuzzlePawn&&); \
	NO_API APuzzlePawn(const APuzzlePawn&); \
public:


#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzlePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzlePawn(APuzzlePawn&&); \
	NO_API APuzzlePawn(const APuzzlePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzlePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzlePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzlePawn)


#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(APuzzlePawn, CurrentBlockFocus); }


#define Puzzle_Source_Puzzle_PuzzlePawn_h_9_PROLOG
#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_RPC_WRAPPERS \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_INCLASS \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle_Source_Puzzle_PuzzlePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_INCLASS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzlePawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PuzzlePawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle_Source_Puzzle_PuzzlePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
