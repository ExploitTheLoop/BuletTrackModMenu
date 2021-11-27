#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SyncMontage
struct ULobbyWeaponAnimationComponent_C_SyncMontage_Params
{
	float                                              Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.StopLobbyWeaponAnimation
struct ULobbyWeaponAnimationComponent_C_StopLobbyWeaponAnimation_Params
{
};

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayOnAction
struct ULobbyWeaponAnimationComponent_C_PlayOnAction_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMVPMotion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayLobbyWeaponAnimationByID
struct ULobbyWeaponAnimationComponent_C_PlayLobbyWeaponAnimationByID_Params
{
	int                                                WeaponAnimationID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMVPMotion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.Destroy
struct ULobbyWeaponAnimationComponent_C_Destroy_Params
{
};

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SetLobbyPlayerObj
struct ULobbyWeaponAnimationComponent_C_SetLobbyPlayerObj_Params
{
	class ABP_PlayerLobbyPawn_C*                       LobbyPlayerObj;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

