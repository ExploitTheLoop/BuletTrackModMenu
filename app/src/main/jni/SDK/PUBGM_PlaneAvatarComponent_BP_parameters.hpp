#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlaneAvatarComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.CreateItemAvatarHandle
struct UPlaneAvatarComponent_BP_C_CreateItemAvatarHandle_Params
{
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_SetMatDissolve
struct UPlaneAvatarComponent_BP_C_BP_SetMatDissolve_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_OnPlaneAvatarChanged
struct UPlaneAvatarComponent_BP_C_BP_OnPlaneAvatarChanged_Params
{
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.GetPlaneAvatarHandle
struct UPlaneAvatarComponent_BP_C_GetPlaneAvatarHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackPlaneAvatarHandle*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveBeginPlay
struct UPlaneAvatarComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveTick
struct UPlaneAvatarComponent_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.PlaneAvatarChanged
struct UPlaneAvatarComponent_BP_C_PlaneAvatarChanged_Params
{
};

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ExecuteUbergraph_PlaneAvatarComponent_BP
struct UPlaneAvatarComponent_BP_C_ExecuteUbergraph_PlaneAvatarComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

