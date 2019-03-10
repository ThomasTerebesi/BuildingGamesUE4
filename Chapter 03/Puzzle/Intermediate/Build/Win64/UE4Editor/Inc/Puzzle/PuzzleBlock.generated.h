// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef PUZZLE_PuzzleBlock_generated_h
#error "PuzzleBlock.generated.h already included, missing '#pragma once' in PuzzleBlock.h"
#endif
#define PUZZLE_PuzzleBlock_generated_h

#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleBlock(); \
	friend struct Z_Construct_UClass_APuzzleBlock_Statics; \
public: \
	DECLARE_CLASS(APuzzleBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), PUZZLE_API) \
	DECLARE_SERIALIZER(APuzzleBlock)


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleBlock(); \
	friend struct Z_Construct_UClass_APuzzleBlock_Statics; \
public: \
	DECLARE_CLASS(APuzzleBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzle"), PUZZLE_API) \
	DECLARE_SERIALIZER(APuzzleBlock)


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLE_API APuzzleBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_API, APuzzleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_API APuzzleBlock(APuzzleBlock&&); \
	PUZZLE_API APuzzleBlock(const APuzzleBlock&); \
public:


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_API APuzzleBlock(APuzzleBlock&&); \
	PUZZLE_API APuzzleBlock(const APuzzleBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_API, APuzzleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleBlock)


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(APuzzleBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(APuzzleBlock, BlockMesh); }


#define Puzzle_Source_Puzzle_PuzzleBlock_h_10_PROLOG
#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_RPC_WRAPPERS \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_INCLASS \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle_Source_Puzzle_PuzzleBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_INCLASS_NO_PURE_DECLS \
	Puzzle_Source_Puzzle_PuzzleBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle_Source_Puzzle_PuzzleBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
