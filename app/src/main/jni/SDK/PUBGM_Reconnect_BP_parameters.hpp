#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Reconnect_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Reconnect_BP.Reconnect_BP_C.UIHideAnimFromLua
struct UReconnect_BP_C_UIHideAnimFromLua_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.UIShowAnimFromLua
struct UReconnect_BP_C_UIShowAnimFromLua_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.UIHideAnim
struct UReconnect_BP_C_UIHideAnim_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.UIShowAnim
struct UReconnect_BP_C_UIShowAnim_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.UIHide
struct UReconnect_BP_C_UIHide_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.UIShow
struct UReconnect_BP_C_UIShow_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.Construct
struct UReconnect_BP_C_Construct_Params
{
};

// Function Reconnect_BP.Reconnect_BP_C.Tick
struct UReconnect_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP
struct UReconnect_BP_C_ExecuteUbergraph_Reconnect_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

