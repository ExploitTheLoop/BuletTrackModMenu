#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BuildSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BuildSystem.BuildingActorBase.SpawnDestroyParticle
struct ABuildingActorBase_SpawnDestroyParticle_Params
{
	bool                                               bSpawnParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FSoftObjectPath                             DestroyBuildingEffectPath;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.PlayDestroyAnimation
struct ABuildingActorBase_PlayDestroyAnimation_Params
{
	bool                                               bUseParticle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.OnTakeDamageFromVehicle
struct ABuildingActorBase_OnTakeDamageFromVehicle_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.OnPlayDestroyAnimation
struct ABuildingActorBase_OnPlayDestroyAnimation_Params
{
	bool                                               bUseParticle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.OnBuildingActorDamaged
struct ABuildingActorBase_OnBuildingActorDamaged_Params
{
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.OnBornAnimationPlayEndInClient
struct ABuildingActorBase_OnBornAnimationPlayEndInClient_Params
{
};

// Function BuildSystem.BuildingActorBase.GetBuildID
struct ABuildingActorBase_GetBuildID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorBase.BPOnOwnerChanged
struct ABuildingActorBase_BPOnOwnerChanged_Params
{
};

// Function BuildSystem.BuildSystemComponent.TryAttachToMoveablePlatform
struct UBuildSystemComponent_TryAttachToMoveablePlatform_Params
{
	class AActor*                                      SpawnedBuilding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildLocation;                                            // (Parm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.StopPlaceBuilding
struct UBuildSystemComponent_StopPlaceBuilding_Params
{
};

// Function BuildSystem.BuildSystemComponent.StartPrePlaceBuilding
struct UBuildSystemComponent_StartPrePlaceBuilding_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingViewType>                viewType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.SkipCDTimeByBuildID
struct UBuildSystemComponent_SkipCDTimeByBuildID_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.ShouldEnableDoubleTouchMode
struct UBuildSystemComponent_ShouldEnableDoubleTouchMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.SetPrebuildEnabled
struct UBuildSystemComponent_SetPrebuildEnabled_Params
{
	bool                                               CanBePlaced;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.ServerStopPlaceBuilding
struct UBuildSystemComponent_ServerStopPlaceBuilding_Params
{
};

// Function BuildSystem.BuildSystemComponent.ServerStartPrePlaceBuilding
struct UBuildSystemComponent_ServerStartPrePlaceBuilding_Params
{
};

// Function BuildSystem.BuildSystemComponent.ServerPlaceBuildActor
struct UBuildSystemComponent_ServerPlaceBuildActor_Params
{
	int                                                BuildingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildLocation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    BuildRotation;                                            // (Parm, IsPlainOldData)
	uint32_t                                           InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.S2C_SkipCDTimeByBuildID
struct UBuildSystemComponent_S2C_SkipCDTimeByBuildID_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.S2C_ResetBuildngCDByBuildID
struct UBuildSystemComponent_S2C_ResetBuildngCDByBuildID_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InNewCDTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.ResetBuildngCDByBuildID
struct UBuildSystemComponent_ResetBuildngCDByBuildID_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InNewCDTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.ResetBuildList
struct UBuildSystemComponent_ResetBuildList_Params
{
};

// Function BuildSystem.BuildSystemComponent.ProccessNothingHitTraceOverlap
struct UBuildSystemComponent_ProccessNothingHitTraceOverlap_Params
{
	struct FVector                                     DestLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              MaxBuildDist;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.PlaceBuildingWithIndex
struct UBuildSystemComponent_PlaceBuildingWithIndex_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.PlaceBuildingAtLocation
struct UBuildSystemComponent_PlaceBuildingAtLocation_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.PlaceBuilding
struct UBuildSystemComponent_PlaceBuilding_Params
{
};

// Function BuildSystem.BuildSystemComponent.OverriveDeploymentTransform
struct UBuildSystemComponent_OverriveDeploymentTransform_Params
{
	struct FRotator                                    rotIn;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     locIn;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rotOut;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     locOut;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OverrideBuildingMaxBuildDistance
struct UBuildSystemComponent_OverrideBuildingMaxBuildDistance_Params
{
	float                                              BuildingMaxDistance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetAll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BuildingID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBoxEnded
struct UBuildSystemComponent_OnTouchedConstructableBoxEnded_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBox
struct UBuildSystemComponent_OnTouchedConstructableBox_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OnTouchActorBuild
struct UBuildSystemComponent_OnTouchActorBuild_Params
{
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OnAsyncLoadingEffectFinished
struct UBuildSystemComponent_OnAsyncLoadingEffectFinished_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.OnAsyncLoadingBuildingFinished
struct UBuildSystemComponent_OnAsyncLoadingBuildingFinished_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.LineTraceToBlackTag
struct UBuildSystemComponent_LineTraceToBlackTag_Params
{
	struct FVector                                     BuildLocation;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.IsInPreBuildingMode
struct UBuildSystemComponent_IsInPreBuildingMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.IsCanPlaceBuildingBP
struct UBuildSystemComponent_IsCanPlaceBuildingBP_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.IsCanPlaceBuilding
struct UBuildSystemComponent_IsCanPlaceBuilding_Params
{
	int                                                InBuildID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingActionType>              _TYPE;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetOwnerPlayerController
struct UBuildSystemComponent_GetOwnerPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetMaxDistance
struct UBuildSystemComponent_GetMaxDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetIsHasInitData
struct UBuildSystemComponent_GetIsHasInitData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetIndexByBuildingID
struct UBuildSystemComponent_GetIndexByBuildingID_Params
{
	int                                                BuildID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetCurrentBuildType
struct UBuildSystemComponent_GetCurrentBuildType_Params
{
	TEnumAsByte<enum EBuildingType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetCDOByIndex
struct UBuildSystemComponent_GetCDOByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.GetBuildingList
struct UBuildSystemComponent_GetBuildingList_Params
{
	TArray<struct FBuildingData>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BuildSystem.BuildSystemComponent.EnableBuildingByID
struct UBuildSystemComponent_EnableBuildingByID_Params
{
	int                                                BuildID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.DoSceenTouchBuild
struct UBuildSystemComponent_DoSceenTouchBuild_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPostion;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                PointerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingActionType>              _TYPE;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBegin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingActionType>              CustomBuildEvent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.DensityCheck
struct UBuildSystemComponent_DensityCheck_Params
{
	struct FBuildingActorDensityCheck                  DensityCheckParmas;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.CheckShouldSkipByVisibility
struct UBuildSystemComponent_CheckShouldSkipByVisibility_Params
{
	class UPrimitiveComponent*                         _comp;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.CheckPlacementOverlap
struct UBuildSystemComponent_CheckPlacementOverlap_Params
{
	TArray<struct FHitResult>                          HitArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBuildingData                               CurBuildData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    BuildRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ControlRot;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               HasForbiddenObject;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.CheckObjectIsOneOfTheTemplate
struct UBuildSystemComponent_CheckObjectIsOneOfTheTemplate_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              _ActorFilterTemplates;                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.BuildAtWorldLoc
struct UBuildSystemComponent_BuildAtWorldLoc_Params
{
	int                                                buildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  tranx;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bUseTrace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingActionType>              BuildType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.BP_LineTraceToBlackTag
struct UBuildSystemComponent_BP_LineTraceToBlackTag_Params
{
	struct FVector                                     BuildLocation;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildSystemComponent.AddBuildingData
struct UBuildSystemComponent_AddBuildingData_Params
{
	struct FBuildingData                               InData;                                                   // (Parm)
};

// Function BuildSystem.BuildingActorInterface.ShouldUseExtraRotation
struct UBuildingActorInterface_ShouldUseExtraRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.ShouldUseExtraOffset
struct UBuildingActorInterface_ShouldUseExtraOffset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.ShouldSnapToGrid
struct UBuildingActorInterface_ShouldSnapToGrid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.ShouldCustomBlockingChannels
struct UBuildingActorInterface_ShouldCustomBlockingChannels_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.ShouldCheckVisibilityTypes
struct UBuildingActorInterface_ShouldCheckVisibilityTypes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.SetBuildingActorID
struct UBuildingActorInterface_SetBuildingActorID_Params
{
	int                                                BuildID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.PrebuildCDOBodyInstance
struct UBuildingActorInterface_PrebuildCDOBodyInstance_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  tranx;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.NonCullingBeginPlay
struct UBuildingActorInterface_NonCullingBeginPlay_Params
{
};

// Function BuildSystem.BuildingActorInterface.MaxUnderWaterBuildDepth
struct UBuildingActorInterface_MaxUnderWaterBuildDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.IsEnableOverlayPlace
struct UBuildingActorInterface_IsEnableOverlayPlace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.IsAutoPickValidPlace
struct UBuildingActorInterface_IsAutoPickValidPlace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.HandleBuildingDestroyed
struct UBuildingActorInterface_HandleBuildingDestroyed_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.HandleBuildingConstructed
struct UBuildingActorInterface_HandleBuildingConstructed_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetWorldSnapSetup
struct UBuildingActorInterface_GetWorldSnapSetup_Params
{
	struct FBuildingActorWorldSnapSetup                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetVisibilitySkipTypes
struct UBuildingActorInterface_GetVisibilitySkipTypes_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetToleraceDistance
struct UBuildingActorInterface_GetToleraceDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetProhibitedActorTemplateList
struct UBuildingActorInterface_GetProhibitedActorTemplateList_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectPath
struct UBuildingActorInterface_GetPreBuildingEffectPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetOverlayPlaceHeight
struct UBuildingActorInterface_GetOverlayPlaceHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetMaxTraceDepth
struct UBuildingActorInterface_GetMaxTraceDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetMaxDeviation
struct UBuildingActorInterface_GetMaxDeviation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetDestroyedParticleTransformOffset
struct UBuildingActorInterface_GetDestroyedParticleTransformOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetDensityParams
struct UBuildingActorInterface_GetDensityParams_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBuildingActorDensityCheck                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetCustomBlockingChannels
struct UBuildingActorInterface_GetCustomBlockingChannels_Params
{
	TArray<TEnumAsByte<enum ECollisionChannel>>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BuildSystem.BuildingActorInterface.GetConstructingMode
struct UBuildingActorInterface_GetConstructingMode_Params
{
	TEnumAsByte<enum EBuildingActorConstructingMode>   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetBuildingActorID
struct UBuildingActorInterface_GetBuildingActorID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxRotator
struct UBuildingActorInterface_GetActorCollisionBoxRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxExtern
struct UBuildingActorInterface_GetActorCollisionBoxExtern_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxCenter
struct UBuildingActorInterface_GetActorCollisionBoxCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.CanDoQuadTrace
struct UBuildingActorInterface_CanDoQuadTrace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.CanBuildUnderWater
struct UBuildingActorInterface_CanBuildUnderWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorInterface.BPCheckPlacement
struct UBuildingActorInterface_BPCheckPlacement_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  tranx;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.BuildingActorMgr.OnBuildingActorSpawned
struct ABuildingActorMgr_OnBuildingActorSpawned_Params
{
	class AActor*                                      InOwnerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuildingActorBase*                          InBuildingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorMgr.OnBuildingActorDestroyed
struct ABuildingActorMgr_OnBuildingActorDestroyed_Params
{
	class ABuildingActorBase*                          InBuildingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.BuildingActorMgr.GetInstance
struct ABuildingActorMgr_GetInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuildingActorMgr*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.SelectBuildActor.SetSelectActorTemplate
struct ASelectBuildActor_SetSelectActorTemplate_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.SelectBuildActor.SetSelectActorPlacementEnable
struct ASelectBuildActor_SetSelectActorPlacementEnable_Params
{
	bool                                               PlacementEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.SelectBuildActor.SetIsPlacementEnable
struct ASelectBuildActor_SetIsPlacementEnable_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystem.SelectBuildActor.OnParticleLoaded
struct ASelectBuildActor_OnParticleLoaded_Params
{
};

// Function BuildSystem.SelectBuildActor.IsCurrentPlacementEnable
struct ASelectBuildActor_IsCurrentPlacementEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystem.SelectBuildActor.GetIsPlacementEnable
struct ASelectBuildActor_GetIsPlacementEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

