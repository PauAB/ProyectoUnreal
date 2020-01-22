// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/I_Interact__pf2577010357.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeI_Interact__pf2577010357() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void II_Interact_C::bpf__Interact__pf(AActor* bpp__Interactor__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Interact__pf instead.");
	}
	void UI_Interact_C::StaticRegisterNativesUI_Interact_C()
	{
	}
	struct Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Interactor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf = { "bpp__Interactor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(I_Interact_C_eventbpf__Interact__pf_Parms, bpp__Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/I_Interact__pf2577010357.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UI_Interact_C, nullptr, "Interact", sizeof(I_Interact_C_eventbpf__Interact__pf_Parms), Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_UI_Interact_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UI_Interact_C_NoRegister()
	{
		return UI_Interact_C::StaticClass();
	}
	struct Z_Construct_UClass_UI_Interact_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UI_Interact_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UI_Interact_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UI_Interact_C_bpf__Interact__pf, "Interact" }, // 414266530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UI_Interact_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/I_Interact__pf2577010357.h" },
		{ "OverrideNativeName", "I_Interact_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact.I_Interact_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UI_Interact_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_Interact_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UI_Interact_C_Statics::ClassParams = {
		&UI_Interact_C::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UI_Interact_C_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UI_Interact_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UI_Interact_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("I_Interact_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UI_Interact_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UI_Interact_C, TEXT("I_Interact_C"), 1464113760);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UI_Interact_C>()
	{
		return UI_Interact_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UI_Interact_C(Z_Construct_UClass_UI_Interact_C, &UI_Interact_C::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact"), TEXT("I_Interact_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact.I_Interact_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UI_Interact_C);
	static FName NAME_UI_Interact_C_bpf__Interact__pf = FName(TEXT("Interact"));
	void II_Interact_C::Execute_bpf__Interact__pf(UObject* O, AActor* bpp__Interactor__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UI_Interact_C::StaticClass()));
		I_Interact_C_eventbpf__Interact__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UI_Interact_C_bpf__Interact__pf);
		if (Func)
		{
			Parms.bpp__Interactor__pf=bpp__Interactor__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
