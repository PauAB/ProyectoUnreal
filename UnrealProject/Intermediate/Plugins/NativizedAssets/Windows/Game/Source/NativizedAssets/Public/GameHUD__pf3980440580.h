#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UCanvasPanel;
#include "GameHUD__pf3980440580.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD.GameHUD_C", OverrideNativeName="GameHUD_C"))
class UGameHUD_C__pf3980440580 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DayCounter", Category="GameHUD", OverrideNativeName="DayCounter"))
	UTextBlock* bpv__DayCounter__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GetText", Category="GameHUD", OverrideNativeName="GetText"))
	UTextBlock* bpv__GetText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HUDCanvas", Category="GameHUD", OverrideNativeName="HUDCanvas"))
	UCanvasPanel* bpv__HUDCanvas__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TemperatureText", Category="GameHUD", OverrideNativeName="TemperatureText"))
	UTextBlock* bpv__TemperatureText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total Hp", Category="Default", MultiLine="true", OverrideNativeName="TotalHp"))
	float bpv__TotalHp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Hp", Category="Default", MultiLine="true", OverrideNativeName="CurrentHp"))
	float bpv__CurrentHp__pf;
	UGameHUD_C__pf3980440580(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GameHUD__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetText"))
	virtual void bpf__SetText__pf(const FText& bpp__Text__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RemoveText"))
	virtual void bpf__RemoveText__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateDay"))
	virtual void bpf__UpdateDay__pf(int32 bpp__Days__pf, float bpp__Temp__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetDialogue"))
	virtual void bpf__SetDialogue__pf(const FText& bpp__Text__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RemoveDialogue"))
	virtual void bpf__RemoveDialogue__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
