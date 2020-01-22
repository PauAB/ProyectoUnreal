// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Build__pf1097354743.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuild__pf1097354743() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABuild_C__pf1097354743_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABuild_C__pf1097354743();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C_NoRegister();
// End Cross Module References
	static FName NAME_ABuild_C__pf1097354743_bpf__Interact__pf = FName(TEXT("Interact"));
	void ABuild_C__pf1097354743::eventbpf__Interact__pf(AActor* bpp__Interactor__pf)
	{
		Build_C__pf1097354743_eventbpf__Interact__pf_Parms Parms;
		Parms.bpp__Interactor__pf=bpp__Interactor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABuild_C__pf1097354743_bpf__Interact__pf),&Parms);
	}
	void ABuild_C__pf1097354743::StaticRegisterNativesABuild_C__pf1097354743()
	{
		UClass* Class = ABuild_C__pf1097354743::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ABuild_C__pf1097354743::execbpf__Interact__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Interactor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf = { "bpp__Interactor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Build_C__pf1097354743_eventbpf__Interact__pf_Parms, bpp__Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuild_C__pf1097354743, nullptr, "Interact", sizeof(Build_C__pf1097354743_eventbpf__Interact__pf_Parms), Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABuild_C__pf1097354743();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABuild_C__pf1097354743_NoRegister()
	{
		return ABuild_C__pf1097354743::StaticClass();
	}
	struct Z_Construct_UClass_ABuild_C__pf1097354743_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Interactor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuild_C__pf1097354743_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuild_C__pf1097354743_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuild_C__pf1097354743_bpf__Interact__pf, "Interact" }, // 2468179665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuild_C__pf1097354743_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Build__pf1097354743.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Build_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build.Build_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_Event_Interactor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_b0l__K2Node_Event_Interactor__pf = { "K2Node_Event_Interactor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABuild_C__pf1097354743, b0l__K2Node_Event_Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABuild_C__pf1097354743, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Scene__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Scene__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABuild_C__pf1097354743, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Box__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Build__pf1097354743.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABuild_C__pf1097354743, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuild_C__pf1097354743_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_b0l__K2Node_Event_Interactor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuild_C__pf1097354743_Statics::NewProp_bpv__StaticMesh__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UI_Interact_C_NoRegister, (int32)VTABLE_OFFSET(ABuild_C__pf1097354743, II_Interact_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuild_C__pf1097354743_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuild_C__pf1097354743>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuild_C__pf1097354743_Statics::ClassParams = {
		&ABuild_C__pf1097354743::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuild_C__pf1097354743_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuild_C__pf1097354743_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuild_C__pf1097354743()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Build_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuild_C__pf1097354743_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABuild_C__pf1097354743, TEXT("Build_C"), 95552552);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABuild_C__pf1097354743>()
	{
		return ABuild_C__pf1097354743::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuild_C__pf1097354743(Z_Construct_UClass_ABuild_C__pf1097354743, &ABuild_C__pf1097354743::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build"), TEXT("Build_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build.Build_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuild_C__pf1097354743);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
