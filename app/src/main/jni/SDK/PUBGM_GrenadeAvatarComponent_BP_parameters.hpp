#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GrenadeAvatarComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetDefaultAvatarID
struct UGrenadeAvatarComponent_BP_C_GetDefaultAvatarID_Params
{
	int*                                               InAvatarID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandlePath
struct UGrenadeAvatarComponent_BP_C_GetItemAvatarHandlePath_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandle
struct UGrenadeAvatarComponent_BP_C_GetItemAvatarHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackCommonAvatarHandle*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeAvatarEquiped
struct UGrenadeAvatarComponent_BP_C_GrenadeAvatarEquiped_Params
{
};

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ReceiveBeginPlay
struct UGrenadeAvatarComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExecuteUbergraph_GrenadeAvatarComponent_BP
struct UGrenadeAvatarComponent_BP_C_ExecuteUbergraph_GrenadeAvatarComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

