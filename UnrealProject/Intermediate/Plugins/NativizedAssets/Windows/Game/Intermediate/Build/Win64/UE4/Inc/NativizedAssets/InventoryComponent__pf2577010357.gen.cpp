// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/InventoryComponent__pf2577010357.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent__pf2577010357() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryWindow_C__pf3980440580_NoRegister();
// End Cross Module References
	static FName NAME_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void UInventoryComponent_C__pf2577010357::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void UInventoryComponent_C__pf2577010357::StaticRegisterNativesUInventoryComponent_C__pf2577010357()
	{
		UClass* Class = UInventoryComponent_C__pf2577010357::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UInventoryComponent_C__pf2577010357::execbpf__AddToInventory__pf },
			{ "AddToStack", &UInventoryComponent_C__pf2577010357::execbpf__AddToStack__pf },
			{ "CreateStack", &UInventoryComponent_C__pf2577010357::execbpf__CreateStack__pf },
			{ "PrepareInventory", &UInventoryComponent_C__pf2577010357::execbpf__PrepareInventory__pf },
			{ "ReceiveBeginPlay", &UInventoryComponent_C__pf2577010357::execbpf__ReceiveBeginPlay__pf },
			{ "ToggleInventory", &UInventoryComponent_C__pf2577010357::execbpf__ToggleInventory__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics
	{
		struct InventoryComponent_C__pf2577010357_eventbpf__AddToInventory__pf_Parms
		{
			FSlotStruct__pf697489738 bpp__ContentToAdd__pf;
			bool bpp__Success__pf;
		};
		static void NewProp_bpp__Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Success__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ContentToAdd__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__Success__pf_SetBit(void* Obj)
	{
		((InventoryComponent_C__pf2577010357_eventbpf__AddToInventory__pf_Parms*)Obj)->bpp__Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__Success__pf = { "bpp__Success__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(InventoryComponent_C__pf2577010357_eventbpf__AddToInventory__pf_Parms), &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__Success__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__ContentToAdd__pf = { "bpp__ContentToAdd__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InventoryComponent_C__pf2577010357_eventbpf__AddToInventory__pf_Parms, bpp__ContentToAdd__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::NewProp_bpp__ContentToAdd__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "AddToInventory" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "AddToInventory", sizeof(InventoryComponent_C__pf2577010357_eventbpf__AddToInventory__pf_Parms), Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AddToInventory") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics
	{
		struct InventoryComponent_C__pf2577010357_eventbpf__AddToStack__pf_Parms
		{
			FSlotStruct__pf697489738 bpp__SlotStruct__pf;
			int32 bpp__SlotIndex__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SlotIndex__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SlotStruct__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::NewProp_bpp__SlotIndex__pf = { "bpp__SlotIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InventoryComponent_C__pf2577010357_eventbpf__AddToStack__pf_Parms, bpp__SlotIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::NewProp_bpp__SlotStruct__pf = { "bpp__SlotStruct__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InventoryComponent_C__pf2577010357_eventbpf__AddToStack__pf_Parms, bpp__SlotStruct__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::NewProp_bpp__SlotIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::NewProp_bpp__SlotStruct__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "AddToStack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "AddToStack", sizeof(InventoryComponent_C__pf2577010357_eventbpf__AddToStack__pf_Parms), Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("AddToStack") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics
	{
		struct InventoryComponent_C__pf2577010357_eventbpf__CreateStack__pf_Parms
		{
			FSlotStruct__pf697489738 bpp__ContentToAdd__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ContentToAdd__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::NewProp_bpp__ContentToAdd__pf = { "bpp__ContentToAdd__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(InventoryComponent_C__pf2577010357_eventbpf__CreateStack__pf_Parms, bpp__ContentToAdd__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::NewProp_bpp__ContentToAdd__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "CreateStack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "CreateStack", sizeof(InventoryComponent_C__pf2577010357_eventbpf__CreateStack__pf_Parms), Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("CreateStack") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "PrepareInventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "PrepareInventory", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PrepareInventory") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "ReceiveBeginPlay", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "OverrideNativeName", "ToggleInventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent_C__pf2577010357, nullptr, "ToggleInventory", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf()
	{
		UObject* Outer = Z_Construct_UClass_UInventoryComponent_C__pf2577010357();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ToggleInventory") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister()
	{
		return UInventoryComponent_C__pf2577010357::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Position__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Position__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Anchors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Anchors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InvWindowWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__InvWindowWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Inventory__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Inventory__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Inventory__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NumberOfSlots__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__NumberOfSlots__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToInventory__pf, "AddToInventory" }, // 2299439755
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__AddToStack__pf, "AddToStack" }, // 1795736885
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__CreateStack__pf, "CreateStack" }, // 3141778091
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__PrepareInventory__pf, "PrepareInventory" }, // 1772761164
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2353335143
		{ &Z_Construct_UFunction_UInventoryComponent_C__pf2577010357_bpf__ToggleInventory__pf, "ToggleInventory" }, // 1408675893
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InventoryComponent__pf2577010357.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "InventoryComponent_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent.InventoryComponent_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Position__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Position" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Position__pf = { "Position", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryComponent_C__pf2577010357, bpv__Position__pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Position__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Position__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Anchors__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Anchors" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Anchors" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Anchors__pf = { "Anchors", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryComponent_C__pf2577010357, bpv__Anchors__pf), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Anchors__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Anchors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__InvWindowWidget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inv Window Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "InvWindowWidget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__InvWindowWidget__pf = { "InvWindowWidget", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryComponent_C__pf2577010357, bpv__InvWindowWidget__pf), Z_Construct_UClass_UInventoryWindow_C__pf3980440580_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__InvWindowWidget__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__InvWindowWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf = { "Inventory", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryComponent_C__pf2577010357, bpv__Inventory__pf), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf_Inner = { "bpv__Inventory__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__NumberOfSlots__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Number Of Slots" },
		{ "ModuleRelativePath", "Public/InventoryComponent__pf2577010357.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NumberOfSlots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__NumberOfSlots__pf = { "NumberOfSlots", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UInventoryComponent_C__pf2577010357, bpv__NumberOfSlots__pf), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__NumberOfSlots__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__NumberOfSlots__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Position__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Anchors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__InvWindowWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__Inventory__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::NewProp_bpv__NumberOfSlots__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent_C__pf2577010357>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::ClassParams = {
		&UInventoryComponent_C__pf2577010357::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("InventoryComponent_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UInventoryComponent_C__pf2577010357, TEXT("InventoryComponent_C"), 1640923384);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UInventoryComponent_C__pf2577010357>()
	{
		return UInventoryComponent_C__pf2577010357::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent_C__pf2577010357(Z_Construct_UClass_UInventoryComponent_C__pf2577010357, &UInventoryComponent_C__pf2577010357::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent"), TEXT("InventoryComponent_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent.InventoryComponent_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent_C__pf2577010357);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
