#include "NativizedAssets.h"
#include "Custom_SkySphere__pf493351382.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "TopDownController__pf3669546605.h"
#include "TopDownCharacter__pf3669546605.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/DirectionalLight.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "FishingPlace__pf1097354743.h"
#include "Item__pf199495785.h"
#include "SlotStruct__pf697489738.h"
#include "GameHUD__pf3980440580.h"
#include "I_Interact__pf2577010357.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "DialogueTrigger__pf3696423911.h"
#include "InventoryComponent__pf2577010357.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "ItemStruct__pf697489738.h"
#include "InventoryWindow__pf3980440580.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Slot__pf3980440580.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Cube__pf199495785.h"
#include "String__pf199495785.h"
#include "Stick__pf199495785.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ACustom_SkySphere_C__pf493351382::ACustom_SkySphere_C__pf493351382(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ACustom_SkySphere_C__pf493351382::StaticClass() == GetClass()))
	{
		ACustom_SkySphere_C__pf493351382::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Base__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	bpv__SkySphereMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkySphereMesh"));
	RootComponent = bpv__Base__pf;
	bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Base__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Base__pf), false, 0));
	bpv__SkySphereMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkySphereMesh__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SkySphereMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SkySphereMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SkySphereMesh__pf->OverrideMaterials.Reserve(1);
	bpv__SkySphereMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	static TWeakObjectPtr<UProperty> __Local__4{};
	const UProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((UBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SkySphereMesh__pf), false, 0));
	bpv__SkySphereMesh__pf->bReceivesDecals = false;
	bpv__SkySphereMesh__pf->CastShadow = false;
	bpv__SkySphereMesh__pf->bAffectDynamicIndirectLighting = false;
	bpv__SkySphereMesh__pf->bCastDynamicShadow = false;
	bpv__SkySphereMesh__pf->bCastStaticShadow = false;
	bpv__SkySphereMesh__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__SkySphereMesh__pf->BodyInstance.bAutoWeld = false;
	auto& __Local__5 = (*(AccessPrivateProperty<float >(&(bpv__SkySphereMesh__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__5 = 0.000000f;
	bpv__SkySphereMesh__pf->RelativeScale3D = FVector(400.000000, 400.000000, 400.000000);
	bpv__SkySphereMesh__pf->bAbsoluteRotation = true;
	bpv__SkySphereMesh__pf->Mobility = EComponentMobility::Type::Static;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SkySphereMesh__pf), false, 0));
	bpv__DayCycle_Temperature_4446837C4C010CF3D86E819EA99F0CE5__pf = 0.000000f;
	bpv__DayCycle_DayTime_4446837C4C010CF3D86E819EA99F0CE5__pf = 0.000000f;
	bpv__DayCycle__Direction_4446837C4C010CF3D86E819EA99F0CE5__pf = ETimelineDirection::Type::Forward;
	bpv__DayCycle__pf = nullptr;
	bpv__Skyxmaterial__pfT = nullptr;
	bpv__Refreshxmaterial__pfT = false;
	bpv__Directionalxlightxactor__pfTT = nullptr;
	bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT = true;
	bpv__Sunxheight__pfT = 0.000000f;
	bpv__Sunxbrightness__pfT = 50.000000f;
	bpv__HorizonxFalloff__pfT = 3.000000f;
	bpv__ZenithxColor__pfT = FLinearColor(0.034046, 0.109247, 0.295000, 1.000000);
	bpv__Horizonxcolor__pfT = FLinearColor(1.979559, 2.586644, 3.000000, 1.000000);
	bpv__Cloudxcolor__pfT = FLinearColor(0.855778, 0.919020, 1.000000, 1.000000);
	bpv__OverallxColor__pfT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__Cloudxspeed__pfT = 1.000000f;
	bpv__Cloudxopacity__pfT = 0.700000f;
	bpv__Starsxbrightness__pfT = 0.100000f;
	bpv__Horizonxcolorxcurve__pfTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Zenithxcolorxcurve__pfTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Cloudxcolorxcurve__pfTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__UseDayCycle__pf = false;
	bpv__UseRealTime__pf = false;
	bpv__DaySpeed__pf = 1.000000f;
	bpv__DaysCounter__pf = 1;
	bpv__Temperature__pf = 0.000000f;
	bEnableAutoLODGeneration = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void ACustom_SkySphere_C__pf493351382::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Base__pf)
	{
		bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkySphereMesh__pf)
	{
		bpv__SkySphereMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ACustom_SkySphere_C__pf493351382::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownController_C__pf3669546605::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf3669546605::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__6 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__6);
	auto __Local__7 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("DayCycle_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__7);
	static TWeakObjectPtr<UProperty> __Local__9{};
	const UProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((UBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__6), false, 0));
	__Local__7->TimelineLength = 1.000000f;
	__Local__7->bValidatedAsWired = true;
	__Local__7->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__7->FloatTracks.AddUninitialized(2);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__7->FloatTracks.GetData(), 2);
	auto& __Local__10 = __Local__7->FloatTracks[0];
	auto __Local__11 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__11);
	__Local__11->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__11->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__11->FloatCurve.Keys.GetData(), 2);
	auto& __Local__12 = __Local__11->FloatCurve.Keys[0];
	auto& __Local__13 = __Local__11->FloatCurve.Keys[1];
	__Local__13.Time = 1.000000f;
	__Local__13.Value = 360.000000f;
	__Local__10.CurveFloat = __Local__11;
	auto& __Local__14 = (*(AccessPrivateProperty<FName >(&(__Local__10), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__14 = FName(TEXT("DayCycle_DayTime_4446837C4C010CF3D86E819EA99F0CE5"));
	auto& __Local__15 = (*(AccessPrivateProperty<FName >(&(__Local__10), FTTTrackBase::__PPO__TrackName() )));
	__Local__15 = FName(TEXT("DayTime"));
	auto& __Local__16 = __Local__7->FloatTracks[1];
	auto __Local__17 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__17);
	__Local__17->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__17->FloatCurve.Keys.AddUninitialized(5);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__17->FloatCurve.Keys.GetData(), 5);
	auto& __Local__18 = __Local__17->FloatCurve.Keys[0];
	__Local__18.Value = -30.000000f;
	auto& __Local__19 = __Local__17->FloatCurve.Keys[1];
	__Local__19.Time = 0.250000f;
	__Local__19.Value = -15.000000f;
	auto& __Local__20 = __Local__17->FloatCurve.Keys[2];
	__Local__20.Time = 0.500000f;
	__Local__20.Value = -5.000000f;
	auto& __Local__21 = __Local__17->FloatCurve.Keys[3];
	__Local__21.Time = 0.750000f;
	__Local__21.Value = -25.000000f;
	auto& __Local__22 = __Local__17->FloatCurve.Keys[4];
	__Local__22.Time = 1.000000f;
	__Local__22.Value = -30.000000f;
	__Local__16.CurveFloat = __Local__17;
	auto& __Local__23 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__23 = FName(TEXT("DayCycle_Temperature_4446837C4C010CF3D86E819EA99F0CE5"));
	auto& __Local__24 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTTrackBase::__PPO__TrackName() )));
	__Local__24 = FName(TEXT("Temperature"));
	__Local__7->TimelineGuid = FGuid(0x4446837C, 0x4C010CF3, 0xD86E819E, 0xA99F0CE5);
	auto& __Local__25 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__VariableName() )));
	__Local__25 = FName(TEXT("DayCycle"));
	auto& __Local__26 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__26 = FName(TEXT("DayCycle__Direction_4446837C4C010CF3D86E819EA99F0CE5"));
	auto& __Local__27 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__27 = FName(TEXT("DayCycle__UpdateFunc"));
	auto& __Local__28 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__28 = FName(TEXT("DayCycle__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ACustom_SkySphere_C__pf493351382::bpf__ExecuteUbergraph_Custom_SkySphere__pf_0(int32 bpp__EntryPoint__pf)
{
	FDateTime bpfv__CallFunc_Now_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FTimespan bpfv__CallFunc_GetTimeOfDay_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf{};
	float bpfv__CallFunc_GetTotalSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(86400.000000, bpv__DaySpeed__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf = FCustomThunkTemplates::Divide_FloatFloat(1.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__DayCycle__pf))
				{
					bpv__DayCycle__pf->UTimelineComponent::SetPlayRate(bpfv__CallFunc_Divide_FloatFloat_ReturnValue1__pf);
				}
			}
		case 17:
			{
				if (!bpv__UseRealTime__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 18:
			{
				__StateStack.Push(21);
			}
		case 19:
			{
				bpfv__CallFunc_Now_ReturnValue__pf = UKismetMathLibrary::Now();
				bpfv__CallFunc_GetTimeOfDay_ReturnValue__pf = UKismetMathLibrary::GetTimeOfDay(bpfv__CallFunc_Now_ReturnValue__pf);
				bpfv__CallFunc_GetTotalSeconds_ReturnValue__pf = UKismetMathLibrary::GetTotalSeconds(bpfv__CallFunc_GetTimeOfDay_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_GetTotalSeconds_ReturnValue__pf, 86400.000000);
				if(::IsValid(bpv__DayCycle__pf))
				{
					bpv__DayCycle__pf->UTimelineComponent::SetNewTime(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__DayCycle__pf))
				{
					bpv__DayCycle__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				if(::IsValid(bpv__DayCycle__pf))
				{
					bpv__DayCycle__pf->UTimelineComponent::Play();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ACustom_SkySphere_C__pf493351382::bpf__ExecuteUbergraph_Custom_SkySphere__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpv__DayCycle_DayTime_4446837C4C010CF3D86E819EA99F0CE5__pf, 0.000000);
	bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_MakeRotator_ReturnValue__pf, FRotator(90.000000,0.000000,0.000000));
	if(::IsValid(bpv__Directionalxlightxactor__pfTT))
	{
		bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = bpv__Directionalxlightxactor__pfTT->AActor::K2_SetActorRotation(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, false);
	}
	bpf__RefreshMaterial__pf();
	bpv__Temperature__pf = bpv__DayCycle_Temperature_4446837C4C010CF3D86E819EA99F0CE5__pf;
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf = Cast<ATopDownController_C__pf3669546605>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf))
	{
		bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf->AController::K2_GetPawn();
	}
	b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf3669546605>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf->bpv__HUDWidget__pf))
	{
		b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf->bpv__HUDWidget__pf->bpf__UpdateDay__pf(bpv__DaysCounter__pf, bpv__Temperature__pf);
	}
	return; //KCST_EndOfThread
}
void ACustom_SkySphere_C__pf493351382::bpf__ExecuteUbergraph_Custom_SkySphere__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__DaysCounter__pf, 1);
	b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
	// optimized KCST_UnconditionalGoto
	bpv__DaysCounter__pf = b0l__Temp_int_Variable__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Temperature__pf, 2.000000);
	bpv__Temperature__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
	bpf__StartCycle__pf();
	return; //KCST_EndOfThread
}
void ACustom_SkySphere_C__pf493351382::bpf__ExecuteUbergraph_Custom_SkySphere__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpf__StartCycle__pf();
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				if (!bpv__UseDayCycle__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 14:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(1, 269724322, TEXT("ExecuteUbergraph_Custom_SkySphere_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACustom_SkySphere_C__pf493351382::bpf__StartCycle__pf()
{
	bpf__ExecuteUbergraph_Custom_SkySphere__pf_0(15);
}
void ACustom_SkySphere_C__pf493351382::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Custom_SkySphere__pf_3(12);
}
void ACustom_SkySphere_C__pf493351382::bpf__DayCycle__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Custom_SkySphere__pf_1(3);
}
void ACustom_SkySphere_C__pf493351382::bpf__DayCycle__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Custom_SkySphere__pf_2(23);
}
void ACustom_SkySphere_C__pf493351382::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__SkySphereMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__SkySphereMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ACustom_SkySphere_C__pf493351382::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 2:
			{
				bpv__Skyxmaterial__pfT = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 3:
			{
				if (!bpv__Refreshxmaterial__pfT)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 4:
			{
				bpv__Refreshxmaterial__pfT = false;
			}
		case 5:
			{
				bpf__RefreshMaterial__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ACustom_SkySphere_C__pf493351382::bpf__UpdateSunDirection__pf()
{
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue1__pf{};
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf(EForceInit::ForceInit);
	if(::IsValid(bpv__Directionalxlightxactor__pfTT))
	{
		bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf = bpv__Directionalxlightxactor__pfTT->AActor::K2_GetActorRotation();
	}
	bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf);
	bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf);
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
	}
	FColor  __Local__30 = FColor(0,0,0,255);
	bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_ColorToLinearColor(((::IsValid(bpv__Directionalxlightxactor__pfTT) && ::IsValid((*(AccessPrivateProperty<ULightComponent* >((bpv__Directionalxlightxactor__pfTT), ALight::__PPO__LightComponent() ))))) ? ((*(AccessPrivateProperty<ULightComponent* >((bpv__Directionalxlightxactor__pfTT), ALight::__PPO__LightComponent() )))->LightColor) : (__Local__30)));
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf);
	}
	if(::IsValid(bpv__Directionalxlightxactor__pfTT))
	{
		bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__Directionalxlightxactor__pfTT->AActor::K2_GetActorRotation();
	}
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf = UKismetMathLibrary::MapRangeUnclamped(bpfv__CallFunc_BreakRotator_Pitch__pf, 0.000000, -90.000000, 0.000000, 1.000000);
	bpv__Sunxheight__pfT = bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf;
	if(::IsValid(bpv__Horizonxcolorxcurve__pfTT))
	{
		bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf = bpv__Horizonxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
	}
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf);
	}
	if(::IsValid(bpv__Zenithxcolorxcurve__pfTT))
	{
		bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf = bpv__Zenithxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
	}
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf);
	}
	if(::IsValid(bpv__Cloudxcolorxcurve__pfTT))
	{
		bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf = bpv__Cloudxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
	}
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf);
	}
	bpfv__CallFunc_Abs_ReturnValue1__pf = UKismetMathLibrary::Abs(bpv__Sunxheight__pfT);
	bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(3.000000, 8.000000, bpfv__CallFunc_Abs_ReturnValue1__pf);
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), bpfv__CallFunc_Lerp_ReturnValue__pf);
	}
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Sunxheight__pfT, 0.000000);
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpv__Sunxheight__pfT);
	bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 0.000000, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
	if(::IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun height")), bpfv__CallFunc_SelectFloat_ReturnValue__pf);
	}
}
void ACustom_SkySphere_C__pf493351382::bpf__RefreshMaterial__pf()
{
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll1__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch1__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw1__pf{};
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue1__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_LinearColorLerp_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue1__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__Directionalxlightxactor__pfTT);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__Directionalxlightxactor__pfTT))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf = bpv__Directionalxlightxactor__pfTT->AActor::K2_GetActorRotation();
				}
				bpfv__CallFunc_Conv_RotatorToVector_ReturnValue1__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue1__pf);
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue1__pf);
				}
			}
		case 3:
			{
				FColor  __Local__31 = FColor(0,0,0,255);
				bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_ColorToLinearColor(((::IsValid(bpv__Directionalxlightxactor__pfTT) && ::IsValid((*(AccessPrivateProperty<ULightComponent* >((bpv__Directionalxlightxactor__pfTT), ALight::__PPO__LightComponent() ))))) ? ((*(AccessPrivateProperty<ULightComponent* >((bpv__Directionalxlightxactor__pfTT), ALight::__PPO__LightComponent() )))->LightColor) : (__Local__31)));
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__Directionalxlightxactor__pfTT))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf = bpv__Directionalxlightxactor__pfTT->AActor::K2_GetActorRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw1__pf);
				bpfv__CallFunc_MapRangeUnclamped_ReturnValue1__pf = UKismetMathLibrary::MapRangeUnclamped(bpfv__CallFunc_BreakRotator_Pitch1__pf, 0.000000, -90.000000, 0.000000, 1.000000);
				bpv__Sunxheight__pfT = bpfv__CallFunc_MapRangeUnclamped_ReturnValue1__pf;
			}
		case 5:
			{
				if (!bpv__Colorsxdeterminedxbyxsunxposition__pfTTTT)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__Horizonxcolorxcurve__pfTT))
				{
					bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf = bpv__Horizonxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
				}
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue2__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__Zenithxcolorxcurve__pfTT))
				{
					bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf = bpv__Zenithxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
				}
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue1__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__Cloudxcolorxcurve__pfTT))
				{
					bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf = bpv__Cloudxcolorxcurve__pfTT->GetClampedLinearColorValue(bpv__Sunxheight__pfT);
				}
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), bpfv__CallFunc_GetClampedLinearColorValue_ReturnValue__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpv__Sunxheight__pfT);
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(3.000000, 7.000000, bpfv__CallFunc_Abs_ReturnValue__pf);
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), bpfv__CallFunc_Lerp_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud speed")), bpv__Cloudxspeed__pfT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun brightness")), bpv__Sunxbrightness__pfT);
				}
			}
		case 12:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Sunxheight__pfT, 0.000000);
				bpfv__CallFunc_Abs_ReturnValue1__pf = UKismetMathLibrary::Abs(bpv__Sunxheight__pfT);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Abs_ReturnValue1__pf, 0.000000, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun height")), bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud opacity")), bpv__Cloudxopacity__pfT);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Stars brightness")), bpv__Starsxbrightness__pfT);
				}
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf = UKismetMathLibrary::MapRangeUnclamped(bpv__Sunxheight__pfT, -1.000000, 1.000000, 90.000000, -90.000000);
				bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf);
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 16:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Sunxheight__pfT, 0.200000);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
				bpfv__CallFunc_LinearColorLerp_ReturnValue__pf = UKismetMathLibrary::LinearColorLerp(FLinearColor(1.000000,0.221000,0.040000,1.000000), FLinearColor(0.954000,0.901000,0.744120,1.000000), bpfv__CallFunc_FClamp_ReturnValue__pf);
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), bpfv__CallFunc_LinearColorLerp_ReturnValue__pf);
				}
				__CurrentState = 5;
				break;
			}
		case 17:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), bpv__Horizonxcolor__pfT);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), bpv__ZenithxColor__pfT);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Overall color")), bpv__OverallxColor__pfT);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), bpv__Cloudxcolor__pfT);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), bpv__HorizonxFalloff__pfT);
				}
				__CurrentState = 10;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ACustom_SkySphere_C__pf493351382::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineSky/SM_SkySphere.SM_SkySphere 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineSky/M_Sky_Panning_Clouds2.M_Sky_Panning_Clouds2 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Horizon_Color.C_Sky_Horizon_Color 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Zenith_Color.C_Sky_Zenith_Color 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Cloud_Color.C_Sky_Cloud_Color 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ACustom_SkySphere_C__pf493351382::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DirectionalLight 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Light 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponentBase 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveLinearColor 
		{106, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/M_Cursor_Decal.M_Cursor_Decal 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK.Penguin_SK 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK_PhysicsAsset.Penguin_SK_PhysicsAsset 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/penguin/textures/DefaultMaterial_Base_Color_Mat.DefaultMaterial_Base_Color_Mat 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/TopDownBP/Blueprints/DialogueLogic/Dialogue.Dialogue 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Fish_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Fish_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Default__Fish_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/TopDownBP/Blueprints/InventoryLogic/Materials/EBlue.EBlue 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/IceMat/Ice.Ice 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/MyOwn/StringMat.StringMat 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/BranchTexture.BranchTexture 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fish.fish 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_03.LowPoly_WinterScene_Dead_Branch_03 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/stick-texture.stick-texture 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridSlot 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/MyOwn/String.String 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/string-texture.string-texture 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/ice-texture.ice-texture 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_02_Snow.LowPoly_WinterScene_Dead_Branch_02_Snow 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fishing-rod-texture.fishing-rod-texture 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.FishingRod_C 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FishingRod_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.Default__FishingRod_C 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/Default/TopDownController.TopDownController_C 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/Default/TopDownCharacter.TopDownCharacter_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ACustom_SkySphere_C__pf493351382
{
	FRegisterHelper__ACustom_SkySphere_C__pf493351382()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/DayCycleLogic/Custom_SkySphere"), &ACustom_SkySphere_C__pf493351382::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ACustom_SkySphere_C__pf493351382 Instance;
};
FRegisterHelper__ACustom_SkySphere_C__pf493351382 FRegisterHelper__ACustom_SkySphere_C__pf493351382::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif