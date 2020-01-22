#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "SlotStruct__pf697489738.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class UInventoryWindow_C__pf3980440580;
#include "InventoryComponent__pf2577010357.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent.InventoryComponent_C", OverrideNativeName="InventoryComponent_C"))
class UInventoryComponent_C__pf2577010357 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Number Of Slots", Category="Default", MultiLine="true", OverrideNativeName="NumberOfSlots"))
	int32 bpv__NumberOfSlots__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", OverrideNativeName="Inventory"))
	TArray<FSlotStruct__pf697489738> bpv__Inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inv Window Widget", Category="Default", MultiLine="true", OverrideNativeName="InvWindowWidget"))
	UInventoryWindow_C__pf3980440580* bpv__InvWindowWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anchors", Category="Default", MultiLine="true", OverrideNativeName="Anchors"))
	FAnchors bpv__Anchors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position", Category="Default", MultiLine="true", OverrideNativeName="Position"))
	FVector2D bpv__Position__pf;
	UInventoryComponent_C__pf2577010357(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InventoryComponent__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ToggleInventory"))
	virtual void bpf__ToggleInventory__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddToInventory"))
	virtual void bpf__AddToInventory__pf(FSlotStruct__pf697489738 bpp__ContentToAdd__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PrepareInventory"))
	virtual void bpf__PrepareInventory__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateStack"))
	virtual void bpf__CreateStack__pf(FSlotStruct__pf697489738 bpp__ContentToAdd__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddToStack"))
	virtual void bpf__AddToStack__pf(FSlotStruct__pf697489738 bpp__SlotStruct__pf, int32 bpp__SlotIndex__pf);
public:
};
