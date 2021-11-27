#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Main_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.CheckAdaption
struct ULobby_Main_UIBP_C_CheckAdaption_Params
{
	bool                                               bAdapt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.GetAdaptWidthHeight
struct ULobby_Main_UIBP_C_GetAdaptWidthHeight_Params
{
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              adaptWidth;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              adaptHeight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Tick
struct ULobby_Main_UIBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Construct
struct ULobby_Main_UIBP_C_Construct_Params
{
};

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.ExecuteUbergraph_Lobby_Main_UIBP
struct ULobby_Main_UIBP_C_ExecuteUbergraph_Lobby_Main_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

