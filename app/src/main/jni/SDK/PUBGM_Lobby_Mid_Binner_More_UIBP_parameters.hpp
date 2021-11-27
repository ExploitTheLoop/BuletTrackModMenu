#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Mid_Binner_More_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.GetOffset
struct ULobby_Mid_Binner_More_UIBP_C_GetOffset_Params
{
	float                                              Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.GetCurrentIndex
struct ULobby_Mid_Binner_More_UIBP_C_GetCurrentIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.OnClickActivityItem
struct ULobby_Mid_Binner_More_UIBP_C_OnClickActivityItem_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.UpdateCurrentPage
struct ULobby_Mid_Binner_More_UIBP_C_UpdateCurrentPage_Params
{
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.SetActivityListPageCount
struct ULobby_Mid_Binner_More_UIBP_C_SetActivityListPageCount_Params
{
	int                                                pageCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.Tick
struct ULobby_Mid_Binner_More_UIBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.ExecuteUbergraph_Lobby_Mid_Binner_More_UIBP
struct ULobby_Mid_Binner_More_UIBP_C_ExecuteUbergraph_Lobby_Mid_Binner_More_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Mid_Binner_More_UIBP.Lobby_Mid_Binner_More_UIBP_C.EventDispatcherClickItem__DelegateSignature
struct ULobby_Mid_Binner_More_UIBP_C_EventDispatcherClickItem__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     JumpUrl;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

