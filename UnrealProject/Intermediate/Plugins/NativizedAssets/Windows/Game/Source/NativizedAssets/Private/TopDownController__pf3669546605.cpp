#include "NativizedAssets.h"
#include "TopDownController__pf3669546605.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
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
#include "FishingPlace__pf1097354743.h"
#include "Item__pf199495785.h"
#include "TopDownCharacter__pf3669546605.h"
#include "GameHUD__pf3980440580.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "DialogueTrigger__pf3696423911.h"
#include "InventoryComponent__pf2577010357.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
ATopDownController_C__pf3669546605::ATopDownController_C__pf3669546605(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ATopDownController_C__pf3669546605::StaticClass() == GetClass()))
	{
		ATopDownController_C__pf3669546605::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(this->GetDefaultSubobjectByName(TEXT("TransformComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'TransformComponent0' //
		static TWeakObjectPtr<UProperty> __Local__2{};
		const UProperty* __Local__1 = __Local__2.Get();
		if (nullptr == __Local__1)
		{
			__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__1);
			__Local__2 = __Local__1;
		}
		(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'TransformComponent0' //
	}
	bpv__MinClickDistance__pf = 120.000000f;
	bpv__CameraRef__pf = nullptr;
	bpv__PanSensitivity__pf = 5.000000f;
	bpv__ZoomSensitivity__pf = 50.000000f;
	bpv__MaxArmLength__pf = 1500.000000f;
	bpv__PlayerRef__pf = nullptr;
	bpv__Selectable__pf = false;
	bpv__HUDWidget__pf = nullptr;
	bpv__ItemRef__pf = nullptr;
	bpv__ItemClass__pf = nullptr;
	bpv__SlotIndex__pf = 0;
	bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83924EE49349B6E54AA578D40AF1465]\", \"51D42F05427843B7D303A5BDB67C8BD1\", \"Fish\")")	);
	bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf = false;
	bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf = 1;
	bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf = CastChecked<UClass>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__FishStruct__pf.bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf = 1;
	bpv__CharRef__pf = nullptr;
	bpv__FishingPlace__pf = nullptr;
	InputYawScale = 2.500000f;
	InputPitchScale = -2.500000f;
	InputRollScale = 1.000000f;
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	ForceFeedbackScale = 1.000000f;
	DefaultMouseCursor = EMouseCursor::Type::Crosshairs;
	auto& __Local__3 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	__Local__3 = __Local__0;
}
PRAGMA_ENABLE_OPTIMIZATION
void ATopDownController_C__pf3669546605::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownController_C__pf3669546605::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AFishingPlace_C__pf1097354743::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AItem_C__pf199495785::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATopDownCharacter_C__pf3669546605::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGameHUD_C__pf3980440580::StaticClass());
	extern UClass* Z_Construct_UClass_UI_Interact_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UI_Interact_C());
	InDynamicClass->ReferencedConvertedFields.Add(UInventoryComponent_C__pf2577010357::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInventoryWindow_C__pf3980440580::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ACube_C__pf199495785::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AString_C__pf199495785::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AStick_C__pf199495785::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSlotStruct__pf697489738());
	extern UScriptStruct* Z_Construct_UScriptStruct_FItemStruct__pf697489738();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FItemStruct__pf697489738());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_2"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__5);
	auto __Local__6 = NewObject<UInputAxisKeyDelegateBinding>(InDynamicClass, UInputAxisKeyDelegateBinding::StaticClass(), TEXT("InputAxisKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__6);
	static TWeakObjectPtr<UProperty> __Local__8{};
	const UProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((UBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__4), false, 0));
	__Local__5->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__5->InputActionDelegateBindings.AddUninitialized(9);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__5->InputActionDelegateBindings.GetData(), 9);
	auto& __Local__9 = __Local__5->InputActionDelegateBindings[0];
	__Local__9.InputActionName = FName(TEXT("ZoomIn"));
	__Local__9.FunctionNameToBind = FName(TEXT("InpActEvt_ZoomIn_K2Node_InputActionEvent_2"));
	auto& __Local__10 = __Local__5->InputActionDelegateBindings[1];
	__Local__10.InputActionName = FName(TEXT("ZoomOut"));
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_ZoomOut_K2Node_InputActionEvent_1"));
	auto& __Local__11 = __Local__5->InputActionDelegateBindings[2];
	__Local__11.InputActionName = FName(TEXT("NumericKey"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_NumericKey_K2Node_InputActionEvent_0"));
	auto& __Local__12 = __Local__5->InputActionDelegateBindings[3];
	__Local__12.InputActionName = FName(TEXT("SetDestination"));
	__Local__12.InputKeyEvent = EInputEvent::IE_Released;
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_SetDestination_K2Node_InputActionEvent_8"));
	auto& __Local__13 = __Local__5->InputActionDelegateBindings[4];
	__Local__13.InputActionName = FName(TEXT("SetDestination"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_SetDestination_K2Node_InputActionEvent_7"));
	auto& __Local__14 = __Local__5->InputActionDelegateBindings[5];
	__Local__14.InputActionName = FName(TEXT("Pan"));
	__Local__14.InputKeyEvent = EInputEvent::IE_Released;
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_Pan_K2Node_InputActionEvent_6"));
	auto& __Local__15 = __Local__5->InputActionDelegateBindings[6];
	__Local__15.InputActionName = FName(TEXT("Pan"));
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_Pan_K2Node_InputActionEvent_5"));
	auto& __Local__16 = __Local__5->InputActionDelegateBindings[7];
	__Local__16.InputActionName = FName(TEXT("Pan"));
	__Local__16.InputKeyEvent = EInputEvent::IE_Released;
	__Local__16.FunctionNameToBind = FName(TEXT("InpActEvt_Pan_K2Node_InputActionEvent_4"));
	auto& __Local__17 = __Local__5->InputActionDelegateBindings[8];
	__Local__17.InputActionName = FName(TEXT("Pan"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_Pan_K2Node_InputActionEvent_3"));
	__Local__6->InputAxisKeyDelegateBindings = TArray<FBlueprintInputAxisKeyDelegateBinding> ();
	__Local__6->InputAxisKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__6->InputAxisKeyDelegateBindings.GetData(), 2);
	auto& __Local__18 = __Local__6->InputAxisKeyDelegateBindings[0];
	__Local__18.AxisKey = FKey(TEXT("MouseY"));
	__Local__18.FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2"));
	auto& __Local__19 = __Local__6->InputAxisKeyDelegateBindings[1];
	__Local__19.AxisKey = FKey(TEXT("MouseX"));
	__Local__19.FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue4__pf{};
	FText bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue3__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 24:
			{
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpv__ItemStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf, CastChecked<UClass>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 25:
			{
				bpv__FishStruct__pf = bpv__ItemStruct__pf;
			}
		case 26:
			{
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpv__FishStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf.bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf, CastChecked<UClass>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				TArray<FSlotStruct__pf697489738>  __Local__20 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__CharRef__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf)) ? (bpv__CharRef__pf->bpv__InventoryComponent__pf->bpv__Inventory__pf) : (__Local__20)), bpv__SlotIndex__pf, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(b0l__CallFunc_Array_Get_Item1__pf.bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf, 1);
				b0l__K2Node_MakeStruct_SlotStruct__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf = b0l__CallFunc_Array_Get_Item1__pf.bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf;
				b0l__K2Node_MakeStruct_SlotStruct__pf.bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				if(::IsValid(bpv__CharRef__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf->bpv__InvWindowWidget__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf->bpv__InvWindowWidget__pf->bpv__SlotWidget__pf))
				{
					bpv__CharRef__pf->bpv__InventoryComponent__pf->bpv__InvWindowWidget__pf->bpv__SlotWidget__pf->bpf__UpdateSlot__pf(bpv__SlotIndex__pf, b0l__K2Node_MakeStruct_SlotStruct__pf);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__CharRef__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf))
				{
					bpv__CharRef__pf->bpv__InventoryComponent__pf->bpf__ToggleInventory__pf();
				}
			}
		case 29:
			{
				if(::IsValid(bpv__CharRef__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf))
				{
					bpv__CharRef__pf->bpv__InventoryComponent__pf->bpf__ToggleInventory__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if ( bpv__FishingPlace__pf && bpv__FishingPlace__pf->GetClass()->ImplementsInterface(UI_Interact_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetObject(bpv__FishingPlace__pf);
					void* IAddress = bpv__FishingPlace__pf->GetInterfaceAddress(UI_Interact_C::StaticClass());
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsI_Interact__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsI_Interact__pf))
				{
					II_Interact_C::Execute_bpf__Interact__pf(b0l__K2Node_DynamicCast_AsI_Interact__pf.GetObject() , bpv__CharRef__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 78:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 79:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 80:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				if(::IsValid(bpv__CharRef__pf))
				{
					(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__CharRef__pf->AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AFishingPlace_C__pf1097354743::StaticClass());
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 81:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 82:
			{
				__StateStack.Push(94);
			}
		case 83:
			{
				if(::IsValid(bpv__CharRef__pf))
				{
					(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__CharRef__pf->AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AFishingPlace_C__pf1097354743::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsFishing_Place__pf = Cast<AFishingPlace_C__pf1097354743>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsFishing_Place__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 84:
			{
				bpv__FishingPlace__pf = b0l__K2Node_DynamicCast_AsFishing_Place__pf;
			}
		case 85:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83924EE49349B6E54AA578D40AF1465]\", \"B0D1D4E44CB615E2FE58FF88ED58DCA9\", \"1\")")	));
				bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf = UKismetInputLibrary::Key_GetDisplayName(b0l__K2Node_InputActionEvent_Key__pf);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue3__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue3__pf)
				{
					__CurrentState = 88;
					break;
				}
			}
		case 86:
			{
				bpv__SlotIndex__pf = 0;
			}
		case 87:
			{
				TArray<FSlotStruct__pf697489738>  __Local__21 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__CharRef__pf) && ::IsValid(bpv__CharRef__pf->bpv__InventoryComponent__pf)) ? (bpv__CharRef__pf->bpv__InventoryComponent__pf->bpv__Inventory__pf) : (__Local__21)), bpv__SlotIndex__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				bpv__ItemStruct__pf = b0l__CallFunc_Array_Get_Item2__pf;
				__CurrentState = 24;
				break;
			}
		case 88:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf = UKismetSystemLibrary::MakeLiteralText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83924EE49349B6E54AA578D40AF1465]\", \"DE6E6ADB4DB3BE85FE08C8B6C74EC197\", \"2\")")	));
				bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf = UKismetInputLibrary::Key_GetDisplayName(b0l__K2Node_InputActionEvent_Key__pf);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf)
				{
					__CurrentState = 90;
					break;
				}
			}
		case 89:
			{
				bpv__SlotIndex__pf = 1;
				__CurrentState = 87;
				break;
			}
		case 90:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue3__pf = UKismetSystemLibrary::MakeLiteralText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83924EE49349B6E54AA578D40AF1465]\", \"3B6AEC82401EBEEE316999974C4CC1F5\", \"3\")")	));
				bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf = UKismetInputLibrary::Key_GetDisplayName(b0l__K2Node_InputActionEvent_Key__pf);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue3__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 91:
			{
				bpv__SlotIndex__pf = 2;
				__CurrentState = 87;
				break;
			}
		case 92:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf = UKismetSystemLibrary::MakeLiteralText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83924EE49349B6E54AA578D40AF1465]\", \"29EA08194C929880C6C2ED8723B61029\", \"4\")")	));
				bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf = UKismetInputLibrary::Key_GetDisplayName(b0l__K2Node_InputActionEvent_Key__pf);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_Key_GetDisplayName_ReturnValue__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 93:
			{
				bpv__SlotIndex__pf = 3;
				__CurrentState = 87;
				break;
			}
		case 94:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 80;
				break;
			}
		case 95:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
				__CurrentState = 78;
				break;
			}
		case 126:
			{
				__CurrentState = 127;
				break;
			}
		case 127:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue1__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsTop_Down_Character1__pf = Cast<ATopDownCharacter_C__pf3669546605>(bpfv__CallFunc_K2_GetPawn_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 128:
			{
				bpv__CharRef__pf = b0l__K2Node_DynamicCast_AsTop_Down_Character1__pf;
				__CurrentState = 95;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue1__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 42:
			{
				__CurrentState = 43;
				break;
			}
		case 43:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key3__pf;
			}
		case 44:
			{
				__StateStack.Push(55);
			}
		case 45:
			{
				__StateStack.Push(50);
			}
		case 46:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					__CurrentState = 47;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
			}
		case 48:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 49:
			{
				b0l__Temp_bool_IsClosed_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				if (!b0l__Temp_bool_IsClosed_Variable1__pf)
				{
					__CurrentState = 51;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				b0l__Temp_bool_IsClosed_Variable1__pf = true;
			}
		case 52:
			{
				if (!true)
				{
					__CurrentState = 54;
					break;
				}
			}
		case 53:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				__CurrentState = 64;
				break;
			}
		case 64:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key4__pf;
			}
		case 65:
			{
				__StateStack.Push(66);
				__CurrentState = 45;
				break;
			}
		case 66:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 67:
			{
				__StateStack.Push(68);
				__CurrentState = 45;
				break;
			}
		case 68:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__PanSensitivity__pf, b0l__K2Node_InputAxisKeyEvent_AxisValue__pf);
				if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue1__pf = bpv__PlayerRef__pf->bpv__SpringArm1__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue1__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakRotator_Pitch1__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue1__pf, -80.000000, -15.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue1__pf = UKismetMathLibrary::MakeRotator(b0l__CallFunc_BreakRotator_Roll1__pf, bpfv__CallFunc_FClamp_ReturnValue__pf, b0l__CallFunc_BreakRotator_Yaw1__pf);
				if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
				{
					bpv__PlayerRef__pf->bpv__SpringArm1__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue1__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult1__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 119:
			{
				__CurrentState = 67;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 130);
	// optimized KCST_UnconditionalGoto
	float  __Local__22 = 0.000000;
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(((::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf)) ? (bpv__PlayerRef__pf->bpv__SpringArm1__pf->TargetArmLength) : (__Local__22)), bpv__ZoomSensitivity__pf);
	bpfv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 500.000000, bpv__MaxArmLength__pf);
	if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
	{
		bpv__PlayerRef__pf->bpv__SpringArm1__pf->TargetArmLength = bpfv__CallFunc_FClamp_ReturnValue2__pf;
	}
	return; //KCST_EndOfThread
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_3(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UGameHUD_C__pf3980440580* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 115);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
	bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf, FString(TEXT("Tutorial")));
	if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UGameHUD_C__pf3980440580>(UWidgetBlueprintLibrary::Create(this, UGameHUD_C__pf3980440580::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpv__HUDWidget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	if(::IsValid(bpv__HUDWidget__pf))
	{
		bpv__HUDWidget__pf->UUserWidget::AddToViewport(0);
	}
	bpf__CastRef__pf();
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
	}
	return; //KCST_EndOfThread
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 129);
	// optimized KCST_UnconditionalGoto
	float  __Local__23 = 0.000000;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpv__ZoomSensitivity__pf, ((::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf)) ? (bpv__PlayerRef__pf->bpv__SpringArm1__pf->TargetArmLength) : (__Local__23)));
	bpfv__CallFunc_FClamp_ReturnValue1__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, 500.000000, bpv__MaxArmLength__pf);
	if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
	{
		bpv__PlayerRef__pf->bpv__SpringArm1__pf->TargetArmLength = bpfv__CallFunc_FClamp_ReturnValue1__pf;
	}
	return; //KCST_EndOfThread
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue1__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__CursorToWorld__pf))
				{
					b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__CursorToWorld__pf->USceneComponent::SetHiddenInGame(true, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				if (!true)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 13:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				__StateStack.Push(18);
			}
		case 16:
			{
				__StateStack.Push(19);
			}
		case 17:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable1__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				__CurrentState = 12;
				break;
			}
		case 21:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable1__pf = true;
			}
		case 22:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				__StateStack.Push(33);
				__CurrentState = 16;
				break;
			}
		case 33:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				__StateStack.Push(71);
				__CurrentState = 16;
				break;
			}
		case 71:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 72:
			{
				bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				bpf__MoveToHitLocation__pf(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
			}
		case 73:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf3669546605>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 74:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__CursorToWorld__pf))
				{
					b0l__K2Node_DynamicCast_AsTop_Down_Character__pf->bpv__CursorToWorld__pf->USceneComponent::SetHiddenInGame(false, false);
				}
			}
		case 75:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(8, 1484270533, TEXT("ExecuteUbergraph_TopDownController_5"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 96:
			{
				__CurrentState = 97;
				break;
			}
		case 97:
			{
				__StateStack.Push(103);
			}
		case 98:
			{
				bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsItem__pf = Cast<AItem_C__pf199495785>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsItem__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = 102;
					break;
				}
			}
		case 99:
			{
				bpv__Selectable__pf = true;
			}
		case 100:
			{
				bpv__ItemRef__pf = b0l__K2Node_DynamicCast_AsItem__pf;
			}
		case 101:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue1__pf = UGameplayStatics::GetObjectClass(bpv__ItemRef__pf);
				bpv__ItemClass__pf = bpfv__CallFunc_GetObjectClass_ReturnValue1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 102:
			{
				bpv__Selectable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 103:
			{
				if (!bpv__Selectable__pf)
				{
					__CurrentState = 106;
					break;
				}
			}
		case 104:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->UPrimitiveComponent::SetRenderCustomDepth(true);
				}
			}
		case 105:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 70;
				break;
			}
		case 106:
			{
				bpfv__CallFunc_IsValid_ReturnValue1__pf = UKismetSystemLibrary::IsValid(bpv__ItemRef__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue1__pf)
				{
					__CurrentState = 70;
					break;
				}
			}
		case 107:
			{
				UStaticMeshComponent*  __Local__25 = ((UStaticMeshComponent*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__ItemRef__pf)) ? (bpv__ItemRef__pf->bpv__StaticMesh__pf) : (__Local__25)));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 70;
					break;
				}
			}
		case 108:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->UPrimitiveComponent::SetRenderCustomDepth(false);
				}
			}
		case 109:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__ItemRef__pf);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpfv__CallFunc_GetObjectClass_ReturnValue__pf, ACube_C__pf199495785::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue3__pf)
				{
					__CurrentState = 111;
					break;
				}
			}
		case 110:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 70;
				break;
			}
		case 111:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__ItemRef__pf);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpfv__CallFunc_GetObjectClass_ReturnValue__pf, AString_C__pf199495785::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue2__pf)
				{
					__CurrentState = 113;
					break;
				}
			}
		case 112:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 70;
				break;
			}
		case 113:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__ItemRef__pf);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpfv__CallFunc_GetObjectClass_ReturnValue__pf, AStick_C__pf199495785::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 114:
			{
				if(::IsValid(bpv__ItemRef__pf) && ::IsValid(bpv__ItemRef__pf->bpv__StaticMesh__pf))
				{
					bpv__ItemRef__pf->bpv__StaticMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownController_C__pf3669546605::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 70;
				break;
			}
		case 120:
			{
				__CurrentState = 121;
				break;
			}
		case 121:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key7__pf;
				__CurrentState = 15;
				break;
			}
		case 124:
			{
				__CurrentState = 125;
				break;
			}
		case 125:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key8__pf;
				__CurrentState = 32;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownController_C__pf3669546605::bpf__ExecuteUbergraph_TopDownController__pf_6(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				__StateStack.Push(37);
			}
		case 35:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 10;
				break;
			}
		case 37:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 39:
			{
				if (!true)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 40:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				__StateStack.Push(57);
				__CurrentState = 34;
				break;
			}
		case 57:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 58:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__PanSensitivity__pf, b0l__K2Node_InputAxisKeyEvent_AxisValue1__pf);
				if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__PlayerRef__pf->bpv__SpringArm1__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakRotator_Yaw__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(b0l__CallFunc_BreakRotator_Roll__pf, b0l__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__PlayerRef__pf) && ::IsValid(bpv__PlayerRef__pf->bpv__SpringArm1__pf))
				{
					bpv__PlayerRef__pf->bpv__SpringArm1__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				__StateStack.Push(60);
				__CurrentState = 34;
				break;
			}
		case 62:
			{
				__StateStack.Push(59);
				__CurrentState = 34;
				break;
			}
		case 76:
			{
				__CurrentState = 77;
				break;
			}
		case 77:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key5__pf;
				__CurrentState = 61;
				break;
			}
		case 116:
			{
				__CurrentState = 56;
				break;
			}
		case 117:
			{
				__CurrentState = 118;
				break;
			}
		case 118:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key6__pf;
				__CurrentState = 62;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownController_C__pf3669546605::bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_1(119);
}
void ATopDownController_C__pf3669546605::bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_6(116);
}
void ATopDownController_C__pf3669546605::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_TopDownController__pf_3(115);
}
void ATopDownController_C__pf3669546605::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_5(96);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_0(126);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_4(129);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_2(130);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_1(42);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_1(63);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_6(76);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_6(117);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_5(120);
}
void ATopDownController_C__pf3669546605::bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownController__pf_5(124);
}
void ATopDownController_C__pf3669546605::bpf__MoveToHitLocation__pf(FHitResult bpp__Hit__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				UGameplayStatics::BreakHitResult(bpp__Hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_BreakHitResult_Location__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpv__MinClickDistance__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpp__Hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, bpfv__CallFunc_BreakHitResult_Location__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownController_C__pf3669546605::bpf__CastRef__pf()
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	ATopDownCharacter_C__pf3669546605* bpfv__K2Node_DynamicCast_AsTop_Down_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				bpfv__K2Node_DynamicCast_AsTop_Down_Character__pf = Cast<ATopDownCharacter_C__pf3669546605>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsTop_Down_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__PlayerRef__pf = bpfv__K2Node_DynamicCast_AsTop_Down_Character__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownController_C__pf3669546605::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fish.fish 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Fish_C 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/TopDownBP/Blueprints/InventoryLogic/Materials/EBlue.EBlue 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/IceMat/Ice.Ice 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/MyOwn/StringMat.StringMat 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/BranchTexture.BranchTexture 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownController_C__pf3669546605::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Fish_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Default__Fish_C 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_03.LowPoly_WinterScene_Dead_Branch_03 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/stick-texture.stick-texture 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/MyOwn/String.String 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/string-texture.string-texture 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/ice-texture.ice-texture 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridSlot 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/M_Cursor_Decal.M_Cursor_Decal 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK.Penguin_SK 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK_PhysicsAsset.Penguin_SK_PhysicsAsset 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/TopDownBP/Blueprints/Models/penguin/textures/DefaultMaterial_Base_Color_Mat.DefaultMaterial_Base_Color_Mat 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/TopDownBP/Blueprints/DialogueLogic/Dialogue.Dialogue 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_02_Snow.LowPoly_WinterScene_Dead_Branch_02_Snow 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fishing-rod-texture.fishing-rod-texture 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.FishingRod_C 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FishingRod_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.Default__FishingRod_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace.FishingPlace_C 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item.Item_C 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/Default/TopDownCharacter.TopDownCharacter_C 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD.GameHUD_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/I_Interact.I_Interact_C 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent.InventoryComponent_C 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/UI/InventoryWindow.InventoryWindow_C 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube.Cube_C 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/String.String_C 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick.Stick_C 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct.SlotStruct 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct.ItemStruct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ATopDownController_C__pf3669546605
{
	FRegisterHelper__ATopDownController_C__pf3669546605()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/Default/TopDownController"), &ATopDownController_C__pf3669546605::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ATopDownController_C__pf3669546605 Instance;
};
FRegisterHelper__ATopDownController_C__pf3669546605 FRegisterHelper__ATopDownController_C__pf3669546605::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
