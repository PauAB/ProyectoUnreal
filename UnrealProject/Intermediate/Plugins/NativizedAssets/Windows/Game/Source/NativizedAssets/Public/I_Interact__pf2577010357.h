#pragma once
#include "Blueprint/BlueprintSupport.h"
class AActor;
#include "I_Interact__pf2577010357.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/I_Interact.I_Interact_C", OverrideNativeName="I_Interact_C"))
class UI_Interact_C : public UInterface
{
	GENERATED_BODY()
};
class II_Interact_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Interact"))
	void bpf__Interact__pf(AActor* bpp__Interactor__pf);
public:
};
