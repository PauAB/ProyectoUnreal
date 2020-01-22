#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "SlotStruct__pf697489738.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USlot_C__pf3980440580;
class UInventoryComponent_C__pf2577010357;
class UGridPanel;
#include "InventoryWindow__pf3980440580.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow.InventoryWindow_C", OverrideNativeName="InventoryWindow_C"))
class UInventoryWindow_C__pf3980440580 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InventoryGrid", Category="InventoryWindow", OverrideNativeName="InventoryGrid"))
	UGridPanel* bpv__InventoryGrid__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Inventory"))
	UInventoryComponent_C__pf2577010357* bpv__Inventory__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slot Widget", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="SlotWidget"))
	USlot_C__pf3980440580* bpv__SlotWidget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FSlotStruct__pf697489738 b0l__CallFunc_Array_Get_Item__pf;
	UInventoryWindow_C__pf3980440580(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InventoryWindow__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
