#include "NativizedAssets.h"
#include "ItemStruct__pf697489738.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Item__pf199495785.h"
FItemStruct__pf697489738::FItemStruct__pf697489738()
{
	bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[6E3741E94B6D8427F75898844B6F3F06]\", \"8A4681CD4A20960BE88511A257D0452D\", \"None\")")	);
	bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf = nullptr;
	bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf = true;
	bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf = true;
	bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf = 99;
	bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FItemStruct__pf697489738::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SphereComponent 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{5, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{6, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{7, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Controller 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Pawn 
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{11, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{12, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ActorComponent 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerController 
		{15, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{16, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{17, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{18, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{19, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{20, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{21, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{22, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{24, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{25, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{26, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{27, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{28, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{29, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{30, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{31, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Fish_C 
		{32, FBlueprintDependencyType(false, true, false, false)},  //  Fish_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Default__Fish_C 
		{33, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{34, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/TopDownBP/Blueprints/InventoryLogic/Materials/EBlue.EBlue 
		{35, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/IceMat/Ice.Ice 
		{36, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/MyOwn/StringMat.StringMat 
		{37, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/BranchTexture.BranchTexture 
		{38, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{40, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fish.fish 
		{41, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CheatManager 
		{42, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_03.LowPoly_WinterScene_Dead_Branch_03 
		{43, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/stick-texture.stick-texture 
		{44, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/MyOwn/String.String 
		{45, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/string-texture.string-texture 
		{46, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{47, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/ice-texture.ice-texture 
		{48, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.GridSlot 
		{49, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.GridPanel 
		{50, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{51, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CameraComponent 
		{52, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DecalComponent 
		{53, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/M_Cursor_Decal.M_Cursor_Decal 
		{54, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Character 
		{55, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{56, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK.Penguin_SK 
		{57, FBlueprintDependencyType(false, true, false, false)},  //  PhysicsAsset /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK_PhysicsAsset.Penguin_SK_PhysicsAsset 
		{58, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/penguin/textures/DefaultMaterial_Base_Color_Mat.DefaultMaterial_Base_Color_Mat 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIController 
		{60, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BoxComponent 
		{61, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{62, FBlueprintDependencyType(false, true, false, false)},  //  DataTable /Game/TopDownBP/Blueprints/DialogueLogic/Dialogue.Dialogue 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_02_Snow.LowPoly_WinterScene_Dead_Branch_02_Snow 
		{64, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fishing-rod-texture.fishing-rod-texture 
		{65, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.FishingRod_C 
		{66, FBlueprintDependencyType(false, true, false, false)},  //  FishingRod_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.Default__FishingRod_C 
		{68, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item.Item_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FItemStruct__pf697489738
{
	FRegisterHelper__FItemStruct__pf697489738()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"), &FItemStruct__pf697489738::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FItemStruct__pf697489738 Instance;
};
FRegisterHelper__FItemStruct__pf697489738 FRegisterHelper__FItemStruct__pf697489738::Instance;
