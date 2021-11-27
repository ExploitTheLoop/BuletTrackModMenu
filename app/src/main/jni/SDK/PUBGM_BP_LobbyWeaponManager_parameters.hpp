#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllWeapon
struct UBP_LobbyWeaponManager_C_UnEquipAllWeapon_Params
{
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllExtraWeapon
struct UBP_LobbyWeaponManager_C_UnEquipAllExtraWeapon_Params
{
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAllAssetsLoadFinish
struct UBP_LobbyWeaponManager_C_AsyncWeaponAllAssetsLoadFinish_Params
{
	class ABP_LobbyWeapon_C*                           BPLobbyWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponMeshLoadFinish
struct UBP_LobbyWeaponManager_C_AsyncWeaponMeshLoadFinish_Params
{
	class UAvatarDIYComponent*                         AvatarDIYComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAnimLoadFinish
struct UBP_LobbyWeaponManager_C_AsyncWeaponAnimLoadFinish_Params
{
	class ASTExtraLobbyWeapon*                         LobbyWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckWeaponNeedLODOptimize
struct UBP_LobbyWeaponManager_C_CheckWeaponNeedLODOptimize_Params
{
	int                                                AvatarLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNeedLodOptimize;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckCanEquipWeapon
struct UBP_LobbyWeaponManager_C_CheckCanEquipWeapon_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canEquip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.EquipWeaponByResId
struct UBP_LobbyWeaponManager_C_EquipWeaponByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipWeaponByResId
struct UBP_LobbyWeaponManager_C_UnEquipWeaponByResId_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetWeaponSocketNameByResId
struct UBP_LobbyWeaponManager_C_GetWeaponSocketNameByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility
struct UBP_LobbyWeaponManager_C_SetWeaponVisibility_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon
struct UBP_LobbyWeaponManager_C_CreateWeapon_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       Handle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass
struct UBP_LobbyWeaponManager_C_GetLobbyWeaponClass_Params
{
	int                                                InWeaponAvatarID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin
struct UBP_LobbyWeaponManager_C_CreateWeaponAndChangeSkin_Params
{
	int*                                               WeaponSkinID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSync;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ReceiveBeginPlay
struct UBP_LobbyWeaponManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ExecuteUbergraph_BP_LobbyWeaponManager
struct UBP_LobbyWeaponManager_C_ExecuteUbergraph_BP_LobbyWeaponManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

