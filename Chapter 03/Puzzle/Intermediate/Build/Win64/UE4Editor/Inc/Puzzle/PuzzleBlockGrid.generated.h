// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLE_PuzzleBlockGrid_generated_h
#error "PuzzleBlockGrid.generated.h already included, missing '#pragma once' in PuzzleBlockGrid.h"
#endif
#define PUZZLE_PuzzleBlockGrid_generated_h

#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_RPC_WRAPPERS
#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleBlockGrid(); \
	friend struct Z_Construct_UClass_APuzzleBlockGrid_Statics; \
public: \
	DECLARE_CLASS(APuzzleBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), PUZZLE_API) \
	DECLARE_SERIALIZER(APuzzleBlockGrid)


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleBlockGrid(); \
	friend struct Z_Construct_UClass_APuzzleBlockGrid_Statics; \
public: \
	DECLARE_CLASS(APuzzleBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), PUZZLE_API) \
	DECLARE_SERIALIZER(APuzzleBlockGrid)


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLE_API APuzzleBlockGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleBlockGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_API, APuzzleBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlockGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_API APuzzleBlockGrid(APuzzleBlockGrid&&); \
	PUZZLE_API APuzzleBlockGrid(const APuzzleBlockGrid&); \
public:


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_API APuzzleBlockGrid(APuzzleBlockGrid&&); \
	PUZZLE_API APuzzleBlockGrid(const APuzzleBlockGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_API, APuzzleBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlockGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleBlockGrid)


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(APuzzleBlockGrid, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(APuzzleBlockGrid, ScoreText); }


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_10_PROLOG
#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_RPC_WRAPPERS \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_INCLASS \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzleBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle_Source_Puzzle_PuzzleBlockGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
