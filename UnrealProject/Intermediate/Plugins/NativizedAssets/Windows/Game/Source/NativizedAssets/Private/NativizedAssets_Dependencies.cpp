#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Texture2D"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SphereComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("NavigationSystem"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Controller"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LatentActionInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("CanvasPanelSlot"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetBlueprintLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("CanvasPanel"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Slate"), TEXT("Anchors"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetTextLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("FontOutlineSettings"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("SlateFontInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("TextBlock"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetStringLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("InputCore"), TEXT("Key"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PhysicalMaterial"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PrimitiveComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("Fish"), TEXT("Fish_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("Fish"), TEXT("Default__Fish_C"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish"), TEXT("Fish_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetInputLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Materials"), TEXT("EBlue"), TEXT("EBlue"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Mats/IceMat"), TEXT("Ice"), TEXT("Ice"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/MyOwn"), TEXT("StringMat"), TEXT("StringMat"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene"), TEXT("BranchTexture"), TEXT("BranchTexture"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpringArmComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIBlueprintHelperLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("fish"), TEXT("fish"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CheatManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene"), TEXT("LowPoly_WinterScene_Dead_Branch_03"), TEXT("LowPoly_WinterScene_Dead_Branch_03"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("stick-texture"), TEXT("stick-texture"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/MyOwn"), TEXT("String"), TEXT("String"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("string-texture"), TEXT("string-texture"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Geometry/Meshes"), TEXT("1M_Cube"), TEXT("1M_Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("ice-texture"), TEXT("ice-texture"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("GridSlot"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("GridPanel"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Image"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CameraComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DecalComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Mats"), TEXT("M_Cursor_Decal"), TEXT("M_Cursor_Decal"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Character"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("ClothingSystemRuntime"), TEXT("ClothingSimulationFactoryNv"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/penguin/source"), TEXT("Penguin_SK"), TEXT("Penguin_SK"), TEXT("/Script/Engine"), TEXT("SkeletalMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/penguin/source"), TEXT("Penguin_SK_PhysicsAsset"), TEXT("Penguin_SK_PhysicsAsset"), TEXT("/Script/Engine"), TEXT("PhysicsAsset"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/penguin/textures"), TEXT("DefaultMaterial_Base_Color_Mat"), TEXT("DefaultMaterial_Base_Color_Mat"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BoxComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DataTableFunctionLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic"), TEXT("Dialogue"), TEXT("Dialogue"), TEXT("/Script/Engine"), TEXT("DataTable"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene"), TEXT("LowPoly_WinterScene_Dead_Branch_02_Snow"), TEXT("LowPoly_WinterScene_Dead_Branch_02_Snow"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("fishing-rod-texture"), TEXT("fishing-rod-texture"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("FishingRod"), TEXT("FishingRod_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("FishingRod"), TEXT("Default__FishingRod_C"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod"), TEXT("FishingRod_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs"), TEXT("ItemStruct"), TEXT("ItemStruct"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("Item"), TEXT("Item_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic"), TEXT("InventoryComponent"), TEXT("InventoryComponent_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic"), TEXT("I_Interact"), TEXT("I_Interact_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic"), TEXT("DialogueTrigger"), TEXT("DialogueTrigger_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs"), TEXT("SlotStruct"), TEXT("SlotStruct"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Default"), TEXT("TopDownCharacter"), TEXT("TopDownCharacter_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Default"), TEXT("TopDownController"), TEXT("TopDownController_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI"), TEXT("GameHUD"), TEXT("GameHUD_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic"), TEXT("DialogueStruct"), TEXT("DialogueStruct"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI"), TEXT("InventoryWindow"), TEXT("InventoryWindow_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds"), TEXT("FishingPlace"), TEXT("FishingPlace_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("Cube"), TEXT("Cube_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("String"), TEXT("String_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable"), TEXT("Stick"), TEXT("Stick_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds"), TEXT("Build"), TEXT("Build_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI"), TEXT("Slot"), TEXT("Slot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures/Ice_pack"), TEXT("13"), TEXT("13"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures"), TEXT("penguin-logo"), TEXT("penguin-logo"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures/Ice_pack"), TEXT("Reality_Check_DEMO_Font"), TEXT("Reality_Check_DEMO_Font"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures/Ice_pack"), TEXT("4"), TEXT("4"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures/Ice_pack"), TEXT("5"), TEXT("5"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Textures/Ice_pack"), TEXT("6"), TEXT("6"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Button"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/MyOwn"), TEXT("Igloo"), TEXT("Igloo"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/Sign"), TEXT("wooden_sign"), TEXT("wooden_sign"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TopDownBP/Blueprints/Models/Bushes/Fbx/Save"), TEXT("Bush_winter_004"), TEXT("Bush_winter_004"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Props/Materials"), TEXT("M_Rock"), TEXT("M_Rock"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimelineComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ETimelineDirection"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 107));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif