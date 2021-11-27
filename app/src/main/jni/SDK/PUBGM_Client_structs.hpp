#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_UMG_classes.hpp"
#include "PUBGM_ShadowTrackerExtra_classes.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_UnrealArchExt_classes.hpp"
#include "PUBGM_Slate_classes.hpp"
#include "PUBGM_SlateCore_classes.hpp"
#include "PUBGM_ScriptPlugin_classes.hpp"
#include "PUBGM_Gameplay_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Client.FCDNDownloaderStateEnum
enum class EFCDNDownloaderStateEnum : uint8_t
{
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};


// Enum Client.FDownloaderStateEnum
enum class EFDownloaderStateEnum : uint8_t
{
	FDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};


// Enum Client.EReuseFallOverscrollState
enum class EReuseFallOverscrollState : uint8_t
{
	EReuseFallOverscrollState__RFOS_None = 0,
	EReuseFallOverscrollState__RFOS_Top = 1,
	EReuseFallOverscrollState__RFOS_Bottom = 2,
	EReuseFallOverscrollState__RFOS_MAX = 3
};


// Enum Client.EReuseListJumpStyle
enum class EReuseListJumpStyle : uint8_t
{
	EReuseListJumpStyle__Middle    = 0,
	EReuseListJumpStyle__Begin     = 1,
	EReuseListJumpStyle__End       = 2,
	EReuseListJumpStyle__EReuseListJumpStyle_MAX = 3
};


// Enum Client.EReuseListStyle
enum class EReuseListStyle : uint8_t
{
	EReuseListStyle__Vertical      = 0,
	EReuseListStyle__Horizontal    = 1,
	EReuseListStyle__VerticalGrid  = 2,
	EReuseListStyle__HorizontalGrid = 3,
	EReuseListStyle__EReuseListStyle_MAX = 4
};


// Enum Client.EReuseListNotFullAlignStyle
enum class EReuseListNotFullAlignStyle : uint8_t
{
	EReuseListNotFullAlignStyle__Start = 0,
	EReuseListNotFullAlignStyle__Middle = 1,
	EReuseListNotFullAlignStyle__End = 2,
	EReuseListNotFullAlignStyle__EReuseListNotFullAlignStyle_MAX = 3
};


// Enum Client.FCDNDownloaderTypeEnum
enum class EFCDNDownloaderTypeEnum : uint8_t
{
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Config = 0,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Patch = 1,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_WhiteList = 2,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_MAX = 3
};


// Enum Client.FDownloaderTypeEnum
enum class EFDownloaderTypeEnum : uint8_t
{
	FDownloaderTypeEnum__FDownloaderTypeEnum_Config = 0,
	FDownloaderTypeEnum__FDownloaderTypeEnum_Patch = 1,
	FDownloaderTypeEnum__FDownloaderTypeEnum_WhiteList = 2,
	FDownloaderTypeEnum__FDownloaderTypeEnum_ConfigInMemory = 3,
	FDownloaderTypeEnum__FDownloaderTypeEnum_MAX = 4
};


// Enum Client.ESubsideFeatureLevel
enum class ESubsideFeatureLevel : uint8_t
{
	ELevel_Dafault                 = 0,
	ELevel_Common                  = 1,
	ELevel_Jaguar                  = 2,
	ELevel_MAX                     = 3
};


// Enum Client.ESDKCallbackType
enum class ESDKCallbackType : uint8_t
{
	ESDKCallbackType__SDK_CB_None  = 0,
	ESDKCallbackType__SDK_CB_VLINK_OPEN = 1,
	ESDKCallbackType__SDK_CB_VLINK_CLOSE = 2,
	ESDKCallbackType__SDK_CB_NET_TRACE = 3,
	ESDKCallbackType__SDK_CB_MAX   = 4
};


// Enum Client.EUnifiedAccountType
enum class EUnifiedAccountType : uint8_t
{
	EUnifiedAccountType__UA_None   = 0,
	EUnifiedAccountType__UA_RequestVerifyCode = 1,
	EUnifiedAccountType__UA_ChangePassword = 2,
	EUnifiedAccountType__UA_ModifyAccount = 3,
	EUnifiedAccountType__UA_CheckIsRegisted = 4,
	EUnifiedAccountType__UA_CheckVerifyCodeValid = 5,
	EUnifiedAccountType__UA_MAX    = 6
};


// Enum Client.EIMSDKScreenDir
enum class EIMSDKScreenDir : uint8_t
{
	EIMSDKScreenDir__kScreenDirSensor = 0,
	EIMSDKScreenDir__kScreenDirPortrait = 1,
	EIMSDKScreenDir__kScreenDirLandscape = 2,
	EIMSDKScreenDir__EIMSDKScreenDir_MAX = 3
};


// Enum Client.EIMSDKContentType
enum class EIMSDKContentType : uint8_t
{
	EIMSDKContentType__kContentTypeText = 0,
	EIMSDKContentType__kContentTypeImage = 1,
	EIMSDKContentType__kContentTypeWeb = 2,
	EIMSDKContentType__EIMSDKContentType_MAX = 3
};


// Enum Client.EIMSDKNoticeType
enum class EIMSDKNoticeType : uint8_t
{
	EIMSDKNoticeType__kNoticeTypeAlert = 0,
	EIMSDKNoticeType__kNoticeTypeScroll = 1,
	EIMSDKNoticeType__kNoticeTypeAll = 2,
	EIMSDKNoticeType__EIMSDKNoticeType_MAX = 3
};


// Enum Client.EScreenDir
enum class EScreenDir : uint8_t
{
	EScreenDir__kScreenDirSensor   = 0,
	EScreenDir__kScreenDirPortrait = 1,
	EScreenDir__kScreenDirLandscape = 2,
	EScreenDir__EScreenDir_MAX     = 3
};


// Enum Client.EContentType
enum class EContentType : uint8_t
{
	EContentType__kContentTypeText = 0,
	EContentType__kContentTypeImage = 1,
	EContentType__kContentTypeWeb  = 2,
	EContentType__EContentType_MAX = 3
};


// Enum Client.ENoticeType
enum class ENoticeType : uint8_t
{
	ENoticeType__kNoticeTypeAlert  = 0,
	ENoticeType__kNoticeTypeScroll = 1,
	ENoticeType__kNoticeTypeAll    = 2,
	ENoticeType__ENoticeType_MAX   = 3
};


// Enum Client.EMidasPackType
enum class EMidasPackType : uint8_t
{
	EMidasPackType__kMidasPackNone = 0,
	EMidasPackType__kMidasPackInit = 1,
	EMidasPackType__kMidasPackPayNeedLogin = 2,
	EMidasPackType__kMidasPackPay  = 3,
	EMidasPackType__kMidasPackGetMP = 4,
	EMidasPackType__kMidasPackGetProductInfo = 5,
	EMidasPackType__kMidasPackReprovide = 6,
	EMidasPackType__kMidasPackGetIntroPrice = 7,
	EMidasPackType__EMidasPackType_MAX = 8
};


// Enum Client.EMidasMultiPayChannelSwitch
enum class EMidasMultiPayChannelSwitch : uint8_t
{
	EMidasMultiPayChannelSwitch__kMidasPayChannelMain = 0,
	EMidasMultiPayChannelSwitch__kMidasPayChannelH5 = 1,
	EMidasMultiPayChannelSwitch__EMidasMultiPayChannelSwitch_MAX = 2
};


// Enum Client.EButtonClickSoundTypes
enum class EButtonClickSoundTypes : uint8_t
{
	EButtonClickSoundTypes__None   = 0,
	EButtonClickSoundTypes__Play_UI_Bnt_Confirm = 1,
	EButtonClickSoundTypes__Play_UI_Bnt_Click = 2,
	EButtonClickSoundTypes__Play_UI_Bnt_Tab = 3,
	EButtonClickSoundTypes__Play_UI_Bnt_Select = 4,
	EButtonClickSoundTypes__Play_UI_Bnt_Close = 5,
	EButtonClickSoundTypes__Play_UI_Bnt_MainMenu = 6,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuOpen = 7,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuClose = 8,
	EButtonClickSoundTypes__Play_UI_Bnt_StartGame = 9,
	EButtonClickSoundTypes__Play_UI_Bnt_Turn = 10,
	EButtonClickSoundTypes__Play_UI_Bnt_Set = 11,
	EButtonClickSoundTypes__EButtonClickSoundTypes_MAX = 12
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Client.BattleGameInfo
// 0x0030
struct FBattleGameInfo
{
	uint64_t                                           GameID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameModeID;                                               // 0x0008(0x000C) (ZeroConstructor)
	int                                                GameMapID;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // 0x001C(0x000C) (ZeroConstructor)
	bool                                               bUsedSimulation;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableClimbing;                                          // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Client.CDNDownloaderInfo
// 0x0024
struct FCDNDownloaderInfo
{
	EFCDNDownloaderStateEnum                           State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     FileSavePath;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Result;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                BytesSent;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BytesReceived;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContentType;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.GameWidgetConfig
// 0x0020
struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     Container;                                                // 0x000C(0x000C) (ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.CustomSettingSaveGame
// 0x0010
struct FCustomSettingSaveGame
{
	struct FString                                     LayoutSlotName;                                           // 0x0000(0x000C) (ZeroConstructor)
	class USaveGame*                                   SaveGame;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.NativeHUDTickContainer
// 0x000C
struct FNativeHUDTickContainer
{
	int                                                WidgetIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUAEUserWidget>               pWidget;                                                  // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Client.WebviewInfoWrapper
// 0x0024
struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0004(0x000C) (ZeroConstructor)
	int                                                extend;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Extend2;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgData;                                                  // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.UAAssistantInfoWrapper
// 0x0020
struct FUAAssistantInfoWrapper
{
	EUnifiedAccountType                                UAType;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Result;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraJson;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     RetsultMsg;                                               // 0x0014(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.SDKCallbackInfoWrapper
// 0x001C
struct FSDKCallbackInfoWrapper
{
	ESDKCallbackType                                   CallbackType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     CallbackParameter;                                        // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.WakeupInfoWrapper
// 0x003C
struct FWakeupInfoWrapper
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Client.PlatformFriendInfoMap
// 0x0040
struct FPlatformFriendInfoMap
{
	int                                                page;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               friendsInfo;                                              // 0x0004(0x0050) (ZeroConstructor)
};

// ScriptStruct Client.WechatGroupInfomation
// 0x0024
struct FWechatGroupInfomation
{
	struct FString                                     OpenIdList;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     MemberNum;                                                // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     ChatRoomURL;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.GroupInfoWrapper
// 0x0040
struct FGroupInfoWrapper
{
	int                                                SnsAction;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Flag;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Platform;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0010(0x000C) (ZeroConstructor)
	struct FWechatGroupInfomation                      wechatGroupInfo;                                          // 0x001C(0x0024)
};

// ScriptStruct Client.DownloaderInfo
// 0x0030
struct FDownloaderInfo
{
	EFDownloaderStateEnum                              State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     FileSavePath;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Result;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                BytesSent;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BytesReceived;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContentType;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringContent;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.IMSDKPictureInfomation
// 0x0028
struct FIMSDKPictureInfomation
{
	EIMSDKScreenDir                                    PicScreenDir;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     PicPath;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HashValue;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PicTitle;                                                 // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.IMSDKNoticeInfo
// 0x00A4
struct FIMSDKNoticeInfo
{
	struct FString                                     MsgID;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgUrl;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EIMSDKNoticeType                                   MsgType;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     MsgScene;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EndTime;                                                  // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EIMSDKContentType                                  MsgContentType;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     MsgOrder;                                                 // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ContentUrl;                                               // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIMSDKPictureInfomation>             PicArray;                                                 // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgTitle;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     msgContent;                                               // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgEditCond;                                              // 0x008C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoginTimes;                                               // 0x0098(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.WidgetMountData
// 0x0040
struct FWidgetMountData
{
	struct FMargin                                     MarginData;                                               // 0x0000(0x0010) (IsPlainOldData)
	struct FAnchors                                    AnchorsData;                                              // 0x0010(0x0010)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (IsPlainOldData)
	struct FString                                     MountName;                                                // 0x0028(0x000C) (ZeroConstructor)
	struct FString                                     MountOuterName;                                           // 0x0034(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.InGameWidgetData
// 0x0064
struct FInGameWidgetData
{
	int                                                bAutoShow;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGameWidgetConfig                           GameWidgetConfig;                                         // 0x0004(0x0020)
	struct FWidgetMountData                            WidgetMountData;                                          // 0x0024(0x0040)
};

// ScriptStruct Client.DynamicWidgetData
// 0x0074
struct FDynamicWidgetData
{
	bool                                               bAutoDestory;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     MountModule;                                              // 0x0004(0x000C) (ZeroConstructor)
	struct FInGameWidgetData                           InGameWidgetData;                                         // 0x0010(0x0064)
};

// ScriptStruct Client.DynamicWidgetAsyncLoadData
// 0x0090
struct FDynamicWidgetAsyncLoadData
{
	struct FString                                     WidgetKey;                                                // 0x0000(0x000C) (ZeroConstructor)
	struct FDynamicWidgetData                          DynamicWidgetData;                                        // 0x000C(0x0074)
	struct FScriptDelegate                             Callback;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Client.LuaBPVar
// 0x0010
struct FLuaBPVar
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Client.TouchInputRecord
// 0x0024
struct FTouchInputRecord
{
	TArray<float>                                      Times;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector2D>                           Positions;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Types;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.FightFriendChat
// 0x0028
struct FFightFriendChat
{
	struct FString                                     UId;                                                      // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     Msg;                                                      // 0x0018(0x000C) (ZeroConstructor)
	bool                                               selfMsg;                                                  // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Client.PlayerFinishedGuide
// 0x0008
struct FPlayerFinishedGuide
{
	int                                                GuideID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FinishedCounts;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.TimeStamp
// 0x0018
struct FTimeStamp
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.AssetAsyncRequest
// 0x0020
struct FAssetAsyncRequest
{
	struct FString                                     Path;                                                     // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                 // 0x0010(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Client.MetaDataHolder
// 0x003C
struct FMetaDataHolder
{
	TMap<struct FString, struct FString>               MetaData;                                                 // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.PingServerInfo
// 0x002C
struct FPingServerInfo
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct Client.ShortURLInfoWrapper
// 0x001C
struct FShortURLInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     ShortUrl;                                                 // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.GameMasterInfoWrapper
// 0x0010
struct FGameMasterInfoWrapper
{
	struct FString                                     EventName;                                                // 0x0000(0x000C) (ZeroConstructor)
	int                                                Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.OnRequestPermissionResultWrapper
// 0x001C
struct FOnRequestPermissionResultWrapper
{
	int                                                code;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     permission;                                               // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     grantResult;                                              // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.LoadTaskCfg
// 0x0010
struct FLoadTaskCfg
{
	struct FString                                     ObjectPath;                                               // 0x0000(0x000C) (ZeroConstructor)
	int                                                LoadPriority;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.VersionConfig
// 0x00C4
struct FVersionConfig
{
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0000(0x00C4) MISSED OFFSET
};

// ScriptStruct Client.Version
// 0x0070
struct FVersion
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Client.PatchConfig
// 0x005C
struct FPatchConfig
{
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0000(0x005C) MISSED OFFSET
};

// ScriptStruct Client.PatchURL
// 0x001C
struct FPatchURL
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Client.WebviewActionInfo
// 0x000C
struct FWebviewActionInfo
{
	struct FString                                     URL;                                                      // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.PlatformFriendInfo
// 0x0030
struct FPlatformFriendInfo
{
	struct FString                                     userId;                                                   // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     headportraitURL;                                          // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.DelayLoadInlineTextImageStyle
// 0x00C4 (0x00C8 - 0x0004)
struct FDelayLoadInlineTextImageStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0098) (Edit)
	int16_t                                            Baseline;                                                 // 0x00A0(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x00A2(0x0026) MISSED OFFSET
};

// ScriptStruct Client.IMSDKNoticeInfos
// 0x000C
struct FIMSDKNoticeInfos
{
	TArray<struct FIMSDKNoticeInfo>                    Infos;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.PictureInfomation
// 0x001C
struct FPictureInfomation
{
	EScreenDir                                         PicScreenDir;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     PicPath;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HashValue;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.NoticeInfo
// 0x0098
struct FNoticeInfo
{
	struct FString                                     MsgID;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgUrl;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ENoticeType                                        MsgType;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     MsgScene;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EndTime;                                                  // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EContentType                                       MsgContentType;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     MsgOrder;                                                 // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ContentUrl;                                               // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPictureInfomation>                  PicArray;                                                 // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgTitle;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     msgContent;                                               // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgEditCond;                                              // 0x008C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.NoticeInfos
// 0x000C
struct FNoticeInfos
{
	TArray<struct FNoticeInfo>                         Infos;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.BatchDownloadPackHashes
// 0x000C
struct FBatchDownloadPackHashes
{
	TArray<struct FString>                             Hashes;                                                   // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.BatchDownloadPack
// 0x0028
struct FBatchDownloadPack
{
	TArray<uint32_t>                                   ItemIDs;                                                  // 0x0000(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   ErrorCodes;                                               // 0x000C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Client.PufferDownloadLastTaskStatus
// 0x0018
struct FPufferDownloadLastTaskStatus
{
	struct FDateTime                                   Time;                                                     // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Client.PufferObj
// 0x0010
struct FPufferObj
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Client.PufferDownloadStates
// 0x0028
struct FPufferDownloadStates
{
	TArray<double>                                     speeds;                                                   // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     Filename;                                                 // 0x000C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Client.ArrayLuaBPVar
// 0x0010
struct FArrayLuaBPVar
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Client.MapLuaBPVar
// 0x0010
struct FMapLuaBPVar
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Client.MidasPack
// 0x0044
struct FMidasPack
{
	unsigned char                                      UnknownData00[0x44];                                      // 0x0000(0x0044) MISSED OFFSET
};

// ScriptStruct Client.LobbyTeamState
// 0x0008
struct FLobbyTeamState
{
	int                                                UId;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_state;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

