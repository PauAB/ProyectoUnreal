// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Slot__pf3980440580.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlot__pf3980440580() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlot_C__pf3980440580_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlot_C__pf3980440580();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static FName NAME_USlot_C__pf3980440580_bpf__Construct__pf = FName(TEXT("Construct"));
	void USlot_C__pf3980440580::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_USlot_C__pf3980440580_bpf__Construct__pf),NULL);
	}
	void USlot_C__pf3980440580::StaticRegisterNativesUSlot_C__pf3980440580()
	{
		UClass* Class = USlot_C__pf3980440580::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &USlot_C__pf3980440580::execbpf__Construct__pf },
			{ "UpdateSlot", &USlot_C__pf3980440580::execbpf__UpdateSlot__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlot_C__pf3980440580, nullptr, "Construct", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_USlot_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics
	{
		struct Slot_C__pf3980440580_eventbpf__UpdateSlot__pf_Parms
		{
			int32 bpp__SlotxIndex__pfT;
			FSlotStruct__pf697489738 bpp__Slot__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Slot__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SlotxIndex__pfT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::NewProp_bpp__Slot__pf = { "bpp__Slot__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Slot_C__pf3980440580_eventbpf__UpdateSlot__pf_Parms, bpp__Slot__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::NewProp_bpp__SlotxIndex__pfT = { "bpp__SlotxIndex__pfT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Slot_C__pf3980440580_eventbpf__UpdateSlot__pf_Parms, bpp__SlotxIndex__pfT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::NewProp_bpp__Slot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::NewProp_bpp__SlotxIndex__pfT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "UpdateSlot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlot_C__pf3980440580, nullptr, "UpdateSlot", sizeof(Slot_C__pf3980440580_eventbpf__UpdateSlot__pf_Parms), Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf()
	{
		UObject* Outer = Z_Construct_UClass_USlot_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UpdateSlot") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlot_C__pf3980440580_NoRegister()
	{
		return USlot_C__pf3980440580::StaticClass();
	}
	struct Z_Construct_UClass_USlot_C__pf3980440580_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Inventory__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Inventory__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlotContent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SlotContent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlotIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__SlotIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__xText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__xText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlotIndexText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SlotIndexText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemImage__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ItemImage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ItemCount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlot_C__pf3980440580_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlot_C__pf3980440580_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlot_C__pf3980440580_bpf__Construct__pf, "Construct" }, // 1774395654
		{ &Z_Construct_UFunction_USlot_C__pf3980440580_bpf__UpdateSlot__pf, "UpdateSlot" }, // 3891433023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Slot__pf3980440580.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Slot_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot.Slot_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inventory" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Inventory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf = { "Inventory", nullptr, (EPropertyFlags)0x001100000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__Inventory__pf), Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotContent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slot Content" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlotContent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotContent__pf = { "SlotContent", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__SlotContent__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotContent__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotContent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndex__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slot Index" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlotIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndex__pf = { "SlotIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__SlotIndex__pf), METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndex__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__xText__pf_MetaData[] = {
		{ "Category", "Slot" },
		{ "DisplayName", "xText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "xText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__xText__pf = { "xText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__xText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__xText__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__xText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndexText__pf_MetaData[] = {
		{ "Category", "Slot" },
		{ "DisplayName", "SlotIndexText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "SlotIndexText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndexText__pf = { "SlotIndexText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__SlotIndexText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndexText__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndexText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemImage__pf_MetaData[] = {
		{ "Category", "Slot" },
		{ "DisplayName", "ItemImage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "ItemImage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemImage__pf = { "ItemImage", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__ItemImage__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemImage__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemImage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemCount__pf_MetaData[] = {
		{ "Category", "Slot" },
		{ "DisplayName", "ItemCount" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot__pf3980440580.h" },
		{ "OverrideNativeName", "ItemCount" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemCount__pf = { "ItemCount", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(USlot_C__pf3980440580, bpv__ItemCount__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemCount__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemCount__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlot_C__pf3980440580_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotContent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__xText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__SlotIndexText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemImage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_C__pf3980440580_Statics::NewProp_bpv__ItemCount__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlot_C__pf3980440580_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlot_C__pf3980440580>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlot_C__pf3980440580_Statics::ClassParams = {
		&USlot_C__pf3980440580::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlot_C__pf3980440580_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlot_C__pf3980440580_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlot_C__pf3980440580_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlot_C__pf3980440580()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Slot_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlot_C__pf3980440580_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USlot_C__pf3980440580, TEXT("Slot_C"), 2118603413);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USlot_C__pf3980440580>()
	{
		return USlot_C__pf3980440580::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlot_C__pf3980440580(Z_Construct_UClass_USlot_C__pf3980440580, &USlot_C__pf3980440580::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot"), TEXT("Slot_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot.Slot_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlot_C__pf3980440580);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
