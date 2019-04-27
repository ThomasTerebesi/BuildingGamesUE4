// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoldenEgg/PickupItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupItem() {}
// Cross Module References
	GOLDENEGG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
	GOLDENEGG_API UClass* Z_Construct_UClass_APickupItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GoldenEgg();
	GOLDENEGG_API UFunction* Z_Construct_UFunction_APickupItem_Prox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_APickupItem_Prox = FName(TEXT("Prox"));
	void APickupItem::Prox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
	{
		PickupItem_eventProx_Parms Parms;
		Parms.OverlappedComponent=OverlappedComponent;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		Parms.bFromSweep=bFromSweep ? true : false;
		Parms.SweepResult=SweepResult;
		ProcessEvent(FindFunctionChecked(NAME_APickupItem_Prox),&Parms);
	}
	void APickupItem::StaticRegisterNativesAPickupItem()
	{
		UClass* Class = APickupItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Prox", &APickupItem::execProx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupItem_Prox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(PickupItem_eventProx_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PickupItem_eventProx_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PickupItem_eventProx_Parms), &Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PickupItem_eventProx_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PickupItem_eventProx_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PickupItem_eventProx_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PickupItem_eventProx_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupItem_Prox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Prox_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Prox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_Prox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, "Prox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(PickupItem_eventProx_Parms), Z_Construct_UFunction_APickupItem_Prox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Prox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Prox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Prox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_Prox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_Prox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupItem_NoRegister()
	{
		return APickupItem::StaticClass();
	}
	struct Z_Construct_UClass_APickupItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proxSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proxSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GoldenEgg,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItem_Prox, "Prox" }, // 1193270029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupItem.h" },
		{ "ModuleRelativePath", "PickupItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_icon_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_icon = { UE4CodeGen_Private::EPropertyClass::Object, "icon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APickupItem, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b001d, 1, nullptr, STRUCT_OFFSET(APickupItem, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_proxSphere_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_proxSphere = { UE4CodeGen_Private::EPropertyClass::Object, "proxSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b001d, 1, nullptr, STRUCT_OFFSET(APickupItem, proxSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_proxSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_proxSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Int, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APickupItem, quantity), METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_quantity_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APickupItem, name), METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_proxSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
		&APickupItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickupItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupItem, 689864849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupItem(Z_Construct_UClass_APickupItem, &APickupItem::StaticClass, TEXT("/Script/GoldenEgg"), TEXT("APickupItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
