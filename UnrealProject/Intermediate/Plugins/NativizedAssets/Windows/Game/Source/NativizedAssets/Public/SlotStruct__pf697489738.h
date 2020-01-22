#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "ItemStruct__pf697489738.h"
#include "SlotStruct__pf697489738.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct.SlotStruct", OverrideNativeName="SlotStruct"))
struct FSlotStruct__pf697489738
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Item", Tooltip, OverrideNativeName="Item_2_62BAB36C42C7C677530F17B8E558FF3A"))
	FItemStruct__pf697489738 bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Quantity", Tooltip, OverrideNativeName="Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32"))
	int32 bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf;
	FSlotStruct__pf697489738();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSlotStruct__pf697489738& __Other) const
	{
		return FSlotStruct__pf697489738::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FSlotStruct__pf697489738& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FSlotStruct__pf697489738::StaticStruct()); }
};
