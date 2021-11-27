#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.RequestWeaponDIYData
struct ABP_LobbyWeapon_C_RequestWeaponDIYData_Params
{
	struct FString                                     PlayerUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DIYPlanID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.EquipWeaponPandentByPandentId
struct ABP_LobbyWeapon_C_EquipWeaponPandentByPandentId_Params
{
	int                                                pendantID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponPendantSocketType                           PendantSocketType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponAnimDone
struct ABP_LobbyWeapon_C_OnAsyncLoadLobbyWeaponAnimDone_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.CheckWeaponAssetsAllLoaded
struct ABP_LobbyWeapon_C_CheckWeaponAssetsAllLoaded_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ResetWeaponLoadedStatus
struct ABP_LobbyWeapon_C_ResetWeaponLoadedStatus_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponMeshDone
struct ABP_LobbyWeapon_C_OnAsyncLoadLobbyWeaponMeshDone_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby
struct ABP_LobbyWeapon_C_GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SideType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.InitMesh
struct ABP_LobbyWeapon_C_InitMesh_Params
{
	class UBattleItemHandleBase*                       Handle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.UserConstructionScript
struct ABP_LobbyWeapon_C_UserConstructionScript_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ReceiveBeginPlay
struct ABP_LobbyWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ExecuteUbergraph_BP_LobbyWeapon
struct ABP_LobbyWeapon_C_ExecuteUbergraph_BP_LobbyWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnWeaponAllAssetsLoaded__DelegateSignature
struct ABP_LobbyWeapon_C_OnWeaponAllAssetsLoaded__DelegateSignature_Params
{
	class ABP_LobbyWeapon_C*                           BPLobbyWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

