#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandleWeaponBase_Handle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetBulletNumSaveToWrapper
struct UBattleItemHandleWeaponBase_Handle_C_GetBulletNumSaveToWrapper_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalData
struct UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalData_Params
{
	TArray<struct FBattleItemAdditionalData>           InAdditionalData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalDataToWrapper
struct UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalDataToWrapper_Params
{
	class APickUpWrapperActor*                         PickUpWrapper;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWeaponClassFromTable
struct UBattleItemHandleWeaponBase_Handle_C_GetWeaponClassFromTable_Params
{
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.EnableWeaponAttachmentBindDropToWeaponWrapper
struct UBattleItemHandleWeaponBase_Handle_C_EnableWeaponAttachmentBindDropToWeaponWrapper_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ParseAdditionalData
struct UBattleItemHandleWeaponBase_Handle_C_ParseAdditionalData_Params
{
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetOwingtWeapon
struct UBattleItemHandleWeaponBase_Handle_C_GetOwingtWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.SpawnWrapperOnGround
struct UBattleItemHandleWeaponBase_Handle_C_SpawnWrapperOnGround_Params
{
	class UClass*                                      WrapperClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomLoc;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               InDefineID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APickUpWrapperActor*                         TargetWrapper;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWorldInternal
struct UBattleItemHandleWeaponBase_Handle_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDisuse
struct UBattleItemHandleWeaponBase_Handle_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleUse
struct UBattleItemHandleWeaponBase_Handle_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDrop
struct UBattleItemHandleWeaponBase_Handle_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandlePickup
struct UBattleItemHandleWeaponBase_Handle_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      pickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ExtractItemData
struct UBattleItemHandleWeaponBase_Handle_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

