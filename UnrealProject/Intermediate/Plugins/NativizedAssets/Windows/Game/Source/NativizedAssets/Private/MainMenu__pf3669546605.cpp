#include "NativizedAssets.h"
#include "MainMenu__pf3669546605.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMainMenu_C__pf3669546605::UMainMenu_C__pf3669546605(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMainMenu_C__pf3669546605::StaticClass() == GetClass()))
	{
		UMainMenu_C__pf3669546605::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Image_154__pf = nullptr;
	bpv__Image_594__pf = nullptr;
	bpv__PlayButton__pf = nullptr;
	bpv__QuitButton__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainMenu_C__pf3669546605::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_C__pf3669546605::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("QuitButton"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("PlayButton"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(3);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Top = -300.000000f;
	__Local__6->LayoutData.Offsets.Right = 1920.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 420.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_75"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(5);
	auto __Local__9 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__9->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_1458"), (EObjectFlags)0x00280008);
	__Local__10->Size = FVector2D(200.000000, 1.000000);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__11 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__11->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__11->Parent = __Local__7;
	auto __Local__12 = NewObject<UOverlay>(__Local__1, UOverlay::StaticClass(), TEXT("Overlay_109"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(2);
	auto __Local__14 = NewObject<UOverlaySlot>(__Local__12, UOverlaySlot::StaticClass(), TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__14->Padding.Top = 20.000000f;
	__Local__14->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__14->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_594"), (EObjectFlags)0x00280008);
	__Local__15->Brush.ImageSize = FVector2D(280.000000, 320.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__17 = NewObject<UOverlaySlot>(__Local__12, UOverlaySlot::StaticClass(), TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__17->Parent = __Local__12;
	auto __Local__18 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_154"), (EObjectFlags)0x00280008);
	__Local__18->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__13.Add(__Local__17);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__8.Add(__Local__11);
	auto __Local__20 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__20->Parent = __Local__7;
	auto __Local__21 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_1915"), (EObjectFlags)0x00280008);
	__Local__21->Size = FVector2D(20.000000, 1.000000);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__8.Add(__Local__20);
	auto __Local__22 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__22->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__22->Parent = __Local__7;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_128"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2214033947BF51228C7EDE8FEEB31913]\", \"78E0D3B2421B8853C3B71F814EA0DB66\", \"UPCOMING FATE\")")	);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__23->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(0.255081, 0.745954, 1.000000, 1.000000);
	__Local__23->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__23->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__23->Font.Size = 138;
	static TWeakObjectPtr<UProperty> __Local__26{};
	const UProperty* __Local__25 = __Local__26.Get();
	if (nullptr == __Local__25)
	{
		__Local__25 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__25);
		__Local__26 = __Local__25;
	}
	(((UBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__23), true, 0));
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__8.Add(__Local__22);
	auto __Local__27 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->Parent = __Local__7;
	auto __Local__28 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_1657"), (EObjectFlags)0x00280008);
	__Local__28->Size = FVector2D(200.000000, 1.000000);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__8.Add(__Local__27);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__4, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Top = 230.000000f;
	__Local__29->LayoutData.Offsets.Right = 600.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 600.000000f;
	__Local__29->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__29->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__29->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__29->Parent = __Local__4;
	auto __Local__30 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_50"), (EObjectFlags)0x00280008);
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(5);
	auto __Local__32 = NewObject<UVerticalBoxSlot>(__Local__30, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_22"), (EObjectFlags)0x00280008);
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_347"), (EObjectFlags)0x00280008);
	__Local__33->Size = FVector2D(1.000000, 30.000000);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	auto __Local__34 = NewObject<UVerticalBoxSlot>(__Local__30, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_19"), (EObjectFlags)0x00280008);
	__Local__34->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__34->Parent = __Local__30;
	auto __Local__35 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("PlayButton"), (EObjectFlags)0x00280008);
	__Local__35->WidgetStyle.Normal.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<UObject* >(&(__Local__35->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__36 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__35->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__35->WidgetStyle.Hovered.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__35->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__35->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__35->WidgetStyle.Pressed.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__35->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__35->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__35), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(1);
	auto __Local__40 = NewObject<UButtonSlot>(__Local__35, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__35;
	auto __Local__41 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_220"), (EObjectFlags)0x00280008);
	__Local__41->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2214033947BF51228C7EDE8FEEB31913]\", \"44680A9542EC35480A436EA8964C4D40\", \"PLAY\")")	);
	__Local__41->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__41->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__41->Font.Size = 80;
	auto& __Local__42 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__41), UTextLayoutWidget::__PPO__Justification() )));
	__Local__42 = ETextJustify::Type::Center;
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__39.Add(__Local__40);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__31.Add(__Local__34);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__30, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_20"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__30;
	auto __Local__44 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_138"), (EObjectFlags)0x00280008);
	__Local__44->Size = FVector2D(1.000000, 30.000000);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__31.Add(__Local__43);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__30, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__30;
	auto __Local__46 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("QuitButton"), (EObjectFlags)0x00280008);
	__Local__46->WidgetStyle.Normal.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__47 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__46->WidgetStyle.Hovered.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__48 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__46->WidgetStyle.Pressed.ImageSize = FVector2D(320.000000, 210.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(1);
	auto __Local__51 = NewObject<UButtonSlot>(__Local__46, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__51->Parent = __Local__46;
	auto __Local__52 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_441"), (EObjectFlags)0x00280008);
	__Local__52->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2214033947BF51228C7EDE8FEEB31913]\", \"082DD84446A7EAD13B811CBC1FC0B957\", \"QUIT\")")	);
	__Local__52->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__52->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__52->Font.Size = 80;
	auto& __Local__53 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__52), UTextLayoutWidget::__PPO__Justification() )));
	__Local__53 = ETextJustify::Type::Center;
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__31.Add(__Local__45);
	auto __Local__54 = NewObject<UVerticalBoxSlot>(__Local__30, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_24"), (EObjectFlags)0x00280008);
	__Local__54->Parent = __Local__30;
	auto __Local__55 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_521"), (EObjectFlags)0x00280008);
	__Local__55->Size = FVector2D(1.000000, 30.000000);
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__31.Add(__Local__54);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__5.Add(__Local__29);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__4, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = 636.006042f;
	__Local__56->LayoutData.Offsets.Top = 225.945953f;
	__Local__56->LayoutData.Offsets.Right = 626.066101f;
	__Local__56->LayoutData.Offsets.Bottom = 612.132141f;
	__Local__56->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__56->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__56->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__56->Parent = __Local__4;
	auto __Local__57 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_147"), (EObjectFlags)0x00280008);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(2);
	auto __Local__59 = NewObject<UVerticalBoxSlot>(__Local__57, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__59->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__59->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_514"), (EObjectFlags)0x00280008);
	__Local__60->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2214033947BF51228C7EDE8FEEB31913]\", \"6C294C3B43CAFC24268E5599187F4821\", \"Made by: Pau Andreotti\")")	);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.254152, 0.745404, 1.000000, 1.000000);
	__Local__60->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__60->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__60->Font.Size = 34;
	auto& __Local__62 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__60), UTextLayoutWidget::__PPO__Justification() )));
	__Local__62 = ETextJustify::Type::Right;
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	auto __Local__63 = NewObject<UVerticalBoxSlot>(__Local__57, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__63->Parent = __Local__57;
	auto __Local__64 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_806"), (EObjectFlags)0x00280008);
	__Local__64->Size = FVector2D(1.000000, 30.000000);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__58.Add(__Local__63);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__5.Add(__Local__56);
	__Local__1->RootWidget = __Local__4;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainMenu_C__pf3669546605::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__65;
	SlotNames.Append(__Local__65);
}
void UMainMenu_C__pf3669546605::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__66;
	TArray<FDelegateRuntimeBinding>  __Local__67;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMainMenu_C__pf3669546605::StaticClass())->MiscConvertedSubobjects[0]), __Local__66, __Local__67);
}
void UMainMenu_C__pf3669546605::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMainMenu_C__pf3669546605::bpf__ExecuteUbergraph_MainMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit, false);
	return; // KCST_GotoReturn
}
void UMainMenu_C__pf3669546605::bpf__ExecuteUbergraph_MainMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("Tutorial")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UMainMenu_C__pf3669546605::bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu__pf_0(4);
}
void UMainMenu_C__pf3669546605::bpf__BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu__pf_1(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_C__pf3669546605::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/Ice_pack/13.13 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/penguin-logo.penguin-logo 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/TopDownBP/Blueprints/Textures/Ice_pack/Reality_Check_DEMO_Font.Reality_Check_DEMO_Font 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/Ice_pack/4.4 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/Ice_pack/5.5 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/Ice_pack/6.6 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_C__pf3669546605::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMainMenu_C__pf3669546605
{
	FRegisterHelper__UMainMenu_C__pf3669546605()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/Default/MainMenu"), &UMainMenu_C__pf3669546605::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMainMenu_C__pf3669546605 Instance;
};
FRegisterHelper__UMainMenu_C__pf3669546605 FRegisterHelper__UMainMenu_C__pf3669546605::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
