#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Gun_3D_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.GetInitLocation
struct ALobby_Left_Gun_3D_UIBP_C_GetInitLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.UserConstructionScript
struct ALobby_Left_Gun_3D_UIBP_C_UserConstructionScript_Params
{
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__FinishedFunc
struct ALobby_Left_Gun_3D_UIBP_C_Timeline_GunSlotScrollAnimation__FinishedFunc_Params
{
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__UpdateFunc
struct ALobby_Left_Gun_3D_UIBP_C_Timeline_GunSlotScrollAnimation__UpdateFunc_Params
{
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventScrollWeaponSlot
struct ALobby_Left_Gun_3D_UIBP_C_EventScrollWeaponSlot_Params
{
	bool                                               isScorllUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                scrollNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.CustomEventEventScrollWeaponSlot_Test
struct ALobby_Left_Gun_3D_UIBP_C_CustomEventEventScrollWeaponSlot_Test_Params
{
	int                                                scrollNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventStopScrollSlot
struct ALobby_Left_Gun_3D_UIBP_C_EventStopScrollSlot_Params
{
};

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP
struct ALobby_Left_Gun_3D_UIBP_C_ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

