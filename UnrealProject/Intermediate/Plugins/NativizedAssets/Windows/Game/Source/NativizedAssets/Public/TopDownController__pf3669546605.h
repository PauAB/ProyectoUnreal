#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "SlotStruct__pf697489738.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "I_Interact__pf2577010357.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class AFishingPlace_C__pf1097354743;
class ATopDownCharacter_C__pf3669546605;
class AItem_C__pf199495785;
class UClass;
class UGameHUD_C__pf3980440580;
class UObject;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#include "TopDownController__pf3669546605.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TopDownBP/Blueprints/Default/TopDownController.TopDownController_C", OverrideNativeName="TopDownController_C"))
class ATopDownController_C__pf3669546605 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Click Distance", Category="Default", OverrideNativeName="MinClickDistance"))
	float bpv__MinClickDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Ref", Category="References", MultiLine="true", tooltip, OverrideNativeName="CameraRef"))
	UObject* bpv__CameraRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pan Sensitivity", Category="Camera", MultiLine="true", OverrideNativeName="PanSensitivity"))
	float bpv__PanSensitivity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Sensitivity", Category="Camera", MultiLine="true", OverrideNativeName="ZoomSensitivity"))
	float bpv__ZoomSensitivity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Arm Length", Category="Camera", MultiLine="true", OverrideNativeName="MaxArmLength"))
	float bpv__MaxArmLength__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Ref", Category="References", MultiLine="true", OverrideNativeName="PlayerRef"))
	ATopDownCharacter_C__pf3669546605* bpv__PlayerRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selectable", Category="Default", MultiLine="true", OverrideNativeName="Selectable"))
	bool bpv__Selectable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HUDWidget", Category="Default", MultiLine="true", OverrideNativeName="HUDWidget"))
	UGameHUD_C__pf3980440580* bpv__HUDWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Ref", Category="References", MultiLine="true", OverrideNativeName="ItemRef"))
	AItem_C__pf199495785* bpv__ItemRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Class", Category="Default", MultiLine="true", OverrideNativeName="ItemClass"))
	UClass* bpv__ItemClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot Index", Category="Default", MultiLine="true", OverrideNativeName="SlotIndex"))
	int32 bpv__SlotIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fish Struct", Category="Default", MultiLine="true", OverrideNativeName="FishStruct"))
	FSlotStruct__pf697489738 bpv__FishStruct__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Ref", Category="Default", MultiLine="true", OverrideNativeName="CharRef"))
	ATopDownCharacter_C__pf3669546605* bpv__CharRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fishing Place", Category="Default", MultiLine="true", OverrideNativeName="FishingPlace"))
	AFishingPlace_C__pf1097354743* bpv__FishingPlace__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Item Struct", Category="Default", MultiLine="true", OverrideNativeName="ItemStruct"))
	FSlotStruct__pf697489738 bpv__ItemStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable1"))
	bool b0l__Temp_bool_IsClosed_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFishing_Place"))
	AFishingPlace_C__pf1097354743* b0l__K2Node_DynamicCast_AsFishing_Place__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult"))
	FHitResult b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsItem"))
	AItem_C__pf199495785* b0l__K2Node_DynamicCast_AsItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue1"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable1"))
	FKey b0l__Temp_struct_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b0l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll1"))
	float b0l__CallFunc_BreakRotator_Roll1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch1"))
	float b0l__CallFunc_BreakRotator_Pitch1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw1"))
	float b0l__CallFunc_BreakRotator_Yaw1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult1"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character"))
	ATopDownCharacter_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key8"))
	FKey b0l__K2Node_InputActionEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	FSlotStruct__pf697489738 b0l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlotStruct"))
	FSlotStruct__pf697489738 b0l__K2Node_MakeStruct_SlotStruct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTop_Down_Character1"))
	ATopDownCharacter_C__pf3669546605* b0l__K2Node_DynamicCast_AsTop_Down_Character1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key1"))
	FKey b0l__K2Node_InputActionEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FSlotStruct__pf697489738 b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsI_Interact"))
	TScriptInterface<II_Interact_C> b0l__K2Node_DynamicCast_AsI_Interact__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	ATopDownController_C__pf3669546605(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TopDownController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownController__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_TopDownController_5"))
	void bpf__ExecuteUbergraph_TopDownController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TopDownController__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2"))
	virtual void bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"))
	virtual void bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_NumericKey_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ZoomOut_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ZoomIn_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pan_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pan_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pan_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pan_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_SetDestination_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_SetDestination_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToHitLocation"))
	virtual void bpf__MoveToHitLocation__pf(FHitResult bpp__Hit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CastRef"))
	virtual void bpf__CastRef__pf();
public:
};
