#include "NativizedAssets.h"
#include "DialogueStruct__pf3696423911.h"
FDialogueStruct__pf3696423911::FDialogueStruct__pf3696423911()
{
	bpv__Trigger_ID_2_0B437ECA415DFC94F5934F911FA28EDA__pf = 0;
	bpv__Conversation_ID_6_853963EA453834B949FB7AABEFD0044C__pf = 0;
	bpv__Line_ID_8_E860DFA642701DC94E3DBDA174D72839__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FDialogueStruct__pf3696423911::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FDialogueStruct__pf3696423911
{
	FRegisterHelper__FDialogueStruct__pf3696423911()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueStruct"), &FDialogueStruct__pf3696423911::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FDialogueStruct__pf3696423911 Instance;
};
FRegisterHelper__FDialogueStruct__pf3696423911 FRegisterHelper__FDialogueStruct__pf3696423911::Instance;
