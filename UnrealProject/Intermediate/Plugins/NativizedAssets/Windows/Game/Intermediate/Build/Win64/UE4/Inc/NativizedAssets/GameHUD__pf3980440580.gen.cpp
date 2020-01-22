// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GameHUD__pf3980440580.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD__pf3980440580() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameHUD_C__pf3980440580_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameHUD_C__pf3980440580();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	static FName NAME_UGameHUD_C__pf3980440580_bpf__Construct__pf = FName(TEXT("Construct"));
	void UGameHUD_C__pf3980440580::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_C__pf3980440580_bpf__Construct__pf),NULL);
	}
	void UGameHUD_C__pf3980440580::StaticRegisterNativesUGameHUD_C__pf3980440580()
	{
		UClass* Class = UGameHUD_C__pf3980440580::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UGameHUD_C__pf3980440580::execbpf__Construct__pf },
			{ "RemoveDialogue", &UGameHUD_C__pf3980440580::execbpf__RemoveDialogue__pf },
			{ "RemoveText", &UGameHUD_C__pf3980440580::execbpf__RemoveText__pf },
			{ "SetDialogue", &UGameHUD_C__pf3980440580::execbpf__SetDialogue__pf },
			{ "SetText", &UGameHUD_C__pf3980440580::execbpf__SetText__pf },
			{ "UpdateDay", &UGameHUD_C__pf3980440580::execbpf__UpdateDay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "Construct", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "RemoveDialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "RemoveDialogue", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("RemoveDialogue") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "RemoveText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "RemoveText", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("RemoveText") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics
	{
		struct GameHUD_C__pf3980440580_eventbpf__SetDialogue__pf_Parms
		{
			FText bpp__Text__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Text__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__Text__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::NewProp_bpp__Text__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::NewProp_bpp__Text__pf__const = { "bpp__Text__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GameHUD_C__pf3980440580_eventbpf__SetDialogue__pf_Parms, bpp__Text__pf__const), METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::NewProp_bpp__Text__pf__const_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::NewProp_bpp__Text__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::NewProp_bpp__Text__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "SetDialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "SetDialogue", sizeof(GameHUD_C__pf3980440580_eventbpf__SetDialogue__pf_Parms), Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetDialogue") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics
	{
		struct GameHUD_C__pf3980440580_eventbpf__SetText__pf_Parms
		{
			FText bpp__Text__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Text__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__Text__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const = { "bpp__Text__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GameHUD_C__pf3980440580_eventbpf__SetText__pf_Parms, bpp__Text__pf__const), METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::NewProp_bpp__Text__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "SetText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "SetText", sizeof(GameHUD_C__pf3980440580_eventbpf__SetText__pf_Parms), Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetText") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics
	{
		struct GameHUD_C__pf3980440580_eventbpf__UpdateDay__pf_Parms
		{
			int32 bpp__Days__pf;
			float bpp__Temp__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Temp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Days__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::NewProp_bpp__Temp__pf = { "bpp__Temp__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GameHUD_C__pf3980440580_eventbpf__UpdateDay__pf_Parms, bpp__Temp__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::NewProp_bpp__Days__pf = { "bpp__Days__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GameHUD_C__pf3980440580_eventbpf__UpdateDay__pf_Parms, bpp__Days__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::NewProp_bpp__Temp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::NewProp_bpp__Days__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "UpdateDay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD_C__pf3980440580, nullptr, "UpdateDay", sizeof(GameHUD_C__pf3980440580_eventbpf__UpdateDay__pf_Parms), Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameHUD_C__pf3980440580();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UpdateDay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHUD_C__pf3980440580_NoRegister()
	{
		return UGameHUD_C__pf3980440580::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentHp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__CurrentHp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TotalHp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TotalHp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TemperatureText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TemperatureText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HUDCanvas__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HUDCanvas__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GetText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GetText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DayCounter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DayCounter__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__Construct__pf, "Construct" }, // 4106259381
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveDialogue__pf, "RemoveDialogue" }, // 41248342
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__RemoveText__pf, "RemoveText" }, // 4197657515
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetDialogue__pf, "SetDialogue" }, // 1804451615
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__SetText__pf, "SetText" }, // 2188591846
		{ &Z_Construct_UFunction_UGameHUD_C__pf3980440580_bpf__UpdateDay__pf, "UpdateDay" }, // 2515543777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameHUD__pf3980440580.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GameHUD_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD.GameHUD_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__CurrentHp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Hp" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CurrentHp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__CurrentHp__pf = { "CurrentHp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__CurrentHp__pf), METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__CurrentHp__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__CurrentHp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TotalHp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Total Hp" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TotalHp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TotalHp__pf = { "TotalHp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__TotalHp__pf), METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TotalHp__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TotalHp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TemperatureText__pf_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "DisplayName", "TemperatureText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "TemperatureText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TemperatureText__pf = { "TemperatureText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__TemperatureText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TemperatureText__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TemperatureText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__HUDCanvas__pf_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "DisplayName", "HUDCanvas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "HUDCanvas" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__HUDCanvas__pf = { "HUDCanvas", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__HUDCanvas__pf), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__HUDCanvas__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__HUDCanvas__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__GetText__pf_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "DisplayName", "GetText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "GetText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__GetText__pf = { "GetText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__GetText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__GetText__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__GetText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__DayCounter__pf_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "DisplayName", "DayCounter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD__pf3980440580.h" },
		{ "OverrideNativeName", "DayCounter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__DayCounter__pf = { "DayCounter", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UGameHUD_C__pf3980440580, bpv__DayCounter__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__DayCounter__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__DayCounter__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__CurrentHp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TotalHp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__TemperatureText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__HUDCanvas__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__GetText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::NewProp_bpv__DayCounter__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD_C__pf3980440580>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::ClassParams = {
		&UGameHUD_C__pf3980440580::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUD_C__pf3980440580()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GameHUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UGameHUD_C__pf3980440580, TEXT("GameHUD_C"), 1262662042);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UGameHUD_C__pf3980440580>()
	{
		return UGameHUD_C__pf3980440580::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD_C__pf3980440580(Z_Construct_UClass_UGameHUD_C__pf3980440580, &UGameHUD_C__pf3980440580::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD"), TEXT("GameHUD_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD.GameHUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD_C__pf3980440580);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
