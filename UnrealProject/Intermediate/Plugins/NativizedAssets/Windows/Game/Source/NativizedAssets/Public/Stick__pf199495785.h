#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Item__pf199495785.h"
#include "Stick__pf199495785.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick.Stick_C", OverrideNativeName="Stick_C"))
class AStick_C__pf199495785 : public AItem_C__pf199495785
{
public:
	GENERATED_BODY()
	AStick_C__pf199495785(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Stick__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__DestroyItem__pf() override;
public:
};
