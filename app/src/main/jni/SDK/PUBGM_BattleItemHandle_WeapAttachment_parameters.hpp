#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_WeapAttachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReAutoEquip
struct UBattleItemHandle_WeapAttachment_C_ReAutoEquip_Params
{
	class ASTExtraBaseCharacter*                       ACharacter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleWeaponBase_Handle_C*        Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.RemoveParentAdditionData
struct UBattleItemHandle_WeapAttachment_C_RemoveParentAdditionData_Params
{
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanDisuseToBackpackWithoutSelf
struct UBattleItemHandle_WeapAttachment_C_CanDisuseToBackpackWithoutSelf_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bCanDisuse;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUseWithPackage
struct UBattleItemHandle_WeapAttachment_C_CheckCanUseWithPackage_Params
{
	bool                                               bCanUse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetCanEquipWeapon
struct UBattleItemHandle_WeapAttachment_C_GetCanEquipWeapon_Params
{
	bool                                               bCanSwap;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       ACharater;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm, OutParm)
	bool                                               HasTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetItemBaseBySlot
struct UBattleItemHandle_WeapAttachment_C_GetItemBaseBySlot_Params
{
	TEnumAsByte<enum ESurviveWeaponPropSlot>           Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       ACharacter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemHandleBase*                             NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckTargetValid
struct UBattleItemHandle_WeapAttachment_C_CheckTargetValid_Params
{
	class UItemHandleBase*                             ItemHandleBase;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm, OutParm)
	bool                                               HasTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUse
struct UBattleItemHandle_WeapAttachment_C_CheckCanUse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReplaceAttach
struct UBattleItemHandle_WeapAttachment_C_ReplaceAttach_Params
{
	class UBattleItemHandle_MainWeapon_C*              TWeaponItemHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanSwap
struct UBattleItemHandle_WeapAttachment_C_CanSwap_Params
{
	class UBackpackWeaponAttachHandle*                 SpecificID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.FilterWeaponItemHandle
struct UBattleItemHandle_WeapAttachment_C_FilterWeaponItemHandle_Params
{
	class UBattleItemHandleBase*                       InputItemHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPickupDirectlyEquip;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm, OutParm)
	bool                                               HasTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExtractItemData
struct UBattleItemHandle_WeapAttachment_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetWorldInternal
struct UBattleItemHandle_WeapAttachment_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CreateWrapperOnGround
struct UBattleItemHandle_WeapAttachment_C_CreateWrapperOnGround_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDrop
struct UBattleItemHandle_WeapAttachment_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandlePickup
struct UBattleItemHandle_WeapAttachment_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      pickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDisuse
struct UBattleItemHandle_WeapAttachment_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleUse
struct UBattleItemHandle_WeapAttachment_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReturnWeaponAdditionalBulletsToBackpack
struct UBattleItemHandle_WeapAttachment_C_ReturnWeaponAdditionalBulletsToBackpack_Params
{
	class ASTExtraShootWeapon**                        Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BulletNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExecuteUbergraph_BattleItemHandle_WeapAttachment
struct UBattleItemHandle_WeapAttachment_C_ExecuteUbergraph_BattleItemHandle_WeapAttachment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

