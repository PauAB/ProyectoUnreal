#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ItemStruct__pf697489738.h"
#include "SlotStruct__pf697489738.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "I_Interact__pf2577010357.h"
class USceneComponent;
class UStaticMeshComponent;
class USphereComponent;
class AActor;
class ATopDownCharacter_C__pf3669546605;
class ATopDownController_C__pf3669546605;
#include "Item__pf199495785.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item.Item_C", OverrideNativeName="Item_C"))
class AItem_C__pf199495785 : public AActor, public II_Interact_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	USphereComponent* bpv__Sphere__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Struct", Category="Default", MultiLine="true", OverrideNativeName="ItemStruct"))
	FItemStruct__pf697489738 bpv__ItemStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Quantity", Category="Default", MultiLine="true", OverrideNativeName="Quantity"))
	int32 bpv__Quantity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Content to Add", Category="Default", MultiLine="true", OverrideNativeName="ContentToAdd"))
	FSlotStruct__pf697489738 bpv__ContentToAdd__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Counter", Category="Default", MultiLine="true", OverrideNativeName="Counter"))
	int32 bpv__Counter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Interactor"))
	AActor* b0l__K2Node_Event_Interactor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlotStruct"))
	FSlotStruct__pf697489738 b0l__K2Node_MakeStruct_SlotStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_InventoryFull_Full"))
	bool b0l__CallFunc_InventoryFull_Full__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddToInventory_Success"))
	bool b0l__CallFunc_AddToInventory_Success__pf;
	AItem_C__pf199495785(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Item_0"))
	void bpf__ExecuteUbergraph_Item__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Interact"))
	virtual void bpf__Interact__pf(AActor* bpp__Interactor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InventoryFull"))
	virtual void bpf__InventoryFull__pf(ATopDownCharacter_C__pf3669546605* bpp__CharRef__pf, /*out*/ bool& bpp__Full__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyItem"))
	virtual void bpf__DestroyItem__pf();
public:
};
