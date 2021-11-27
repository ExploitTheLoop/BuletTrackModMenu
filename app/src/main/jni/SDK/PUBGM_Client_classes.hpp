#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Client_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Client.AppBaseConfig
// 0x00DC (0x00F8 - 0x001C)
class UAppBaseConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0020(0x000C) (ZeroConstructor, Config)
	struct FString                                     GEMAppID;                                                 // 0x002C(0x000C) (ZeroConstructor, Config)
	uint32_t                                           TSSGameId;                                                // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           GameID;                                                   // 0x0040(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0048(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	uint64_t                                           GVoiceGameId;                                             // 0x0058(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GVoiceGameKey;                                            // 0x0060(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_FACEBOOK;                                           // 0x006C(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_APPLE;                                              // 0x0078(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_GOOGLE;                                             // 0x0084(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_TWITTER;                                            // 0x0090(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_WECHAT;                                             // 0x009C(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_VK;                                                 // 0x00A8(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_LINE;                                               // 0x00B4(0x000C) (ZeroConstructor, Config)
	struct FString                                     APPID_QQ;                                                 // 0x00C0(0x000C) (ZeroConstructor, Config)
	struct FString                                     GUID_GAMEMASTER;                                          // 0x00CC(0x000C) (ZeroConstructor, Config)
	struct FString                                     GEMCtrlURL;                                               // 0x00D8(0x000C) (ZeroConstructor, Config)
	struct FString                                     TGPACtrlURL;                                              // 0x00E4(0x000C) (ZeroConstructor, Config)
	int                                                SubsideFeatureLevel;                                      // 0x00F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AppBaseConfig");
		return pStaticClass;
	}

};


// Class Client.AsyncLoadHelper
// 0x008C (0x00A8 - 0x001C)
class UAsyncLoadHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x001C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AsyncLoadHelper");
		return pStaticClass;
	}


	void SetMaxTaskNum(int Num);
	void RunNextTask();
	void OnLoadCallBack(const struct FSoftObjectPath& softObjPath);
	void ClearOneTask(const struct FString& ObjectPath);
	void ClearAllTask();
	void AddTask(const struct FString& ObjectPath, int LoadPriority);
};


// Class Client.AsyncTaskCDNDownloader
// 0x0050 (0x0070 - 0x0020)
class UAsyncTaskCDNDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0020(0x001C) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x003C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AsyncTaskCDNDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskCDNDownloader* DownloadCDNContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.AsyncTaskDownloader
// 0x0050 (0x0070 - 0x0020)
class UAsyncTaskDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0020(0x001C) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x003C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AsyncTaskDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskDownloader* DownloadContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.BattleScriptHelper
// 0x0004 (0x0020 - 0x001C)
class UBattleScriptHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattleScriptHelper");
		return pStaticClass;
	}


	static uint32_t SyncNewBattlePlayer(class UBattleUtils* Utils, uint64_t UId, const struct FPlayerInfoData& Info);
	static void SyncGameInfo(class UBattleUtils* Utils, const struct FBattleGameInfo& Info);
	static void SyncGameExit(class UBattleUtils* Utils);
	static void SyncBattlePlayerExit(class UBattleUtils* Utils, uint64_t UId, const struct FName& PlayerType, const struct FString& Reason);
	static void ResponPlayerWeaponDIYData(class UBattleUtils* Utils, uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	static void GenerateAIPlayerParams(class UBattleUtils* Utils, const struct FPlayerInfoData& Info);
};


// Class Client.BattlePlayer
// 0x00F4 (0x0110 - 0x001C)
class UBattlePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             PlayerInfoData;                                           // 0x0028(0x0098)
	struct FPlayerAvatarData                           PlayerAvatarData;                                         // 0x00C0(0x0010)
	TMap<int, struct FWeaponDIYData>                   WeaponDIYData;                                            // 0x00D0(0x0050) (ZeroConstructor)
	class UBattleUtils*                                OwningBattleUtils;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattlePlayer");
		return pStaticClass;
	}


	struct FGameModePlayerParams ExtractGameModePlayerParams();
};


// Class Client.BattleAIPlayer
// 0x0000 (0x0110 - 0x0110)
class UBattleAIPlayer : public UBattlePlayer
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattleAIPlayer");
		return pStaticClass;
	}


	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams();
};


// Class Client.BattleUtils
// 0x03C4 (0x03E0 - 0x001C)
class UBattleUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET
	class UGameFrontendHUD*                            OwningFrontendHUD;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0064(0x0014) MISSED OFFSET
	class AUAEGameMode*                                BattleGameMode;                                           // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UBattlePlayer*>                       BattlePlayerList;                                         // 0x007C(0x000C) (ZeroConstructor)
	struct FBattleGameInfo                             CachedBattleGameInfo;                                     // 0x0088(0x0030)
	struct FGameModeAIPlayerParams                     CachedAIPlayerParams;                                     // 0x00B8(0x02E0)
	struct FString                                     LuaFilePath;                                              // 0x0398(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x03A4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattleUtils");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(uint64_t UId, const struct FPlayerInfoData& Info);
	void SyncGameInfo(const struct FBattleGameInfo& Info);
	void SyncGameExit();
	void SyncBattlePlayerExit(uint64_t UId, const struct FName& PlayerType, const struct FString& Reason);
	struct FGameModePlayerParams RetrievePlayerParams(const struct FPlayerID& PlayerID);
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(const struct FPlayerID& PlayerID);
	void ResponPlayerWeaponDIYData(uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void RequestSomePlayersBattleData(TArray<uint64_t> PlayerUIDList, unsigned char DataType);
	void RequestPlayerWeaponDIYData(uint64_t PlayerUID, int WeaponSkinID, int PlanID);
	void RequestOnePlayersBattleData(uint64_t PlayerUID, unsigned char DataType);
	void RequestAllPlayersBattleData(unsigned char DataType);
	void OnPostLoadMapWithWorld(class UWorld* World);
	class UBattlePlayer* NewBattlePlayer();
	class UBattleAIPlayer* NewBattleAIPlayer();
	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
	class AUAEGameMode* GetBattleGameMode();
	void GenerateAIPlayerParams(const struct FPlayerInfoData& Info);
	class UBattlePlayer* FindPlayerByUID(uint64_t UId, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerName(const struct FString& PlayerName, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
};


// Class Client.BattleWindowMgr
// 0x0000 (0x0020 - 0x0020)
class UBattleWindowMgr : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattleWindowMgr");
		return pStaticClass;
	}


	static void ShowUI(class UObject* WorldContextObject, const struct FString& WindowName, class UObject* ObjectParam);
	static void SetInstance(class UBattleWindowMgrLuaUtils* InInstance, class ULuaStateWrapper* InLuaStateWrapper);
	static void HideUI(class UObject* WorldContextObject, const struct FString& WindowName);
	static bool CheckWindowOpen(class UObject* WorldContextObject, const struct FString& WindowName);
};


// Class Client.BattleWindowMgrLuaUtils
// 0x003C (0x0058 - 0x001C)
class UBattleWindowMgrLuaUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	struct FString                                     LuaManagerName;                                           // 0x0024(0x000C) (ZeroConstructor)
	struct FString                                     ShowUI;                                                   // 0x0030(0x000C) (ZeroConstructor)
	struct FString                                     HideUI;                                                   // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     CheckWindowOpen;                                          // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BattleWindowMgrLuaUtils");
		return pStaticClass;
	}

};


// Class Client.BugReporter
// 0x005C (0x0078 - 0x001C)
class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x001C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& errorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& errorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};


// Class Client.BuildConfig
// 0x0024 (0x0040 - 0x001C)
class UBuildConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     build_no;                                                 // 0x0028(0x000C) (ZeroConstructor, Config)
	struct FString                                     build_url;                                                // 0x0034(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BuildConfig");
		return pStaticClass;
	}

};


// Class Client.BusinessHelper
// 0x0000 (0x0020 - 0x0020)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	static class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	static class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static float StopTimeWatch();
	static void StartUIStat(const struct FString& UIName);
	static void StartTimeWatch();
	static void SetUIStatMaxClickTimes(int Times);
	static void ReportUIStat(const struct FString& UIName, bool bGStatTime, bool bReport, float TotalTime);
	static class UObject* LoadAssetFromPath(const struct FString& DesManagerName);
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool IsFit();
	static bool IsClassOf(class UObject* Object, class UClass* Class);
	static bool IsCEVersion();
	static bool IsAppFromStore();
	static bool HasDownloadedBasePak();
	static class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	static float GetTime();
	static struct FString GetSplitMapConfigInfo();
	static int GetPublishRegionID();
	static struct FString GetPublishRegion();
	static struct FString GetPackChannel();
	static struct FString GetOpenId();
	static struct FString GetMobileBasePath(const struct FString& InPath);
	static class ALuaClassObj* GetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static struct FString GetITopGameId();
	static int GetIMSDKEnv();
	static int GetDeviceQualityLevel();
	static int GetDeviceOrientation();
	static class UUAEDataTable* GetDataTable(const struct FString& tableName);
	static int GetCurrentNetworkState();
	static class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	static struct FString GetBuildURL();
	static struct FString GetBuildNo();
	static struct FString GetBranchName();
	static struct FString GetBase64Key();
	static struct FString GetAppVersion();
	static int GetAOSSHOPID();
	static struct FString GetAOSSHOP();
	static void ClearDisplayLookupTable();
	static void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
	static void AddKnownMissingPackage(const struct FString& PackageName, class UObject* BindObj);
};


// Class Client.IntlHelper
// 0x0000 (0x0020 - 0x0020)
class UIntlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.IntlHelper");
		return pStaticClass;
	}


	static void VlinkShowConversionWithGuest();
	static void VlinkShowConversion();
	static void UpdateXGPushNightTag(bool bInit);
	static void UpdateXGPushDayTag(bool bInit);
	static void UpdateVoiceUrl(const struct FString& regionVoiceUrl);
	static void UnInitTweenMaker();
	static struct FString TimeFormatString(const struct FString& Format, int hours, int Mins, int secs);
	static void SaveXGTags(const struct FString& Language, const struct FString& timezone, const struct FString& Region);
	static void OnSwitchLanguage();
	static void OnChoosingZone(int ZoneID, const struct FString& AddrIP, const struct FString& regionVoiceUrl);
	static bool IsRemoteNotificationsEnabled();
	static bool IsHelpshiftEnable4CurrentChannel();
	static bool IsHelpshiftEnable();
	static void InitTweenMaker();
	static void HelpshiftUploadLog();
	static void HelpshiftShowFAQsWithInfo();
	static void HelpshiftShowFAQs();
	static void HelpshiftShowConversionWithInfo(const struct FString& Name, const struct FString& Level, const struct FString& Gold);
	static void HelpshiftShowConversion();
	static struct FString GetSavedXGTimezoneTag();
	static struct FString GetSavedXGRegionTag();
	static struct FString GetSavedXGPushNightTag();
	static struct FString GetSavedXGPushDayTag();
	static struct FString GetSavedXGLanguageTag();
	static struct FString GetPlayerUCLevel();
	static int GetLocalTimezone();
	static struct FString GetLocalizeStringWithString(const struct FString& sourceString, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStringWithNum(int ID, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByStr(const struct FString& Source, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByID(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizationStringWithID(int ID);
	static struct FString GetLocalizationString(const struct FString& Key);
	static struct FString GetLocalizationBattleStringWithID(int ID);
	static struct FString GetHistoryErrorCode();
	static struct FString GetGameMasterVID();
	static struct FString FormatLocalizeStrByStr(const struct FString& Source, TArray<struct FString> stringArr);
	static void DownloadTranslation(const struct FString& PatchName);
	static void DownloadServerList();
	static void DownloadCDNFile(const struct FString& cdnUrl, const struct FString& savePath);
	static void DirectToNotificationSetup();
	static void ClearAdjustDeepLink();
	static void AdjustParaAnalysis();
	static void AddErrorCodeToHistory(const struct FString& InErrorCode);
};


// Class Client.TestHUD
// 0x0000 (0x02E0 - 0x02E0)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


// Class Client.CDNUpdate
// 0x0284 (0x02A0 - 0x001C)
class UCDNUpdate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x001C(0x0074) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20C];                                     // 0x0094(0x020C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.CDNUpdate");
		return pStaticClass;
	}


	void StartUpdateApp();
	void StartAppUpdate(bool StartGrayUpdate);
	void OnRequestProgress(const struct FCDNDownloaderInfo& Info);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	bool IsUpdating();
	bool IsGrayUpdate();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
};


// Class Client.ClientNetInterface
// 0x0000 (0x0020 - 0x0020)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};


// Class Client.CrashContextProcessor
// 0x0074 (0x0090 - 0x001C)
class UCrashContextProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x001C(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.CrashContextProcessor");
		return pStaticClass;
	}


	void TriggerLoginCrashTest();
	void TriggerLobbyCrashTest(int Type);
	void Initialize();
	static class UCrashContextProcessor* GetInstance();
	void AddAttachFileString(const struct FString& Type, bool bClear, struct FString* strinfo);
};


// Class Client.GameBackendUtils
// 0x0000 (0x0020 - 0x0020)
class UGameBackendUtils : public UBackendUtils
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x0080 - 0x0080)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	static class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetGameFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UGameFrontendHUD* GetFirstGameFrontendHUD(class UObject* WorldContextObject);
};


// Class Client.GameBusinessManager
// 0x0058 (0x0108 - 0x00B0)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00BC(0x003C) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x0588 (0x06E8 - 0x0160)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHandleServerListDownload;                               // 0x0168(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     CSVTableRelativeDir;                                      // 0x0174(0x000C) (ZeroConstructor, Config)
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // 0x0180(0x0050) (ZeroConstructor)
	TMap<struct FString, bool>                         LanguageMap;                                              // 0x01BC(0x0050) (ZeroConstructor)
	bool                                               EnableTickLog;                                            // 0x01F8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x01F9(0x0013) MISSED OFFSET
	class UGVoiceInterface*                            GVoice;                                                   // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               DisableGVoice;                                            // 0x0210(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	class UBugReporter*                                GameBugReporter;                                          // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGMLogShare*                                 LogShare;                                                 // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxUpdateRetryTimes;                                      // 0x021C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UGDolphinUpdater*                            GDolphin;                                                 // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTranslator*                                 Translator;                                               // 0x022C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGCPufferDownloader*                         GPuffer;                                                  // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	class ULaggingReporter*                            LaggingReporter;                                          // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0238(0x0004) MISSED OFFSET
	class UAsyncTaskDownloader*                        DownloadTask;                                             // 0x023C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x44];                                      // 0x0240(0x0044) MISSED OFFSET
	bool                                               bUseDolphinUpdateFirst;                                   // 0x0284(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseDolphinUpdate;                                  // 0x0285(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseCDNUpdate;                                      // 0x0286(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDolphinUpdateAfterCDNFailed;                          // 0x0287(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCDNUpdateAfterDolphinFailed;                          // 0x0288(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEditorPufferDownload;                              // 0x0289(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsWaitingUpdateStateData;                                // 0x028A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDolphinUpdate;                                     // 0x028B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingCDNUpdate;                                         // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB];                                       // 0x028D(0x000B) MISSED OFFSET
	class UCDNUpdate*                                  CDNUpdater;                                               // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ODPaksPoolSize;                                           // 0x029C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowend;                                     // 0x02A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowendThreshold;                            // 0x02A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ODPaksEnable;                                             // 0x02A8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x27];                                      // 0x02A9(0x0027) MISSED OFFSET
	struct FName                                       UnrealNetworkStatus;                                      // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x02D8(0x0010) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x02EC(0x0010) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x02FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDynamicCreateLuaManager;                              // 0x0300(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	TArray<struct FString>                             PersistentLuaManager;                                     // 0x0304(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0310(0x0004) MISSED OFFSET
	bool                                               bPatchReInitSequence;                                     // 0x0314(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	class ULuaEventBridge*                             LuaEventBridgeInstace;                                    // 0x031C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBattleWindowMgrLuaUtils*                    LuaBattleWindowMgr;                                       // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData)
	class ULuaBlueprintMgr*                            LuaBlueprintSysMgr;                                       // 0x0324(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	struct FString                                     ScriptBPRelativeDir;                                      // 0x032C(0x000C) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x0338(0x000C) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x0344(0x000C) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x0350(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x035C(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x0368(0x000C) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x0374(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x0378(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoLoginEnable;                                         // 0x0379(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x26];                                      // 0x037A(0x0026) MISSED OFFSET
	int                                                PingFirstReportIntervalSecond;                            // 0x03A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PingReportIntervalSecond;                                 // 0x03A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossSyncIntervalSecond;                                   // 0x03A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                vmInstrumentOptimization;                                 // 0x03AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UTssManager*                                 TssMgr;                                                   // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x24];                                      // 0x03B4(0x0024) MISSED OFFSET
	float                                              PingReportInterval;                                       // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x9C];                                      // 0x03DC(0x009C) MISSED OFFSET
	uint32_t                                           ImageDownloadClearDayCount;                               // 0x0478(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    // 0x047C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   // 0x0488(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FScriptDelegate                             GetUserSettingsDelegate;                                  // 0x0498(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SaveUserSettingsDelegate;                                 // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationUIEvent;                              // 0x04B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationExUIEvent;                            // 0x04C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     UserSettingsClassName;                                    // 0x04D0(0x000C) (ZeroConstructor, Config)
	struct FString                                     LanguageSettingsClassName;                                // 0x04DC(0x000C) (ZeroConstructor, Config)
	struct FString                                     ActiveSaveGameName;                                       // 0x04E8(0x000C) (ZeroConstructor, Config)
	struct FString                                     CachedSaveGameName;                                       // 0x04F4(0x000C) (ZeroConstructor, Config)
	struct FString                                     LanguageSaveGameName;                                     // 0x0500(0x000C) (ZeroConstructor, Config)
	class UClass*                                      UserSettingsClass;                                        // 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomSettingSaveGame>              CustomSettingSaveGames;                                   // 0x0514(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData18[0xA8];                                      // 0x0520(0x00A8) MISSED OFFSET
	class UImageDownloader*                            ImageDownloaderInGame;                                    // 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FpsForWindowClient;                                       // 0x05CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UUDPPingCollector*                           UDPPingCollector;                                         // 0x05D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UIElemLayoutJsonConfigSwitch;                             // 0x05D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationAllSwitch;                                          // 0x05D5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationBattleSwitch;                                       // 0x05D6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationRankSwitch;                                         // 0x05D7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelfieSwitch;                                             // 0x05D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ReportBugSwitch;                                          // 0x05D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FirstVoicePopupSwitch;                                    // 0x05DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRForbidVoiceSwitch;                                    // 0x05DB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRSettingSwitch;                                        // 0x05DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	int                                                GDPRUserType;                                             // 0x05E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShowAdaptTipInLobby;                               // 0x05E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	float                                              fLaggingFPSDiffThreshold;                                 // 0x05E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMin;                              // 0x05EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMax;                              // 0x05F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThreshold;                               // 0x05F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMin;                            // 0x05F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMax;                            // 0x05FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fFPSReportInterval;                                       // 0x0600(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData21[0xC];                                       // 0x0604(0x000C) MISSED OFFSET
	bool                                               bUnLoadNoGcPackage;                                       // 0x0610(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	TArray<class UPackage*>                            NoGcPackages;                                             // 0x0614(0x000C) (ZeroConstructor)
	bool                                               bFlushAsyncLoadingBeforeGC;                               // 0x0620(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePandora;                                           // 0x0621(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x0622(0x0001) MISSED OFFSET
	bool                                               bEnableJMLog;                                             // 0x0623(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData24[0x84];                                      // 0x0624(0x0084) MISSED OFFSET
	bool                                               bEnableH5Cache;                                           // 0x06A8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckWorldNameForLoadConfig;                             // 0x06A9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x06AA(0x0006) MISSED OFFSET
	class UColorBlindnessMgr*                          ColorBlindnessMgrInstace;                                 // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEffectSettingMgr*                           EffectSettingMgrInstace;                                  // 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        // 0x06B8(0x000C) (ZeroConstructor)
	bool                                               IsNativeHUDTickLock;                                      // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsShutDown;                                               // 0x06C5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x06C6(0x0002) MISSED OFFSET
	int                                                NativeHUDTickIndex;                                       // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAsyncLoadHelper*                            AsyncLoadHelper;                                          // 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleUtilsClassName;                                     // 0x06D0(0x000C) (ZeroConstructor, Config)
	class UBattleUtils*                                BattleUtils;                                              // 0x06DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x06E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void VNGPostPersonalInfo(const struct FString& OpenID, const struct FString& Name, const struct FString& passportId, const struct FString& email, const struct FString& phone, const struct FString& address);
	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TimeStatisticStop(int Type, const struct FString& Name);
	void TimeStatisticStart(int Type);
	void TickUdpCollector(float DeltaTime);
	void StatisVisibilityWidget(class UWidget* Widget);
	void StatisLoadedTexture(class UTexture* Texture);
	bool StartGrayUpdate();
	void StartDolphinUpdateAfterCDNUpdateFailed();
	void StartCDNUpdateAfterDolphinUpdateFailed();
	void ShutdownUnrealNetwork();
	void SetShouldShowAdaptTipInLobby(bool bShoudShow);
	void SetGameSubMode(const struct FString& SubMode);
	void SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap);
	void SetClientEnterBattleStage(const struct FString& InStageStr);
	void SetAccountByWebLogin(int Channel, const struct FString& OpenID, const struct FString& userId, const struct FString& TokenID, int ExpireTime);
	bool SaveUserSettingsByDelegate(class USaveGame* SaveGame, const struct FString& LayoutName);
	void RetryDownload();
	void RetryCDNDownload();
	void ResetUserSettings();
	void ReleaseBattleUtils();
	void RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Enum(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnWebviewActionNotify(const struct FString& URL);
	void OnUAAssistantEvent(const struct FUAAssistantInfoWrapper& UAAssistentInfo);
	void OnSDKCallbackEvent(const struct FSDKCallbackInfoWrapper& sdkCallbackInfo);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenId);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnPlatformFriendNotify(const struct FPlatformFriendInfoMap& PlatformFriendInfoMap);
	void OnNotUpdateFinished();
	void OnLoginFlowNotify(int _Flow, int _Param, const struct FString& ExtraData);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetShortUrlNotify(int Ret, const struct FString& ShortUrl);
	void OnGetCountryNoNotify(int country);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	void OnGCloudNetStateChangeNotify(int State, int EventParam1, int EventParam2, int EventParam3);
	void OnGameMasterEvent(const struct FString& EventName, int Ret);
	void OnCheckUpdateStateFinished(const struct FDownloaderInfo& Info);
	void NotifyLoadingUIOperation(int OperationType);
	void MakeToSuppotAdaptation(class UPanelSlot* PanelSlot);
	void LuaDoString(const struct FString& LuaString);
	bool IsWindowOB();
	bool IsInstallPlatform(const struct FString& Platform);
	bool IsCEHideLobbyUI();
	bool HasAnyNetMsgToHandle();
	bool GetWidgetRenderCanChange();
	int GetUserSettingsProperty_Int(const struct FString& PropertyName);
	bool GetUserSettingsProperty_Bool(const struct FString& PropertyName);
	class USaveGame* GetUserSettingsByDelegate(const struct FString& LayoutName);
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class UTranslator* GetTranslator();
	bool GetShouldShowAdaptTipInLobby();
	class UGCPufferDownloader* GetPufferDownloader();
	struct FString GetPingReportInfo();
	struct FString GetPacketLossReportInfo();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class ULuaEventBridge* GetLuaEventBridge();
	class ULuaBlueprintMgr* GetLuaBlueprintSysMgr();
	class UGVoiceInterface* GetGVoiceInterface();
	struct FString GetGameSubMode();
	class AGameStateBase* GetGameState();
	struct FString GetFPSReportInfo();
	class UEffectSettingMgr* GetEffectSettingMgr();
	int GetDetailNetInfoFromGCloud();
	class USaveGame* GetCustomSetting(const struct FString& InSlotName);
	class UColorBlindnessMgr* GetColorBlindnessMgr();
	class UObject* GetClientNetObj();
	struct FString GetClientEnterBattleStage();
	class UBugReporter* GetBugReporter();
	class UBattleUtils* GetBattleUtils();
	struct FString GetBattleIDHexStr();
	int GetAutoRunModID();
	class UAsyncLoadHelper* GetAsyncLoadHelper();
	void FinishModifyUserSettings();
	void EnableFPSAndMemoryLog(bool bEnable);
	void DispatchLongTimeNoOperation(int TimeOutCounter);
	void DispatchConfirmMisKill(const struct FString& KillerName);
	void CreateBattleUtils();
	void ClearUIElemSettings();
	void CheckLocalizationLanguage();
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
	void BattleUtilsGameEnd();
	void AfterLoadedEditorLogin();
	void AddCustomSetting(const struct FString& InSlotName, class USaveGame* InSaveGame);
	void AddAdaptationWidgetDelegateEx(class UPanelSlot* PanelSlot);
	void AddAdaptationWidgetDelegate(class UPanelSlot* PanelSlot);
};


// Class Client.GameFrontendUtils
// 0x0000 (0x02C0 - 0x02C0)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};


// Class Client.GameJoyInterface
// 0x001C (0x0038 - 0x001C)
class UGameJoyInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void ShareVideo(int Channel);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnVideoShare(const struct FString& Msg);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int Status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int Status);
	void OnCheckSDKPermission(bool IsSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	bool IsSDKFeatureSupport();
	static class UGameJoyInterface* GetInstance();
};


// Class Client.GDolphinUpdater
// 0x0274 (0x0290 - 0x001C)
class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x001C(0x0034) MISSED OFFSET
	TMap<struct FString, struct FString>               pakHashList;                                              // 0x0050(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x94];                                      // 0x008C(0x0094) MISSED OFFSET
	bool                                               AllowIOSBGDownload;                                       // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0121(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0122(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableRandomBackupURL;                                    // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnablePufferUpdate;                                       // 0x0131(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x12];                                      // 0x0132(0x0012) MISSED OFFSET
	struct FString                                     UpdateInfoPath;                                           // 0x0144(0x000C) (ZeroConstructor, Config)
	bool                                               OpenDebugLog;                                             // 0x0150(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13F];                                     // 0x0151(0x013F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	void SetEnableCDNGetVersion(bool Enable);
	void OnUpdateError(int curVersionStage, int ErrorCode);
	void OnDolphinBGDownloadDone();
	bool IsUpdating();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetTotalValue();
	int GetCurValue();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	float GetCurPercent();
	uint32_t GetChannelIDWithHUD(class UGameFrontendHUD* InGameFrontendHUD);
	uint32_t GetChannelID();
	void FinishUpdate();
	void FinishPufferUpdate();
	void EnableIOSBGDownload4G(bool bEnableCellularAccess);
	bool EnableCDNGetVersion();
	void ContinueUpdate();
	void CancelUpdate();
	void CancelAppUpdate();
};


// Class Client.IMSDKNotice
// 0x004C (0x0068 - 0x001C)
class UIMSDKNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x001C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.IMSDKNotice");
		return pStaticClass;
	}


	TArray<struct FIMSDKNoticeInfo> GetNotice(const struct FString& Scene);
	static class UIMSDKNotice* GetInstance();
	void ClearNotice();
};


// Class Client.AvatarItemDownloadPuffer
// 0x0000 (0x0020 - 0x0020)
class UAvatarItemDownloadPuffer : public UAvatarItemDownload
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AvatarItemDownloadPuffer");
		return pStaticClass;
	}


	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
};


// Class Client.GCPufferDownloader
// 0x031C (0x0338 - 0x001C)
class UGCPufferDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x001C(0x0218) MISSED OFFSET
	bool                                               Disable;                                                  // 0x0234(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x0235(0x006F) MISSED OFFSET
	struct FString                                     DownloadDir;                                              // 0x02A4(0x000C) (ZeroConstructor, Config)
	struct FString                                     PufferTmpDir;                                             // 0x02B0(0x000C) (ZeroConstructor, Config)
	uint32_t                                           CleanFlagVer;                                             // 0x02BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FString>                             CleanFileNamePattern;                                     // 0x02C0(0x000C) (ZeroConstructor, Config)
	bool                                               PreFetchPakEnable;                                        // 0x02CC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchFileClearEnable;                                  // 0x02CD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchConvertEnable;                                    // 0x02CE(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02CF(0x0001) MISSED OFFSET
	TArray<struct FString>                             PreFetchPakNames;                                         // 0x02D0(0x000C) (ZeroConstructor, Config)
	uint32_t                                           PreFetchReserveredDiskSpace;                              // 0x02DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchODPak_Enable;                                     // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                PreFetchODPaks_MaxNum;                                    // 0x02E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_BatchSize;                                 // 0x02E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedNum;                                // 0x02EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedIndex;                              // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PreFetchODPaks_Filenames;                                 // 0x02F4(0x000C) (ZeroConstructor, Config)
	bool                                               AllowIOSBGDownload;                                       // 0x0300(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0301(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0302(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0303(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0304(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0308(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x030C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableBGDownloadNotification;                            // 0x0310(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	float                                              PreFetchODPaks_StartTime;                                 // 0x0314(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PreFetchODPaks_ConfigName;                                // 0x0318(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x14];                                      // 0x0324(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GCPufferDownloader");
		return pStaticClass;
	}


	bool StopTask(uint64_t TaskId);
	int StopMergeBinDiffPak(int outterTaskID);
	bool StopCheckDownloadFileFraming(int outterTaskID);
	void StopBGDownloadNotification();
	bool StopAllTask();
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& downloadDelegate);
	void StartBGDownloadNotification(uint64_t InDownloadedSize);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void SetTempProductIdBase(int ProductIdRaw);
	void SetTempProductId(const struct FString& ProductIdRaw);
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, int reserveredDiskSpace, const struct FString& FileList, int InPreFetchODPaksMaxNum, int InPreFetchODPaksBatchSize);
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	bool SetImmDLMaxSpeed(uint64_t MaxSpeed);
	static int ReturnSplitMiniPakFilelist_LuaState();
	static int ReturnLocalFiles_LuaState();
	uint64_t RequestFile(const struct FString& FilePath, bool ForceUpdate);
	bool RemountPakFiles();
	struct FString ReadFile(const struct FString& Filename);
	bool PreFetchPakFiles();
	int PreFetchODPakFilesUpdate();
	bool PreFetchODPakFilesPreProcess(bool Start);
	bool PreFetchODPakFilesPostProcess(int ErrorCode);
	bool PreFetchODPakFiles(bool Start);
	void OnItemDownloadedInFighting(const struct FString& PackHash, const struct FString& ErrorCode);
	void OnHashGenerateFinished(int outterTaskID, const struct FString& hashCode);
	int MoveFileTo(const struct FString& Filename, const struct FString& from, const struct FString& to);
	int MoveFile(const struct FString& from, const struct FString& to);
	int MergeBinDiffPak(int outterTaskID, const struct FString& PakFilenameOld, const struct FString& PakFilenameDiff, const struct FString& PakFilenameNew, bool fast);
	bool IsODPaks(const struct FString& FilePath);
	bool IsODFileExists(const struct FString& Path);
	bool IsInitSuccess();
	bool IsFileReady(const struct FString& FilePath);
	bool IsFileExist(const struct FString& Filename, const struct FString& extension);
	bool InitializeODPaks();
	struct FString GetTempWorkPath();
	void GetProductIDBase(TArray<int>* ProductIDs);
	void GetProductID(TArray<int>* ProductIDs);
	int GetODPakNum();
	struct FString GetODPakName(const struct FString& Path);
	uint32_t GetInitErrcode();
	uint64_t GetFileSizeCompressed(const struct FString& FilePath);
	float GetFileSize(const struct FString& Filename);
	struct FString GetDownloadPath();
	float GetCurrentSpeed();
	int GetBatchODPaksDownloadList_LuaState();
	void EnableUseOldInterface(bool Enable);
	bool DeleteFileEvenIfUnfinished(const struct FString& FilePath);
	static bool DeleteFile(const struct FString& fullPath);
	bool ConvertPreFetchFiles();
	struct FString ConvertItemIdToPakName(uint32_t ItemId);
	bool ClearUselessODPaks();
	bool ClearPreFetchODPaksFiles();
	bool ClearPreFetchFiles();
	bool CheckDownloadFileFraming(int outterTaskID, const struct FString& Filename, int chunkSize);
};


// Class Client.GMLogShare
// 0x0004 (0x0020 - 0x001C)
class UGMLogShare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GMLogShare");
		return pStaticClass;
	}


	static void ShareLogFile();
	static void Init();
};


// Class Client.GVoiceInterface
// 0x016C (0x0188 - 0x001C)
class UGVoiceInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x001C(0x0038) MISSED OFFSET
	int                                                lbsRoomMemberID;                                          // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0058(0x0038) MISSED OFFSET
	struct FScriptDelegate                             CheckTempLbsRoomOnJoinRoom;                               // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CheckTempLbsRoomOnQuitRoom;                               // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSTTReportCallback;                                      // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSCallback;                                           // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FString                                     ServerInfo;                                               // 0x00D0(0x000C) (ZeroConstructor, Config)
	uint32_t                                           openGvoiceLog;                                            // 0x00DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MicVolumeMUFactor;                                        // 0x00E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           SpeekerVolumeMUFactor;                                    // 0x00E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00E8(0x000C) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x00F8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.GVoiceInterface");
		return pStaticClass;
	}


	void UploadRecordFile();
	void TestMic();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMode(ECharacterMainType CharMode);
	void SwitchMicphoneWhenCorpsMode();
	void SwitchCampRoom(ECharacterMainType campMode);
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	void StopCampMode();
	void StartRecord();
	void StartInterphone();
	void StartCampMode(const struct FString& ZombieCampRoomName, const struct FString& ManCampRoomName, const struct FString& userId);
	void SpeechToText();
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceMode(int Type);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool Flag);
	void SetPlayerVolume(const struct FString& InPlayerid, int InVol);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool Flag);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool Flag);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetCurrentDownloadFieldID(const struct FString& filedId);
	void SetAllVoiceStatus(bool Flag);
	void ResetWhenLogOut();
	bool ReportPlayers(const struct FString& InExtraInfo);
	void ReactiveLbsStatus();
	void QuitTempLbsRoom(const struct FString& roomStr);
	void QuitRoom();
	void PlayRecordFile();
	void OpenTeamSpeakerOnly(bool ShowTips);
	int OpenTeamMicphoneOnly(bool ShowTips);
	int OpenTeamInterphone();
	void OpenSpeakerByTempLbs(bool Open);
	int OpenSpeaker();
	void OpenMicByTempLbs(bool Open);
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	void OpenIngameSpeaker();
	int OpenIngameMicphone();
	void OpenAllSpeaker(bool ShowTips);
	int OpenAllMicphone(bool ShowTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	void JoinTempLbsRoom(const struct FString& room, const struct FString& userId);
	void JoinRoom(const struct FString& room, const struct FString& userId);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId);
	bool IsTeamInterphoneOpenned();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	void InitGVoiceComponent(const struct FString& userId);
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	float GetVoiceLength();
	int GetPlayerVolume(const struct FString& InPlayerid);
	void GetAuthKey();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	void EnbleMicAndSpeakerByRoomName(const struct FString& roomName, bool Enable);
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, int InTimeout);
	void DownloadRecordFile();
	void CommonTestMic();
	void CloseSpeaker();
	void CloseMic();
	void CloseIngameSpeaker();
	void CloseIngameMicphone();
	void CloseAllSpeaker(bool ShowTips);
	void CloseAllMicphone(bool ShowTips);
	void CheckAndEnableRoomSpeaker();
	void ChatShowAgeRestrictionMsgInLobby();
	void ChatShowAgeRestrictionMsgInFighting();
	void ChatShowAgeRestrictionMsgInChat();
	void ChatRequestPrivacyInSetting();
	void ChatRequestPrivacyInGame();
};


// Class Client.HotUpdater
// 0x0084 (0x00A0 - 0x001C)
class UHotUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x001C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.HotUpdater");
		return pStaticClass;
	}


	void OnGetVersionData(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
	void OnDownloadedOneFile(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
};


// Class Client.Translator
// 0x00D4 (0x00F0 - 0x001C)
class UTranslator : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     StoredAccessToken;                                        // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnGetAccessTokenDelegate;                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnDetectDelegate;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTranslateDelegate;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPostResponseDelegate;                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0078(0x0050) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.Translator");
		return pStaticClass;
	}


	void TranslateV2(int Channel, int ID, const struct FString& Text);
	void Translate(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostWithHead(const struct FString& URL, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostMsg(const struct FString& URL, const struct FString& Content);
	void OnTranslateV2(bool Success, const struct FString& Data);
	void OnTranslate__DelegateSignature(bool IsSuccess, const struct FString& LanguageFrom, const struct FString& Translation);
	void OnTranslate(bool Success, const struct FString& Data);
	void OnPostResponse__DelegateSignature(bool IsSuccess, const struct FString& Data);
	void OnGetAccessTokenV2(bool Success, const struct FString& Data);
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, const struct FString& Token);
	void OnGetAccessToken(bool Success, const struct FString& Data);
	void OnDetectV2(bool Success, const struct FString& Data);
	void OnDetect__DelegateSignature(bool IsSuccess, const struct FString& from, const struct FString& to);
	void OnDetect(bool Success, const struct FString& Data);
	bool HasTranslating();
	void GetAccessToken(bool bForceGet, const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void Detect(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
};


// Class Client.ImageDownloader
// 0x0044 (0x0060 - 0x001C)
class UImageDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x0059(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x005A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	static class UImageDownloader* MakeDownloaderInGame();
	static class UImageDownloader* MakeDownloader();
	class UTexture2D* GetTextureFromUrlWithoutDownload(const struct FString& URL);
};


// Class Client.InGameUIManager
// 0x0168 (0x0270 - 0x0108)
class UInGameUIManager : public UGameBusinessManager
{
public:
	TArray<class UClass*>                              InGameUIList;                                             // 0x0108(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0114(0x004C) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class UUAEUserWidget>> WidgetsMap;                                               // 0x0160(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, struct FDynamicWidgetAsyncLoadData>      PendingAsyncLoadRequests;                                 // 0x019C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x98];                                      // 0x01D8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetListWithMountData(TArray<struct FInGameWidgetData> InGameWidgetDataList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, int inUIControlState);
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void SubDynamicUIWidgetList(TArray<struct FDynamicWidgetData> DynamicWidgetMap);
	void OnAsyncLoadWidgetClassObj(class UObject* InClassObj, int RequestID);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleMountWidget(class UInGameUIManager* IngameManager);
	void HandleDynamicDestroy();
	void HandleDynamicCreation(bool isAsyncLoad);
	void GetWidgetHandleAsyncWithCallBack(const struct FString& WidgetKey, const struct FScriptDelegate& InCallback);
	class UUAEUserWidget* GetWidgetHandle(const struct FString& WidgetKey);
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
};


// Class Client.LaggingReporter
// 0x006C (0x0088 - 0x001C)
class ULaggingReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x001C(0x0020) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LaggingReporter");
		return pStaticClass;
	}

};


// Class Client.LiveBroadcast
// 0x000C (0x0028 - 0x001C)
class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	static class ULiveBroadcast* GetInstance();
	void CloseWebView();
	static void C2JSetString(const struct FString& str);
	void C2JSetIndex(int Index);
};


// Class Client.LoadTexture
// 0x0000 (0x0020 - 0x0020)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	static class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LuaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FLuaBPVar StringToLVar(class UObject* WorldContextObject, const struct FString& Value);
	static struct FLuaBPVar ObjectToLVar(class UObject* WorldContextObject, class UObject* O);
	static struct FString LVarToString(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static class UObject* LVarToObject(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static int LVarToInt(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static float LVarToFloat(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static bool LVarToBool(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static struct FLuaBPVar IntToLVar(class UObject* WorldContextObject, int Value);
	static struct FLuaBPVar FloatToLVar(class UObject* WorldContextObject, float Value);
	static void CallLuaWithMultiArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InF, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, const struct FLuaBPVar& InD, const struct FLuaBPVar& InE, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithHUD(class UObject* WorldContextObject, class UGameFrontendHUD* GameFrontendHUD, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLua(class UObject* WorldContextObject, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static struct FLuaBPVar BoolToLVar(class UObject* WorldContextObject, bool Value);
};


// Class Client.LuaBlueprintMgr
// 0x0044 (0x0060 - 0x001C)
class ULuaBlueprintMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LuaBlueprintMgr");
		return pStaticClass;
	}


	class ULuaBluepirntSys* GetSystemByName(const struct FString& SystemName);
	void AddSystem(const struct FString& SystemName, const struct FString& BPPath);
};


// Class Client.LuaBluepirntSys
// 0x005C (0x0078 - 0x001C)
class ULuaBluepirntSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0060(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LuaBluepirntSys");
		return pStaticClass;
	}


	void Init();
};


// Class Client.LuaClassObj
// 0x0028 (0x0310 - 0x02E8)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x02E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02EC(0x0002) MISSED OFFSET
	bool                                               bClearSourceCodeAfterInitialized;                         // 0x02EE(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x02EF(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void SetWidgetZorder(int Index, int ZOrder);
	void RestoreWidgetZorder(int Index);
	void RestoreAllWidgetZorder();
	bool IsTopStackPanel();
	bool IsPushedPanel();
	bool InCombatState();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleStopAsyncLoad();
	void HandleDynamicDestroy();
	void HandleDynamicCreationInternal(bool isAsyncLoad);
	void HandleDynamicCreation(bool isAsyncLoad);
	void HandleCollapseWidgetList(const struct FString& RootWidgetName);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void AddToTopStackPanel();
};


// Class Client.MaskBox
// 0x0038 (0x0118 - 0x00E0)
class UMaskBox : public UContentWidget
{
public:
	int                                                Phase;                                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStretch;                                            // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateRenderTarget;                                       // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	int                                                MaskType;                                                 // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x010C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.MaskBox");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskMaterial(class UMaterialInterface* EffectMaterial);
	void SetBrushFromTexture(class UTexture2D* Texture);
	struct FVector2D GetVector2D__DelegateSignature();
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.MidasManager
// 0x00F4 (0x0110 - 0x001C)
class UMidasManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x001C(0x0020) MISSED OFFSET
	struct FString                                     payChannel;                                               // 0x003C(0x000C) (ZeroConstructor, Config)
	struct FString                                     midasIdc;                                                 // 0x0048(0x000C) (ZeroConstructor)
	struct FString                                     ZoneID;                                                   // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     goodsZoneID;                                              // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     offerID;                                                  // 0x006C(0x000C) (ZeroConstructor, Config)
	int                                                iAOSShop;                                                 // 0x0078(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     offerID_H5;                                               // 0x007C(0x000C) (ZeroConstructor, Config)
	struct FString                                     payChannel_H5;                                            // 0x0088(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x44];                                      // 0x0094(0x0044) MISSED OFFSET
	struct FString                                     PAY_TYPE_UC;                                              // 0x00D8(0x000C) (ZeroConstructor)
	struct FString                                     PAY_TYPE_GOODS;                                           // 0x00E4(0x000C) (ZeroConstructor)
	struct FString                                     PAY_TYPE_SUBSCRIBE;                                       // 0x00F0(0x000C) (ZeroConstructor)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.MidasManager");
		return pStaticClass;
	}


	void TickMidasPackage();
	void Tick(float DeltaTime);
	void SwitchPayChannel(EMidasMultiPayChannelSwitch switchChannel);
	void Subscribe(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay);
	void SetZoneID(const struct FString& inZoneID, const struct FString& inGoodsZoneID);
	void SetRoleInfo(int InChannel, const struct FString& OpenID);
	void SetMidasIDC(const struct FString& idc);
	void SetJPAge(int Age);
	void SetFrontendHUD(class UGameFrontendHUD* InFrontendHUD);
	void Reprovide();
	void Pay(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency);
	void ModifySubscribe(const struct FString& oldProductId, const struct FString& newProductid, int payItem, const struct FString& country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay);
	void Initialize(EMidasMultiPayChannelSwitch envior);
	void H5Pay(const struct FString& country);
	void GoodsPresent(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency, const struct FString& MetaData);
	void Goods(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency);
	void GetProductInfo(TArray<struct FString> listProductID);
	struct FString getPF();
	struct FString GetPayEnvironment();
	struct FString GetPayChannel();
	struct FString GetPackChannel();
	struct FString GetOfferID();
	struct FString GetNativePackageTag();
	void GetMPInfo(const struct FString& country, const struct FString& currency);
	void GetIntroPrice(TArray<struct FString> listProductID);
	static class UMidasManager* GetInstance();
	struct FString GetInIDC();
	int GetAOSSHOP();
};


// Class Client.NewButton
// 0x0008 (0x0440 - 0x0438)
class UNewButton : public UButton
{
public:
	EButtonClickSoundTypes                             ClickSound;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.NewButton");
		return pStaticClass;
	}


	void SetClickSound(EButtonClickSoundTypes inSoundType);
};


// Class Client.PlatformAppraise
// 0x0004 (0x0020 - 0x001C)
class UPlatformAppraise : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.PlatformAppraise");
		return pStaticClass;
	}

};


// Class Client.ScreenInput
// 0x002C (0x0048 - 0x001C)
class UScreenInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDown;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ScreenInput");
		return pStaticClass;
	}


	void Shutdown();
	void OnScreenTouch__DelegateSignature();
	void OnMouseButtonDown__DelegateSignature(const struct FVector2D& ContainerPos);
	void Init();
};


// Class Client.ScreenshotMaker
// 0x0004 (0x0020 - 0x001C)
class UScreenshotMaker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	static bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	static bool SaveToPhotosAlbum(const struct FString& pathStr);
	static void ResizePicture(const struct FString& pathStr, float Scale, const struct FString& savePathStr);
	static void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	static struct FString ReMakeMomentPicture(const struct FString& srcPath, const struct FVector4& Vector4);
	static struct FString MakePictureWithName(const struct FString& PicName);
	static struct FString MakePictureToLua(class UGameFrontendHUD* InFrontendHUD, const struct FString& tableName, const struct FString& FunctionName, bool isShowUI);
	static struct FString MakePicture(bool isShowUI);
	static struct FString MakeBugReprotPic(bool isShowUI);
	static bool HasCaptured(const struct FString& pathStr);
	static int GetSaveStatus();
	static int GetPhotoHash(const struct FString& pathStr, int algorithmVersion);
	static TArray<struct FString> GetMomentThumbPictureFullPathFiles();
	static TArray<struct FString> GetMomentPictureFullPathFiles();
};


// Class Client.ScriptHelperClient
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	static struct FString ZLIBDecompress(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize);
	static int ZLIBCompress_LuaState();
	static void WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WeChatShareWithMiniApp(const struct FString& _userName, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, int _shareScene, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WakeupFromSuspendSound();
	static int VPNTearDown();
	static int VPNSetUserInfo(const struct FString& InUserId, const struct FString& InUserToken, const struct FString& InAppId);
	static int VPNSetPortRange(int Min, int Max);
	static int VPNSetNodelist(const struct FString& InNodelist);
	static int VPNPrepare();
	static int VPNHandUp();
	static struct FString VPNGetNodeRegionList();
	static int VPNDialUp(const struct FString& InRegion);
	static void Vibrate(int Param);
	static struct FString UserName();
	static struct FString UrlEncode(const struct FString& UnencodedString);
	static void UpdateXGPushNightTag(bool bInit);
	static void UpdateXGPushDayTag(bool bInit);
	static void UpdatePublishRegionForBattle();
	static void UpdateMemResource(const struct FString& ResType, const struct FString& KeyWord);
	static void UpdateAkAudioDeviceBluetoothDelay(int InDelayTime);
	static void UnsubscribeFromTopic(const struct FString& Topic);
	static bool UnmountPakFile(const struct FString& InPakFilename);
	static void UnitTestODPaksOpen(int fileCount, int Times, int threadNum);
	static void UnInitTweenMaker();
	static void TVMacroTesting();
	static void TriggerTouchEvent(float X, float Y, int event_type);
	static void TriggerLoginCrashTest();
	static void TriggerLobbyCrashTest();
	static void TriggerBlockAndroidANR();
	static void Tex_UpdateMemResource(const struct FString& KeyWord);
	static void Tex_DumpMemObjectInfo(const struct FString& KeyWord);
	static int Tea2Encrypt_LuaState();
	static int Tea2Decrypt_LuaState();
	static void TapmReport(int Type, const struct FString& ExtraInfo, bool send);
	static void TapmPostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void TapmMarkTime(int Type);
	static void TapmMarkLevelFin();
	static void TApmDisconnectReport(class UGameFrontendHUD* GameFrontendHUD, int EventId);
	static void TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventId, const struct FString& EventInfo);
	static void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float blendTime, bool bForce);
	static void SwitchCampRoom(class UGameFrontendHUD* GameFrontendHUD, int campMode);
	static void SuspendSound();
	static void SubscribeToTopic(const struct FString& Topic);
	static struct FMargin StringToFMargin(const struct FString& MarginStr);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static struct FTouchInputRecord StopTouchRecord();
	static bool StopTask(class UGameFrontendHUD* GameFrontendHUD, uint64_t TaskId);
	static bool StopShaderPrecompile();
	static void StopHapticsEngine();
	static void StopH5Downloading();
	static void StopCampMode(class UGameFrontendHUD* GameFrontendHUD);
	static void StartUIStat(const struct FString& UIName);
	static void StartTrace(const struct FString& InHost, int InStartTTL, int InMaxTTL, int InCount);
	static void StartTouchRecord();
	static bool StartShaderPrecompile();
	static void StartOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, bool bStart);
	static void StartHapticsEngine(const struct FScriptDelegate& Callback);
	static bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	static void StartDolphinResourceUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartCDNUpdateAfterDolphinUpdateFailed(class UGameFrontendHUD* GameFrontendHUD);
	static void StartCampMode(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ZombieCampRoomName, const struct FString& ManCampRoomName, const struct FString& userId);
	static void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	static void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	static void ShutdownPuffer(class UGameFrontendHUD* GameFrontendHUD);
	static void ShowWebView(bool Show);
	static void ShowVLink(const struct FString& jsonString, const struct FString& signString);
	static void ShowVideoListDialog();
	static void ShowScreenDebugMessage(const struct FString& Message);
	static void ShowH5WebView();
	static void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance);
	static void ShareWithUploadPhotoByChannel(const struct FString& _imgPath, int _channel, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ShareWithPhotoByChannel(const struct FString& _messageExt, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _url, const struct FString& _messageAction, int _channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ShareLogFile();
	static void SetWeatherInfo(class UGameFrontendHUD* GameFrontendHUD, int WeatherID, const struct FString& WeatherName);
	static void SetVoiceSwitch(class UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch);
	static void SetVoiceReEneterInfo(class UGameFrontendHUD* GameFrontendHUD, float Duration, int MaxCount);
	static void SetUserVulkanSetting(bool Enable);
	static void SetUserProperty(const struct FString& propertyKey, const struct FString& propertyValue);
	static bool SetUpdatedSoPatchFile(const struct FString& InSourceFile, int InABI);
	static void SetupAkAudioDeviceListener();
	static void SetUIStatMaxClickTimes(int Times);
	static void SetUIRectOffset(const struct FString& uirect);
	static void SetUIElemLayoutJsonConfigSwitch(class UGameFrontendHUD* GameFrontendHUD, bool UIElemLayoutJsonConfigSwitch);
	static void SetTssNetworkStatus(class UGameFrontendHUD* GameFrontendHUD, int Status);
	static void SetTickMemoryInterval(class UGameFrontendHUD* GameFrontendHUD, float interval);
	static void SetTestEditorNum(int playerCount, const struct FString& Num, const struct FString& SceneName, int Platform);
	static int SetTableFilterInfo_LuaState();
	static bool SetSoundEffectQuality(int Type);
	static void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	static void SetSelfieSwitch(class UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch);
	static int SetSdkIoctl(class UGameFrontendHUD* GameFrontendHUD, int request, struct FString* Token);
	static void SetScreenHole(const struct FString& sceenHole);
	static void SetReportBugSwitch(class UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch);
	static void SetRemoteResource(const struct FString& AssetId, class UObject* DescObj);
	static void SetRegionNoByLua(int regionNo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SetRedBloodSwitch(bool redBloodSwitch);
	static void SetPufferBuildInfo(const struct FString& PipeLineID, const struct FString& BuildNo);
	static void SetPublishRegion(const struct FString& Region);
	static void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl);
	static void SetOnGetItemBigIcon(const struct FScriptDelegate& onShow);
	static void SetNationSwitch(class UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch);
	static void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver> FriendObserversDetails);
	static int SetModName_LuaState();
	static void SetMiniGameFinalAwardResId(class UGameFrontendHUD* GameFrontendHUD, int AwardResId);
	static int SetMidasZoneID_LuaState();
	static void SetMidasIDC(const struct FString& midasIdc);
	static bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline, const struct FString& PathHyperLinkNormalBrush, const struct FString& PathHyperLinkHoveredrBrush);
	static void SetLevelStreamingUnloadTimeslice(bool Enabled);
	static void SetiTOPLbsDelay(int Delay);
	static void SetIPRegion(int region_no);
	static void SetIosStuckEnableByServerConfig(int bEnable);
	static void SetIOSBGDownloadAttribute(class UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	static void SetIntDefaultConfig(int Value);
	static void SetImageVersionString(const struct FString& oldVersion, const struct FString& newVersion);
	static bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor, bool bPreLoad);
	static void SetHapticsEngineEnable(bool bEnable);
	static void SetGlobalRedBloodSwitch(bool redBloodSwitch);
	static void SetGDPRUserType(class UGameFrontendHUD* GameFrontendHUD, int GDPRUserType);
	static void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap);
	static void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	static bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow, bool IsBold);
	static void SetExtraLocalizationMap(TMap<struct FString, struct FString> translationMap);
	static void SetDynamicLevels(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FString> DynamicLevels);
	static void SetDumpShaderCompile(int iDumpVal);
	static void SetCrashContextReportLevel(int Level);
	static void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	static void SetBtnClickInCdFunc();
	static void SetAccountRegion(const struct FString& Region);
	static void SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD);
	static void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TipsID);
	static void SendPlayEmote(class UGameFrontendHUD* GameFrontendHUD, int EmoteIndex);
	static void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	static void SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString, const struct FString& prefixString, int UId);
	static void SendClientLog(class UGameFrontendHUD* GameFrontendHUD, const struct FString& errorReason, const struct FString& errorDescription, bool pullAll);
	static void ScheduleLocalNotificationAtTime(int Year, int Month, int Day, int Hour, int Minute, int Second, bool LocalTime, const struct FString& Title, const struct FString& Body, const struct FString& Action, int NotificationID);
	static void SaveStringToIntermediateFile(const struct FString& String, const struct FString& Filename);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static bool SaveSavFile(const struct FString& CompressedData, const struct FString& Filename, int CompressedSize, int UnCompressedSize);
	static void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	static bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	static void RunConsoleCommond(const struct FString& commond);
	static void RoomOwnerInterruptGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	static uint64_t RequestFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath, bool ForceUpdate);
	static void ReportFirebaseEventWithString(const struct FString& eventTypeString, const struct FString& bundleExtraKey, const struct FString& bundleExtraValue, bool isUnique);
	static void ReportFirebaseEventWithParam(const struct FString& eventTypeString, TMap<struct FString, struct FString> _params, bool isUnique);
	static void ReportEventRegisterCompleted();
	static void ReportEventPurchaseConsider();
	static void ReportEventLoadingCompleted();
	static void ReportContextValuesOnCrash(struct FString* Json);
	static void ReportBuglyLogWithFDNum(const struct FString& baseLogInfo);
	static void ReportBattleChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg, int msgExtraParam);
	static void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	static void RemoveKnownMissingPackage(const struct FString& PackageName);
	static bool RemountPakFiles(class UGameFrontendHUD* GameFrontendHUD);
	static void ReInitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType);
	static void RecordLuaExceptionInfo(const struct FString& exception);
	static void QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	static void QuickLogin(int refreshTokenBeforeExpDays, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShareH5WithPhoto(const struct FString& _title, const struct FString& _fullURL, int Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FVector PVEAutoTestGetEnermyLocation();
	static void PubgmSimulateActionClientEx(class UGameFrontendHUD* GameFrontendHUD, int SimulateType);
	static struct FString ProjectSavedDir();
	static struct FString ProjectContentDir();
	static bool ProcessSoPatch(const struct FString& InAppVerStr);
	static void ProcessServerRelationChainError(const struct FString& ErrorMsg, int iForceLoginInterval, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void PostGameStatusToTGPASMap(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, TMap<struct FString, struct FString> mapData);
	static void PlayHapticsFile(const struct FString& FilePath, int Duration, const struct FScriptDelegate& Callback);
	static void PandoraSendCmd(const struct FString& jsonStr);
	static void PandoraInit(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion, const struct FString& InRoleName, const struct FString& InPayToken, const struct FString& InHeadUrl, const struct FString& InChanelId, const struct FString& InBelongingId, const struct FString& InLanguage, const struct FString& InTicket, const struct FString& InIp, const struct FString& InNation, const struct FString& InNetType);
	static void PandoraErrorReport(int iType, int iActId, int errCode, const struct FString& errMsg, const struct FString& extraMsg, TMap<struct FString, struct FString> extendDict);
	static void PandoraEnable(bool Enable);
	static void PandoraClose();
	static void OpenWebviewInGameProcess(const struct FString& URL, int Left, int Top, int Right, int Bottom);
	static void OpenURL(const struct FString& URL, bool isGetTicket, bool withNeverAdjust, bool bKeepCache);
	static bool OpenShaderCodeLibrary(const struct FString& Path, const struct FString& VersionNum);
	static void OpenH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	static void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	static void OnMiniGameEnded(class UGameFrontendHUD* GameFrontendHUD, int Score, int Duration, bool bGameClosed);
	static void OnIslandPlayerInfoNotify(class UGameFrontendHUD* GameFrontendHUD, int LandId);
	static bool OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	static void OnGetUpdateStateCDNConfigUrl(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL);
	struct FString OnGetItemBigIcon__DelegateSignature(const struct FString& strPath);
	static void OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText);
	static void OnEnterLobbyReloadLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnEnterGameReleaseLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnDolphinAppUpdateFinished(class UGameFrontendHUD* GameFrontendHUD);
	static void OnCombatHitFeedback(class UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable);
	static void OnBattleResultCallBack(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	static void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	static void ObjectPoolServerSwitch(bool bSwitchOn);
	static void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	static void MSDKWebViewCallJS(const struct FString& strJS);
	static void MoveFollowTarget(class UGameFrontendHUD* GameFrontendHUD, int FollowType, uint64_t UId);
	static bool MoveFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	static bool MountPakFile(const struct FString& InPakFilename, const struct FString& Key);
	static int MidasSDKInit_LuaState();
	static int MidasReprovide_LuaState();
	static void MidasPay(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency);
	static void MidasH5Pay(const struct FString& country);
	static void MidasGoodsPresent(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency, const struct FString& MetaData);
	static void MidasGoods(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency);
	static void MessageBoxExt(const struct FString& Caption, const struct FString& Text);
	static bool MediaCopyFromPakToLocal(const struct FString& from, bool bForce);
	static int MD5LuaString_LuaState();
	static struct FString MD5HashAnsiString(const struct FString& str);
	static void ManualSleep(float Seconds);
	static void LogoutAllDevices(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LoginWithExtraInfo(uint32_t Channel, const struct FString& InExtraJson, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LobbySetUserRegion(int InRegion);
	static void LobbySetProxyPortlist(const struct FString& InNodePortList);
	static void LobbySetProxyNodelist(const struct FString& InNodeIpList);
	static void LobbySetEchoPortlist(const struct FString& InEchoPortList);
	static bool LobbyIsLinkProxy(const struct FString& InIp, int InPort);
	static void LobbyAddAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static int LoadSavFile_LuaState();
	static int LoadMidasProductInfo_LuaState();
	static int LoadMidasMP_LuaState();
	static int LoadMidasIntroPrice_LuaState();
	static struct FString LoadIntermediateFileToString(const struct FString& Filename);
	static void LoadH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	static struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	static struct FString LoadFileToString(const struct FString& Filename);
	static TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	static void LoadAFDTranslation();
	static void LaunchUrl(struct FString* URL);
	static void JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& roomName, const struct FString& userId);
	static void JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId);
	static bool IsWindowsClientReplay(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUsingBluetooth();
	static bool IsUseTypicalResultFlowMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUpdateSkip(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUIAutoTest();
	static bool IsTypicalMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsTest();
	static int IsTableDataExist_LuaState();
	static bool IsSystemVPNOpened();
	static bool IsSupportVulkan();
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool isSkipUpdateByRepair(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsShipping();
	static bool IsSavFileData(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize, int ToCheckEndWithCDLenght);
	static bool IsRuningOnVulkan(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsRemoteNotificationsEnabled();
	static bool IsReleaseVersion(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsPVEMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsOpenAOS90FPSConfig();
	static bool IsODPakMonted(const struct FString& Filename);
	static bool IsNotificationEnabled();
	static bool IsNoAuthMode();
	static bool IsNetworkReachable();
	static bool IsNeedClearHiddenUI(class UFrontendHUD* GameFrontendHUD);
	static bool IsMounted(const struct FString& Filename);
	static bool IsLaunchedByLocalNotification();
	static bool IsJaguar();
	static bool IsIPhoneFiveSOriginal();
	static bool IsIPhoneFiveS(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsIOSVersionAbove13();
	static bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallWhatsapp(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallVK(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallTwitter(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallQQByiTOP(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallOpenRec(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMirrativ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMessenger(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLite(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLine(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallFaceBook(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallDiscord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsHarmonyOS();
	static bool IsHapticsEngineEnable();
	static bool IsForCE();
	static bool IsFileReady(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static bool IsFileExistsWithPakCheckMatchExt(const struct FString& Filename);
	static bool IsFileExistsWithPakCheck(const struct FString& Filename);
	static bool IsFileExistsWithOutPakCheck(const struct FString& Path);
	static bool IsFileExistByFileName(const struct FString& Filename);
	static bool IsFileExistByExtension(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename, const struct FString& fileExtension);
	static bool IsFileExist(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	static bool IsEmulatorWhenInit();
	static bool IsEmulator();
	static bool IsEditorDedicatedServer();
	static bool IsEditor();
	static bool IsDolbyAtmosSupported();
	static bool IsDeviceSupportsViberation();
	static bool IsDeviceSupportsHapticsEngine();
	static bool IsDeviceHWSupportVulkan();
	static bool IsDevelopment();
	static bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsCEVersion();
	static bool IsCEHideLobbyUI(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsBasePrefecthOpen();
	static bool IsAwakedByNotification();
	static bool IsAndroidHasGyr();
	static void InviteWhatsappOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSystemOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSMSOfflineFriends(const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteLineOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteFBOfflineFriends(const struct FString& Title, const struct FString& Content, const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	static int InitVPN(const struct FString& InVPNGUID, const struct FString& InClientVersion);
	static void InitVlink();
	static void InitTweenMaker();
	static void InitQuantumPlatformMisc();
	static void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitJavaFunctions();
	static void InitIMSDKEnv(uint32_t iEnv, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType);
	static void InitializeLaggingReporter(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void InitHF();
	static void InitGCloudRemoteConfig();
	static int InitDH(const struct FString& gen, const struct FString& prime, int v_srand);
	static void Ini_UpdateMemResource(const struct FString& KeyWord, const struct FString& CMDvalue);
	static struct FString HtmlEncode(const struct FString& UnencodedString);
	static void HideH5WebView();
	static void HelpshiftShowFAQsWithInfo();
	static void HelpshiftShowConversion();
	static void HelpshiftRequestUnreadMessagesCount();
	static int HelpshiftGetUnreadMessgesCount();
	static void HelpshiftClearUnreadMessgesCount();
	static bool HaveReceivedNoticeCallback();
	static bool HasRemoteConfigReady();
	static bool HasNotice(int Type, const struct FString& Scene);
	static bool HasNotchInScreen();
	static bool HasDownloadedBasePak();
	static bool HasActiveWifi();
	static void GotoPlatformAppraise();
	static void GMTestAllocUObjs(class UGameFrontendHUD* GameFrontendHUD, int Num);
	static void GMH5Enable(bool Flag);
	static void GetWidgetsByClass(class UWidget* Parent, class UClass* Type, TArray<class UWidget*>* Children);
	static struct FString GetWebViewTicket(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetWeaponDIYIconPath(const struct FString& PlayerUID, int WeaponId, const struct FString& PlanID, bool relativePath, int Width, int Height);
	static bool GetUserVulkanSetting();
	static struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetUIRectOffset();
	static struct FString GetToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static float GetTimeInMiliSeconds();
	static struct FString GetTelecomSvr();
	static int GetTCDeviceLevel();
	static int GetTableData_LuaState();
	static int GetTableCount(const struct FString& tableName);
	static int GetTable_LuaState();
	static int GetSystemLanguage_LuaState();
	static uint32_t GetSubsideFeatureLevel();
	static struct FString GetSrcVersion();
	static struct FString GetSplitMapConfigInfo();
	static struct FString GetSpecialData();
	static int GetSoundEffectQuality();
	static int GetShaderPrecompileProgress();
	static int GetServerDelay(const struct FString& ServerAddress);
	static int GetScreenWidthForWebview();
	static int GetScreenWidth();
	static struct FString GetScreenHole();
	static int GetScreenHight();
	static int GetScreenHeightForWebview();
	static int GetScreenDensity();
	static struct FString GetSavedXGPushNightTag();
	static struct FString GetSavedXGPushDayTag();
	static struct FString GetRemarkNameByGIDWithObj(class UObject* Obj, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRemarkNameByGID(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool GetRedBloodSwitch();
	static bool GetPufferInitResult(class UGameFrontendHUD* GameFrontendHUD);
	static uint32_t GetPufferInitErrCode(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPublishRegion();
	static struct FString GetPublicKey(const struct FString& cli_pri_key);
	static struct FString GetPrivateKey();
	static struct FString GetPingReportInfo(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPingReportData(class UGameFrontendHUD* GameFrontendHUD);
	static int64_t GetPhysicalFileTime(const struct FString& InPath);
	static struct FString GetPhoneType();
	static struct FString GetPhoneDeviceID();
	static struct FString GetPhoneAdvertisingID();
	static struct FString GetPackChannel();
	static struct FString GetOSVersion();
	static TArray<struct FString> GetODPaksFileUseTime(const struct FString& DumpFilename);
	static struct FString GetNotificationExtraDataString(const struct FString& Key);
	static TArray<int> GetNotchSize();
	static struct FString GetNetWorkType();
	static struct FString GetNativeVersion();
	static struct FString GetNativePackageTag();
	static TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	static int GetMidasPF_LuaState();
	static int GetMidasPayChannel_LuaState();
	static int GetMemoryStats_LuaState();
	static int GetMemorySize();
	static struct FString GetLuaRootDir();
	static int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetLocalTimezone_LuaState();
	static struct FString GetLaunchLocalNotificationID();
	static TArray<struct FString> GetKnownMissingPackage(const struct FString& PackageName, const struct FString& DumpFilename);
	static int GetiTOPLbsDelay();
	static struct FString GetITopGameId(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIsSecretVersion();
	static bool GetIsPlayerUsingVPN();
	static bool GetIsOpenBattlePlayback(class UGameFrontendHUD* GameFrontendHUD);
	static int GetIPRegion();
	static struct FString GetIpAddrByHost(const struct FString& Host);
	static struct FString GetIpAddr();
	static int GetIntDefaultOffset();
	static struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIMSDKEnv();
	static bool GetH5CacheStatus(const struct FString& ModuleName);
	static void GetGvoiceReconnectInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetGoogleServiceVersionCode();
	static struct FString GetGLVersion();
	static struct FString GetGLType();
	static struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameModeID(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameMasterGUID();
	static float GetFPS();
	static int64_t GetFileSizeOnDiskBytes(const struct FString& FilePath);
	static uint32_t GetFileSizeOnDisk(const struct FString& FilePath);
	static uint64_t GetFileSizeCompressed(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static struct FString GetFileDirPath(const struct FString& FilePath);
	static void GetFBFriendsUnregistered(uint32_t page, uint32_t Count, uint32_t Type, const struct FString& extend, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetExactDeviceLevel();
	static struct FString GetEncodeUrl(const struct FString& URL);
	static struct FString GetEmulatorName();
	static struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	static int GetDeviceQualityLevel();
	static struct FString GetDevicePlatformName();
	static struct FString GetDeviceModel();
	static int GetDeviceMaxSupportSoundEffect();
	static struct FString GetDeviceInfo();
	static uint64_t GetDeviceFreeSpace();
	static int GetCurrentZoneID();
	static struct FString GetCurrentRHILevel(class UGameFrontendHUD* GameFrontendHUD);
	static int GetCurrentLanguage_LuaState();
	static int GetCurrentChannel(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetCpuType();
	static void GetCDNUpdateInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static struct FString GetBuildVersion();
	static struct FString GetBattleKey(const struct FString& svr_pub_key, const struct FString& cli_pri_key);
	static struct FString GetAreaIPNo();
	static struct FString GetAppVersion();
	static struct FString GetApplicationVersion();
	static struct FString GetAOSSHOP();
	static struct FString GetAndroidSysInfo();
	static int GetAndroidSOVersion();
	static uint32_t GetAndroidMaxStackSize();
	static uint32_t GetAndroidMaxFDNum();
	static uint32_t GetAndroidCurrentFDNum();
	static int GetAndroidBuildForArm();
	static TArray<int> GetAllLocalNotificationIDs();
	static TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern);
	static struct FString GetAccountRegion();
	static struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GEMReportSubEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, const struct FString& SubEventName, TArray<struct FString> eventParams);
	static void GEMReportShaderPrecompileEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	static void GEMReportEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, TMap<struct FString, struct FString> eventParams);
	static void GEMReportEnterLobbyEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	static struct FString GCloudRemoteConfigGetString(const struct FString& InKey, const struct FString& InDefaultValue);
	static int GCloudRemoteConfigGetInt(const struct FString& InKey, int InDefaultValue);
	static bool GCloudRemoteConfigGetBool(const struct FString& InKey, bool InDefaultValue);
	static void GameMasterSetUserInfo(const struct FString& InPaidInfo, const struct FString& InUserToken, const struct FString& InAppId);
	static void GameMasterSetUsableRegion(const struct FString& InRegion);
	static void GameMasterSetUdpEchoPort(int InPort);
	static void GameMasterSetOnlyWifiAccel(bool InOn);
	static void GameMasterSetFreeFlowUser(int InType);
	static void GameMasterOnNetDelay(int InMillis);
	static bool GameMasterIsAccelOpened();
	static int GameMasterInit(int InHookType, const struct FString& InGuid, const struct FString& InLibs, int InEchoPort);
	static struct FString GameMasterGetWebUIUrl(int InType);
	static struct FString GameMasterGetVIPValidTime();
	static struct FString GameMasterGetUserID();
	static int GameMasterGetAccelerationStatus();
	static void GameMasterClearAccelAddr();
	static void GameMasterBeginRound(const struct FString& InOpenId, const struct FString& InPvpId);
	static void GameMasterAddNewArenaAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameMasterAddAccelAddr(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameJoySwitchOn(int isOn);
	static void GameJoyStopManualRecord();
	static void GameJoyStartMomentsRecord();
	static void GameJoyStartManualRecord();
	static void GameJoySetVideoQuality(int Quality);
	static void GameJoySetMomentRecordSwitchOn(int isOn);
	static void GameJoySetLuaguage();
	static void GameJoySetCurrentRecorderPosition(float X, float Y);
	static bool GameJoyIsSDKFeatureSupport();
	static void GameJoyGenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> ExtraInfo);
	static void GameJoyEndMomentsRecord();
	static void GameJoyClearMomentsVideo();
	static bool FullPathFileExist(const struct FString& Filename);
	static void FlushKnownMissingPackageRefObject();
	static void FinishPufferUpdateInDolphin(class UGameFrontendHUD* GameFrontendHUD, bool IsFinished);
	static TArray<struct FString> FindFilesRecursiveSkipPakPlatform(const struct FString& Dir, const struct FString& Pattern);
	static int FindFiles_LuaState();
	static void FileSystemTesting(uint32_t Count);
	static void ExitGameForSafety();
	static void ExitGame();
	static void EnterLoading(class UGameFrontendHUD* GameFrontendHUD);
	static void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	static void EnterBattleStandAlone(class UGameFrontendHUD* GameFrontendHUD, const struct FString& MapPath, uint32_t PlayerKey, const struct FString& PlayerName);
	static void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameID, bool IsObserver, TMap<int, struct FString> AdvConfig, int WaterType, uint32_t WaterUserID);
	static struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	static void EnableUseOldInterface(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableTxtCheck();
	static void EnableReportGVoiceEvent(class UGameFrontendHUD* GameFrontendHUD, bool GVoiceInitGVoiceComponentReportEnable, bool GVoiceJoinRoomReportEnable, bool GVoiceQuitRoomReportEnable, bool GVoiceJoinLbsRoomReportEnable, bool GVoiceQuitLbsRoomReportEnable, bool GVoiceOnJoinTeamRoomReportEnable, bool GVoiceOnJoinLbsRoomReportEnable);
	static void EnableLocalizationStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	static void EnableIosStuckWork(class UGameFrontendHUD* GameFrontendHUD, bool bEnable);
	static void EnableGvoiceGemReport(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableGvoice(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableCampGvoice(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableAutoObjectRefreshStage(bool bEnable);
	static void EnableAudioRouteChangedNotify(bool Enable);
	static void DumpOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, const struct FString& DumpFilename);
	static void DownloadCDNFile(const struct FString& cdnUrl, const struct FString& savePath);
	static void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void DisableRepairResource(class UGameFrontendHUD* GameFrontendHUD);
	static void DirectToSetting();
	static void DestroyConnector(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool DeleteFile(const struct FString& fullPath);
	static void DeleteDirectory(const struct FString& FilePath);
	static void DelayToSetAutoInitFacebookLog(bool IsAutoInit);
	static void DelayToInitFacebookSDK(bool IsAutoInit, bool WithLaunchOption);
	static void DelayInitThirdPartSDK();
	static void CreateHapticsEngine(const struct FScriptDelegate& Callback);
	static struct FString ConvertToAbsolutePathForExternalAppForWrite(const struct FString& FilePath);
	static struct FString ConvertToAbsolutePathForExternalAppForRead(const struct FString& FilePath);
	static struct FString ConvertRelativePathToFull(const struct FString& InPath);
	static struct FString ConvertGamePathToRelativeFilePath(const struct FString& Path);
	static void ConnectToURL(const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString ComputerName();
	static void CloseWebView();
	static void CloseVLink();
	static void CloseVideoListDialog();
	static void CloseH5WebView(class UGameFrontendHUD* GameFrontendHUD);
	static void ClipBoardCopy(const struct FString& Text);
	static void ClientKickPlayerFromGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmReturnToGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmMisKill(class UGameFrontendHUD* GameFrontendHUD, int bConfirm);
	static void ClearUpdatedSoPatch();
	static void ClearNotifications();
	static void ClearNotice();
	static void ClearChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ClearAllLocalNotifications();
	static void ClearAdjustDeepLink();
	static void CheckRegisterGestureConflictWithZoom();
	static TArray<struct FString> CheckFilesInPak(TArray<struct FString> Files);
	static void CheckBeforeInitPuffer();
	static void ChangeLocalizationReleaseTestStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	static bool CanUseHapticsEngine();
	static void CancelLocalNotification(int NotificationID);
	static void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tableName, const struct FString& FunctionName);
	static void CallEngineGC();
	static void CacheH5WebView(const struct FString& ModuleName);
	static void BuglySetAppVersion(const struct FString& Version, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BuglyPutUserData(const struct FString& Key, const struct FString& Value, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BuglyPostException(int Category, const struct FString& Reason, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BuglyLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void AutoTestWaitForUIWithName(const struct FString& UIName);
	static void AutoTestWaitForSecond(int sec);
	static bool AutoTestWaitForJumpPlane();
	static void AutoTestVehicleDriverShoot(class UGameFrontendHUD* GameFrontendHUD);
	static void AutoTestVaultWall();
	static void AutoTestUsePropSkillClientEx(class UGameFrontendHUD* GameFrontendHUD);
	static void AutoTestUseItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemId);
	static void AutoTestUseItem(int ItemId);
	static void AutoTestUpgradePropSkillClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemId);
	static void AutoTestToggleVehicleSync(class UGameFrontendHUD* GameFrontendHUD, bool Val);
	static void AutoTestThrowBoomOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int SkillID);
	static void AutoTestThrowBoom(int SkillID);
	static void AutoTestSwitchWeapon(int WeaponType);
	static void AutoTestSwitchMode(const struct FString& FunName);
	static void AutoTestSwitchGameStatus(class UGameFrontendHUD* GameFrontendHUD, const struct FName& GameStatus, const struct FString& Options);
	static void AutoTestStopRecordStats();
	static void AutoTestStartRecordStats(const struct FString& FileStr);
	static void AutoTestStartFireOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int X, int Y, int Z, int sec);
	static void AutoTestStartFire(int X, int Y, int Z, int sec);
	static void AutoTestSpecating(class UGameFrontendHUD* GameFrontendHUD, int leftTeamCnt);
	static void AutoTestSpawnVehicle(const struct FString& ResPath);
	static void AutoTestSetVehicleRotation(int X, int Y, int Z);
	static void AutoTestSetRecordFrequency(uint32_t Frequency);
	static void AutoTestSetActorRotation(float Rate, float Speed);
	static void AutoTestSetActorPitch(float Rate);
	static void AutoTestSetActorFacePoint(int X, int Y, int Z);
	static void AutoTestSendBuffertoSvr(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void AutoTestReloadOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD);
	static struct FVector2D AutoTestPickupItemOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD);
	static struct FVector2D AutoTestPickupItem();
	static void AutoTestOpenTraceRPC();
	static void AutoTestOpenScope(bool bOpenScope);
	static void AutoTestOpenDoorOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int bOpen);
	static void AutoTestMustDie(class UGameFrontendHUD* GameFrontendHUD, int leftTeamCnt);
	static void AutoTestMoveVehicleForward(float Speed, float Rate, float sec);
	static void AutoTestMoveToPoint(int X, int Y, int Z);
	static void AutoTestJumpPlane(int sec);
	static void AutoTestJump();
	static bool AutoTestIsOnVehicle(class UGameFrontendHUD* GameFrontendHUD);
	static bool AutoTestIsDriver(class UGameFrontendHUD* GameFrontendHUD);
	static void AutoTestInputMovement(float Rate);
	static void AutoTestGMVehicleMoveAndTowardClientEx(class UGameFrontendHUD* GameFrontendHUD, float X, float Y, float Z, float x1, float y1, float Z1);
	static void AutoTestGMGotoClientEx(class UGameFrontendHUD* GameFrontendHUD, int X, int Y, int Z);
	static void AutoTestGMGoto(int X, int Y, int Z);
	static void AutoTestGMCommand(const struct FString& Command);
	static struct FVector AutoTestGetVehicleLocationClientEx(class UGameFrontendHUD* GameFrontendHUD);
	static struct FVector AutoTestGetVehicleLocation();
	static void AutoTestGetRuntimeStats();
	static void AutoTestGetOnVehicle();
	static void AutoTestGetOffVehicle();
	static struct FVector AutoTestGetNearVehiclePos();
	static struct FString AutoTestGetMapName();
	static struct FString AutoTestGetGameModeState();
	static struct FVector AutoTestGetFrameInfo();
	static int AutoTestGetDis2D(int X, int Y, int Z, int x2, int y2, int z2);
	static struct FVector AutoTestGetCircleLocationClientEx(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString AutoTestGetActorName();
	static TArray<struct FVector> AutoTestGetActorLocationListClientEx(class UGameFrontendHUD* GameFrontendHUD, int ActorType, float RangeRadius);
	static struct FVector AutoTestGetActorLocation(const struct FString& PlayerName);
	static float AutoTestForceVehiclePosPullClientEx(class UGameFrontendHUD* GameFrontendHUD, bool bNext);
	static void AutoTestEnableUITest();
	static void AutoTestDropItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemId, int nCount);
	static void AutoTestContinuousMoveTo(float X, float Y, float Z);
	static void AutoTestConsoleCommand(const struct FString& Command);
	static void AutoTestCloseTraceRPC();
	static void AutoTestClickButton(const struct FString& ButtonName);
	static void AutoTestAddItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemId, int nCount);
	static void AutoTestAddItem(int ItemId, int nCount);
	static void AutoMoveToTargetPosClientEx(class UGameFrontendHUD* GameFrontendHUD, const struct FVector& targetPos);
	static void AskForNotificationPermission();
	static bool AndroidShouldShowPermissionRationale();
	static bool AndroidCheckPermission();
	static void AkAudio_UnloadInitBank();
	static void AkAudio_UnloadAllFilePackages();
	static void AkAudio_StopAllSounds(bool bShouldStopUISounds);
	static void AkAudio_LoadInitBank();
	static void AkAudio_Flush(class UWorld* WorldToFlush);
	static void AkAudio_ClearBanks();
	static void AdjustParaAnalysis();
	static void AddKnownMissingPackage(const struct FString& PackageName, class UObject* BindObj);
	static void AddErrorCodeToHistory(const struct FString& ErrorCode);
	static void AddCrashContextData(int Key, const struct FString& Val, bool bAppendTimeStamp, int reportLevel);
	static void AddAttachFileString(const struct FString& Type, bool bClear, struct FString* strinfo);
};


// Class Client.ScriptHelperEngine
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}


	static TArray<unsigned char> TestLz4Decompress(TArray<unsigned char> Source, bool bEnable);
	static TArray<unsigned char> TestLz4Compress(TArray<unsigned char> Source);
	static struct FString ReplaceEmoji(const struct FString& Content, int MaxEmojiNum, const struct FString& SpecialCharacter);
	static bool IsLowMemoryDevice();
	static float GetMemoryUsedVirtualInKB();
	static float GetMemoryUsedPhysicalInKB();
};


// Class Client.STExtraClientUtils
// 0x0000 (0x0020 - 0x0020)
class USTExtraClientUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.STExtraClientUtils");
		return pStaticClass;
	}


	static void GetWidgetHandleAsyncWithCallBack(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidgetKey, const struct FScriptDelegate& Callback);
	class UUAEUserWidget* GetDynamicWidgetHandle(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidetKey);
	static class USTExtraClientUIBPUtils* GetBPUtils();
	static int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.STExtraClientUIBPUtils
// 0x00D4 (0x00F0 - 0x001C)
class USTExtraClientUIBPUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x001C(0x0098) MISSED OFFSET
	TMap<int, struct FAssetAsyncRequest>               PendingAsyncAssetRequests;                                // 0x00B4(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.STExtraClientUIBPUtils");
		return pStaticClass;
	}


	void OnAsyncAssetLoaded(const struct FSoftObjectPath& InSoftPath, int RequestIdx);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.TssManager
// 0x002C (0x0048 - 0x001C)
class UTssManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     TssCDNHostInfo;                                           // 0x0028(0x000C) (ZeroConstructor, Config)
	struct FString                                     TssBuildInIpInfo;                                         // 0x0034(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	static int SendSkdData_LuaState();
	static int SendEigeninfoData_LuaState();
	static uint32_t SaveSendEigeninfoCode_LuaState();
	static int OnRecvData_LuaState();
	static int GetUserTag4Lua_LuaState();
	static int GetDeviceFeature_LuaState();
	static int EigenArrayObfuscationVerify_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x0368 - 0x0368)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x0368 - 0x0368)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x0580 - 0x0580)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};


// Class Client.UTRichTextBlock
// 0x0838 (0x0908 - 0x00D0)
class UUTRichTextBlock : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnHyperlinkClicked;                                       // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     ContentText;                                              // 0x00DC(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x00F8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x013C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<enum ETextJustify>                     Justification;                                            // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETextVerticalJustify>             TextVerticalJustification;                                // 0x014D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x014E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x014F(0x0001) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0150(0x0560) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x06D4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x06E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x06F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0700(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x1F4];                                     // 0x070C(0x01F4) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0900(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0904(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnHyperlinkClickedEvent__DelegateSignature(const struct FMetaDataHolder& MetaDataHolder);
	struct FText GetText();
};


// Class Client.AEVarButton
// 0x0380 (0x0460 - 0x00E0)
class UAEVarButton : public UContentWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              // 0x00E0(0x02B8) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<enum EButtonClickMethod>               ClickMethod;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EButtonTouchMethod>               TouchMethod;                                              // 0x03B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x03BA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassMouseEvent;                                         // 0x03BB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ButtonVar;                                                // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x03C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonPressed;                                          // 0x03D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonReleased;                                         // 0x03E0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x03EC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x03F8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0408(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0420(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x042C(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0438(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0444(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0450(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x045C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.AEVarButton");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<enum EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<enum EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class Client.ReuseFallC
// 0x0A50 (0x0C08 - 0x01B8)
class UReuseFallC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBeforeNewItem;                                          // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterNewItem;                                           // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x01D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x01DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchFinish;                                            // 0x01E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOverscrollState;                                        // 0x01F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0200(0x0268) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0470(0x0560) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x09D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x09D4(0x0008) (Edit, IsPlainOldData)
	int                                                ColumnNum;                                                // 0x09DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x09E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingX;                                             // 0x09E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingY;                                             // 0x09E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverscrollLength;                                         // 0x09EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x09F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UClass*>                OtherItemClass;                                           // 0x09F4(0x0050) (Edit, ZeroConstructor)
	int                                                PreviewCount;                                             // 0x0A30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPoolMaxNum;                                           // 0x0A34(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TopSpaceReserved;                                         // 0x0A38(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BottomSpaceReserved;                                      // 0x0A3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x0A40(0x0034) MISSED OFFSET
	class UClass*                                      CurItemClass;                                             // 0x0A74(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x190];                                     // 0x0A78(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ReuseFallC");
		return pStaticClass;
	}


	void SetScrollOffset(float NewScrollOffset);
	void SetItemSize(int __Idx, float __Size);
	void SetItemFullStyle(int idx);
	bool SetCurItemClass(const struct FString& StrName);
	void ScrollToStart();
	void ScrollToEnd();
	void ResetCurItemClassToDefault();
	void Reload(int __ItemCount);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnTouchFinishDelegate__DelegateSignature();
	void OnTouchFinishCallback();
	void OnOverscrollStateDelegate__DelegateSignature(EReuseFallOverscrollState State);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnBeforeNewItemDelegate__DelegateSignature(int idx);
	void OnAfterNewItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void JumpByIdx(int __Idx, bool bImmedia);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	EReuseFallOverscrollState GetOverscrollState();
	struct FVector2D GetContentSize();
	void ClearItemFullStyle();
	void Clear();
};


// Class Client.ReuseListC
// 0x0900 (0x0AB8 - 0x01B8)
class UReuseListC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItemParam;                                        // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScrollItem;                                             // 0x01D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x01DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x01E8(0x0268) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x0450(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBoxVisibility;                                      // 0x0451(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0452(0x0006) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0458(0x0560) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x09B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x09BC(0x0008) (Edit, IsPlainOldData)
	int                                                ItemWidth;                                                // 0x09C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x09C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingX;                                                 // 0x09CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingY;                                                 // 0x09D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitleSize;                                                // 0x09D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitlePadding;                                             // 0x09D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTitleSize;                                            // 0x09DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListStyle                                    Style;                                                    // 0x09DD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x09DE(0x0002) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x09E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreviewCount;                                             // 0x09E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListNotFullAlignStyle                        NotFullAlignStyle;                                        // 0x09E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotFullScrollBoxHitTestInvisible;                         // 0x09E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateForceLayoutPrepass;                                 // 0x09EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x09EB(0x0001) MISSED OFFSET
	int                                                ItemCacheNum;                                             // 0x09EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DelayUpdateTimeLimitMS;                                   // 0x09F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC4];                                      // 0x09F4(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ReuseListC");
		return pStaticClass;
	}


	void SetTitleSlotAutoSize(bool as);
	void SetTitleSize(int sz);
	void SetScrollOffset(float NewScrollOffset);
	void ScrollToStart();
	void ScrollToEnd();
	void Reset(class UClass* __ItemClass, EReuseListStyle __Style, int __ItemWidth, int __ItemHeight, int __PaddingX, int __PaddingY);
	void Reload(int __ItemCount);
	void RefreshParam(const struct FString& _Param);
	void RefreshOneParam(int __Idx, const struct FString& _Param);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemParamDelegate__DelegateSignature(class UUserWidget* Widget, int idx, const struct FString& Param);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnScrollItemDelegate__DelegateSignature(int BeginIdx, int EndIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void JumpByIdxStyle(int __Idx, EReuseListJumpStyle __Style);
	void JumpByIdx(int __Idx);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	int GetPaddingY();
	int GetPaddingX();
	int GetItemWidthAndPaddingX();
	int GetItemWidth();
	int GetItemHeightAndPaddingY();
	int GetItemHeight();
	struct FVector2D GetContentSize();
	void GetAllWidgetItems(TArray<class UUserWidget*>* ResultItemList);
	class UUserWidget* FindItem(int idx);
	void Clear();
};


// Class Client.ReusePageC
// 0x0108 (0x02C0 - 0x01B8)
class UReusePageC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPageChanged;                                            // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x01D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginDrag;                                              // 0x01DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndDrag;                                                // 0x01E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndScroll;                                              // 0x01F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ItemClass;                                                // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLoopPage : 1;                                           // 0x0204(0x0001) (Edit)
	unsigned char                                      IsVertical : 1;                                           // 0x0204(0x0001) (Edit)
	unsigned char                                      CanDrag : 1;                                              // 0x0204(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	int                                                CanDragLimit;                                             // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoPlayRate;                                             // 0x020C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowPageNum;                                              // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DragPageNum;                                              // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DChgPageParam;                                            // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollInertial;                                           // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollRate;                                               // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x0224(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ReusePageC");
		return pStaticClass;
	}


	void SetAutoPlayRate(float Rate);
	void SelectPage(int __Idx);
	void Reload(int __Count);
	void Play(bool bPlay);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnPageChangedDelegate__DelegateSignature(int PageIdx);
	void OnEndScrollDelegate__DelegateSignature(int PageIdx);
	void OnEndDragDelegate__DelegateSignature(int PageIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void OnBeginDragDelegate__DelegateSignature();
	void MovePrePage();
	void MoveNextPage();
	bool IsDraging();
	int GetPageCount();
	int GetPage();
	float GetOffset();
	float GetAutoPlayRate();
	void GetAllItems(bool OnlyVisible, TArray<class UUserWidget*>* ResultItemList);
	void ClearCache();
};


// Class Client.UDPPingCollector
// 0x00BC (0x00D8 - 0x001C)
class UUDPPingCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x001C(0x0028) MISSED OFFSET
	TMap<struct FString, struct FPingServerInfo>       mUDPPingInfoMap;                                          // 0x0044(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    UDPPingShadowResultToLuaDelegate;                         // 0x0090(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x009C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.UDPPingCollector");
		return pStaticClass;
	}


	void TickUDPPing(float DeltaTime);
	void setUDPPingServerAddress(const struct FString& ServerIP, const struct FString& ServerPort, int ZoneID, int WaterMarkType);
	void PingServer(const struct FString& address, float Timeout, int WaterMarkType);
	void OnPingServerResultDelegate__DelegateSignature(const struct FString& address, int IsSuccess, float Time);
	bool IsChooingZoneAccess();
	bool isAllZoneHasPingValue();
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond);
	float GetZoneServerDelay(const struct FString& ServerAddress);
	int GetMinDealyAddress();
	void ChoosingZone(int ZoneID, const struct FString& AddrIP);
};


// Class Client.ViberateEngine
// 0x0004 (0x0020 - 0x001C)
class UViberateEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.ViberateEngine");
		return pStaticClass;
	}

};


// Class Client.WINSDKFBWebLogin
// 0x0020 (0x00F0 - 0x00D0)
class UWINSDKFBWebLogin : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHttpResponed;                                           // 0x00D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x00E4(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Client.WINSDKFBWebLogin");
		return pStaticClass;
	}


	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, const struct FString& txtContent);
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadURL(const struct FString& NewURL);
	void DoHttpRequest(const struct FString& URL);
};


}

