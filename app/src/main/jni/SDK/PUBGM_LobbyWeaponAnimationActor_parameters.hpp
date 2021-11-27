#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.PlayLobbyAnimation
struct ALobbyWeaponAnimationActor_C_PlayLobbyAnimation_Params
{
};

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.UserConstructionScript
struct ALobbyWeaponAnimationActor_C_UserConstructionScript_Params
{
};

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ReceiveBeginPlay
struct ALobbyWeaponAnimationActor_C_ReceiveBeginPlay_Params
{
};

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.OnAnimEnd
struct ALobbyWeaponAnimationActor_C_OnAnimEnd_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.SetAnimTimeInfo
struct ALobbyWeaponAnimationActor_C_SetAnimTimeInfo_Params
{
	int                                                DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ExecuteUbergraph_LobbyWeaponAnimationActor
struct ALobbyWeaponAnimationActor_C_ExecuteUbergraph_LobbyWeaponAnimationActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

