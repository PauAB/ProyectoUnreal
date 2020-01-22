#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "SlotStruct__pf697489738.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UInventoryComponent_C__pf2577010357;
class UTextBlock;
class UImage;
#include "Slot__pf3980440580.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot.Slot_C", OverrideNativeName="Slot_C"))
class USlot_C__pf3980440580 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ItemCount", Category="Slot", OverrideNativeName="ItemCount"))
	UTextBlock* bpv__ItemCount__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ItemImage", Category="Slot", OverrideNativeName="ItemImage"))
	UImage* bpv__ItemImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SlotIndexText", Category="Slot", OverrideNativeName="SlotIndexText"))
	UTextBlock* bpv__SlotIndexText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="xText", Category="Slot", OverrideNativeName="xText"))
	UTextBlock* bpv__xText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slot Index", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="SlotIndex"))
	int32 bpv__SlotIndex__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slot Content", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="SlotContent"))
	FSlotStruct__pf697489738 bpv__SlotContent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Inventory"))
	UInventoryComponent_C__pf2577010357* bpv__Inventory__pf;
	USlot_C__pf3980440580(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Slot__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateSlot"))
	virtual void bpf__UpdateSlot__pf(int32 bpp__SlotxIndex__pfT, FSlotStruct__pf697489738 bpp__Slot__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
