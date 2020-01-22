#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "MainMenu__pf3669546605.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/Default/MainMenu.MainMenu_C", OverrideNativeName="MainMenu_C"))
class UMainMenu_C__pf3669546605 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_154", Category="MainMenu", OverrideNativeName="Image_154"))
	UImage* bpv__Image_154__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_594", Category="MainMenu", OverrideNativeName="Image_594"))
	UImage* bpv__Image_594__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayButton", Category="MainMenu", OverrideNativeName="PlayButton"))
	UButton* bpv__PlayButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="QuitButton", Category="MainMenu", OverrideNativeName="QuitButton"))
	UButton* bpv__QuitButton__pf;
	UMainMenu_C__pf3669546605(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
