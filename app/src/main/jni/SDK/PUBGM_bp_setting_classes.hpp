#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x0248 (0x0558 - 0x0310)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SettingMaxLoginTypeNum;                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr2;                                               // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DiyLimitLevel;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_SettingLoginTypeOrderList;                       // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexOperate;                                   // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSettingPage;                                        // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ProfiledScreenValue;                                   // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindExtType;                                           // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOBS;                                       // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GradeSeparation_UrlStr;                                // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingLobbyBgmID;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindThirdRetCode;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginChannel;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelpshiftRequestCD;                                       // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Friend_Switch;                          // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_UI;                                 // 0x0365(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_New_SDK_Switch;                                // 0x0366(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0367(0x0001) MISSED OFFSET
	int                                                BP_BindChannel;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Name;                                   // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingPlayerLevel;                                    // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInLobby;                                             // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	int                                                BP_Setting_IMSDKTipMsgBtnOKEvent;                         // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SettingSensitivity               BP_STRUCT_SettingSensitivity;                             // 0x0384(0x00B8) (Edit, BlueprintVisible)
	int                                                BP_SettingIndexSound;                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MidAlien;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexDownload;                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingBattleWatchingDetailFlag;                       // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPickup;                                    // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MaxAlien;                                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingFirstLoginStrChannel;                           // 0x0454(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_JP_Mirrativ_Show;                                      // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInGame;                                              // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WonderfulReplaySwitchIsOpen;                           // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanModify_QualityFPS;                           // 0x0463(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr3;                                               // 0x0464(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexInfoBinding;                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_UnbindPlatformName;                            // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexMirrativ;                                  // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_JK;                                   // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowEscapeNotice;                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsWatchingOpen;                                 // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x048A(0x0002) MISSED OFFSET
	int                                                BP_SettingCurrentOpenPage;                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexLanguage;                                  // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Is_In_Debug_Mode;                                      // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Season_FriendDataPrivacy;                              // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_KRJPDelAccountSwitch;                                  // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0497(0x0001) MISSED OFFSET
	int                                                BP_SettingShowWatchingFlag;                               // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_GLOBAL;                               // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOW_XGPUSH_OFF_JK;                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOW_XGPUSH_OFF_GLOBAL;                                // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Stranger_Switch;                        // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingLobbyIsShowChristmas;                           // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04AA(0x0002) MISSED OFFSET
	int                                                BP_SettingIndexEffect;                                    // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showRoleInSending;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Battle_Show;                        // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	int                                                BP_Setting_UploadType;                                    // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Unbind_Days;                                   // 0x04BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SettingSecondLoginStrChannel;                          // 0x04C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexAimingMirrior;                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPicture;                                   // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexAccount;                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKNotifyEvent;                              // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingFresherType;                                    // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindRetCode;                                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingDetailOpen;                       // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowRole;                                    // 0x04ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	int                                                BP_XGPUSH_OFF_TIP_CODE;                                   // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_Unbind_Channel;                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Set_Time;                               // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_BasicSettingForbidFollowJump;                          // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	int                                                BP_ShapedScreenCurrentSelectType;                         // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Record_Show;                        // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	int                                                BP_krjp_del_account_left_time;                            // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexSensibility;                               // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ProfiledScreenCurrentSelectValue;                      // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingSelectedPage;                                   // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOther;                                     // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingLobbySkinID;                                    // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Unbind_IsShow;                                 // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexVehicle;                                   // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CanShowOtherTab;                                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	struct FString                                     BP_SettingPlayerUID;                                      // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HelpshiftLastRequestTime;                                 // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0545(0x0003) MISSED OFFSET
	int                                                BP_ShapedScreenType;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsSensitivitySavedInCloud;                             // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexBasic;                                     // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0554(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return pStaticClass;
	}


	void EventHelpshiftShowConversation_NoFetch();
	void EventHelpshiftShowConversation();
	void EventConfirmPickUpResetMsg_NoFetch();
	void EventConfirmPickUpResetMsg();
	void EventHideAllSettingPanel_NoFetch();
	void EventHideAllSettingPanel();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingSendCanShowWatching_NoFetch();
	void EventSettingSendCanShowWatching();
	void EventSettingSendCanShowRole_NoFetch();
	void EventSettingSendCanShowRole();
	void EventSettingShowCurrentTicket_NoFetch();
	void EventSettingShowCurrentTicket();
	void EventHideWaitingUI_NoFetch();
	void EventHideWaitingUI();
	void EventSetBindFB_Push_NoFetch();
	void EventSetBindFB_Push();
	void EventSettingPanelUnRegistIMSDKEvents_NoFetch();
	void EventSettingPanelUnRegistIMSDKEvents();
	void EventHideAllNoticeFromObserveToLobby_NoFetch();
	void EventHideAllNoticeFromObserveToLobby();
	void EventShowNotInstallVkMsg_NoFetch();
	void EventShowNotInstallVkMsg();
	void EventSettingPanelEUGDPR_NoFetch();
	void EventSettingPanelEUGDPR();
	void EventInformPickUpNumZero_NoFetch();
	void EventInformPickUpNumZero();
	void EventInformAutoPickUpClosed_NoFetch();
	void EventInformAutoPickUpClosed();
	void EventChangeShapedScreenConfirm_NoFetch();
	void EventChangeShapedScreenConfirm();
	void EventShow3dTouchNotSupportQuickThrow_NoFetch();
	void EventShow3dTouchNotSupportQuickThrow();
	void EventSettingPanelParentAllow_NoFetch();
	void EventSettingPanelParentAllow();
	void EventRefreshSettingParameter_Push_NoFetch();
	void EventRefreshSettingParameter_Push();
	void EventShowSetRegion_NoFetch();
	void EventShowSetRegion();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventShowNoticeFromObserveToLobby_NoFetch();
	void EventShowNoticeFromObserveToLobby();
	void EventRefreshSettingRedPoint_NoFetch();
	void EventRefreshSettingRedPoint();
	void EventBasicSettingAutoFollowJumpSwitch_NoFetch();
	void EventBasicSettingAutoFollowJumpSwitch();
	void EventSettingPanelShowConnectingUI_NoFetch();
	void EventSettingPanelShowConnectingUI();
	void EventSetBPQualitySettingByLocal_NoFetch();
	void EventSetBPQualitySettingByLocal();
	void EventResetShapedScreen_NoFetch();
	void EventResetShapedScreen();
	void EventGetVLinkOpenStatus_NoFetch();
	void EventGetVLinkOpenStatus();
	void EventSettingShowUnbind_NoFetch();
	void EventSettingShowUnbind();
	void EventRequestSaveSensitivitySettingToCloud_Push_NoFetch();
	void EventRequestSaveSensitivitySettingToCloud_Push();
	void EventSettingPanelDelectAccount_NoFetch();
	void EventSettingPanelDelectAccount();
	void EventSendLanguageSettingToServer_NoFetch();
	void EventSendLanguageSettingToServer();
	void EventSettingMirrorRedPointChanged_NoFetch();
	void EventSettingMirrorRedPointChanged();
	void EventSettingShowUIElemUIVehicle_NoFetch();
	void EventSettingShowUIElemUIVehicle();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventSettingVehicleRedPointChanged_NoFetch();
	void EventSettingVehicleRedPointChanged();
	void EventSettingPickUpRedPointChanged_NoFetch();
	void EventSettingPickUpRedPointChanged();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventTryToCloseLBSPower_NoFetch();
	void EventTryToCloseLBSPower();
	void EventNotOpenLBSPower_NoFetch();
	void EventNotOpenLBSPower();
	void EventIsOpenLBSWarZone_NoFetch();
	void EventIsOpenLBSWarZone();
	void EventLBSChangeZone_NoFetch();
	void EventLBSChangeZone();
	void EventSettingPanelShowTipMsgBindSuccess_NoFetch();
	void EventSettingPanelShowTipMsgBindSuccess();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventSettingNoticeAntiNotSupport_NoFetch();
	void EventSettingNoticeAntiNotSupport();
	void EventSendMsgChatsPower_NoFetch();
	void EventSendMsgChatsPower();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventCannotSettingUnknowPassSubSwitch_NoFetch();
	void EventCannotSettingUnknowPassSubSwitch();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventSettingAimingMirrorUIShowTips_NoFetch();
	void EventSettingAimingMirrorUIShowTips();
	void EventSettingSensibilityRedPointChanged_NoFetch();
	void EventSettingSensibilityRedPointChanged();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventSettingSendSeasonFriendPrivacy_NoFetch();
	void EventSettingSendSeasonFriendPrivacy();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventSettingCannotSetGyroscope_Push_NoFetch();
	void EventSettingCannotSetGyroscope_Push();
	void EventSettingSendCanShowBattleWatchingDetail_NoFetch();
	void EventSettingSendCanShowBattleWatchingDetail();
	void EventShowOBBackToLobbyNotice_NoFetch();
	void EventShowOBBackToLobbyNotice();
	void EventChangeQualityAndFpsConfirm_NoFetch();
	void EventChangeQualityAndFpsConfirm();
	void EventSettingNoticeLeftRightShootNotOpen_NoFetch();
	void EventSettingNoticeLeftRightShootNotOpen();
	void EventShowConfirmUsingCloud_NoFetch();
	void EventShowConfirmUsingCloud();
	void EventShowNoticeFromWatchingBackToLobby_NoFetch();
	void EventShowNoticeFromWatchingBackToLobby();
	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventClickSocialFriendSwitch_NoFetch();
	void EventClickSocialFriendSwitch();
	void EventShowUserAgreement_NoFetch();
	void EventShowUserAgreement();
	void EventSettingPanelShowTipMsgBindFail_NoFetch();
	void EventSettingPanelShowTipMsgBindFail();
	void EventSendMsgNearsPower_NoFetch();
	void EventSendMsgNearsPower();
	void EventSaveShapedScreenToLoacl_NoFetch();
	void EventSaveShapedScreenToLoacl();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventSettingNoticeGyroNotOpen_NoFetch();
	void EventSettingNoticeGyroNotOpen();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventRequestSensitivitySetting_NoFetch();
	void EventRequestSensitivitySetting();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOpenVlinkSDK_NoFetch();
	void EventOpenVlinkSDK();
	void EventShowInturrptGameNotice_NoFetch();
	void EventShowInturrptGameNotice();
	void EventSettingWarningLvSixFps_NoFetch();
	void EventSettingWarningLvSixFps();
	void EventClickSocialStrangerSwitch_NoFetch();
	void EventClickSocialStrangerSwitch();
	void EventSettingSwitchToLowSoundEffect_NoFetch();
	void EventSettingSwitchToLowSoundEffect();
	void EventShowNotInstallWechatMsg_NoFetch();
	void EventShowNotInstallWechatMsg();
	void EventSettingSwitchToHighSoundEffect_NoFetch();
	void EventSettingSwitchToHighSoundEffect();
	void EventUpdateLayoutName_NoFetch();
	void EventUpdateLayoutName();
	void EventOnClickUnbindError_NoFetch();
	void EventOnClickUnbindError();
	void EventSettingSendUnknowPassSwitch_NoFetch();
	void EventSettingSendUnknowPassSwitch();
	void EventIsOpenLBSNear_NoFetch();
	void EventIsOpenLBSNear();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventSettingCheckInputCloudName_NoFetch();
	void EventSettingCheckInputCloudName();
	void EventSettingNoticeShoulderShootNotOpen_NoFetch();
	void EventSettingNoticeShoulderShootNotOpen();
	void EventSettingBasicRedPointChanged_NoFetch();
	void EventSettingBasicRedPointChanged();
	void EventHelpshiftSetRedPoints_NoFetch();
	void EventHelpshiftSetRedPoints();
	void EventShowWaitingUI_NoFetch();
	void EventShowWaitingUI();
	void EventShowOrHideSettingAccountTips_NoFetch();
	void EventShowOrHideSettingAccountTips();
	void EventSettingShowUIElemUI_NoFetch();
	void EventSettingShowUIElemUI();
	void EventShowSelectedPage_NoFetch();
	void EventShowSelectedPage();
	void EventSendMsgWarZonePower_NoFetch();
	void EventSendMsgWarZonePower();
	void EventSettingPanelHideConnectingUI_NoFetch();
	void EventSettingPanelHideConnectingUI();
	void EventShowXGPushOpenTip_NoFetch();
	void EventShowXGPushOpenTip();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventSettingSetLobbySkinIDToNotify_NoFetch();
	void EventSettingSetLobbySkinIDToNotify();
	void EventGCLoginTimeOut_NoFetch();
	void EventGCLoginTimeOut();
	void EventSettingPanelAskBindAccountMsgBox_NoFetch();
	void EventSettingPanelAskBindAccountMsgBox();
	void EventShowLogOutNoticceForSettingLanguage_NoFetch();
	void EventShowLogOutNoticceForSettingLanguage();
	void EventSettingPanelRegistIMSDKEvents_NoFetch();
	void EventSettingPanelRegistIMSDKEvents();
	void EventIsOpenLBSChat_NoFetch();
	void EventIsOpenLBSChat();
	void EventHideLastOpennedPage_NoFetch();
	void EventHideLastOpennedPage();
	void EventSettingPanelPrivicy_NoFetch();
	void EventSettingPanelPrivicy();
	void EventChatRequestPrivacyInSetting_NoFetch();
	void EventChatRequestPrivacyInSetting();
	void EventSettingSwitchToSuperHighSoundEffect_NoFetch();
	void EventSettingSwitchToSuperHighSoundEffect();
	void EventHelpshiftClearRedPoints_NoFetch();
	void EventHelpshiftClearRedPoints();
	void EventSettingGetLoginTypeList_NoFetch();
	void EventSettingGetLoginTypeList();
	void EventStartIMSDKBindTimer_NoFetch();
	void EventStartIMSDKBindTimer();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void EventOnClickUnbind_NoFetch();
	void EventOnClickUnbind();
	void EventLogOutForSettingLanguage_NoFetch();
	void EventLogOutForSettingLanguage();
	void Event_SprHghQlty_NotInLobby_NoFetch();
	void Event_SprHghQlty_NotInLobby();
	void EventSettingPanelAskAlreadyBindFB_NoFetch();
	void EventSettingPanelAskAlreadyBindFB();
	void EventIsHideLBSPanel_NoFetch();
	void EventIsHideLBSPanel();
	void EventShowMobileShakeNoSupport_NoFetch();
	void EventShowMobileShakeNoSupport();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventShowSettingAccount_NoFetch();
	void EventShowSettingAccount();
	void EventUploadSettingConfigToCloud_NoFetch();
	void EventUploadSettingConfigToCloud();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void UserConstructionScript();
};


}

