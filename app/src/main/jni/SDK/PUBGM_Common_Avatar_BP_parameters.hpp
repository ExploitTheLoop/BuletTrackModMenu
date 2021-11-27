#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Avatar_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerBanned
struct UCommon_Avatar_BP_C_SetPlayerBanned_Params
{
	bool                                               bIsBanned;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnDownloadSuc
struct UCommon_Avatar_BP_C_OnDownloadSuc_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetUsePool
struct UCommon_Avatar_BP_C_SetUsePool_Params
{
	bool                                               usePool;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetAssetLoadingMethod
struct UCommon_Avatar_BP_C_SetAssetLoadingMethod_Params
{
	bool                                               Async;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetIconSize
struct UCommon_Avatar_BP_C_SetIconSize_Params
{
	int                                                X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTextureExt
struct UCommon_Avatar_BP_C_SetFrameTextureExt_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTexture
struct UCommon_Avatar_BP_C_SetFrameTexture_Params
{
	class UTexture2D*                                  Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerLevel
struct UCommon_Avatar_BP_C_SetPlayerLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerGender
struct UCommon_Avatar_BP_C_SetPlayerGender_Params
{
	int                                                GD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerUid
struct UCommon_Avatar_BP_C_SetPlayerUid_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.GetRankFrameLevelPath
struct UCommon_Avatar_BP_C_GetRankFrameLevelPath_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrame
struct UCommon_Avatar_BP_C_SetFrame_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetDefaultIcon
struct UCommon_Avatar_BP_C_SetDefaultIcon_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerIcon
struct UCommon_Avatar_BP_C_SetPlayerIcon_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.InitView
struct UCommon_Avatar_BP_C_InitView_Params
{
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     iconUrl;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                gender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreFrame;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RoleNation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItem
struct UCommon_Avatar_BP_C_OnClickItem_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnLoadIcon
struct UCommon_Avatar_BP_C_OnLoadIcon_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C._BindEvent
struct UCommon_Avatar_BP_C__BindEvent_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C._ClearEvent
struct UCommon_Avatar_BP_C__ClearEvent_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.ExecuteUbergraph_Common_Avatar_BP
struct UCommon_Avatar_BP_C_ExecuteUbergraph_Common_Avatar_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.DownloadSuc__DelegateSignature
struct UCommon_Avatar_BP_C_DownloadSuc__DelegateSignature_Params
{
};

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItemCallback__DelegateSignature
struct UCommon_Avatar_BP_C_OnClickItemCallback__DelegateSignature_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

