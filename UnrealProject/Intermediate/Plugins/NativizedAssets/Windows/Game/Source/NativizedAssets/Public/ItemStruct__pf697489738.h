#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture2D;
class AItem_C__pf199495785;
class UClass;
#include "ItemStruct__pf697489738.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct.ItemStruct", OverrideNativeName="ItemStruct"))
struct FItemStruct__pf697489738
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_6_B6AB9EB541573009E7015587D2D24A4C"))
	FText bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Texture", Tooltip, OverrideNativeName="Texture_15_7F6B4FA54855A03EC62974BC9E749329"))
	UTexture2D* bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="IsStackable", Tooltip, OverrideNativeName="IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F"))
	bool bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="IsUsable", Tooltip, OverrideNativeName="IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B"))
	bool bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxStackSize", Tooltip, OverrideNativeName="MaxStackSize_10_24C692A64198F66E71A52199D20FB35C"))
	int32 bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_12_33456D674F08300E4B2C238A1C0A44C6"))
	UClass* bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf;
	FItemStruct__pf697489738();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FItemStruct__pf697489738& __Other) const
	{
		return FItemStruct__pf697489738::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
