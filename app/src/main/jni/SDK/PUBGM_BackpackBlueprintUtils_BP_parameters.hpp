#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BackpackBlueprintUtils_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCustomPickupItemCountByDefineID
struct UBackpackBlueprintUtils_BP_C_GetCustomPickupItemCountByDefineID_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FJudgePickupUsefulItem                      JudgePickUseful;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandleClass
struct UBackpackBlueprintUtils_BP_C_GetBattleItemHandleClass_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CanNotAutoSwitchToGrenade
struct UBackpackBlueprintUtils_BP_C_CanNotAutoSwitchToGrenade_Params
{
	int*                                               InGrenadeID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.PreModifyPickupSettingData
struct UBackpackBlueprintUtils_BP_C_PreModifyPickupSettingData_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsConsumableMissionItemType
struct UBackpackBlueprintUtils_BP_C_IsConsumableMissionItemType_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetGrenadePriorityByType
struct UBackpackBlueprintUtils_BP_C_GetGrenadePriorityByType_Params
{
	int*                                               InGrenadeType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsIceDrinkEmoteIDInBackpack
struct UBackpackBlueprintUtils_BP_C_IsIceDrinkEmoteIDInBackpack_Params
{
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InEmoteID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsEquipmentItem
struct UBackpackBlueprintUtils_BP_C_IsEquipmentItem_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateVirtualItemHandle
struct UBackpackBlueprintUtils_BP_C_CreateVirtualItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject**                                    Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetPendantIDByWeaponID
struct UBackpackBlueprintUtils_BP_C_GetPendantIDByWeaponID_Params
{
	int*                                               WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetWeaponSkinMappingID
struct UBackpackBlueprintUtils_BP_C_GetWeaponSkinMappingID_Params
{
	int*                                               InWeaponSkinID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemOperationSoundAndBank
struct UBackpackBlueprintUtils_BP_C_GetItemOperationSoundAndBank_Params
{
	int*                                               ItemSoundID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationType*                          ItemOperation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutBankName;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     OutSoundName;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGlideItemType
struct UBackpackBlueprintUtils_BP_C_IsGlideItemType_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGhillieSuitItemType
struct UBackpackBlueprintUtils_BP_C_IsGhillieSuitItemType_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentBagLevel
struct UBackpackBlueprintUtils_BP_C_GetEquipmentBagLevel_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentLevel
struct UBackpackBlueprintUtils_BP_C_GetEquipmentLevel_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.Is3BackpackID
struct UBackpackBlueprintUtils_BP_C_Is3BackpackID_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsInPveMode
struct UBackpackBlueprintUtils_BP_C_IsInPveMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsPVEMode
struct UBackpackBlueprintUtils_BP_C_IsPVEMode_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentSkinIDByAvatar
struct UBackpackBlueprintUtils_BP_C_GetEquipmentSkinIDByAvatar_Params
{
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatar;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SkinItemID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifySetting
struct UBackpackBlueprintUtils_BP_C_ModifySetting_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyPickupSetting
struct UBackpackBlueprintUtils_BP_C_ModifyPickupSetting_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyBulletAndMedician
struct UBackpackBlueprintUtils_BP_C_ModifyBulletAndMedician_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPIDByResID
struct UBackpackBlueprintUtils_BP_C_GetBPIDByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos
struct UBackpackBlueprintUtils_BP_C_AddToWeaponAttachPos_Params
{
	int                                                attachID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable
struct UBackpackBlueprintUtils_BP_C_InitItemTable_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath
struct UBackpackBlueprintUtils_BP_C_GetBattleItemHandlePath_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceLobby;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID
struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByRawTextID_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType
struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByType_Params
{
	EBattleTextType*                                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSubType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID
struct UBackpackBlueprintUtils_BP_C_GetItemSubTypeID_Params
{
	int*                                               SpecificID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID
struct UBackpackBlueprintUtils_BP_C_GetBattleWeaponItemDisplayDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleWeaponItemDisplayData                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID
struct UBackpackBlueprintUtils_BP_C_GenerateItemDefineIDByItemTableID_Params
{
	int*                                               ItemTableID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TypeSpecificID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData
struct UBackpackBlueprintUtils_BP_C_IsVirtualItemData_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack
struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemHandleInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Character_Params
{
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       BattleItemHandle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Default_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       BattleItemHandle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData
struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureData_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemFeatureData                      FeatureData;                                              // (Parm, OutParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID
struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleItemFeatureData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject**                                    Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack
struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID
struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByItemTableID_Params
{
	int*                                               ItemTableID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID
struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemTableRowByItemTableID
struct UBackpackBlueprintUtils_BP_C_GetItemTableRowByItemTableID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemRecordData                             ItemTableRow;                                             // (Parm, OutParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack
struct UBackpackBlueprintUtils_BP_C_AddCharacterVirtualItemToBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter**                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable
struct UBackpackBlueprintUtils_BP_C_InitialItemTable_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP
struct UBackpackBlueprintUtils_BP_C_ExecuteUbergraph_BackpackBlueprintUtils_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

