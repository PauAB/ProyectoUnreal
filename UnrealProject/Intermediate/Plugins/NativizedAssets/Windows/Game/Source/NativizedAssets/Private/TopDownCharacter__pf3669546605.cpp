#include "NativizedAssets.h"
#include "TopDownCharacter__pf3669546605.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
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
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "InventoryComponent__pf2577010357.h"
#include "DialogueTrigger__pf3696423911.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ATopDownCharacter_C__pf3669546605::ATopDownCharacter_C__pf3669546605(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ATopDownCharacter_C__pf3669546605::StaticClass() == GetClass()))
	{
		ATopDownCharacter_C__pf3669546605::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 81.938881f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 42.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		auto& __Local__5 = (*(AccessPrivateProperty<float >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__5 = 165.526093f;
		static TWeakObjectPtr<UProperty> __Local__7{};
		const UProperty* __Local__6 = __Local__7.Get();
		if (nullptr == __Local__6)
		{
			__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__6);
			__Local__7 = __Local__6;
		}
		(((UBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->RotationRate = FRotator(0.000000, 640.000000, 0.000000);
		__Local__1->bOrientRotationToMovement = true;
		__Local__1->NavAgentProps.AgentRadius = 42.000000f;
		__Local__1->NavAgentProps.AgentHeight = 192.000000f;
		static TWeakObjectPtr<UProperty> __Local__9{};
		const UProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((UBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__1), false, 0));
		__Local__1->bConstrainToPlane = true;
		__Local__1->bSnapToPlaneAtStart = true;
		static TWeakObjectPtr<UProperty> __Local__11{};
		const UProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((UBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ATopDownCharacter_C__pf3669546605::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ATopDownCharacter_C__pf3669546605::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->OverrideMaterials = TArray<UMaterialInterface*> ();
		__Local__2->OverrideMaterials.Reserve(1);
		__Local__2->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownCharacter_C__pf3669546605::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
		auto& __Local__12 = (*(AccessPrivateProperty<float >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__12 = 85.812500f;
		auto& __Local__13 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__13 = __Local__0;
		__Local__2->RelativeLocation = FVector(0.000000, 0.000000, -95.000000);
		__Local__2->RelativeRotation = FRotator(0.000000, -90.000000, 0.000000);
		__Local__2->RelativeScale3D = FVector(0.400000, 0.400000, 0.400000);
		static TWeakObjectPtr<UProperty> __Local__15{};
		const UProperty* __Local__14 = __Local__15.Get();
		if (nullptr == __Local__14)
		{
			__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__14);
			__Local__15 = __Local__14;
		}
		(((UBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__SpringArm1__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm1"));
	bpv__Camera1__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera1"));
	bpv__CursorToWorld__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("CursorToWorld"));
	bpv__InventoryComponent__pf = CreateDefaultSubobject<UInventoryComponent_C__pf2577010357>(TEXT("InventoryComponent"));
	bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm1__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm1__pf->TargetArmLength = 1500.000000f;
	bpv__SpringArm1__pf->bDoCollisionTest = false;
	bpv__SpringArm1__pf->RelativeRotation = FRotator(-60.000000, 0.000000, 0.000000);
	bpv__SpringArm1__pf->bAbsoluteRotation = true;
	bpv__SpringArm1__pf->bAutoActivate = false;
	static TWeakObjectPtr<UProperty> __Local__17{};
	const UProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((UBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__SpringArm1__pf), false, 0));
	bpv__Camera1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera1__pf->AttachToComponent(bpv__SpringArm1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((UBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__Camera1__pf), false, 0));
	bpv__CursorToWorld__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CursorToWorld__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__CursorToWorld__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__18 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATopDownCharacter_C__pf3669546605::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__CursorToWorld__pf->DecalSize = FVector(16.000000, 32.000000, 32.000000);
	bpv__CursorToWorld__pf->RelativeLocation = FVector(-10.000008, 0.000000, -90.000000);
	bpv__CursorToWorld__pf->RelativeRotation = FRotator(90.000000, 0.000019, 0.000019);
	bpv__CursorToWorld__pf->bHiddenInGame = true;
	(((UBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__CursorToWorld__pf), false, 0));
	bpv__InventoryComponent__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__InventoryComponent__pf->bpv__Anchors__pf.Minimum = FVector2D(0.500000, 1.000000);
	bpv__InventoryComponent__pf->bpv__Anchors__pf.Maximum = FVector2D(0.500000, 1.000000);
	(((UBoolProperty*)__Local__16)->SetPropertyValue_InContainer((bpv__InventoryComponent__pf), false, 0));
	bpv__SlotIndex__pf = 0;
	bpv__FishingPlace__pf = nullptr;
	auto& __Local__19 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__19 = __Local__2;
	auto& __Local__20 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__20 = __Local__1;
	auto& __Local__21 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__21 = __Local__0;
	bUseControllerRotationYaw = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void ATopDownCharacter_C__pf3669546605::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm1__pf)
	{
		bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera1__pf)
	{
		bpv__Camera1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CursorToWorld__pf)
	{
		bpv__CursorToWorld__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__InventoryComponent__pf)
	{
		bpv__InventoryComponent__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownCharacter_C__pf3669546605::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UInventoryComponent_C__pf2577010357::StaticClass());
	extern UClass* Z_Construct_UClass_UI_Interact_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UI_Interact_C());
	InDynamicClass->ReferencedConvertedFields.Add(ADialogueTrigger_C__pf3696423911::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSlotStruct__pf697489738());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__22 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__22);
	auto __Local__23 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__23);
	static TWeakObjectPtr<UProperty> __Local__25{};
	const UProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	(((UBoolProperty*)__Local__24)->SetPropertyValue_InContainer((__Local__22), false, 0));
	__Local__23->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__23->InputActionDelegateBindings.AddUninitialized(2);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__23->InputActionDelegateBindings.GetData(), 2);
	auto& __Local__26 = __Local__23->InputActionDelegateBindings[0];
	__Local__26.InputActionName = FName(TEXT("Next"));
	__Local__26.FunctionNameToBind = FName(TEXT("InpActEvt_Next_K2Node_InputActionEvent_0"));
	auto& __Local__27 = __Local__23->InputActionDelegateBindings[1];
	__Local__27.InputActionName = FName(TEXT("Action"));
	__Local__27.FunctionNameToBind = FName(TEXT("InpActEvt_Action_K2Node_InputActionEvent_1"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ATopDownCharacter_C__pf3669546605::bpf__ExecuteUbergraph_TopDownCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__StateStack.Push(19);
			}
		case 16:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item1__pf);
				b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf = Cast<ADialogueTrigger_C__pf3696423911>(b0l__CallFunc_Array_Get_Item1__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf))
				{
					II_Interact_C::Execute_bpf__Interact__pf(b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf , this);
				}
			}
		case 18:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
			}
		case 20:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue1__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable1__pf);
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf, ((UClass*)nullptr));
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable1__pf, bpfv__CallFunc_Array_Length_ReturnValue1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable1__pf;
				__CurrentState = 15;
				break;
			}
		case 22:
			{
				b0l__Temp_int_Loop_Counter_Variable1__pf = 0;
			}
		case 23:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 20;
				break;
			}
		case 24:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable1__pf = false;
				__CurrentState = 22;
				break;
			}
		case 30:
			{
				__CurrentState = 24;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownCharacter_C__pf3669546605::bpf__ExecuteUbergraph_TopDownCharacter__pf_1(int32 bpp__EntryPoint__pf)
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
				if(::IsValid(bpv__InventoryComponent__pf))
				{
					bpv__InventoryComponent__pf->bpf__ToggleInventory__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(1, -807630342, TEXT("ExecuteUbergraph_TopDownCharacter_1"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownCharacter_C__pf3669546605::bpf__ExecuteUbergraph_TopDownCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable1__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(9);
			}
		case 8:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf = Cast<ADialogueTrigger_C__pf3696423911>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 10:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(b0l__CallFunc_Array_Get_Item__pf, UI_Interact_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf, b0l__Temp_int_Array_Index_Variable1__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if ( b0l__CallFunc_Array_Get_Item__pf && b0l__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UI_Interact_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetObject(b0l__CallFunc_Array_Get_Item__pf);
					void* IAddress = b0l__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UI_Interact_C::StaticClass());
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsI_Interact__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsI_Interact__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsI_Interact__pf))
				{
					II_Interact_C::Execute_bpf__Interact__pf(b0l__K2Node_DynamicCast_AsI_Interact__pf.GetObject() , this);
				}
			}
		case 13:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
				__CurrentState = 3;
				break;
			}
		case 27:
			{
				__CurrentState = 14;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATopDownCharacter_C__pf3669546605::bpf__ExecuteUbergraph_TopDownCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotationFromAxes_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_MakeRotationFromAxes_ReturnValue__pf = UKismetMathLibrary::MakeRotationFromAxes(b0l__CallFunc_BreakHitResult_ImpactNormal__pf, FVector(0.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000));
	if(::IsValid(bpv__CursorToWorld__pf))
	{
		bpv__CursorToWorld__pf->USceneComponent::K2_SetWorldLocationAndRotation(b0l__CallFunc_BreakHitResult_Location__pf, bpfv__CallFunc_MakeRotationFromAxes_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void ATopDownCharacter_C__pf3669546605::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_TopDownCharacter__pf_1(28);
}
void ATopDownCharacter_C__pf3669546605::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_TopDownCharacter__pf_3(25);
}
void ATopDownCharacter_C__pf3669546605::bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownCharacter__pf_0(30);
}
void ATopDownCharacter_C__pf3669546605::bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TopDownCharacter__pf_2(27);
}
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownCharacter_C__pf3669546605::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK.Penguin_SK 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  PhysicsAsset /Game/TopDownBP/Blueprints/Models/penguin/source/Penguin_SK_PhysicsAsset.Penguin_SK_PhysicsAsset 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownBP/Blueprints/Models/penguin/textures/DefaultMaterial_Base_Color_Mat.DefaultMaterial_Base_Color_Mat 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/M_Cursor_Decal.M_Cursor_Decal 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ATopDownCharacter_C__pf3669546605::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{51, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DecalComponent 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{54, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DataTable /Game/TopDownBP/Blueprints/DialogueLogic/Dialogue.Dialogue 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Fish_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Fish_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Fish.Default__Fish_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/TopDownBP/Blueprints/InventoryLogic/Materials/EBlue.EBlue 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownBP/Blueprints/Mats/IceMat/Ice.Ice 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownBP/Blueprints/Models/MyOwn/StringMat.StringMat 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/BranchTexture.BranchTexture 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fish.fish 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CheatManager 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_03.LowPoly_WinterScene_Dead_Branch_03 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/stick-texture.stick-texture 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.GridSlot 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.GridPanel 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/MyOwn/String.String 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/string-texture.string-texture 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/ice-texture.ice-texture 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/TopDownBP/Blueprints/Models/LowPoly_WinterScene/LowPoly_WinterScene_Dead_Branch_02_Snow.LowPoly_WinterScene_Dead_Branch_02_Snow 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/TopDownBP/Blueprints/Textures/fishing-rod-texture.fishing-rod-texture 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.FishingRod_C 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FishingRod_C /Game/TopDownBP/Blueprints/InventoryLogic/Selectable/FishingRod.Default__FishingRod_C 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent.InventoryComponent_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/InventoryLogic/I_Interact.I_Interact_C 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger.DialogueTrigger_C 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct.SlotStruct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ATopDownCharacter_C__pf3669546605
{
	FRegisterHelper__ATopDownCharacter_C__pf3669546605()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"), &ATopDownCharacter_C__pf3669546605::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ATopDownCharacter_C__pf3669546605 Instance;
};
FRegisterHelper__ATopDownCharacter_C__pf3669546605 FRegisterHelper__ATopDownCharacter_C__pf3669546605::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
