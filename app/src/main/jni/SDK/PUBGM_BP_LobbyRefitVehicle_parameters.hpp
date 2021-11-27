#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyRefitVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CanAutoPlayLua
struct ABP_LobbyRefitVehicle_C_CanAutoPlayLua_Params
{
	bool                                               Param;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFadeLua
struct ABP_LobbyRefitVehicle_C_CheckRefitTipsFadeLua_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showAllTips;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoading
struct ABP_LobbyRefitVehicle_C_ShowLoading_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCameraRotation
struct ABP_LobbyRefitVehicle_C_ResetCameraRotation_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CreateDefaultRefitVehicleMesh
struct ABP_LobbyRefitVehicle_C_CreateDefaultRefitVehicleMesh_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HasRefitVehicleDownloaded
struct ABP_LobbyRefitVehicle_C_HasRefitVehicleDownloaded_Params
{
	bool                                               HasDownloaded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ChangeGroundShadow
struct ABP_LobbyRefitVehicle_C_ChangeGroundShadow_Params
{
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetRefitVehicleHandle
struct ABP_LobbyRefitVehicle_C_GetRefitVehicleHandle_Params
{
	int                                                VehicleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URefitVehicleHandle*                         RefitVehicleHandle;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InitSlotSocket
struct ABP_LobbyRefitVehicle_C_InitSlotSocket_Params
{
	TMap<int, struct FString>                          slotSocket;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryResetCloseUp
struct ABP_LobbyRefitVehicle_C_TryResetCloseUp_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetCastShadow
struct ABP_LobbyRefitVehicle_C_SetCastShadow_Params
{
	bool                                               CastShadow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EnableCameraRotationLag
struct ABP_LobbyRefitVehicle_C_EnableCameraRotationLag_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UpdateLastAutoPlayTime
struct ABP_LobbyRefitVehicle_C_UpdateLastAutoPlayTime_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckAutoPlay
struct ABP_LobbyRefitVehicle_C_CheckAutoPlay_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryRotateSceneByTouch
struct ABP_LobbyRefitVehicle_C_TryRotateSceneByTouch_Params
{
	bool                                               rotated;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryStopAutoPlay
struct ABP_LobbyRefitVehicle_C_TryStopAutoPlay_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetSlotSocketTransform
struct ABP_LobbyRefitVehicle_C_GetSlotSocketTransform_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetVectorAngle
struct ABP_LobbyRefitVehicle_C_GetVectorAngle_Params
{
	float                                              degree;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.DestroyFreeCamera
struct ABP_LobbyRefitVehicle_C_DestroyFreeCamera_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetYawToMesh
struct ABP_LobbyRefitVehicle_C_GetYawToMesh_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFade
struct ABP_LobbyRefitVehicle_C_CheckRefitTipsFade_Params
{
	bool                                               forceShowAll;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InterpVelocity
struct ABP_LobbyRefitVehicle_C_InterpVelocity_Params
{
	float                                              New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Old;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UserConstructionScript
struct ABP_LobbyRefitVehicle_C_UserConstructionScript_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__FinishedFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__UpdateFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__FinishedFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__UpdateFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__FinishedFunc
struct ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__UpdateFunc
struct ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__FinishedFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__UpdateFunc
struct ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__FinishedFunc
struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__UpdateFunc
struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__FinishedFunc
struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__FinishedFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__UpdateFunc
struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__UpdateFunc_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceiveTick
struct ABP_LobbyRefitVehicle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceivePossessed
struct ABP_LobbyRefitVehicle_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseupCameraEllipse
struct ABP_LobbyRefitVehicle_C_SwitchCloseupCameraEllipse_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.AutoPlay
struct ABP_LobbyRefitVehicle_C_AutoPlay_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.BlendCameraActor
struct ABP_LobbyRefitVehicle_C_BlendCameraActor_Params
{
	class USceneComponent*                             CameraActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  toTransform;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseUpCameraLinear
struct ABP_LobbyRefitVehicle_C_SwitchCloseUpCameraLinear_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.OnVehicleUpgradeSuccess
struct ABP_LobbyRefitVehicle_C_OnVehicleUpgradeSuccess_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCloseUpCamera
struct ABP_LobbyRefitVehicle_C_ResetCloseUpCamera_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EventOnAllMeshLoad
struct ABP_LobbyRefitVehicle_C_EventOnAllMeshLoad_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoadingForTime
struct ABP_LobbyRefitVehicle_C_ShowLoadingForTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetHighLight
struct ABP_LobbyRefitVehicle_C_SetHighLight_Params
{
	float*                                             invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FreExp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TrySetHilight
struct ABP_LobbyRefitVehicle_C_TrySetHilight_Params
{
	float                                              invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Freq;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.LuaBeginPlay
struct ABP_LobbyRefitVehicle_C_LuaBeginPlay_Params
{
};

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ExecuteUbergraph_BP_LobbyRefitVehicle
struct ABP_LobbyRefitVehicle_C_ExecuteUbergraph_BP_LobbyRefitVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

