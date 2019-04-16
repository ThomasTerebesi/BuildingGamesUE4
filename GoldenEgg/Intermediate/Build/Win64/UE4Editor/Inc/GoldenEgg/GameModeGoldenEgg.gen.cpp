// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoldenEgg/GameModeGoldenEgg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeGoldenEgg() {}
// Cross Module References
	GOLDENEGG_API UClass* Z_Construct_UClass_AGameModeGoldenEgg_NoRegister();
	GOLDENEGG_API UClass* Z_Construct_UClass_AGameModeGoldenEgg();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoldenEgg();
// End Cross Module References
	void AGameModeGoldenEgg::StaticRegisterNativesAGameModeGoldenEgg()
	{
	}
	UClass* Z_Construct_UClass_AGameModeGoldenEgg_NoRegister()
	{
		return AGameModeGoldenEgg::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeGoldenEgg_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeGoldenEgg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoldenEgg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeGoldenEgg_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModeGoldenEgg.h" },
		{ "ModuleRelativePath", "GameModeGoldenEgg.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeGoldenEgg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeGoldenEgg>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeGoldenEgg_Statics::ClassParams = {
		&AGameModeGoldenEgg::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeGoldenEgg_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameModeGoldenEgg_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeGoldenEgg()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeGoldenEgg_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeGoldenEgg, 2918700410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeGoldenEgg(Z_Construct_UClass_AGameModeGoldenEgg, &AGameModeGoldenEgg::StaticClass, TEXT("/Script/GoldenEgg"), TEXT("AGameModeGoldenEgg"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeGoldenEgg);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
