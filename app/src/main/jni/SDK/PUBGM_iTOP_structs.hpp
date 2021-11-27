#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct iTOP.iTOPResult
// 0x002C
struct FiTOPResult
{
	int                                                imsdkRetCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     imsdkRetMsg;                                              // 0x0004(0x000C) (ZeroConstructor)
	int                                                thirdRetCode;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     thirdRetMsg;                                              // 0x0014(0x000C) (ZeroConstructor)
	struct FString                                     retExtraJson;                                             // 0x0020(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.IMSDKUnifiedAccountResult
// 0x0078 (0x00A4 - 0x002C)
struct FIMSDKUnifiedAccountResult : public FiTOPResult
{
	int                                                Ret;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     retMsg;                                                   // 0x0030(0x000C) (ZeroConstructor)
	struct FString                                     accountToken;                                             // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     UId;                                                      // 0x0048(0x000C) (ZeroConstructor)
	struct FString                                     ExpireTime;                                               // 0x0054(0x000C) (ZeroConstructor)
	int                                                verifyCodeExpire;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isRegister;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isSetPwd;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isReceiveEmail;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     emailAccount;                                             // 0x0070(0x000C) (ZeroConstructor)
	struct FString                                     phoneAccount;                                             // 0x007C(0x000C) (ZeroConstructor)
	struct FString                                     phoneExtra;                                               // 0x0088(0x000C) (ZeroConstructor)
	int                                                accountType;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     phoneArea;                                                // 0x0098(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.IMSDKShortUrlResult
// 0x000C (0x0038 - 0x002C)
struct FIMSDKShortUrlResult : public FiTOPResult
{
	struct FString                                     ShortUrl;                                                 // 0x002C(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPFriendInfo
// 0x0058
struct FiTOPFriendInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     channelUserId;                                            // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     channelId;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0024(0x000C) (ZeroConstructor)
	int                                                gender;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pictureUrl;                                               // 0x0034(0x000C) (ZeroConstructor)
	struct FString                                     email;                                                    // 0x0040(0x000C) (ZeroConstructor)
	struct FString                                     phone;                                                    // 0x004C(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPFriendResult
// 0x000C (0x0038 - 0x002C)
struct FiTOPFriendResult : public FiTOPResult
{
	TArray<struct FiTOPFriendInfo>                     sameGameFriendList;                                       // 0x002C(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPLoginResult
// 0x0084 (0x00B0 - 0x002C)
struct FiTOPLoginResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  // 0x002C(0x000C) (ZeroConstructor)
	int                                                channelId;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     channelToken;                                             // 0x003C(0x000C) (ZeroConstructor)
	int                                                channelTokenExpire;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     channelUserId;                                            // 0x004C(0x000C) (ZeroConstructor)
	int                                                GameID;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Guid;                                                     // 0x005C(0x000C) (ZeroConstructor)
	struct FString                                     guidUserBirthday;                                         // 0x0068(0x000C) (ZeroConstructor)
	struct FString                                     guidUserNick;                                             // 0x0074(0x000C) (ZeroConstructor)
	struct FString                                     guidUserPortrait;                                         // 0x0080(0x000C) (ZeroConstructor)
	int                                                guidUserSex;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                innerTokenExpire;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isFirstLogin;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     innerToken;                                               // 0x0098(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x00A4(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPChannelInfo
// 0x0020 (0x004C - 0x002C)
struct FiTOPChannelInfo : public FiTOPResult
{
	int                                                channelId;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pictureUrl;                                               // 0x0034(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0040(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPBindResult
// 0x000C (0x00BC - 0x00B0)
struct FiTOPBindResult : public FiTOPLoginResult
{
	TArray<struct FiTOPChannelInfo>                    bindInfoList;                                             // 0x00B0(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticePicInfo
// 0x0044
struct FiTOPNoticePicInfo
{
	int                                                noticeId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                screenDir;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PicUrl;                                                   // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     picHash;                                                  // 0x0014(0x000C) (ZeroConstructor)
	struct FString                                     PicTitle;                                                 // 0x0020(0x000C) (ZeroConstructor)
	struct FString                                     picSize;                                                  // 0x002C(0x000C) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0038(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticeInfo
// 0x009C
struct FiTOPNoticeInfo
{
	struct FString                                     stateCode;                                                // 0x0000(0x000C) (ZeroConstructor)
	int                                                noticeId;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppID;                                                    // 0x0010(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x001C(0x000C) (ZeroConstructor)
	struct FString                                     noticeUrl;                                                // 0x0028(0x000C) (ZeroConstructor)
	int                                                noticeScene;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeUpdateTime;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeEndTime;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeStartTime;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     screenName;                                               // 0x0044(0x000C) (ZeroConstructor)
	struct FString                                     noticeLanguage;                                           // 0x0050(0x000C) (ZeroConstructor)
	int                                                noticeContentType;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     noticeTitle;                                              // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     noticeContent;                                            // 0x006C(0x000C) (ZeroConstructor)
	TArray<struct FiTOPNoticePicInfo>                  noticePics;                                               // 0x0078(0x000C) (ZeroConstructor)
	struct FString                                     noticeContentWebUrl;                                      // 0x0084(0x000C) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0090(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticeResult
// 0x0010 (0x003C - 0x002C)
struct FiTOPNoticeResult : public FiTOPResult
{
	TArray<struct FiTOPNoticeInfo>                     noticesList;                                              // 0x002C(0x000C) (ZeroConstructor)
	int                                                noticesNum;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct iTOP.iTOPAuthSNSInfo
// 0x002C
struct FiTOPAuthSNSInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x000C) (ZeroConstructor)
	int                                                channelId;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0010(0x000C) (ZeroConstructor)
	int                                                gender;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pictureUrl;                                               // 0x0020(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPAuthMigrateResult
// 0x001C (0x0048 - 0x002C)
struct FiTOPAuthMigrateResult : public FiTOPResult
{
	struct FString                                     migrateCode;                                              // 0x002C(0x000C) (ZeroConstructor)
	int                                                validTime;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              // 0x003C(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPGPSInfoResult
// 0x0034 (0x0060 - 0x002C)
struct FiTOPGPSInfoResult : public FiTOPResult
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	double                                             longitude;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             latitude;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             horizontalAccuracyMeters;                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             verticalAccuracyMeters;                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     locationProvider;                                         // 0x0050(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct iTOP.iTOPLbsResult
// 0x0088 (0x00B4 - 0x002C)
struct FiTOPLbsResult : public FiTOPResult
{
	int                                                channelId;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     cityName;                                                 // 0x0030(0x000C) (ZeroConstructor)
	int                                                cityNumber;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     countryName;                                              // 0x0040(0x000C) (ZeroConstructor)
	int                                                countryNumber;                                            // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GameID;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Guid;                                                     // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     guidToken;                                                // 0x0060(0x000C) (ZeroConstructor)
	int                                                guidTokenExpire;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     guidUserBirthday;                                         // 0x0070(0x000C) (ZeroConstructor)
	struct FString                                     guidUserNick;                                             // 0x007C(0x000C) (ZeroConstructor)
	struct FString                                     guidUserPortrait;                                         // 0x0088(0x000C) (ZeroConstructor)
	int                                                guidUserSex;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     provinceName;                                             // 0x0098(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x00A4(0x000C) (ZeroConstructor)
	int                                                provinceNumber;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct iTOP.iTOPAuthResult
// 0x004C (0x0078 - 0x002C)
struct FiTOPAuthResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  // 0x002C(0x000C) (ZeroConstructor)
	int                                                channelId;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeviceID;                                                 // 0x003C(0x000C) (ZeroConstructor)
	int                                                GameID;                                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     innerToken;                                               // 0x004C(0x000C) (ZeroConstructor)
	int                                                isFirstLogin;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x005C(0x000C) (ZeroConstructor)
	int                                                tokenExpireTime;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              // 0x006C(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPAuthConnectResult
// 0x0038 (0x0064 - 0x002C)
struct FiTOPAuthConnectResult : public FiTOPResult
{
	struct FString                                     confirmCode;                                              // 0x002C(0x000C) (ZeroConstructor)
	int                                                channelId;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x003C(0x000C) (ZeroConstructor)
	int                                                gender;                                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x004C(0x000C) (ZeroConstructor)
	struct FString                                     pictureUrl;                                               // 0x0058(0x000C) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPWebViewStatusResult
// 0x0004 (0x0030 - 0x002C)
struct FiTOPWebViewStatusResult : public FiTOPResult
{
	int                                                stateCode;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct iTOP.iTOPWebViewTicketResult
// 0x0018 (0x0044 - 0x002C)
struct FiTOPWebViewTicketResult : public FiTOPResult
{
	struct FString                                     ticket;                                                   // 0x002C(0x000C) (ZeroConstructor)
	struct FString                                     domain;                                                   // 0x0038(0x000C) (ZeroConstructor)
};

}

