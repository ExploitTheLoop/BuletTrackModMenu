#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Item_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Common_Item_BP.Common_Item_BP_C.SetEveryPackIcon
struct UCommon_Item_BP_C_SetEveryPackIcon_Params
{
	int                                                specailIconTable;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetLight
struct UCommon_Item_BP_C_SetLight_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetNameColor
struct UCommon_Item_BP_C_SetNameColor_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Common_Item_BP.Common_Item_BP_C.SetLimitCount
struct UCommon_Item_BP_C_SetLimitCount_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Has;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetCostCount
struct UCommon_Item_BP_C_SetCostCount_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Has;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.HideQualityOfBG
struct UCommon_Item_BP_C_HideQualityOfBG_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.HideQuality
struct UCommon_Item_BP_C_HideQuality_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.SetTimeLimitIcon
struct UCommon_Item_BP_C_SetTimeLimitIcon_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetValidTime
struct UCommon_Item_BP_C_SetValidTime_Params
{
	int                                                validTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsShowSubTransparentBg
struct UCommon_Item_BP_C_SetIsShowSubTransparentBg_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetGrayBg
struct UCommon_Item_BP_C_SetGrayBg_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetBlackBg
struct UCommon_Item_BP_C_SetBlackBg_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetAwardState
struct UCommon_Item_BP_C_SetAwardState_Params
{
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetCombatReadinessIcon
struct UCommon_Item_BP_C_SetCombatReadinessIcon_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsWear
struct UCommon_Item_BP_C_SetIsWear_Params
{
	bool                                               isWear;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAni
struct UCommon_Item_BP_C_PlayDecomposeAni_Params
{
	int                                                OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newCnt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetTakeState
struct UCommon_Item_BP_C_SetTakeState_Params
{
	bool                                               canTake;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetHasGet
struct UCommon_Item_BP_C_SetHasGet_Params
{
	bool                                               hasGet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.EnableItemPreview
struct UCommon_Item_BP_C_EnableItemPreview_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.SetIconFromTexture
struct UCommon_Item_BP_C_SetIconFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.ShowItemName
struct UCommon_Item_BP_C_ShowItemName_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.DisableItemPreview
struct UCommon_Item_BP_C_DisableItemPreview_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseItem
struct UCommon_Item_BP_C_OnReleaseItem_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnPressItem
struct UCommon_Item_BP_C_OnPressItem_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnClickItem
struct UCommon_Item_BP_C_OnClickItem_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.SetUseCount
struct UCommon_Item_BP_C_SetUseCount_Params
{
	int                                                UseCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRolewear;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetSmallerIcon
struct UCommon_Item_BP_C_SetSmallerIcon_Params
{
	bool                                               IsNeedSmall;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetSpecialIcon
struct UCommon_Item_BP_C_SetSpecialIcon_Params
{
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_Item_BP.Common_Item_BP_C.SetDecomposeEffectIcon
struct UCommon_Item_BP_C_SetDecomposeEffectIcon_Params
{
	int                                                from_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                to_id;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                to_cnt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              playAnimDelayTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAnim
struct UCommon_Item_BP_C_PlayDecomposeAnim_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.EnableShowLimit
struct UCommon_Item_BP_C_EnableShowLimit_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetColorAndPattern
struct UCommon_Item_BP_C_SetColorAndPattern_Params
{
	int                                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pattern;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsolated
struct UCommon_Item_BP_C_SetIsolated_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.ShowMask
struct UCommon_Item_BP_C_ShowMask_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetBGVisibility
struct UCommon_Item_BP_C_SetBGVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.EnableShowTips
struct UCommon_Item_BP_C_EnableShowTips_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.HideNameAddrStr
struct UCommon_Item_BP_C_HideNameAddrStr_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsTryOn
struct UCommon_Item_BP_C_SetIsTryOn_Params
{
	bool                                               tryOn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetNameAddStr
struct UCommon_Item_BP_C_SetNameAddStr_Params
{
	struct FString                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIconAlpha
struct UCommon_Item_BP_C_SetIconAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsLock
struct UCommon_Item_BP_C_SetIsLock_Params
{
	bool                                               isLock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetIsNew
struct UCommon_Item_BP_C_SetIsNew_Params
{
	bool                                               isNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetQuality
struct UCommon_Item_BP_C_SetQuality_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetUsingState
struct UCommon_Item_BP_C_SetUsingState_Params
{
	bool                                               isUsing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetSelected
struct UCommon_Item_BP_C_SetSelected_Params
{
	bool                                               isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.SetNumber
struct UCommon_Item_BP_C_SetNumber_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.InitView
struct UCommon_Item_BP_C_InitView_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                validHour;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isShowTips;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRedEmotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommon_Item_BP_C*                           Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.OnClickDownload
struct UCommon_Item_BP_C_OnClickDownload_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnClickEvent
struct UCommon_Item_BP_C_OnClickEvent_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnPressEvent
struct UCommon_Item_BP_C_OnPressEvent_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseEvent
struct UCommon_Item_BP_C_OnReleaseEvent_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.Construct
struct UCommon_Item_BP_C_Construct_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.Destruct
struct UCommon_Item_BP_C_Destruct_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C._BindEvent
struct UCommon_Item_BP_C__BindEvent_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C._ClearEvent
struct UCommon_Item_BP_C__ClearEvent_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnConstruct
struct UCommon_Item_BP_C_OnConstruct_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnDestruct
struct UCommon_Item_BP_C_OnDestruct_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.ExecuteUbergraph_Common_Item_BP
struct UCommon_Item_BP_C_ExecuteUbergraph_Common_Item_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseItemCallback__DelegateSignature
struct UCommon_Item_BP_C_OnReleaseItemCallback__DelegateSignature_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnPressItemCallback__DelegateSignature
struct UCommon_Item_BP_C_OnPressItemCallback__DelegateSignature_Params
{
};

// Function Common_Item_BP.Common_Item_BP_C.OnClickItemCallback__DelegateSignature
struct UCommon_Item_BP_C_OnClickItemCallback__DelegateSignature_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

