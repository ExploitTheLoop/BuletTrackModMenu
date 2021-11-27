#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlayerPrefs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPrefs.PlayerPrefs_C.SetPopupPolicyVersion
struct UPlayerPrefs_C_SetPopupPolicyVersion_Params
{
	int                                                PolicyVersion;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetGuaranteeFlag
struct UPlayerPrefs_C_SetGuaranteeFlag_Params
{
	bool                                               clicked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetGuaranteeClickFlag
struct UPlayerPrefs_C_GetGuaranteeClickFlag_Params
{
	bool                                               clicked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetDecomposeIndexTriggerTime
struct UPlayerPrefs_C_GetDecomposeIndexTriggerTime_Params
{
	int                                                DecomposeTriggerTim;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetDecomposeIndexTriggerTime
struct UPlayerPrefs_C_SetDecomposeIndexTriggerTime_Params
{
	int                                                TimeStamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAnniversary
struct UPlayerPrefs_C_SetClickTimeAnniversary_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAnniversary
struct UPlayerPrefs_C_GetClickTimeAnniversary_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetCliickVehicleAcitivtyGuideExchange
struct UPlayerPrefs_C_GetCliickVehicleAcitivtyGuideExchange_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hasClick;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCliickVehicleAcitivtyGuideExchange
struct UPlayerPrefs_C_SetCliickVehicleAcitivtyGuideExchange_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isClick;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeIceLucky
struct UPlayerPrefs_C_SetClickTimeIceLucky_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeIceLucky
struct UPlayerPrefs_C_GetClickTimeIceLucky_Params
{
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetIsVNGAdult
struct UPlayerPrefs_C_SetIsVNGAdult_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.GetIsFirstTimeShowPrime
struct UPlayerPrefs_C_GetIsFirstTimeShowPrime_Params
{
	bool                                               IsfirstTimeOpenPrime;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetIsFirstTimeShowPrime
struct UPlayerPrefs_C_SetIsFirstTimeShowPrime_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickHalloweenExchange
struct UPlayerPrefs_C_SetHasClickHalloweenExchange_Params
{
	bool                                               isClick;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickHalloweenExchange
struct UPlayerPrefs_C_GetHasClickHalloweenExchange_Params
{
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hasClick;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeHalloweenVehicle
struct UPlayerPrefs_C_SetClickTimeHalloweenVehicle_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeHalloweenVehicle
struct UPlayerPrefs_C_GetClickTimeHalloweenVehicle_Params
{
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetFaceInfoClickedIDAndTime
struct UPlayerPrefs_C_GetFaceInfoClickedIDAndTime_Params
{
	struct FString                                     Faceid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     TimeStamp;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetFaceInfoClickedIDAndTime
struct UPlayerPrefs_C_SetFaceInfoClickedIDAndTime_Params
{
	struct FString                                     Faceid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.GetCursorFaceInfoID
struct UPlayerPrefs_C_GetCursorFaceInfoID_Params
{
	int                                                CursorFaceInfoID;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCursorFaceInfoID
struct UPlayerPrefs_C_SetCursorFaceInfoID_Params
{
	int                                                LastFace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickInviteTeamAct
struct UPlayerPrefs_C_SetHasClickInviteTeamAct_Params
{
	bool                                               isClick;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickInviteTeamAct
struct UPlayerPrefs_C_GetHasClickInviteTeamAct_Params
{
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hasClick;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickUPassAct
struct UPlayerPrefs_C_GetHasClickUPassAct_Params
{
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hasClick;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickUPassAct
struct UPlayerPrefs_C_SetHasClickUPassAct_Params
{
	bool                                               isClick;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UUID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetShowSwitchSecondLanguageNextTime
struct UPlayerPrefs_C_SetShowSwitchSecondLanguageNextTime_Params
{
	struct FDateTime                                   DateTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPrefs.PlayerPrefs_C.GetShowSwitchSecondLanguageNextTime
struct UPlayerPrefs_C_GetShowSwitchSecondLanguageNextTime_Params
{
	struct FDateTime                                   DateTime;                                                 // (Parm, OutParm)
};

// Function PlayerPrefs.PlayerPrefs_C.GetLoginFrequency
struct UPlayerPrefs_C_GetLoginFrequency_Params
{
	int                                                loginfreq;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetLoginFrequency
struct UPlayerPrefs_C_SetLoginFrequency_Params
{
	int                                                CurrentDay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.GetAirDropTime
struct UPlayerPrefs_C_GetAirDropTime_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                outAirDropTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetAirDropTime
struct UPlayerPrefs_C_SetAirDropTime_Params
{
	int                                                InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetMystery2LastTime
struct UPlayerPrefs_C_SetMystery2LastTime_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetStoreGiftBoxList
struct UPlayerPrefs_C_SetStoreGiftBoxList_Params
{
	TArray<int>                                        BoxList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAboutBind
struct UPlayerPrefs_C_GetClickTimeAboutBind_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                TimeNotBind;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TimeBind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAboutBind
struct UPlayerPrefs_C_SetClickTimeAboutBind_Params
{
	int                                                TimeNotBind;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimeBind;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.IsEqualCurID
struct UPlayerPrefs_C_IsEqualCurID_Params
{
	int                                                ids;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetNewsIds
struct UPlayerPrefs_C_SetNewsIds_Params
{
	int                                                ids;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetMallSeeDict
struct UPlayerPrefs_C_SetMallSeeDict_Params
{
	TMap<int, bool>                                    Dict;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetStoreBosList
struct UPlayerPrefs_C_SetStoreBosList_Params
{
	TArray<int>                                        BoxList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint
struct UPlayerPrefs_C_SetCorpsShopRedPoint_Params
{
	int                                                coprsLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetFirstEnterMall
struct UPlayerPrefs_C_SetFirstEnterMall_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetMysteryLastTime
struct UPlayerPrefs_C_SetMysteryLastTime_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.RejectUserAgreement
struct UPlayerPrefs_C_RejectUserAgreement_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.AcceptUserAgreement
struct UPlayerPrefs_C_AcceptUserAgreement_Params
{
	int                                                newVersion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.ServerListClick
struct UPlayerPrefs_C_ServerListClick_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation
struct UPlayerPrefs_C_HasCloseLocation_Params
{
	bool                                               UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation
struct UPlayerPrefs_C_SetCloseLocation_Params
{
	bool                                               CloseLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips
struct UPlayerPrefs_C_HasNearByNewTips_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead
struct UPlayerPrefs_C_SetNearByNewTipsRead_Params
{
	struct FString                                     UId;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint
struct UPlayerPrefs_C_SetYXXYRedPoint_Params
{
	int                                                isRed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.AcceptGuestWarning
struct UPlayerPrefs_C_AcceptGuestWarning_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.RejectPolicy
struct UPlayerPrefs_C_RejectPolicy_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.AcceptPolicy
struct UPlayerPrefs_C_AcceptPolicy_Params
{
	int                                                newVersion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby
struct UPlayerPrefs_C_SetFirstInLobby_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetTime
struct UPlayerPrefs_C_SetTime_Params
{
	int                                                arg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.ClearCount
struct UPlayerPrefs_C_ClearCount_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetCount
struct UPlayerPrefs_C_SetCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.LoadData
struct UPlayerPrefs_C_LoadData_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SaveData
struct UPlayerPrefs_C_SaveData_Params
{
	bool                                               SaveDataState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

