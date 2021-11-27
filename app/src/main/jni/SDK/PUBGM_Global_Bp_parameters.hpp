#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Global_Bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Global_Bp.Global_Bp_C.InitFireGyroSensibilitySettingData
struct UGlobal_Bp_C_InitFireGyroSensibilitySettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.MapFromCBToESBH
struct UGlobal_Bp_C_MapFromCBToESBH_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitMirrorObjMapPickupSetting
struct UGlobal_Bp_C_InitMirrorObjMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitThrowObjMapPickupSetting
struct UGlobal_Bp_C_InitThrowObjMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitDrugMapPickupSetting
struct UGlobal_Bp_C_InitDrugMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitBasicSettingData
struct UGlobal_Bp_C_InitBasicSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitPickupSettingData_XT
struct UGlobal_Bp_C_InitPickupSettingData_XT_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitPickupSettingData
struct UGlobal_Bp_C_InitPickupSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.InitSensibilitySettingData
struct UGlobal_Bp_C_InitSensibilitySettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.SetGrenadeDefaultPickValue
struct UGlobal_Bp_C_SetGrenadeDefaultPickValue_Params
{
};

// Function Global_Bp.Global_Bp_C.InitMapFromCBToES
struct UGlobal_Bp_C_InitMapFromCBToES_Params
{
};

// Function Global_Bp.Global_Bp_C.MapFromCBToESGlobal
struct UGlobal_Bp_C_MapFromCBToESGlobal_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.MapFromCBToESJK
struct UGlobal_Bp_C_MapFromCBToESJK_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.MapFromCBToESVN
struct UGlobal_Bp_C_MapFromCBToESVN_Params
{
	class USettingConfig_C*                            SettingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.LoadSettingConfigFromSlot
struct UGlobal_Bp_C_LoadSettingConfigFromSlot_Params
{
};

// Function Global_Bp.Global_Bp_C.UpdateBigHandOperateRedPoint
struct UGlobal_Bp_C_UpdateBigHandOperateRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.SetPostProcessSettings
struct UGlobal_Bp_C_SetPostProcessSettings_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isReverse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isClosing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.DestroyLobbyCameras
struct UGlobal_Bp_C_DestroyLobbyCameras_Params
{
};

// Function Global_Bp.Global_Bp_C.GetShadowDistanceScale
struct UGlobal_Bp_C_GetShadowDistanceScale_Params
{
};

// Function Global_Bp.Global_Bp_C.SetShadowDistanceScale
struct UGlobal_Bp_C_SetShadowDistanceScale_Params
{
};

// Function Global_Bp.Global_Bp_C.ShowItemPreviewPress
struct UGlobal_Bp_C_ShowItemPreviewPress_Params
{
};

// Function Global_Bp.Global_Bp_C.ShowItemPreviewClick
struct UGlobal_Bp_C_ShowItemPreviewClick_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.HideLobbyCamera
struct UGlobal_Bp_C_HideLobbyCamera_Params
{
};

// Function Global_Bp.Global_Bp_C.ShowLobbyCamera
struct UGlobal_Bp_C_ShowLobbyCamera_Params
{
};

// Function Global_Bp.Global_Bp_C.TryLoadAdvertise
struct UGlobal_Bp_C_TryLoadAdvertise_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveAnniversaryNeedShow
struct UGlobal_Bp_C_SaveAnniversaryNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.GetAnniversaryNeedShow
struct UGlobal_Bp_C_GetAnniversaryNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveResidentEvilNeedShow
struct UGlobal_Bp_C_SaveResidentEvilNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.GetResidentEvilNeedShow
struct UGlobal_Bp_C_GetResidentEvilNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveLobbySkinID
struct UGlobal_Bp_C_SaveLobbySkinID_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveChristmasNeedShow
struct UGlobal_Bp_C_SaveChristmasNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.GetChristmasNeedShow
struct UGlobal_Bp_C_GetChristmasNeedShow_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveRechargePayPos
struct UGlobal_Bp_C_SaveRechargePayPos_Params
{
};

// Function Global_Bp.Global_Bp_C.GetRechargePayPos
struct UGlobal_Bp_C_GetRechargePayPos_Params
{
};

// Function Global_Bp.Global_Bp_C.SaveMallShow10Animation
struct UGlobal_Bp_C_SaveMallShow10Animation_Params
{
};

// Function Global_Bp.Global_Bp_C.GetMallShow10Animation
struct UGlobal_Bp_C_GetMallShow10Animation_Params
{
};

// Function Global_Bp.Global_Bp_C.GetLocalizeStringWithNum
struct UGlobal_Bp_C_GetLocalizeStringWithNum_Params
{
};

// Function Global_Bp.Global_Bp_C.GetLobbySkinIDAndBgmID
struct UGlobal_Bp_C_GetLobbySkinIDAndBgmID_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchLobbyMeshBg
struct UGlobal_Bp_C_SwitchLobbyMeshBg_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchWarzoneCamera
struct UGlobal_Bp_C_SwitchWarzoneCamera_Params
{
};

// Function Global_Bp.Global_Bp_C.LoadAdvertise
struct UGlobal_Bp_C_LoadAdvertise_Params
{
};

// Function Global_Bp.Global_Bp_C.PlayAdvertise
struct UGlobal_Bp_C_PlayAdvertise_Params
{
};

// Function Global_Bp.Global_Bp_C.SetGlobalConfigData
struct UGlobal_Bp_C_SetGlobalConfigData_Params
{
};

// Function Global_Bp.Global_Bp_C.GetGlobalConfigData
struct UGlobal_Bp_C_GetGlobalConfigData_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchSceneCameraByIndexLua
struct UGlobal_Bp_C_SwitchSceneCameraByIndexLua_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchCameraFarImmediate
struct UGlobal_Bp_C_SwitchCameraFarImmediate_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchWarzoneBG
struct UGlobal_Bp_C_SwitchWarzoneBG_Params
{
};

// Function Global_Bp.Global_Bp_C.GetDragDropWidget
struct UGlobal_Bp_C_GetDragDropWidget_Params
{
	int                                                dragDropType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetRankTexture
struct UGlobal_Bp_C_GetRankTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.SetCorpsShopRedPoint
struct UGlobal_Bp_C_SetCorpsShopRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.GetCorpsIconTexture
struct UGlobal_Bp_C_GetCorpsIconTexture_Params
{
	int                                                IconID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetFrameTexture
struct UGlobal_Bp_C_GetFrameTexture_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.EnterCreateRoleDelay
struct UGlobal_Bp_C_EnterCreateRoleDelay_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterCreateRole
struct UGlobal_Bp_C_EnterCreateRole_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterFightStopMusic
struct UGlobal_Bp_C_EnterFightStopMusic_Params
{
};

// Function Global_Bp.Global_Bp_C.EventAndroidQuitGame
struct UGlobal_Bp_C_EventAndroidQuitGame_Params
{
};

// Function Global_Bp.Global_Bp_C.QuitGame
struct UGlobal_Bp_C_QuitGame_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterLobby
struct UGlobal_Bp_C_EnterLobby_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterLogin
struct UGlobal_Bp_C_EnterLogin_Params
{
};

// Function Global_Bp.Global_Bp_C.Construct
struct UGlobal_Bp_C_Construct_Params
{
};

// Function Global_Bp.Global_Bp_C.LockLobbyMaxFps
struct UGlobal_Bp_C_LockLobbyMaxFps_Params
{
};

// Function Global_Bp.Global_Bp_C.RecoverMaxFps
struct UGlobal_Bp_C_RecoverMaxFps_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchLobbySkin
struct UGlobal_Bp_C_SwitchLobbySkin_Params
{
};

// Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp
struct UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

