#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "SlotStruct__pf697489738.h"
#include "I_Interact__pf2577010357.h"
#include "Build__pf1097354743.h"
class USlot_C__pf3980440580;
class UInventoryComponent_C__pf2577010357;
class ADialogueTrigger_C__pf3696423911;
class AActor;
class ATopDownCharacter_C__pf3669546605;
class ATopDownController_C__pf3669546605;
#include "FishingRodCraft__pf1097354743.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingRodCraft.FishingRodCraft_C", OverrideNativeName="FishingRodCraft_C"))
class AFishingRodCraft_C__pf1097354743 : public ABuild_C__pf1097354743
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="String Struct", Category="Default", MultiLine="true", OverrideNativeName="StringStruct"))
	FSlotStruct__pf697489738 bpv__StringStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stick Struct", Category="Default", MultiLine="true", OverrideNativeName="StickStruct"))
	FSlotStruct__pf697489738 bpv__StickStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", OverrideNativeName="Inventory"))
	TArray<FSlotStruct__pf697489738> bpv__Inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot Widget", Category="Default", MultiLine="true", OverrideNativeName="SlotWidget"))
	USlot_C__pf3980440580* bpv__SlotWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Comp", Category="Default", MultiLine="true", OverrideNativeName="InventoryComp"))
	UInventoryComponent_C__pf2577010357* bpv__InventoryComp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fishing Rod Struct", Category="Default", MultiLine="true", OverrideNativeName="FishingRodStruct"))
	FSlotStruct__pf697489738 bpv__FishingRodStruct__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDialogue_Trigger"))
	ADialogueTrigger_C__pf3696423911* b1l__K2Node_DynamicCast_AsDialogue_Trigger__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b1l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	FSlotStruct__pf697489738 b1l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FSlotStruct__pf697489738 b1l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlotStruct"))
	FSlotStruct__pf697489738 b1l__K2Node_MakeStruct_SlotStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlotStruct1"))
	FSlotStruct__pf697489738 b1l__K2Node_MakeStruct_SlotStruct1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller1"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b1l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddToInventory_Success"))
	bool b1l__CallFunc_AddToInventory_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Interact_self_CastInput"))
	TScriptInterface<II_Interact_C> b1l__CallFunc_Interact_self_CastInput__pf;
	AFishingRodCraft_C__pf1097354743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_FishingRodCraft_0"))
	void bpf__ExecuteUbergraph_FishingRodCraft__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__Interact__pf(AActor* bpp__Interactor__pf) override;
public:
};
