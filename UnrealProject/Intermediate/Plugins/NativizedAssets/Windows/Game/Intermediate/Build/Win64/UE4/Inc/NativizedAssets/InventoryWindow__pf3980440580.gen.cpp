// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/InventoryWindow__pf3980440580.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWindow__pf3980440580() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryWindow_C__pf3980440580_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryWindow_C__pf3980440580();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlot_C__pf3980440580_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
// End Cross Module References
	static FName NAME_UInventoryWindow_C__pf3980440580_bpf__Construct__pf = FName(TEXT("Construct"));
	void UInventoryWindow_C__pf3980440580::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryWindow_C__pf3980440580_bpf__Construct__pf),NULL);
	}
	void UInventoryWindow_C__pf3980440580::StaticRegisterNativesUInventoryWindow_C__pf3980440580()
	{
		UClass* Class = UInventoryWindow_C__pf3980440580::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UInventoryWindow_C__pf3980440580::execbpf__Construct__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWindow_C__pf3980440580, nullptr, "Construct", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryWindow_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryWindow_C__pf3980440580_NoRegister()
	{
		return UInventoryWindow_C__pf3980440580::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlotWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SlotWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Inventory__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Inventory__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InventoryGrid__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__InventoryGrid__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWindow_C__pf3980440580_bpf__Construct__pf, "Construct" }, // 1043211005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InventoryWindow__pf3980440580.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "InventoryWindow_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow.InventoryWindow_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryWindow_C__pf3980440580, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryWindow_C__pf3980440580, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__SlotWidget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slot Widget" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlotWidget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__SlotWidget__pf = { "SlotWidget", nullptr, (EPropertyFlags)0x001100000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryWindow_C__pf3980440580, bpv__SlotWidget__pf), Z_Construct_UClass_USlot_C__pf3980440580_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__SlotWidget__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__SlotWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inventory" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Inventory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf = { "Inventory", nullptr, (EPropertyFlags)0x001100000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryWindow_C__pf3980440580, bpv__Inventory__pf), Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__InventoryGrid__pf_MetaData[] = {
		{ "Category", "InventoryWindow" },
		{ "DisplayName", "InventoryGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWindow__pf3980440580.h" },
		{ "OverrideNativeName", "InventoryGrid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__InventoryGrid__pf = { "InventoryGrid", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryWindow_C__pf3980440580, bpv__InventoryGrid__pf), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__InventoryGrid__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__InventoryGrid__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__SlotWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__Inventory__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::NewProp_bpv__InventoryGrid__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWindow_C__pf3980440580>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::ClassParams = {
		&UInventoryWindow_C__pf3980440580::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryWindow_C__pf3980440580()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("InventoryWindow_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryWindow_C__pf3980440580_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UInventoryWindow_C__pf3980440580, TEXT("InventoryWindow_C"), 4281041972);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UInventoryWindow_C__pf3980440580>()
	{
		return UInventoryWindow_C__pf3980440580::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryWindow_C__pf3980440580(Z_Construct_UClass_UInventoryWindow_C__pf3980440580, &UInventoryWindow_C__pf3980440580::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow"), TEXT("InventoryWindow_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow.InventoryWindow_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWindow_C__pf3980440580);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
