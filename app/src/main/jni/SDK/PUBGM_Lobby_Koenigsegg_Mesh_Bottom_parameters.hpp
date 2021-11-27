#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Koenigsegg_Mesh_Bottom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RemoveCacheActor
struct ALobby_Koenigsegg_Mesh_Bottom_C_RemoveCacheActor_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ResetPlatform
struct ALobby_Koenigsegg_Mesh_Bottom_C_ResetPlatform_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.GetSeqByBind
struct ALobby_Koenigsegg_Mesh_Bottom_C_GetSeqByBind_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  NewParam;                                                 // (Parm, OutParm)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateLevelSequnceActor
struct ALobby_Koenigsegg_Mesh_Bottom_C_CreateLevelSequnceActor_Params
{
	class UObject*                                     SluaHUID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                sequenceType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         sequenceActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateSeq
struct ALobby_Koenigsegg_Mesh_Bottom_C_CreateSeq_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TriggerRotate
struct ALobby_Koenigsegg_Mesh_Bottom_C_TriggerRotate_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.NeedRotate
struct ALobby_Koenigsegg_Mesh_Bottom_C_NeedRotate_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TickRotate
struct ALobby_Koenigsegg_Mesh_Bottom_C_TickRotate_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.UserConstructionScript
struct ALobby_Koenigsegg_Mesh_Bottom_C_UserConstructionScript_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__FinishedFunc
struct ALobby_Koenigsegg_Mesh_Bottom_C_Timeline_0__FinishedFunc_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__UpdateFunc
struct ALobby_Koenigsegg_Mesh_Bottom_C_Timeline_0__UpdateFunc_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ReceiveTick
struct ALobby_Koenigsegg_Mesh_Bottom_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
struct ALobby_Koenigsegg_Mesh_Bottom_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct ALobby_Koenigsegg_Mesh_Bottom_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RotateSpecificAngle
struct ALobby_Koenigsegg_Mesh_Bottom_C_RotateSpecificAngle_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.StopRotate
struct ALobby_Koenigsegg_Mesh_Bottom_C_StopRotate_Params
{
};

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom
struct ALobby_Koenigsegg_Mesh_Bottom_C_ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

