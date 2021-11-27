#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClientNet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClientNet.GCloudNet.SetTickNetMsgMaxTime
struct UGCloudNet_SetTickNetMsgMaxTime_Params
{
	float                                              MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnWebviewNotify
struct UGCloudNet_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnUAAssistantNotify
struct UGCloudNet_OnUAAssistantNotify_Params
{
	struct FUAAssistantInfoWrapper                     uaAssistantInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnTraceCallBack
struct UGCloudNet_OnTraceCallBack_Params
{
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     dataJson;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnTConndAuthFailDelegate
struct UGCloudNet_OnTConndAuthFailDelegate_Params
{
};

// Function ClientNet.GCloudNet.OnShareNotify
struct UGCloudNet_OnShareNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnRequestPermissionsResult
struct UGCloudNet_OnRequestPermissionsResult_Params
{
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     permission;                                               // (Parm, ZeroConstructor)
	struct FString                                     grantResult;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnReceiveDataNotify
struct UGCloudNet_OnReceiveDataNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnQuickLoginNotify
struct UGCloudNet_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnQRCodeGenQRImg
struct UGCloudNet_OnQRCodeGenQRImg_Params
{
	int                                                Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnMigrateNotify
struct UGCloudNet_OnMigrateNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnLaunchInfo
struct UGCloudNet_OnLaunchInfo_Params
{
	struct FString                                     roominfo;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnGroupNotify
struct UGCloudNet_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnGetWebviewActionNotify
struct UGCloudNet_OnGetWebviewActionNotify_Params
{
	struct FString                                     webviewinfo;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnGetShortUrlNotify
struct UGCloudNet_OnGetShortUrlNotify_Params
{
	struct FShortURLInfoWrapper                        shorturlinfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnGetPlatformFriendsNotify
struct UGCloudNet_OnGetPlatformFriendsNotify_Params
{
	struct FPlatformFriendInfoMap                      platformFriends;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnGetCountryNoByIMSDK
struct UGCloudNet_OnGetCountryNoByIMSDK_Params
{
	int                                                country;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudStateChangeNotify
struct UGCloudNet_OnGCloudStateChangeNotify_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify
struct UGCloudNet_OnGCloudDisconnectedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudConnectedNotify
struct UGCloudNet_OnGCloudConnectedNotify_Params
{
	int                                                IsConnected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nResult;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGameMasterEvent
struct UGCloudNet_OnGameMasterEvent_Params
{
	struct FString                                     EvenName;                                                 // (Parm, ZeroConstructor)
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnBindIntlNotify
struct UGCloudNet_OnBindIntlNotify_Params
{
	int                                                bindEventID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccountLogoutNotify
struct UGCloudNet_OnAccountLogoutNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccountLoginNotify
struct UGCloudNet_OnAccountLoginNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     resultMsg;                                                // (Parm, ZeroConstructor)
	int                                                thirdRetCode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccountInitializeNotify
struct UGCloudNet_OnAccountInitializeNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify
struct UGCloudNet_OnAccessTokenRefreshedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudSDK.UploadFile
struct UGCloudSDK_UploadFile_Params
{
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	int                                                shareFileType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudSDK.ShareWithPhotoByChannel_Simple
struct UGCloudSDK_ShareWithPhotoByChannel_Simple_Params
{
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	int                                                _channel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudSDK.ShareFacebookLink
struct UGCloudSDK_ShareFacebookLink_Params
{
	struct FString                                     ftitle;                                                   // (Parm, ZeroConstructor)
	struct FString                                     fdesc;                                                    // (Parm, ZeroConstructor)
	struct FString                                     fsharelink;                                               // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt2
struct UGCloudSDK_InviteSystemOfflineFriendsExt2_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt
struct UGCloudSDK_InviteSystemOfflineFriendsExt_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudSDK.InviteFBFriendsUnregistered_Link
struct UGCloudSDK_InviteFBFriendsUnregistered_Link_Params
{
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _content;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _link;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _extend;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudSDK.GetUploadUrl
struct UGCloudSDK_GetUploadUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.GCloudSDK.GetUploadStatus
struct UGCloudSDK_GetUploadStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.Transfer
struct UIMSDKHelper_Transfer_Params
{
};

// Function ClientNet.IMSDKHelper.StartNewGame
struct UIMSDKHelper_StartNewGame_Params
{
};

// Function ClientNet.IMSDKHelper.SetUserID
struct UIMSDKHelper_SetUserID_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SetNoAuthOpenid
struct UIMSDKHelper_SetNoAuthOpenid_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SetIMSDKEnv
struct UIMSDKHelper_SetIMSDKEnv_Params
{
	int                                                iEnv;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.SetAdvertiseUnit
struct UIMSDKHelper_SetAdvertiseUnit_Params
{
	struct FString                                     unitID;                                                   // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID
struct UIMSDKHelper_SaveLastIMSDKChannelID_Params
{
	int                                                channelId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.RequestVerifyCode
struct UIMSDKHelper_RequestVerifyCode_Params
{
	struct FString                                     InPhoneOrEmail;                                           // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InUseForType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.ReqBindInfo
struct UIMSDKHelper_ReqBindInfo_Params
{
};

// Function ClientNet.IMSDKHelper.PlayAdvertise
struct UIMSDKHelper_PlayAdvertise_Params
{
};

// Function ClientNet.IMSDKHelper.ModifyAccountInfo
struct UIMSDKHelper_ModifyAccountInfo_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InVerifyType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InVerifyData;                                             // (Parm, ZeroConstructor)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InMondifyToAccount;                                       // (Parm, ZeroConstructor)
	int                                                InModifyAccountType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InModifyVerifyCode;                                       // (Parm, ZeroConstructor)
	struct FString                                     InModifyPhoneAreaCode;                                    // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.LoadAdvertise
struct UIMSDKHelper_LoadAdvertise_Params
{
};

// Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform
struct UIMSDKHelper_IsEqualCurLoginPlatform_Params
{
	struct FString                                     strChannel;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.isBindFBOrGPGC
struct UIMSDKHelper_isBindFBOrGPGC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindWeChat
struct UIMSDKHelper_IsAlreadyBindWeChat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindVK
struct UIMSDKHelper_IsAlreadyBindVK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount
struct UIMSDKHelper_IsAlreadyBindUnifiedAccount_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter
struct UIMSDKHelper_IsAlreadyBindTwitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindQQ
struct UIMSDKHelper_IsAlreadyBindQQ_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindLine
struct UIMSDKHelper_IsAlreadyBindLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindHMS
struct UIMSDKHelper_IsAlreadyBindHMS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC
struct UIMSDKHelper_IsAlreadyBindGPGC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay
struct UIMSDKHelper_IsAlreadyBindGooglePlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter
struct UIMSDKHelper_IsAlreadyBindGameCenter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindFB
struct UIMSDKHelper_IsAlreadyBindFB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord
struct UIMSDKHelper_IsAlreadyBindDiscord_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.IsAlreadyBindApple
struct UIMSDKHelper_IsAlreadyBindApple_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetShortUrl
struct UIMSDKHelper_GetShortUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Mask;                                                     // (Parm, ZeroConstructor)
	struct FString                                     extra;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.GetPlatformType
struct UIMSDKHelper_GetPlatformType_Params
{
	EIMSDKPlatformType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetOpenId
struct UIMSDKHelper_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID
struct UIMSDKHelper_GetLastIMSDKChannelID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetIsAdvertiseVaild
struct UIMSDKHelper_GetIsAdvertiseVaild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetIsAdvertiseLoadSuccess
struct UIMSDKHelper_GetIsAdvertiseLoadSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetIsAdvertiseLoad
struct UIMSDKHelper_GetIsAdvertiseLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetInstance
struct UIMSDKHelper_GetInstance_Params
{
	class UIMSDKHelper*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetGCloudChannelID
struct UIMSDKHelper_GetGCloudChannelID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GetCurLoginPlatform
struct UIMSDKHelper_GetCurLoginPlatform_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetChannelNickname
struct UIMSDKHelper_GetChannelNickname_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.GetBindInfo
struct UIMSDKHelper_GetBindInfo_Params
{
};

// Function ClientNet.IMSDKHelper.GetBindFBRetCode
struct UIMSDKHelper_GetBindFBRetCode_Params
{
};

// Function ClientNet.IMSDKHelper.GetBindCount
struct UIMSDKHelper_GetBindCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.GenerateTransferCode
struct UIMSDKHelper_GenerateTransferCode_Params
{
};

// Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard
struct UIMSDKHelper_CopyTransferCodeToClipboard_Params
{
};

// Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel
struct UIMSDKHelper_ConvertStrToIMSDKChannel_Params
{
	struct FString                                     strChannel;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr
struct UIMSDKHelper_ConvertIMSDKChannelToStr_Params
{
	int                                                imsdkChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.IMSDKHelper.CheckVerifyCodeValid
struct UIMSDKHelper_CheckVerifyCodeValid_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InVerifyCode;                                             // (Parm, ZeroConstructor)
	int                                                InCodeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.CheckIsRegisted
struct UIMSDKHelper_CheckIsRegisted_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPhoneAreaCode;                                          // (Parm, ZeroConstructor)
	struct FString                                     InLanuageCode;                                            // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.ChangePassword
struct UIMSDKHelper_ChangePassword_Params
{
	struct FString                                     InAccount;                                                // (Parm, ZeroConstructor)
	int                                                InAccountType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InVerifyCode;                                             // (Parm, ZeroConstructor)
	struct FString                                     InNewPassword;                                            // (Parm, ZeroConstructor)
	struct FString                                     InAreaCode;                                               // (Parm, ZeroConstructor)
	struct FString                                     InLangType;                                               // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BuglySetAppVersion
struct UIMSDKHelper_BuglySetAppVersion_Params
{
	struct FString                                     Version;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BuglyPutUserData
struct UIMSDKHelper_BuglyPutUserData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BuglyPostException
struct UIMSDKHelper_BuglyPostException_Params
{
	int                                                Category;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	TArray<struct FString>                             stacks;                                                   // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               extras;                                                   // (Parm, ZeroConstructor)
	bool                                               Exit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.IMSDKHelper.BuglyLog
struct UIMSDKHelper_BuglyLog_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Log;                                                      // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BindWeChat
struct UIMSDKHelper_BindWeChat_Params
{
};

// Function ClientNet.IMSDKHelper.BindVK
struct UIMSDKHelper_BindVK_Params
{
};

// Function ClientNet.IMSDKHelper.BindUnifiedAccount
struct UIMSDKHelper_BindUnifiedAccount_Params
{
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function ClientNet.IMSDKHelper.BindTwitter
struct UIMSDKHelper_BindTwitter_Params
{
};

// Function ClientNet.IMSDKHelper.BindQQ
struct UIMSDKHelper_BindQQ_Params
{
};

// Function ClientNet.IMSDKHelper.BindLine
struct UIMSDKHelper_BindLine_Params
{
};

// Function ClientNet.IMSDKHelper.BindHMS
struct UIMSDKHelper_BindHMS_Params
{
};

// Function ClientNet.IMSDKHelper.BindGPGC
struct UIMSDKHelper_BindGPGC_Params
{
};

// Function ClientNet.IMSDKHelper.BindFB
struct UIMSDKHelper_BindFB_Params
{
};

// Function ClientNet.IMSDKHelper.BindDiscord
struct UIMSDKHelper_BindDiscord_Params
{
};

// Function ClientNet.IMSDKHelper.BindApple
struct UIMSDKHelper_BindApple_Params
{
};

}

