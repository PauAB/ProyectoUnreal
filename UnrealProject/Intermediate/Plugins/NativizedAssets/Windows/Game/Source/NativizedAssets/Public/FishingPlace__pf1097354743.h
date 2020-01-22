#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "SlotStruct__pf697489738.h"
#include "Build__pf1097354743.h"
class UInventoryComponent_C__pf2577010357;
class AController;
class ATopDownCharacter_C__pf3669546605;
class ATopDownController_C__pf3669546605;
class AActor;
#include "FishingPlace__pf1097354743.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace.FishingPlace_C", OverrideNativeName="FishingPlace_C"))
class AFishingPlace_C__pf1097354743 : public ABuild_C__pf1097354743
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", OverrideNativeName="Inventory"))
	TArray<FSlotStruct__pf697489738> bpv__Inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fishing Rod Struct", Category="Default", MultiLine="true", OverrideNativeName="FishingRodStruct"))
	FSlotStruct__pf697489738 bpv__FishingRodStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Comp", Category="Default", MultiLine="true", OverrideNativeName="InventoryComp"))
	UInventoryComponent_C__pf2577010357* bpv__InventoryComp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Controller", Category="Default", MultiLine="true", OverrideNativeName="CharController"))
	AController* bpv__CharController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Ref", Category="Default", MultiLine="true", OverrideNativeName="CharRef"))
	ATopDownCharacter_C__pf3669546605* bpv__CharRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fish Struct", Category="Default", MultiLine="true", OverrideNativeName="FishStruct"))
	FSlotStruct__pf697489738 bpv__FishStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller1"))
	ATopDownController_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b1l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Interactor"))
	AActor* b1l__K2Node_Event_Interactor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b1l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddToInventory_Success"))
	bool b1l__CallFunc_AddToInventory_Success__pf;
	AFishingPlace_C__pf1097354743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_FishingPlace_0"))
	void bpf__ExecuteUbergraph_FishingPlace__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__Interact__pf(AActor* bpp__Interactor__pf) override;
public:
};
