#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "SlotStruct__pf697489738.h"
#include "I_Interact__pf2577010357.h"
#include "Build__pf1097354743.h"
class USlot_C__pf3980440580;
class UInventoryComponent_C__pf2577010357;
class ADialogueTrigger_C__pf3696423911;
class UStaticMeshComponent;
class AActor;
class ATopDownCharacter_C__pf3669546605;
class ATopDownController_C__pf3669546605;
#include "Igloo__pf1097354743.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Igloo.Igloo_C", OverrideNativeName="Igloo_C"))
class AIgloo_C__pf1097354743 : public ABuild_C__pf1097354743
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sign"))
	UStaticMeshComponent* bpv__Sign__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ice Cube Struct", Category="Default", MultiLine="true", OverrideNativeName="IceCubeStruct"))
	FSlotStruct__pf697489738 bpv__IceCubeStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", OverrideNativeName="Inventory"))
	TArray<FSlotStruct__pf697489738> bpv__Inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot Widget", Category="Default", MultiLine="true", OverrideNativeName="SlotWidget"))
	USlot_C__pf3980440580* bpv__SlotWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Comp", Category="Default", MultiLine="true", OverrideNativeName="InventoryComp"))
	UInventoryComponent_C__pf2577010357* bpv__InventoryComp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dialogue", Category="Default", MultiLine="true", OverrideNativeName="Dialogue"))
	ADialogueTrigger_C__pf3696423911* bpv__Dialogue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Interactor"))
	AActor* b1l__K2Node_Event_Interactor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b1l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDialogue_Trigger"))
	ADialogueTrigger_C__pf3696423911* b1l__K2Node_DynamicCast_AsDialogue_Trigger__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller1"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b1l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	FSlotStruct__pf697489738 b1l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller2"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b1l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlotStruct"))
	FSlotStruct__pf697489738 b1l__K2Node_MakeStruct_SlotStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Interact_self_CastInput"))
	TScriptInterface<II_Interact_C> b1l__CallFunc_Interact_self_CastInput__pf;
	AIgloo_C__pf1097354743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Igloo_0"))
	void bpf__ExecuteUbergraph_Igloo__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Igloo_1"))
	void bpf__ExecuteUbergraph_Igloo__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__Interact__pf(AActor* bpp__Interactor__pf) override;
public:
};
