#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyCameraManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyCameraManager.LobbyCameraManager_C.GetCaptureCameraForLevelSeq
struct ULobbyCameraManager_C_GetCaptureCameraForLevelSeq_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.CreateLevelSequencePlayer
struct ULobbyCameraManager_C_CreateLevelSequencePlayer_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.JumpToPosition
struct ULobbyCameraManager_C_JumpToPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.PauseLevelSequence
struct ULobbyCameraManager_C_PauseLevelSequence_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchBackToLobbyCamera
struct ULobbyCameraManager_C_SwitchBackToLobbyCamera_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.ChangeCloseupCameraPosWithBlend
struct ULobbyCameraManager_C_ChangeCloseupCameraPosWithBlend_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchToCloseupCamera
struct ULobbyCameraManager_C_SwitchToCloseupCamera_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequeceWithWeapon
struct ULobbyCameraManager_C_BeginLevelSequeceWithWeapon_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.WithdrawEnlargeLens
struct ULobbyCameraManager_C_WithdrawEnlargeLens_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.EnlargeLens
struct ULobbyCameraManager_C_EnlargeLens_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CameraID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.OnTrackEvent
struct ULobbyCameraManager_C_OnTrackEvent_Params
{
	struct FString                                     EventData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyCameraManager.LobbyCameraManager_C.Wpos2Spos
struct ULobbyCameraManager_C_Wpos2Spos_Params
{
	struct FVector                                     Wpos;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Spos;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.AttachToCamera
struct ULobbyCameraManager_C_AttachToCamera_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelatePosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.CameraToWorldPosition
struct ULobbyCameraManager_C_CameraToWorldPosition_Params
{
	struct FVector                                     RelatePosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CameraRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     WorldPosition;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.ToCameraSpacePosition
struct ULobbyCameraManager_C_ToCameraSpacePosition_Params
{
	struct FVector                                     WorldPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CameraRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CameraSpacePosition;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoTargetCamera
struct ULobbyCameraManager_C_ChangetoTargetCamera_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.OnStopLevelSequence
struct ULobbyCameraManager_C_OnStopLevelSequence_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.StopLevelSequence
struct ULobbyCameraManager_C_StopLevelSequence_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLobbyCamera
struct ULobbyCameraManager_C_ChangetoLobbyCamera_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLevelSequenceCamera
struct ULobbyCameraManager_C_ChangetoLevelSequenceCamera_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequenceCloseup
struct ULobbyCameraManager_C_BeginLevelSequenceCloseup_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedFreezeEndFrame;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.GetExtraData
struct ULobbyCameraManager_C_GetExtraData_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LobbyCameraManager.LobbyCameraManager_C.DestroyCloseupViewActor
struct ULobbyCameraManager_C_DestroyCloseupViewActor_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.LeaveCloseupView
struct ULobbyCameraManager_C_LeaveCloseupView_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.GetCurrentCamera
struct ULobbyCameraManager_C_GetCurrentCamera_Params
{
	class ACameraActor*                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.FetchCameraAdapt
struct ULobbyCameraManager_C_FetchCameraAdapt_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchCamera
struct ULobbyCameraManager_C_SwitchCamera_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.MallFullScreen
struct ULobbyCameraManager_C_MallFullScreen_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.UIHide
struct ULobbyCameraManager_C_UIHide_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.UIShow
struct ULobbyCameraManager_C_UIShow_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.Construct
struct ULobbyCameraManager_C_Construct_Params
{
};

// Function LobbyCameraManager.LobbyCameraManager_C.Tick
struct ULobbyCameraManager_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyCameraManager.LobbyCameraManager_C.ExecuteUbergraph_LobbyCameraManager
struct ULobbyCameraManager_C_ExecuteUbergraph_LobbyCameraManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

