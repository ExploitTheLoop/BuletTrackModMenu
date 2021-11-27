#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClientNet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClientNet.GCloudNet
// 0x0264 (0x0280 - 0x001C)
class UGCloudNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x001C(0x01A8) MISSED OFFSET
	class UGCloudSDK*                                  _GCloudSDKInst;                                           // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartTickNetPackageDelegate;                              // 0x01C8(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x01D4(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.GCloudNet");
		return pStaticClass;
	}


	void SetTickNetMsgMaxTime(float MaxTime);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo);
	void OnTraceCallBack(int code, const struct FString& dataJson);
	void OnTConndAuthFailDelegate();
	void OnShareNotify(int Result, int Platform);
	void OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult);
	void OnReceiveDataNotify(int Result, TArray<unsigned char> Msg);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath);
	void OnMigrateNotify(int Result);
	void OnLaunchInfo(const struct FString& roominfo);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetWebviewActionNotify(const struct FString& webviewinfo);
	void OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo);
	void OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends);
	void OnGetCountryNoByIMSDK(int country);
	void OnGCloudStateChangeNotify(int State, int param1, int param2, int param3);
	void OnGCloudDisconnectedNotify(int Result);
	void OnGCloudConnectedNotify(int IsConnected, int nResult);
	void OnGameMasterEvent(const struct FString& EvenName, int Result);
	void OnBindIntlNotify(int bindEventID);
	void OnAccountLogoutNotify(int Result);
	void OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode);
	void OnAccountInitializeNotify(int Result);
	void OnAccessTokenRefreshedNotify(int Result);
};


// Class ClientNet.GCloudSDK
// 0x00BC (0x00D8 - 0x001C)
class UGCloudSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x001C(0x00B0) MISSED OFFSET
	bool                                               OpenBuglyLogReport;                                       // 0x00CC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                MaxBufferSize;                                            // 0x00D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDK");
		return pStaticClass;
	}


	static void UploadFile(const struct FString& _imgPath, int shareFileType);
	void ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel);
	static void ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink);
	void InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend);
	static struct FString GetUploadUrl();
	static int GetUploadStatus();
};


// Class ClientNet.GCloudSDKDelegates
// 0x00DC (0x00F8 - 0x001C)
class UGCloudSDKDelegates : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    ConnectStateChangedNotifyDelegate;                        // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DisconnectNotifyDelegate;                                 // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReceiveDataNotifyDelegate;                                // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountInitializeNotifyDelegate;                          // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLoginNotifyDelegate;                               // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccessTokenRefreshedNotifyDelegate;                       // 0x0064(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLogoutNotifyDelegate;                              // 0x0070(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShareNotifyDelegate;                                      // 0x007C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GroupNotifyDelegate;                                      // 0x0088(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QuickLoginNotifyDelegate;                                 // 0x0094(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeGenQRImgDelegate;                                   // 0x00A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeLaunchDelegate;                                     // 0x00AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WebviewNotifyDelegate;                                    // 0x00B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShortUrlNotifyDelegate;                                   // 0x00C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GameMasterEventDelegate;                                  // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestPermissionResultDelegate;                        // 0x00DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TConndAuthFailDelegate;                                   // 0x00E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDKDelegates");
		return pStaticClass;
	}

};


// Class ClientNet.IMSDKConfig
// 0x018C (0x01A8 - 0x001C)
class UIMSDKConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     IMSDK_SERVER_SDKAPI_RELEASE;                              // 0x0028(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_RELEASE;                              // 0x0034(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_RELEASE;                                // 0x0040(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_RELEASE;                         // 0x004C(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_RELEASE;                              // 0x0058(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_RELEASE;                                  // 0x0064(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_RELEASE;                                      // 0x0070(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_RELEASE;                         // 0x007C(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_TEST;                                 // 0x0088(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_TEST;                                 // 0x0094(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_TEST;                                   // 0x00A0(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_TEST;                            // 0x00AC(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_TEST;                                 // 0x00B8(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_TEST;                                     // 0x00C4(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_TEST;                                         // 0x00D0(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_TEST;                            // 0x00DC(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_RELEASE;                     // 0x00E8(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_RELEASE;                     // 0x00F4(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_RELEASE;                    // 0x0100(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_RELEASE;                      // 0x010C(0x000C) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_RELEASE;                                  // 0x0118(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHECK_PASSWORD;                     // 0x0124(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_PLATFORM_TYPE;                      // 0x0130(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHANNEL_ID;                         // 0x013C(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_TEST;                        // 0x0148(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_TEST;                        // 0x0154(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_TEST;                       // 0x0160(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_TEST;                         // 0x016C(0x000C) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_TEST;                                     // 0x0178(0x000C) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_USER_AGENT_STRING;                            // 0x0184(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_CHECK_POPUP_STATUS_ENABLE;                  // 0x0190(0x000C) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_VERIFY_OPT_SID_ENABLE;                      // 0x019C(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.IMSDKConfig");
		return pStaticClass;
	}

};


// Class ClientNet.IMSDKHelper
// 0x00E4 (0x0100 - 0x001C)
class UIMSDKHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	bool                                               isBindVK;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindTwitter;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindWeChat;                                             // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindLine;                                               // 0x0023(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindQQ;                                                 // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindApple;                                              // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindUnifiedAccount;                                     // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindHMS;                                                // 0x0027(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindDiscord;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                iBindFBRetCode;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iBindFBThirdRetCode;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     strBindFBUserName;                                        // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iBindGPGCRetCode;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iBindGPGCThirdRetCode;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     strBindGPGCUserName;                                      // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindTwitterUserName;                                   // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindWeChatUserName;                                    // 0x0060(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindVKUserName;                                        // 0x006C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindLineUserName;                                      // 0x0078(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindQQUserName;                                        // 0x0084(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindAppleUserName;                                     // 0x0090(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindUnifiedAccountUserName;                            // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindHMSUserName;                                       // 0x00A8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindDiscordUserName;                                   // 0x00B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iDeleteAccountRetCode;                                    // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iGenerateTransferCodeRetCode;                             // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratedTransferCode;                                    // 0x00C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iTransferRetCode;                                         // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iTransferThirdRetCode;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     inputTransferCode;                                        // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                iSwitchAccountFBRetCode;                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountFBThirdRetCode;                             // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountGPGCRetCode;                                // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountGPGCThirdRetCode;                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGCQuietSwitchAccount;                                    // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.IMSDKHelper");
		return pStaticClass;
	}


	void Transfer();
	void StartNewGame();
	void SetUserID(const struct FString& userId);
	void SetNoAuthOpenid(const struct FString& OpenID);
	void SetIMSDKEnv(int iEnv);
	void SetAdvertiseUnit(const struct FString& unitID);
	void SaveLastIMSDKChannelID(int channelId);
	void RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ReqBindInfo();
	void PlayAdvertise();
	void ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson);
	void LoadAdvertise();
	bool IsEqualCurLoginPlatform(const struct FString& strChannel);
	bool isBindFBOrGPGC();
	bool IsAlreadyBindWeChat();
	bool IsAlreadyBindVK();
	bool IsAlreadyBindUnifiedAccount();
	bool IsAlreadyBindTwitter();
	bool IsAlreadyBindQQ();
	bool IsAlreadyBindLine();
	bool IsAlreadyBindHMS();
	bool IsAlreadyBindGPGC();
	bool IsAlreadyBindGooglePlay();
	bool IsAlreadyBindGameCenter();
	bool IsAlreadyBindFB();
	bool IsAlreadyBindDiscord();
	bool IsAlreadyBindApple();
	void GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& extra);
	EIMSDKPlatformType GetPlatformType();
	struct FString GetOpenId();
	int GetLastIMSDKChannelID();
	bool GetIsAdvertiseVaild();
	bool GetIsAdvertiseLoadSuccess();
	bool GetIsAdvertiseLoad();
	static class UIMSDKHelper* GetInstance();
	int GetGCloudChannelID();
	struct FString GetCurLoginPlatform();
	struct FString GetChannelNickname();
	void GetBindInfo();
	void GetBindFBRetCode();
	int GetBindCount();
	void GenerateTransferCode();
	void CopyTransferCodeToClipboard();
	int ConvertStrToIMSDKChannel(const struct FString& strChannel);
	struct FString ConvertIMSDKChannelToStr(int imsdkChannel);
	void CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson);
	void BuglySetAppVersion(const struct FString& Version);
	void BuglyPutUserData(const struct FString& Key, const struct FString& Value);
	void BuglyPostException(int Category, const struct FString& Name, const struct FString& Reason, TArray<struct FString> stacks, TMap<struct FString, struct FString> extras, bool Exit);
	void BuglyLog(int Level, const struct FString& Tag, const struct FString& Log);
	void BindWeChat();
	void BindVK();
	void BindUnifiedAccount(const struct FString& InExtraJson);
	void BindTwitter();
	void BindQQ();
	void BindLine();
	void BindHMS();
	void BindGPGC();
	void BindFB();
	void BindDiscord();
	void BindApple();
};


// Class ClientNet.iTOPPrefs
// 0x00A8 (0x00C8 - 0x0020)
class UiTOPPrefs : public USaveGame
{
public:
	int                                                nGCloudChannelID;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                nLastIMSDKChannelID;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedFBForceLoginForRelationChainError;                   // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetFBForceLoginForRelationChainError;             // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedWXForceLoginForRelationChainError;                   // 0x0038(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetWXForceLoginForRelationChainError;             // 0x0040(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedVKForceLoginForRelationChainError;                   // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetVKForceLoginForRelationChainError;             // 0x0050(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedLineForceLoginForRelationChainError;                 // 0x0058(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetLineForceLoginForRelationChainError;           // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedQQForceLoginForRelationChainError;                   // 0x0068(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetQQForceLoginForRelationChainError;             // 0x0070(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedAppleForceLoginForRelationChainError;                // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetAppleForceLoginForRelationChainError;          // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedUnifiedAccountForceLoginForRelationChainError;       // 0x0088(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetUnifiedAccountForceLoginForRelationChainError; // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedHMSForceLoginForRelationChainError;                  // 0x0098(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetHMSForceLoginForRelationChainError;            // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedDiscordForceLoginForRelationChainError;              // 0x00A8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetDiscordForceLoginForRelationChainError;        // 0x00B0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedForceLoginForRelationChainError;                     // 0x00B8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetForceLoginForRelationChainError;               // 0x00C0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClientNet.iTOPPrefs");
		return pStaticClass;
	}

};


}

