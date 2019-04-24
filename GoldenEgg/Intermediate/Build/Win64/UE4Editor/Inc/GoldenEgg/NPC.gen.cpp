// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoldenEgg/NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	GOLDENEGG_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	GOLDENEGG_API UClass* Z_Construct_UClass_ANPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GoldenEgg();
	GOLDENEGG_API UFunction* Z_Construct_UFunction_ANPC_Prox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ANPC_Prox = FName(TEXT("Prox"));
	void ANPC::Prox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
	{
		NPC_eventProx_Parms Parms;
		Parms.OverlappedComponent=OverlappedComponent;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		Parms.bFromSweep=bFromSweep ? true : false;
		Parms.SweepResult=SweepResult;
		ProcessEvent(FindFunctionChecked(NAME_ANPC_Prox),&Parms);
	}
	void ANPC::StaticRegisterNativesANPC()
	{
		UClass* Class = ANPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Prox", &ANPC::execProx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_Prox_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(NPC_eventProx_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NPC_eventProx_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NPC_eventProx_Parms), &Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventProx_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventProx_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventProx_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventProx_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_Prox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Prox_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Prox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Prox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, "Prox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(NPC_eventProx_Parms), Z_Construct_UFunction_ANPC_Prox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANPC_Prox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Prox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANPC_Prox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Prox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Prox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NpcFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NpcName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NpcMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProxSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GoldenEgg,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_Prox, "Prox" }, // 946863263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_NpcFace_MetaData[] = {
		{ "Category", "NPCMessage" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_NpcFace = { UE4CodeGen_Private::EPropertyClass::Object, "NpcFace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ANPC, NpcFace), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_NpcFace_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_NpcFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_NpcName_MetaData[] = {
		{ "Category", "NPCMessage" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_NpcName = { UE4CodeGen_Private::EPropertyClass::Str, "NpcName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ANPC, NpcName), METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_NpcName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_NpcName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_NpcMessage_MetaData[] = {
		{ "Category", "NPCMessage" },
		{ "ModuleRelativePath", "NPC.h" },
		{ "ToolTip", "The NPC's message that will show up on the screen." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_NpcMessage = { UE4CodeGen_Private::EPropertyClass::Str, "NpcMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ANPC, NpcMessage), METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_NpcMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_NpcMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_ProxSphere_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC.h" },
		{ "ToolTip", "The sphere the player character can collide with." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_ProxSphere = { UE4CodeGen_Private::EPropertyClass::Object, "ProxSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ANPC, ProxSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_ProxSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_ProxSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_NpcFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_NpcName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_NpcMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_ProxSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
		&ANPC::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ANPC_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC, 4287837893);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC(Z_Construct_UClass_ANPC, &ANPC::StaticClass, TEXT("/Script/GoldenEgg"), TEXT("ANPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
