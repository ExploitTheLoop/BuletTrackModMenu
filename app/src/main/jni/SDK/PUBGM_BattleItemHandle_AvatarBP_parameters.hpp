#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_AvatarBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.BPNeedCheckCapacityInHandleDisuse
struct UBattleItemHandle_AvatarBP_C_BPNeedCheckCapacityInHandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWrapperClass
struct UBattleItemHandle_AvatarBP_C_GetWrapperClass_Params
{
	class UClass*                                      WrapperClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.ExtractItemData
struct UBattleItemHandle_AvatarBP_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.LocalHandleDisuse
struct UBattleItemHandle_AvatarBP_C_LocalHandleDisuse_Params
{
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWorldInternal
struct UBattleItemHandle_AvatarBP_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.SpawnWrapperOnGround
struct UBattleItemHandle_AvatarBP_C_SpawnWrapperOnGround_Params
{
	class UClass*                                      WrapperClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomLoc;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDisuse
struct UBattleItemHandle_AvatarBP_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDrop
struct UBattleItemHandle_AvatarBP_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandlePickup
struct UBattleItemHandle_AvatarBP_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      pickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleUse
struct UBattleItemHandle_AvatarBP_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

