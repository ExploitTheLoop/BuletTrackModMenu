#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CharacterAvatarComp2_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.EnableAvatarAnimation
struct UCharacterAvatarComp2_BP_C_EnableAvatarAnimation_Params
{
	bool                                               IsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetRepalceIDOnVehicle
struct UCharacterAvatarComp2_BP_C_GetRepalceIDOnVehicle_Params
{
	int*                                               OriginID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetForceHideState
struct UCharacterAvatarComp2_BP_C_GetForceHideState_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EForceHideState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBPSlotNameConfigType
struct UCharacterAvatarComp2_BP_C_GetBPSlotNameConfigType_Params
{
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAvatarSlotNameConfig                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsEnableItemDownload
struct UCharacterAvatarComp2_BP_C_IsEnableItemDownload_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBatchDefaultBodyPath
struct UCharacterAvatarComp2_BP_C_GetBatchDefaultBodyPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HideHeadMesh
struct UCharacterAvatarComp2_BP_C_HideHeadMesh_Params
{
	class UMeshComponent**                             MasterBoneComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOffEquimentByResID
struct UCharacterAvatarComp2_BP_C_PutOffEquimentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnEquipmentByResID
struct UCharacterAvatarComp2_BP_C_PutOnEquipmentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsNeedConsiderHairCut
struct UCharacterAvatarComp2_BP_C_IsNeedConsiderHairCut_Params
{
	int                                                InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBackpackAvatarHandle*                       Handle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem_InDev
struct UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_InDev_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GenerateClientDefaultAvatar
struct UCharacterAvatarComp2_BP_C_GenerateClientDefaultAvatar_Params
{
	class UBattleItemHandleBase**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.BPClientPostProcessViewDataMiddle
struct UCharacterAvatarComp2_BP_C_BPClientPostProcessViewDataMiddle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ProcessGodzillaSuit
struct UCharacterAvatarComp2_BP_C_ProcessGodzillaSuit_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsItemHasMutilReplaceMesh
struct UCharacterAvatarComp2_BP_C_IsItemHasMutilReplaceMesh_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsUseDefaultReplaceModel
struct UCharacterAvatarComp2_BP_C_IsUseDefaultReplaceModel_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               InItemDefineID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBackpackAvatarHandle**                      Handle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem
struct UCharacterAvatarComp2_BP_C_GetFakeAvatarHandleItem_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CheckAvatarWhoHideWho
struct UCharacterAvatarComp2_BP_C_CheckAvatarWhoHideWho_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int>                                        HideSomeAvatar;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        HideBySomeAvatar;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnCustomEquipmentByID
struct UCharacterAvatarComp2_BP_C_PutOnCustomEquipmentByID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentPattern
struct UCharacterAvatarComp2_BP_C_SetEquipmentPattern_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentColor
struct UCharacterAvatarComp2_BP_C_SetEquipmentColor_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MaskColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MaskColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                MaskColor3;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemPattern
struct UCharacterAvatarComp2_BP_C_CreateAvatarItemPattern_Params
{
	EAvatarSlotType*                                   InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InPatternID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarItemPattern*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemColor
struct UCharacterAvatarComp2_BP_C_CreateAvatarItemColor_Params
{
	EAvatarSlotType*                                   InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InColorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarItemColor*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID
struct UCharacterAvatarComp2_BP_C_GetEquipmentSkinItemID_Params
{
	int*                                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicUnequipped
struct UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicEquipped
struct UCharacterAvatarComp2_BP_C_Bp_ProcessAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnDefaultEquipment
struct UCharacterAvatarComp2_BP_C_PutOnDefaultEquipment_Params
{
	class UBackpackAvatarHandle*                       ItemHandle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.InitBodyMeshByHead
struct UCharacterAvatarComp2_BP_C_InitBodyMeshByHead_Params
{
	struct FItemDefineID                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ReceiveBeginPlay
struct UCharacterAvatarComp2_BP_C_ReceiveBeginPlay_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicEquipped
struct UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicUnequipped
struct UCharacterAvatarComp2_BP_C_Bp_EventAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PreHanleEquipCloth
struct UCharacterAvatarComp2_BP_C_PreHanleEquipCloth_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ClearEventFromOnAvatarEquippedEvent
struct UCharacterAvatarComp2_BP_C_ClearEventFromOnAvatarEquippedEvent_Params
{
};

// Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ExecuteUbergraph_CharacterAvatarComp2_BP
struct UCharacterAvatarComp2_BP_C_ExecuteUbergraph_CharacterAvatarComp2_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

