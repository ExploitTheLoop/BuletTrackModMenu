#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Right_Content_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.SetScrollBack
struct ULobby_Right_Content_UIBP_C_SetScrollBack_Params
{
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.DelayStartAutoScroll
struct ULobby_Right_Content_UIBP_C_DelayStartAutoScroll_Params
{
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.StartAutoScroll
struct ULobby_Right_Content_UIBP_C_StartAutoScroll_Params
{
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.AutoScrollWhenUnTouched
struct ULobby_Right_Content_UIBP_C_AutoScrollWhenUnTouched_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.Tick
struct ULobby_Right_Content_UIBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct ULobby_Right_Content_UIBP_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.ExecuteUbergraph_Lobby_Right_Content_UIBP
struct ULobby_Right_Content_UIBP_C_ExecuteUbergraph_Lobby_Right_Content_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

