// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/DialogueStruct__pf3696423911.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueStruct__pf3696423911() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911();
// End Cross Module References
class UScriptStruct* FDialogueStruct__pf3696423911::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("DialogueStruct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911, StructPackage, TEXT("DialogueStruct"), sizeof(FDialogueStruct__pf3696423911), Get_Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FDialogueStruct__pf3696423911>()
{
	return FDialogueStruct__pf3696423911::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueStruct__pf3696423911(FDialogueStruct__pf3696423911::StaticStruct, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"), TEXT("DialogueStruct"), true, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"), TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct.DialogueStruct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFDialogueStruct__pf3696423911
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFDialogueStruct__pf3696423911()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueStruct")),new UScriptStruct::TCppStructOps<FDialogueStruct__pf3696423911>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFDialogueStruct__pf3696423911;
	struct Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueStruct__pf3696423911.h" },
		{ "OverrideNativeName", "DialogueStruct" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct.DialogueStruct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueStruct__pf3696423911>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf_MetaData[] = {
		{ "Category", "DialogueStruct__pf3696423911" },
		{ "DisplayName", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueStruct__pf3696423911.h" },
		{ "OverrideNativeName", "Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf = { "Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FDialogueStruct__pf3696423911, bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf_MetaData[] = {
		{ "Category", "DialogueStruct__pf3696423911" },
		{ "DisplayName", "Line_ID" },
		{ "ModuleRelativePath", "Public/DialogueStruct__pf3696423911.h" },
		{ "OverrideNativeName", "Line_ID_8_E860DFA642701DC94E3DBDA174D72839" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf = { "Line_ID_8_E860DFA642701DC94E3DBDA174D72839", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FDialogueStruct__pf3696423911, bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf_MetaData[] = {
		{ "Category", "DialogueStruct__pf3696423911" },
		{ "DisplayName", "Conversation_ID" },
		{ "ModuleRelativePath", "Public/DialogueStruct__pf3696423911.h" },
		{ "OverrideNativeName", "Conversation_ID_6_853963EA453834B949FB7AABEFD0044C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf = { "Conversation_ID_6_853963EA453834B949FB7AABEFD0044C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FDialogueStruct__pf3696423911, bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf_MetaData[] = {
		{ "Category", "DialogueStruct__pf3696423911" },
		{ "DisplayName", "Trigger_ID" },
		{ "ModuleRelativePath", "Public/DialogueStruct__pf3696423911.h" },
		{ "OverrideNativeName", "Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf = { "Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FDialogueStruct__pf3696423911, bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::NewProp_bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"DialogueStruct",
		sizeof(FDialogueStruct__pf3696423911),
		alignof(FDialogueStruct__pf3696423911),
		Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueStruct"), sizeof(FDialogueStruct__pf3696423911), Get_Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911_Hash() { return 1604277404U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
