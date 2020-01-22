#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class ATopDownCharacter_C__pf3669546605;
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class UMaterialInstanceDynamic;
class ADirectionalLight;
class UCurveLinearColor;
class ATopDownController_C__pf3669546605;
#include "Custom_SkySphere__pf493351382.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/DayCycleLogic/Custom_SkySphere.Custom_SkySphere_C", OverrideNativeName="Custom_SkySphere_C"))
class ACustom_SkySphere_C__pf493351382 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="SkySphereMesh"))
	UStaticMeshComponent* bpv__SkySphereMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="Base"))
	USceneComponent* bpv__Base__pf;
	UPROPERTY(meta=(OverrideNativeName="DayCycle_Temperature_4446837C4C010CF3D86E819EA99F0CE5"))
	float bpv__DayCycle_Temperature_4446837C4C010CF3D86E819EA99F0CE5__pf;
	UPROPERTY(meta=(OverrideNativeName="DayCycle_DayTime_4446837C4C010CF3D86E819EA99F0CE5"))
	float bpv__DayCycle_DayTime_4446837C4C010CF3D86E819EA99F0CE5__pf;
	UPROPERTY(meta=(OverrideNativeName="DayCycle__Direction_4446837C4C010CF3D86E819EA99F0CE5"))
	TEnumAsByte<ETimelineDirection::Type> bpv__DayCycle__Direction_4446837C4C010CF3D86E819EA99F0CE5__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Custom_SkySphere", OverrideNativeName="DayCycle"))
	UTimelineComponent* bpv__DayCycle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sky Material", Category="Default", OverrideNativeName="Sky material"))
	UMaterialInstanceDynamic* bpv__Skyxmaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Refresh Material", Category="Default", Tooltip="Use this to update the sky material after moving  a directional light", OverrideNativeName="Refresh material"))
	bool bpv__Refreshxmaterial__pfT;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Directional Light Actor", Category="Default", Tooltip="Assign your level\'s directional light actor to this variable to  match the sky\'s sun position and color", OverrideNativeName="Directional light actor"))
	ADirectionalLight* bpv__Directionalxlightxactor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Colors Determined By Sun Position", Category="Default", Tooltip="If enabled, sky colors will change according to the sun\'s position", OverrideNativeName="Colors determined by sun position"))
	bool bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Height", Category="Override settings", UIMin="-1", UIMax="1", Tooltip="If no directional light is assigned, this value determines the height of the sun", OverrideNativeName="Sun height"))
	float bpv__Sunxheight__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Brightness", Category="Default", Tooltip="Brightness multiplier for the sun disk", OverrideNativeName="Sun brightness"))
	float bpv__Sunxbrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horizon Falloff", Category="Override settings", Tooltip="Affects the size of the gradient from zenith color to horizon color", OverrideNativeName="Horizon Falloff"))
	float bpv__HorizonxFalloff__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Zenith Color", Category="Override settings", OverrideNativeName="Zenith Color"))
	FLinearColor bpv__ZenithxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horizon Color", Category="Override settings", OverrideNativeName="Horizon color"))
	FLinearColor bpv__Horizonxcolor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Color", Category="Override settings", OverrideNativeName="Cloud color"))
	FLinearColor bpv__Cloudxcolor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overall Color", Category="Override settings", OverrideNativeName="Overall Color"))
	FLinearColor bpv__OverallxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Speed", Category="Default", Tooltip="Panning speed for the clouds", OverrideNativeName="Cloud speed"))
	float bpv__Cloudxspeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Opacity", Category="Default", Tooltip="Opacity of the panning clouds", OverrideNativeName="Cloud opacity"))
	float bpv__Cloudxopacity__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Brightness", Category="Default", Tooltip="Multiplier for the brightness of the stars when the sun is below the horizon", OverrideNativeName="Stars brightness"))
	float bpv__Starsxbrightness__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Horizon Color Curve", Category="Default", OverrideNativeName="Horizon color curve"))
	UCurveLinearColor* bpv__Horizonxcolorxcurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zenith Color Curve", Category="Default", OverrideNativeName="Zenith color curve"))
	UCurveLinearColor* bpv__Zenithxcolorxcurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cloud Color Curve", Category="Default", OverrideNativeName="Cloud color curve"))
	UCurveLinearColor* bpv__Cloudxcolorxcurve__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Day Cycle", Category="Default", MultiLine="true", OverrideNativeName="UseDayCycle"))
	bool bpv__UseDayCycle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Real Time", Category="Default", MultiLine="true", OverrideNativeName="UseRealTime"))
	bool bpv__UseRealTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Day Speed", Category="Default", MultiLine="true", OverrideNativeName="DaySpeed"))
	float bpv__DaySpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Days Counter", Category="Default", MultiLine="true", OverrideNativeName="DaysCounter"))
	int32 bpv__DaysCounter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Temperature", Category="Default", MultiLine="true", OverrideNativeName="Temperature"))
	float bpv__Temperature__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Controller"))
	ATopDownController_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	ACustom_SkySphere_C__pf493351382(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Custom_SkySphere__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Custom_SkySphere__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Custom_SkySphere__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Custom_SkySphere_3"))
	void bpf__ExecuteUbergraph_Custom_SkySphere__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartCycle"))
	virtual void bpf__StartCycle__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="DayCycle__UpdateFunc"))
	virtual void bpf__DayCycle__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="DayCycle__FinishedFunc"))
	virtual void bpf__DayCycle__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateSunDirection"))
	virtual void bpf__UpdateSunDirection__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RefreshMaterial"))
	virtual void bpf__RefreshMaterial__pf();
public:
};
