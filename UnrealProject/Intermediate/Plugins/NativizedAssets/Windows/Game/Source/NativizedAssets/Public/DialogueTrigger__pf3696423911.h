#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "DialogueStruct__pf3696423911.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "I_Interact__pf2577010357.h"
class AActor;
class USceneComponent;
class UBoxComponent;
class UGameHUD_C__pf3980440580;
class ATopDownController_C__pf3669546605;
class UPrimitiveComponent;
class ATopDownCharacter_C__pf3669546605;
#include "DialogueTrigger__pf3696423911.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger.DialogueTrigger_C", OverrideNativeName="DialogueTrigger_C"))
class ADialogueTrigger_C__pf3696423911 : public AActor, public II_Interact_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dialogue Widget", Category="Default", MultiLine="true", OverrideNativeName="DialogueWidget"))
	UGameHUD_C__pf3980440580* bpv__DialogueWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Controller", Category="Default", MultiLine="true", OverrideNativeName="CharController"))
	ATopDownController_C__pf3669546605* bpv__CharController__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Trigger ID", Category="Default", MultiLine="true", OverrideNativeName="Trigger_ID"))
	int32 bpv__Trigger_ID__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Conversation ID", Category="Default", MultiLine="true", OverrideNativeName="Conversation_ID"))
	int32 bpv__Conversation_ID__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Line Current", Category="Default", MultiLine="true", OverrideNativeName="LineCurrent"))
	int32 bpv__LineCurrent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dialogues", Category="Default", MultiLine="true", OverrideNativeName="Dialogues"))
	TArray<FName> bpv__Dialogues__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Interactor"))
	AActor* b0l__K2Node_Event_Interactor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowNames_OutRowNames"))
	TArray<FName> b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FName b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowFromName_OutRow"))
	FDialogueStruct__pf3696423911 b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable1"))
	int32 b0l__Temp_int_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDialogueLine_Line"))
	FText b0l__CallFunc_GetDialogueLine_Line__pf;
	ADialogueTrigger_C__pf3696423911(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_DialogueTrigger_0"))
	void bpf__ExecuteUbergraph_DialogueTrigger__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DialogueTrigger__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DialogueTrigger__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Interact"))
	virtual void bpf__Interact__pf(AActor* bpp__Interactor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateDialogue"))
	virtual void bpf__CreateDialogue__pf(AActor* bpp__Interactor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetDialogueLine"))
	virtual void bpf__GetDialogueLine__pf(/*out*/ FText& bpp__Line__pf);
public:
};
