#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Item__pf199495785.h"
#include "String__pf199495785.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/String.String_C", OverrideNativeName="String_C"))
class AString_C__pf199495785 : public AItem_C__pf199495785
{
public:
	GENERATED_BODY()
	AString_C__pf199495785(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_String__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__DestroyItem__pf() override;
public:
};
