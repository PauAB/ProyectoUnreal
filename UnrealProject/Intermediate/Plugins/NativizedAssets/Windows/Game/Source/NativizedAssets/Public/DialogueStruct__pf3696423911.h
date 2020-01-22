#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "DialogueStruct__pf3696423911.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct.DialogueStruct", OverrideNativeName="DialogueStruct"))
struct FDialogueStruct__pf3696423911
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Trigger_ID", Tooltip, OverrideNativeName="Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA"))
	int32 bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Conversation_ID", Tooltip, OverrideNativeName="Conversation_ID_6_853963EA453834B949FB7AABEFD0044C"))
	int32 bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Line_ID", Tooltip, OverrideNativeName="Line_ID_8_E860DFA642701DC94E3DBDA174D72839"))
	int32 bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dialogue", Tooltip, OverrideNativeName="Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C"))
	FText bpv__Dialogue_11_0387802948D05D96EEA5EEA1B7D9515C__pf;
	FDialogueStruct__pf3696423911();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FDialogueStruct__pf3696423911& __Other) const
	{
		return FDialogueStruct__pf3696423911::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
