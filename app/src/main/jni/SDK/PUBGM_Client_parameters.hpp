#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Client_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Client.AsyncLoadHelper.SetMaxTaskNum
struct UAsyncLoadHelper_SetMaxTaskNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.AsyncLoadHelper.RunNextTask
struct UAsyncLoadHelper_RunNextTask_Params
{
};

// Function Client.AsyncLoadHelper.OnLoadCallBack
struct UAsyncLoadHelper_OnLoadCallBack_Params
{
	struct FSoftObjectPath                             softObjPath;                                              // (Parm)
};

// Function Client.AsyncLoadHelper.ClearOneTask
struct UAsyncLoadHelper_ClearOneTask_Params
{
	struct FString                                     ObjectPath;                                               // (Parm, ZeroConstructor)
};

// Function Client.AsyncLoadHelper.ClearAllTask
struct UAsyncLoadHelper_ClearAllTask_Params
{
};

// Function Client.AsyncLoadHelper.AddTask
struct UAsyncLoadHelper_AddTask_Params
{
	struct FString                                     ObjectPath;                                               // (Parm, ZeroConstructor)
	int                                                LoadPriority;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.AsyncTaskCDNDownloader.DownloadCDNContent
struct UAsyncTaskCDNDownloader_DownloadCDNContent_Params
{
	struct FString                                     URL;                                                      // (ConstParm, Parm, ZeroConstructor)
	int                                                loaderType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     savedDir;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               breakpointContinualTransfer;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAsyncTaskCDNDownloader*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.AsyncTaskDownloader.DownloadContent
struct UAsyncTaskDownloader_DownloadContent_Params
{
	struct FString                                     URL;                                                      // (ConstParm, Parm, ZeroConstructor)
	int                                                loaderType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     savedDir;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               breakpointContinualTransfer;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAsyncTaskDownloader*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleScriptHelper.SyncNewBattlePlayer
struct UBattleScriptHelper_SyncNewBattlePlayer_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleScriptHelper.SyncGameInfo
struct UBattleScriptHelper_SyncGameInfo_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleGameInfo                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.BattleScriptHelper.SyncGameExit
struct UBattleScriptHelper_SyncGameExit_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleScriptHelper.SyncBattlePlayerExit
struct UBattleScriptHelper_SyncBattlePlayerExit_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Client.BattleScriptHelper.ResponPlayerWeaponDIYData
struct UBattleScriptHelper_ResponPlayerWeaponDIYData_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponDIYData                              InWeaponDIYData;                                          // (Parm)
};

// Function Client.BattleScriptHelper.GenerateAIPlayerParams
struct UBattleScriptHelper_GenerateAIPlayerParams_Params
{
	class UBattleUtils*                                Utils;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.BattlePlayer.ExtractGameModePlayerParams
struct UBattlePlayer_ExtractGameModePlayerParams_Params
{
	struct FGameModePlayerParams                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.BattleAIPlayer.ExtractGameModeAIPlayerParams
struct UBattleAIPlayer_ExtractGameModeAIPlayerParams_Params
{
	struct FGameModeAIPlayerParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.BattleUtils.SyncNewBattlePlayer
struct UBattleUtils_SyncNewBattlePlayer_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.SyncGameInfo
struct UBattleUtils_SyncGameInfo_Params
{
	struct FBattleGameInfo                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.BattleUtils.SyncGameExit
struct UBattleUtils_SyncGameExit_Params
{
};

// Function Client.BattleUtils.SyncBattlePlayerExit
struct UBattleUtils_SyncBattlePlayerExit_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Client.BattleUtils.RetrievePlayerParams
struct UBattleUtils_RetrievePlayerParams_Params
{
	struct FPlayerID                                   PlayerID;                                                 // (Parm)
	struct FGameModePlayerParams                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.BattleUtils.RetrieveAIPlayerParams
struct UBattleUtils_RetrieveAIPlayerParams_Params
{
	struct FPlayerID                                   PlayerID;                                                 // (Parm)
	struct FGameModeAIPlayerParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.BattleUtils.ResponPlayerWeaponDIYData
struct UBattleUtils_ResponPlayerWeaponDIYData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponDIYData                              InWeaponDIYData;                                          // (Parm)
};

// Function Client.BattleUtils.RequestSomePlayersBattleData
struct UBattleUtils_RequestSomePlayersBattleData_Params
{
	TArray<uint64_t>                                   PlayerUIDList;                                            // (Parm, ZeroConstructor)
	unsigned char                                      DataType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleUtils.RequestPlayerWeaponDIYData
struct UBattleUtils_RequestPlayerWeaponDIYData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSkinID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlanID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleUtils.RequestOnePlayersBattleData
struct UBattleUtils_RequestOnePlayersBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DataType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleUtils.RequestAllPlayersBattleData
struct UBattleUtils_RequestAllPlayersBattleData_Params
{
	unsigned char                                      DataType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleUtils.OnPostLoadMapWithWorld
struct UBattleUtils_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleUtils.NewBattlePlayer
struct UBattleUtils_NewBattlePlayer_Params
{
	class UBattlePlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.NewBattleAIPlayer
struct UBattleUtils_NewBattleAIPlayer_Params
{
	class UBattleAIPlayer*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.HandleGameModeStateChanged
struct UBattleUtils_HandleGameModeStateChanged_Params
{
	struct FGameModeStateChangedParams                 Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.BattleUtils.GetBattleGameMode
struct UBattleUtils_GetBattleGameMode_Params
{
	class AUAEGameMode*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.GenerateAIPlayerParams
struct UBattleUtils_GenerateAIPlayerParams_Params
{
	struct FPlayerInfoData                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.BattleUtils.FindPlayerByUID
struct UBattleUtils_FindPlayerByUID_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBattlePlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.FindPlayerByPlayerName
struct UBattleUtils_FindPlayerByPlayerName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBattlePlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleUtils.FindPlayerByPlayerKey
struct UBattleUtils_FindPlayerByPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBattlePlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BattleWindowMgr.ShowUI
struct UBattleWindowMgr_ShowUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WindowName;                                               // (Parm, ZeroConstructor)
	class UObject*                                     ObjectParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleWindowMgr.SetInstance
struct UBattleWindowMgr_SetInstance_Params
{
	class UBattleWindowMgrLuaUtils*                    InInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ULuaStateWrapper*                            InLuaStateWrapper;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BattleWindowMgr.HideUI
struct UBattleWindowMgr_HideUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WindowName;                                               // (Parm, ZeroConstructor)
};

// Function Client.BattleWindowMgr.CheckWindowOpen
struct UBattleWindowMgr_CheckWindowOpen_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WindowName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BugReporter.SendScreenShot
struct UBugReporter_SendScreenShot_Params
{
	struct FString                                     errorReason;                                              // (Parm, ZeroConstructor)
	struct FString                                     errorDescription;                                         // (Parm, ZeroConstructor)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BugReporter.SendLog
struct UBugReporter_SendLog_Params
{
	struct FString                                     errorReason;                                              // (Parm, ZeroConstructor)
	struct FString                                     errorDescription;                                         // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pullAll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               zipLogUpload;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BugReporter.ReadZipLog
struct UBugReporter_ReadZipLog_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.BugReporter.CompressLog
struct UBugReporter_CompressLog_Params
{
	bool                                               pullAllLog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.UIGetResWithPath
struct UBusinessHelper_UIGetResWithPath_Params
{
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManagerByName
struct UBusinessHelper_UIGetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManager
struct UBusinessHelper_UIGetLuaManager_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.StopUIStat
struct UBusinessHelper_StopUIStat_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
	bool                                               bReport;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BusinessHelper.StopTimeWatch
struct UBusinessHelper_StopTimeWatch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.StartUIStat
struct UBusinessHelper_StartUIStat_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
};

// Function Client.BusinessHelper.StartTimeWatch
struct UBusinessHelper_StartTimeWatch_Params
{
};

// Function Client.BusinessHelper.SetUIStatMaxClickTimes
struct UBusinessHelper_SetUIStatMaxClickTimes_Params
{
	int                                                Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BusinessHelper.ReportUIStat
struct UBusinessHelper_ReportUIStat_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
	bool                                               bGStatTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReport;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BusinessHelper.LoadAssetFromPath
struct UBusinessHelper_LoadAssetFromPath_Params
{
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsSplitMiniPakVersion
struct UBusinessHelper_IsSplitMiniPakVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsSplitMapPakVersion
struct UBusinessHelper_IsSplitMapPakVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsFit
struct UBusinessHelper_IsFit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsClassOf
struct UBusinessHelper_IsClassOf_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsCEVersion
struct UBusinessHelper_IsCEVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsAppFromStore
struct UBusinessHelper_IsAppFromStore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.HasDownloadedBasePak
struct UBusinessHelper_HasDownloadedBasePak_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetWidgetByName
struct UBusinessHelper_GetWidgetByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InWidgtName;                                              // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.GetTime
struct UBusinessHelper_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetSplitMapConfigInfo
struct UBusinessHelper_GetSplitMapConfigInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetPublishRegionID
struct UBusinessHelper_GetPublishRegionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetPublishRegion
struct UBusinessHelper_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetPackChannel
struct UBusinessHelper_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetOpenId
struct UBusinessHelper_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetMobileBasePath
struct UBusinessHelper_GetMobileBasePath_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetLuaManagerByName
struct UBusinessHelper_GetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetITopGameId
struct UBusinessHelper_GetITopGameId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetIMSDKEnv
struct UBusinessHelper_GetIMSDKEnv_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetDeviceQualityLevel
struct UBusinessHelper_GetDeviceQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetDeviceOrientation
struct UBusinessHelper_GetDeviceOrientation_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetDataTable
struct UBusinessHelper_GetDataTable_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetCurrentNetworkState
struct UBusinessHelper_GetCurrentNetworkState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetChildByName
struct UBusinessHelper_GetChildByName_Params
{
	class UUserWidget*                                 pParent;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.GetBuildURL
struct UBusinessHelper_GetBuildURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetBuildNo
struct UBusinessHelper_GetBuildNo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetBranchName
struct UBusinessHelper_GetBranchName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetBase64Key
struct UBusinessHelper_GetBase64Key_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetAppVersion
struct UBusinessHelper_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetAOSSHOPID
struct UBusinessHelper_GetAOSSHOPID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetAOSSHOP
struct UBusinessHelper_GetAOSSHOP_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.ClearDisplayLookupTable
struct UBusinessHelper_ClearDisplayLookupTable_Params
{
};

// Function Client.BusinessHelper.BroadCastMSG
struct UBusinessHelper_BroadCastMSG_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Client.BusinessHelper.AddKnownMissingPackage
struct UBusinessHelper_AddKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
	class UObject*                                     BindObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.IntlHelper.VlinkShowConversionWithGuest
struct UIntlHelper_VlinkShowConversionWithGuest_Params
{
};

// Function Client.IntlHelper.VlinkShowConversion
struct UIntlHelper_VlinkShowConversion_Params
{
};

// Function Client.IntlHelper.UpdateXGPushNightTag
struct UIntlHelper_UpdateXGPushNightTag_Params
{
	bool                                               bInit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.IntlHelper.UpdateXGPushDayTag
struct UIntlHelper_UpdateXGPushDayTag_Params
{
	bool                                               bInit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.IntlHelper.UpdateVoiceUrl
struct UIntlHelper_UpdateVoiceUrl_Params
{
	struct FString                                     regionVoiceUrl;                                           // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.UnInitTweenMaker
struct UIntlHelper_UnInitTweenMaker_Params
{
};

// Function Client.IntlHelper.TimeFormatString
struct UIntlHelper_TimeFormatString_Params
{
	struct FString                                     Format;                                                   // (Parm, ZeroConstructor)
	int                                                hours;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mins;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                secs;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.SaveXGTags
struct UIntlHelper_SaveXGTags_Params
{
	struct FString                                     Language;                                                 // (Parm, ZeroConstructor)
	struct FString                                     timezone;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.OnSwitchLanguage
struct UIntlHelper_OnSwitchLanguage_Params
{
};

// Function Client.IntlHelper.OnChoosingZone
struct UIntlHelper_OnChoosingZone_Params
{
	int                                                ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AddrIP;                                                   // (Parm, ZeroConstructor)
	struct FString                                     regionVoiceUrl;                                           // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.IsRemoteNotificationsEnabled
struct UIntlHelper_IsRemoteNotificationsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.IntlHelper.IsHelpshiftEnable4CurrentChannel
struct UIntlHelper_IsHelpshiftEnable4CurrentChannel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.IntlHelper.IsHelpshiftEnable
struct UIntlHelper_IsHelpshiftEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.IntlHelper.InitTweenMaker
struct UIntlHelper_InitTweenMaker_Params
{
};

// Function Client.IntlHelper.HelpshiftUploadLog
struct UIntlHelper_HelpshiftUploadLog_Params
{
};

// Function Client.IntlHelper.HelpshiftShowFAQsWithInfo
struct UIntlHelper_HelpshiftShowFAQsWithInfo_Params
{
};

// Function Client.IntlHelper.HelpshiftShowFAQs
struct UIntlHelper_HelpshiftShowFAQs_Params
{
};

// Function Client.IntlHelper.HelpshiftShowConversionWithInfo
struct UIntlHelper_HelpshiftShowConversionWithInfo_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Level;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Gold;                                                     // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.HelpshiftShowConversion
struct UIntlHelper_HelpshiftShowConversion_Params
{
};

// Function Client.IntlHelper.GetSavedXGTimezoneTag
struct UIntlHelper_GetSavedXGTimezoneTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetSavedXGRegionTag
struct UIntlHelper_GetSavedXGRegionTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetSavedXGPushNightTag
struct UIntlHelper_GetSavedXGPushNightTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetSavedXGPushDayTag
struct UIntlHelper_GetSavedXGPushDayTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetSavedXGLanguageTag
struct UIntlHelper_GetSavedXGLanguageTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetPlayerUCLevel
struct UIntlHelper_GetPlayerUCLevel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalTimezone
struct UIntlHelper_GetLocalTimezone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.IntlHelper.GetLocalizeStringWithString
struct UIntlHelper_GetLocalizeStringWithString_Params
{
	struct FString                                     sourceString;                                             // (Parm, ZeroConstructor)
	int                                                numStringIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     string1;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string4;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizeStringWithNum
struct UIntlHelper_GetLocalizeStringWithNum_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numStringIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     string1;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string4;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizeStrByStr
struct UIntlHelper_GetLocalizeStrByStr_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     string1;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string4;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizeStrByID
struct UIntlHelper_GetLocalizeStrByID_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     string1;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (Parm, ZeroConstructor)
	struct FString                                     string4;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizationStringWithID
struct UIntlHelper_GetLocalizationStringWithID_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizationString
struct UIntlHelper_GetLocalizationString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetLocalizationBattleStringWithID
struct UIntlHelper_GetLocalizationBattleStringWithID_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetHistoryErrorCode
struct UIntlHelper_GetHistoryErrorCode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.GetGameMasterVID
struct UIntlHelper_GetGameMasterVID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.FormatLocalizeStrByStr
struct UIntlHelper_FormatLocalizeStrByStr_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	TArray<struct FString>                             stringArr;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IntlHelper.DownloadTranslation
struct UIntlHelper_DownloadTranslation_Params
{
	struct FString                                     PatchName;                                                // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.DownloadServerList
struct UIntlHelper_DownloadServerList_Params
{
};

// Function Client.IntlHelper.DownloadCDNFile
struct UIntlHelper_DownloadCDNFile_Params
{
	struct FString                                     cdnUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     savePath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.IntlHelper.DirectToNotificationSetup
struct UIntlHelper_DirectToNotificationSetup_Params
{
};

// Function Client.IntlHelper.ClearAdjustDeepLink
struct UIntlHelper_ClearAdjustDeepLink_Params
{
};

// Function Client.IntlHelper.AdjustParaAnalysis
struct UIntlHelper_AdjustParaAnalysis_Params
{
};

// Function Client.IntlHelper.AddErrorCodeToHistory
struct UIntlHelper_AddErrorCodeToHistory_Params
{
	struct FString                                     InErrorCode;                                              // (Parm, ZeroConstructor)
};

// Function Client.TestHUD.TestFunctionNOParam
struct ATestHUD_TestFunctionNOParam_Params
{
};

// Function Client.TestHUD.TestFunctionBP_LUA
struct ATestHUD_TestFunctionBP_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.TestFunctionBP
struct ATestHUD_TestFunctionBP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_Lua
struct ATestHUD_Function_Lua_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus_Call
struct ATestHUD_Function_CPlus_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus
struct ATestHUD_Function_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_CPP
struct ATestHUD_Function_BP_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_LUA
struct ATestHUD_Function_BP_Call_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPP
struct ATestHUD_Function_BP_Call_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPlus
struct ATestHUD_Function_BP_Call_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call
struct ATestHUD_Function_BP_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP
struct ATestHUD_Function_BP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.CDNUpdate.StartUpdateApp
struct UCDNUpdate_StartUpdateApp_Params
{
};

// Function Client.CDNUpdate.StartAppUpdate
struct UCDNUpdate_StartAppUpdate_Params
{
	bool                                               StartGrayUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.CDNUpdate.OnRequestProgress
struct UCDNUpdate_OnRequestProgress_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.CDNUpdate.OnRequestComplete
struct UCDNUpdate_OnRequestComplete_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.CDNUpdate.IsUpdating
struct UCDNUpdate_IsUpdating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.CDNUpdate.IsGrayUpdate
struct UCDNUpdate_IsGrayUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.CDNUpdate.GetCurStage
struct UCDNUpdate_GetCurStage_Params
{
	float                                              percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetCurVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetMaxVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.CDNUpdate.FinishUpdate
struct UCDNUpdate_FinishUpdate_Params
{
};

// Function Client.CDNUpdate.ContinueUpdate
struct UCDNUpdate_ContinueUpdate_Params
{
};

// Function Client.CDNUpdate.CancelUpdate
struct UCDNUpdate_CancelUpdate_Params
{
};

// Function Client.CrashContextProcessor.TriggerLoginCrashTest
struct UCrashContextProcessor_TriggerLoginCrashTest_Params
{
};

// Function Client.CrashContextProcessor.TriggerLobbyCrashTest
struct UCrashContextProcessor_TriggerLobbyCrashTest_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.CrashContextProcessor.Initialize
struct UCrashContextProcessor_Initialize_Params
{
};

// Function Client.CrashContextProcessor.GetInstance
struct UCrashContextProcessor_GetInstance_Params
{
	class UCrashContextProcessor*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.CrashContextProcessor.AddAttachFileString
struct UCrashContextProcessor_AddAttachFileString_Params
{
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strinfo;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Client.GameBackendUtils.GetTableManager
struct UGameBackendUtils_GetTableManager_Params
{
	class UUAETableManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetUtils
struct UGameBackendHUD_GetUtils_Params
{
	class UGameBackendUtils*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetInstance
struct UGameBackendHUD_GetInstance_Params
{
	class UGameBackendHUD*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetGameFrontendHUDByGameInstance
struct UGameBackendHUD_GetGameFrontendHUDByGameInstance_Params
{
	class UGameInstance*                               GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetFirstGameFrontendHUD
struct UGameBackendHUD_GetFirstGameFrontendHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetWidget
struct UGameBusinessManager_GetWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetLuaObject
struct UGameBusinessManager_GetLuaObject_Params
{
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetGameFrontendHUD
struct UGameBusinessManager_GetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.VNGPostPersonalInfo
struct UGameFrontendHUD_VNGPostPersonalInfo_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     passportId;                                               // (Parm, ZeroConstructor)
	struct FString                                     email;                                                    // (Parm, ZeroConstructor)
	struct FString                                     phone;                                                    // (Parm, ZeroConstructor)
	struct FString                                     address;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
struct UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.TimeStatisticStop
struct UGameFrontendHUD_TimeStatisticStop_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.TimeStatisticStart
struct UGameFrontendHUD_TimeStatisticStart_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.TickUdpCollector
struct UGameFrontendHUD_TickUdpCollector_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.StatisVisibilityWidget
struct UGameFrontendHUD_StatisVisibilityWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Client.GameFrontendHUD.StatisLoadedTexture
struct UGameFrontendHUD_StatisLoadedTexture_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.StartGrayUpdate
struct UGameFrontendHUD_StartGrayUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.StartDolphinUpdateAfterCDNUpdateFailed
struct UGameFrontendHUD_StartDolphinUpdateAfterCDNUpdateFailed_Params
{
};

// Function Client.GameFrontendHUD.StartCDNUpdateAfterDolphinUpdateFailed
struct UGameFrontendHUD_StartCDNUpdateAfterDolphinUpdateFailed_Params
{
};

// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
struct UGameFrontendHUD_ShutdownUnrealNetwork_Params
{
};

// Function Client.GameFrontendHUD.SetShouldShowAdaptTipInLobby
struct UGameFrontendHUD_SetShouldShowAdaptTipInLobby_Params
{
	bool                                               bShoudShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.SetGameSubMode
struct UGameFrontendHUD_SetGameSubMode_Params
{
	struct FString                                     SubMode;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.SetGameStatusMap
struct UGameFrontendHUD_SetGameStatusMap_Params
{
	TMap<struct FName, struct FString>                 InGameStatusMap;                                          // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.SetClientEnterBattleStage
struct UGameFrontendHUD_SetClientEnterBattleStage_Params
{
	struct FString                                     InStageStr;                                               // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.SetAccountByWebLogin
struct UGameFrontendHUD_SetAccountByWebLogin_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     TokenID;                                                  // (Parm, ZeroConstructor)
	int                                                ExpireTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.SaveUserSettingsByDelegate
struct UGameFrontendHUD_SaveUserSettingsByDelegate_Params
{
	class USaveGame*                                   SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LayoutName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.RetryDownload
struct UGameFrontendHUD_RetryDownload_Params
{
};

// Function Client.GameFrontendHUD.RetryCDNDownload
struct UGameFrontendHUD_RetryCDNDownload_Params
{
};

// Function Client.GameFrontendHUD.ResetUserSettings
struct UGameFrontendHUD_ResetUserSettings_Params
{
};

// Function Client.GameFrontendHUD.ReleaseBattleUtils
struct UGameFrontendHUD_ReleaseBattleUtils_Params
{
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Int_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Float_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Enum_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Bool_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
struct UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnWebviewNotify
struct UGameFrontendHUD_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnWebviewActionNotify
struct UGameFrontendHUD_OnWebviewActionNotify_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnUAAssistantEvent
struct UGameFrontendHUD_OnUAAssistantEvent_Params
{
	struct FUAAssistantInfoWrapper                     UAAssistentInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnSDKCallbackEvent
struct UGameFrontendHUD_OnSDKCallbackEvent_Params
{
	struct FSDKCallbackInfoWrapper                     sdkCallbackInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnRequestComplete
struct UGameFrontendHUD_OnRequestComplete_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnRefreshAccountInfo
struct UGameFrontendHUD_OnRefreshAccountInfo_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnQuickLoginNotify
struct UGameFrontendHUD_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnPlatformFriendNotify
struct UGameFrontendHUD_OnPlatformFriendNotify_Params
{
	struct FPlatformFriendInfoMap                      PlatformFriendInfoMap;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnNotUpdateFinished
struct UGameFrontendHUD_OnNotUpdateFinished_Params
{
};

// Function Client.GameFrontendHUD.OnLoginFlowNotify
struct UGameFrontendHUD_OnLoginFlowNotify_Params
{
	int                                                _Flow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _Param;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraData;                                                // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnHttpImgResponse
struct UGameFrontendHUD_OnHttpImgResponse_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UImageDownloader*                            downloader;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnGroupNotify
struct UGameFrontendHUD_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnGetShortUrlNotify
struct UGameFrontendHUD_OnGetShortUrlNotify_Params
{
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShortUrl;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnGetCountryNoNotify
struct UGameFrontendHUD_OnGetCountryNoNotify_Params
{
	int                                                country;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnGenQRImgNotify
struct UGameFrontendHUD_OnGenQRImgNotify_Params
{
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnGCloudNetStateChangeNotify
struct UGameFrontendHUD_OnGCloudNetStateChangeNotify_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventParam1;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventParam2;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventParam3;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnGameMasterEvent
struct UGameFrontendHUD_OnGameMasterEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnCheckUpdateStateFinished
struct UGameFrontendHUD_OnCheckUpdateStateFinished_Params
{
	struct FDownloaderInfo                             Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.NotifyLoadingUIOperation
struct UGameFrontendHUD_NotifyLoadingUIOperation_Params
{
	int                                                OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.MakeToSuppotAdaptation
struct UGameFrontendHUD_MakeToSuppotAdaptation_Params
{
	class UPanelSlot*                                  PanelSlot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Client.GameFrontendHUD.LuaDoString
struct UGameFrontendHUD_LuaDoString_Params
{
	struct FString                                     LuaString;                                                // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.IsWindowOB
struct UGameFrontendHUD_IsWindowOB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.IsInstallPlatform
struct UGameFrontendHUD_IsInstallPlatform_Params
{
	struct FString                                     Platform;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.IsCEHideLobbyUI
struct UGameFrontendHUD_IsCEHideLobbyUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.HasAnyNetMsgToHandle
struct UGameFrontendHUD_HasAnyNetMsgToHandle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetWidgetRenderCanChange
struct UGameFrontendHUD_GetWidgetRenderCanChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUserSettingsProperty_Int
struct UGameFrontendHUD_GetUserSettingsProperty_Int_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUserSettingsProperty_Bool
struct UGameFrontendHUD_GetUserSettingsProperty_Bool_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUserSettingsByDelegate
struct UGameFrontendHUD_GetUserSettingsByDelegate_Params
{
	struct FString                                     LayoutName;                                               // (Parm, ZeroConstructor)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUserSettings
struct UGameFrontendHUD_GetUserSettings_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUpdater
struct UGameFrontendHUD_GetUpdater_Params
{
	class UGDolphinUpdater*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetTranslator
struct UGameFrontendHUD_GetTranslator_Params
{
	class UTranslator*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetShouldShowAdaptTipInLobby
struct UGameFrontendHUD_GetShouldShowAdaptTipInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetPufferDownloader
struct UGameFrontendHUD_GetPufferDownloader_Params
{
	class UGCPufferDownloader*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetPingReportInfo
struct UGameFrontendHUD_GetPingReportInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetPacketLossReportInfo
struct UGameFrontendHUD_GetPacketLossReportInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetLuaStateWrapper
struct UGameFrontendHUD_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetLuaEventBridge
struct UGameFrontendHUD_GetLuaEventBridge_Params
{
	class ULuaEventBridge*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetLuaBlueprintSysMgr
struct UGameFrontendHUD_GetLuaBlueprintSysMgr_Params
{
	class ULuaBlueprintMgr*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetGVoiceInterface
struct UGameFrontendHUD_GetGVoiceInterface_Params
{
	class UGVoiceInterface*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetGameSubMode
struct UGameFrontendHUD_GetGameSubMode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetGameState
struct UGameFrontendHUD_GetGameState_Params
{
	class AGameStateBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetFPSReportInfo
struct UGameFrontendHUD_GetFPSReportInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetEffectSettingMgr
struct UGameFrontendHUD_GetEffectSettingMgr_Params
{
	class UEffectSettingMgr*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetDetailNetInfoFromGCloud
struct UGameFrontendHUD_GetDetailNetInfoFromGCloud_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetCustomSetting
struct UGameFrontendHUD_GetCustomSetting_Params
{
	struct FString                                     InSlotName;                                               // (Parm, ZeroConstructor)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetColorBlindnessMgr
struct UGameFrontendHUD_GetColorBlindnessMgr_Params
{
	class UColorBlindnessMgr*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetClientNetObj
struct UGameFrontendHUD_GetClientNetObj_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetClientEnterBattleStage
struct UGameFrontendHUD_GetClientEnterBattleStage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetBugReporter
struct UGameFrontendHUD_GetBugReporter_Params
{
	class UBugReporter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetBattleUtils
struct UGameFrontendHUD_GetBattleUtils_Params
{
	class UBattleUtils*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetBattleIDHexStr
struct UGameFrontendHUD_GetBattleIDHexStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.GetAutoRunModID
struct UGameFrontendHUD_GetAutoRunModID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetAsyncLoadHelper
struct UGameFrontendHUD_GetAsyncLoadHelper_Params
{
	class UAsyncLoadHelper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.FinishModifyUserSettings
struct UGameFrontendHUD_FinishModifyUserSettings_Params
{
};

// Function Client.GameFrontendHUD.EnableFPSAndMemoryLog
struct UGameFrontendHUD_EnableFPSAndMemoryLog_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.DispatchLongTimeNoOperation
struct UGameFrontendHUD_DispatchLongTimeNoOperation_Params
{
	int                                                TimeOutCounter;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.DispatchConfirmMisKill
struct UGameFrontendHUD_DispatchConfirmMisKill_Params
{
	struct FString                                     KillerName;                                               // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.CreateBattleUtils
struct UGameFrontendHUD_CreateBattleUtils_Params
{
};

// Function Client.GameFrontendHUD.ClearUIElemSettings
struct UGameFrontendHUD_ClearUIElemSettings_Params
{
};

// Function Client.GameFrontendHUD.CheckLocalizationLanguage
struct UGameFrontendHUD_CheckLocalizationLanguage_Params
{
};

// Function Client.GameFrontendHUD.CallGlobalScriptFunction
struct UGameFrontendHUD_CallGlobalScriptFunction_Params
{
	struct FString                                     InFunctionName;                                           // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.BeginModifyUserSettings
struct UGameFrontendHUD_BeginModifyUserSettings_Params
{
};

// Function Client.GameFrontendHUD.BattleUtilsGameEnd
struct UGameFrontendHUD_BattleUtilsGameEnd_Params
{
};

// Function Client.GameFrontendHUD.AfterLoadedEditorLogin
struct UGameFrontendHUD_AfterLoadedEditorLogin_Params
{
};

// Function Client.GameFrontendHUD.AddCustomSetting
struct UGameFrontendHUD_AddCustomSetting_Params
{
	struct FString                                     InSlotName;                                               // (Parm, ZeroConstructor)
	class USaveGame*                                   InSaveGame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.AddAdaptationWidgetDelegateEx
struct UGameFrontendHUD_AddAdaptationWidgetDelegateEx_Params
{
	class UPanelSlot*                                  PanelSlot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Client.GameFrontendHUD.AddAdaptationWidgetDelegate
struct UGameFrontendHUD_AddAdaptationWidgetDelegate_Params
{
	class UPanelSlot*                                  PanelSlot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Client.GameJoyInterface.ShareVideo
struct UGameJoyInterface_ShareVideo_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.SetGameFrontendHUD
struct UGameJoyInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnVideoShare
struct UGameJoyInterface_OnVideoShare_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Client.GameJoyInterface.OnShowVideoPlayer
struct UGameJoyInterface_OnShowVideoPlayer_Params
{
	int                                                IsShow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnRecordingStart
struct UGameJoyInterface_OnRecordingStart_Params
{
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnRecordingEnd
struct UGameJoyInterface_OnRecordingEnd_Params
{
	int64_t                                            Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnManualRecordingStart
struct UGameJoyInterface_OnManualRecordingStart_Params
{
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnCheckSDKPermission
struct UGameJoyInterface_OnCheckSDKPermission_Params
{
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnCheckSDKFeature
struct UGameJoyInterface_OnCheckSDKFeature_Params
{
	int                                                sdkFeatureInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.IsSDKFeatureSupport
struct UGameJoyInterface_IsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.GetInstance
struct UGameJoyInterface_GetInstance_Params
{
	class UGameJoyInterface*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.StartAppUpdate
struct UGDolphinUpdater_StartAppUpdate_Params
{
};

// Function Client.GDolphinUpdater.SetEnableCDNGetVersion
struct UGDolphinUpdater_SetEnableCDNGetVersion_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GDolphinUpdater.OnUpdateError
struct UGDolphinUpdater_OnUpdateError_Params
{
	int                                                curVersionStage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GDolphinUpdater.OnDolphinBGDownloadDone
struct UGDolphinUpdater_OnDolphinBGDownloadDone_Params
{
};

// Function Client.GDolphinUpdater.IsUpdating
struct UGDolphinUpdater_IsUpdating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.IsGrayUpdate
struct UGDolphinUpdater_IsGrayUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.IsExamine
struct UGDolphinUpdater_IsExamine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.Install
struct UGDolphinUpdater_Install_Params
{
};

// Function Client.GDolphinUpdater.GetTotalValue
struct UGDolphinUpdater_GetTotalValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.GetCurValue
struct UGDolphinUpdater_GetCurValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.GetCurStage
struct UGDolphinUpdater_GetCurStage_Params
{
	float                                              percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetCurVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetMaxVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.GetCurPercent
struct UGDolphinUpdater_GetCurPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.GetChannelIDWithHUD
struct UGDolphinUpdater_GetChannelIDWithHUD_Params
{
	class UGameFrontendHUD*                            InGameFrontendHUD;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.GetChannelID
struct UGDolphinUpdater_GetChannelID_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.FinishUpdate
struct UGDolphinUpdater_FinishUpdate_Params
{
};

// Function Client.GDolphinUpdater.FinishPufferUpdate
struct UGDolphinUpdater_FinishPufferUpdate_Params
{
};

// Function Client.GDolphinUpdater.EnableIOSBGDownload4G
struct UGDolphinUpdater_EnableIOSBGDownload4G_Params
{
	bool                                               bEnableCellularAccess;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GDolphinUpdater.EnableCDNGetVersion
struct UGDolphinUpdater_EnableCDNGetVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.ContinueUpdate
struct UGDolphinUpdater_ContinueUpdate_Params
{
};

// Function Client.GDolphinUpdater.CancelUpdate
struct UGDolphinUpdater_CancelUpdate_Params
{
};

// Function Client.GDolphinUpdater.CancelAppUpdate
struct UGDolphinUpdater_CancelAppUpdate_Params
{
};

// Function Client.IMSDKNotice.GetNotice
struct UIMSDKNotice_GetNotice_Params
{
	struct FString                                     Scene;                                                    // (Parm, ZeroConstructor)
	TArray<struct FIMSDKNoticeInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.IMSDKNotice.GetInstance
struct UIMSDKNotice_GetInstance_Params
{
	class UIMSDKNotice*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.IMSDKNotice.ClearNotice
struct UIMSDKNotice_ClearNotice_Params
{
};

// Function Client.AvatarItemDownloadPuffer.StartDownloadItem
struct UAvatarItemDownloadPuffer_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnItemDownloadDelegate;                                   // (Parm, ZeroConstructor)
};

// Function Client.AvatarItemDownloadPuffer.StartBatchDownloadItem
struct UAvatarItemDownloadPuffer_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  // (Parm, ZeroConstructor)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.StopTask
struct UGCPufferDownloader_StopTask_Params
{
	uint64_t                                           TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.StopMergeBinDiffPak
struct UGCPufferDownloader_StopMergeBinDiffPak_Params
{
	int                                                outterTaskID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.StopCheckDownloadFileFraming
struct UGCPufferDownloader_StopCheckDownloadFileFraming_Params
{
	int                                                outterTaskID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.StopBGDownloadNotification
struct UGCPufferDownloader_StopBGDownloadNotification_Params
{
};

// Function Client.GCPufferDownloader.StopAllTask
struct UGCPufferDownloader_StopAllTask_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.StartDownloadItem
struct UGCPufferDownloader_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             downloadDelegate;                                         // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.StartBGDownloadNotification
struct UGCPufferDownloader_StartBGDownloadNotification_Params
{
	uint64_t                                           InDownloadedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GCPufferDownloader.StartBatchDownloadItem
struct UGCPufferDownloader_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  // (Parm, ZeroConstructor)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.SetTempProductIdBase
struct UGCPufferDownloader_SetTempProductIdBase_Params
{
	int                                                ProductIdRaw;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GCPufferDownloader.SetTempProductId
struct UGCPufferDownloader_SetTempProductId_Params
{
	struct FString                                     ProductIdRaw;                                             // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.SetPrefetchConfig
struct UGCPufferDownloader_SetPrefetchConfig_Params
{
	bool                                               pakEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fileClearEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               convertEnable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reserveredDiskSpace;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileList;                                                 // (Parm, ZeroConstructor)
	int                                                InPreFetchODPaksMaxNum;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InPreFetchODPaksBatchSize;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GCPufferDownloader.SetIOSBGDownloadAttribute
struct UGCPufferDownloader_SetIOSBGDownloadAttribute_Params
{
	bool                                               bEnableCellularAccess;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableResumeData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nMinFileSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nMaxTasks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GCPufferDownloader.SetImmDLMaxSpeed
struct UGCPufferDownloader_SetImmDLMaxSpeed_Params
{
	uint64_t                                           MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ReturnSplitMiniPakFilelist_LuaState
struct UGCPufferDownloader_ReturnSplitMiniPakFilelist_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ReturnLocalFiles_LuaState
struct UGCPufferDownloader_ReturnLocalFiles_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.RequestFile
struct UGCPufferDownloader_RequestFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.RemountPakFiles
struct UGCPufferDownloader_RemountPakFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ReadFile
struct UGCPufferDownloader_ReadFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCPufferDownloader.PreFetchPakFiles
struct UGCPufferDownloader_PreFetchPakFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.PreFetchODPakFilesUpdate
struct UGCPufferDownloader_PreFetchODPakFilesUpdate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.PreFetchODPakFilesPreProcess
struct UGCPufferDownloader_PreFetchODPakFilesPreProcess_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.PreFetchODPakFilesPostProcess
struct UGCPufferDownloader_PreFetchODPakFilesPostProcess_Params
{
	int                                                ErrorCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.PreFetchODPakFiles
struct UGCPufferDownloader_PreFetchODPakFiles_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.OnItemDownloadedInFighting
struct UGCPufferDownloader_OnItemDownloadedInFighting_Params
{
	struct FString                                     PackHash;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ErrorCode;                                                // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.OnHashGenerateFinished
struct UGCPufferDownloader_OnHashGenerateFinished_Params
{
	int                                                outterTaskID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     hashCode;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.MoveFileTo
struct UGCPufferDownloader_MoveFileTo_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     from;                                                     // (Parm, ZeroConstructor)
	struct FString                                     to;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.MoveFile
struct UGCPufferDownloader_MoveFile_Params
{
	struct FString                                     from;                                                     // (Parm, ZeroConstructor)
	struct FString                                     to;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.MergeBinDiffPak
struct UGCPufferDownloader_MergeBinDiffPak_Params
{
	int                                                outterTaskID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PakFilenameOld;                                           // (Parm, ZeroConstructor)
	struct FString                                     PakFilenameDiff;                                          // (Parm, ZeroConstructor)
	struct FString                                     PakFilenameNew;                                           // (Parm, ZeroConstructor)
	bool                                               fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.IsODPaks
struct UGCPufferDownloader_IsODPaks_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.IsODFileExists
struct UGCPufferDownloader_IsODFileExists_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.IsInitSuccess
struct UGCPufferDownloader_IsInitSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.IsFileReady
struct UGCPufferDownloader_IsFileReady_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.IsFileExist
struct UGCPufferDownloader_IsFileExist_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     extension;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.InitializeODPaks
struct UGCPufferDownloader_InitializeODPaks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetTempWorkPath
struct UGCPufferDownloader_GetTempWorkPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCPufferDownloader.GetProductIDBase
struct UGCPufferDownloader_GetProductIDBase_Params
{
	TArray<int>                                        ProductIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.GetProductID
struct UGCPufferDownloader_GetProductID_Params
{
	TArray<int>                                        ProductIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Client.GCPufferDownloader.GetODPakNum
struct UGCPufferDownloader_GetODPakNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetODPakName
struct UGCPufferDownloader_GetODPakName_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCPufferDownloader.GetInitErrcode
struct UGCPufferDownloader_GetInitErrcode_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetFileSizeCompressed
struct UGCPufferDownloader_GetFileSizeCompressed_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetFileSize
struct UGCPufferDownloader_GetFileSize_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetDownloadPath
struct UGCPufferDownloader_GetDownloadPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCPufferDownloader.GetCurrentSpeed
struct UGCPufferDownloader_GetCurrentSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.GetBatchODPaksDownloadList_LuaState
struct UGCPufferDownloader_GetBatchODPaksDownloadList_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.EnableUseOldInterface
struct UGCPufferDownloader_EnableUseOldInterface_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GCPufferDownloader.DeleteFileEvenIfUnfinished
struct UGCPufferDownloader_DeleteFileEvenIfUnfinished_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.DeleteFile
struct UGCPufferDownloader_DeleteFile_Params
{
	struct FString                                     fullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ConvertPreFetchFiles
struct UGCPufferDownloader_ConvertPreFetchFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ConvertItemIdToPakName
struct UGCPufferDownloader_ConvertItemIdToPakName_Params
{
	uint32_t                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCPufferDownloader.ClearUselessODPaks
struct UGCPufferDownloader_ClearUselessODPaks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ClearPreFetchODPaksFiles
struct UGCPufferDownloader_ClearPreFetchODPaksFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.ClearPreFetchFiles
struct UGCPufferDownloader_ClearPreFetchFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCPufferDownloader.CheckDownloadFileFraming
struct UGCPufferDownloader_CheckDownloadFileFraming_Params
{
	int                                                outterTaskID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                chunkSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GMLogShare.ShareLogFile
struct UGMLogShare_ShareLogFile_Params
{
};

// Function Client.GMLogShare.Init
struct UGMLogShare_Init_Params
{
};

// Function Client.GVoiceInterface.UploadRecordFile
struct UGVoiceInterface_UploadRecordFile_Params
{
};

// Function Client.GVoiceInterface.TestMic
struct UGVoiceInterface_TestMic_Params
{
};

// Function Client.GVoiceInterface.TeamSpeakerEnable
struct UGVoiceInterface_TeamSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.TeamMicphoneEnable
struct UGVoiceInterface_TeamMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.SwitchMode
struct UGVoiceInterface_SwitchMode_Params
{
	ECharacterMainType                                 CharMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SwitchMicphoneWhenCorpsMode
struct UGVoiceInterface_SwitchMicphoneWhenCorpsMode_Params
{
};

// Function Client.GVoiceInterface.SwitchCampRoom
struct UGVoiceInterface_SwitchCampRoom_Params
{
	ECharacterMainType                                 campMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.StopRecord
struct UGVoiceInterface_StopRecord_Params
{
};

// Function Client.GVoiceInterface.StopPlayRecordFile
struct UGVoiceInterface_StopPlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.StopInterphone
struct UGVoiceInterface_StopInterphone_Params
{
};

// Function Client.GVoiceInterface.StopCampMode
struct UGVoiceInterface_StopCampMode_Params
{
};

// Function Client.GVoiceInterface.StartRecord
struct UGVoiceInterface_StartRecord_Params
{
};

// Function Client.GVoiceInterface.StartInterphone
struct UGVoiceInterface_StartInterphone_Params
{
};

// Function Client.GVoiceInterface.StartCampMode
struct UGVoiceInterface_StartCampMode_Params
{
	struct FString                                     ZombieCampRoomName;                                       // (Parm, ZeroConstructor)
	struct FString                                     ManCampRoomName;                                          // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.SpeechToText
struct UGVoiceInterface_SpeechToText_Params
{
};

// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
struct UGVoiceInterface_ShowOpenSpeakerAtFirstMsg_Params
{
};

// Function Client.GVoiceInterface.ShowCorpsModeCannotUseLBSVoice
struct UGVoiceInterface_ShowCorpsModeCannotUseLBSVoice_Params
{
};

// Function Client.GVoiceInterface.SetVoiceMode
struct UGVoiceInterface_SetVoiceMode_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerVolum
struct UGVoiceInterface_SetSpeakerVolum_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerStatus
struct UGVoiceInterface_SetSpeakerStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetPlayerVolume
struct UGVoiceInterface_SetPlayerVolume_Params
{
	struct FString                                     InPlayerid;                                               // (Parm, ZeroConstructor)
	int                                                InVol;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneVolum
struct UGVoiceInterface_SetMicphoneVolum_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneStatus
struct UGVoiceInterface_SetMicphoneStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsVoiceRadius
struct UGVoiceInterface_SetLbsVoiceRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
struct UGVoiceInterface_SetLbsRoomEnableStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetGameFrontendHUD
struct UGVoiceInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetCurrentDownloadFieldID
struct UGVoiceInterface_SetCurrentDownloadFieldID_Params
{
	struct FString                                     filedId;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.SetAllVoiceStatus
struct UGVoiceInterface_SetAllVoiceStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.ResetWhenLogOut
struct UGVoiceInterface_ResetWhenLogOut_Params
{
};

// Function Client.GVoiceInterface.ReportPlayers
struct UGVoiceInterface_ReportPlayers_Params
{
	struct FString                                     InExtraInfo;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.ReactiveLbsStatus
struct UGVoiceInterface_ReactiveLbsStatus_Params
{
};

// Function Client.GVoiceInterface.QuitTempLbsRoom
struct UGVoiceInterface_QuitTempLbsRoom_Params
{
	struct FString                                     roomStr;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.QuitRoom
struct UGVoiceInterface_QuitRoom_Params
{
};

// Function Client.GVoiceInterface.PlayRecordFile
struct UGVoiceInterface_PlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
struct UGVoiceInterface_OpenTeamSpeakerOnly_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
struct UGVoiceInterface_OpenTeamMicphoneOnly_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenTeamInterphone
struct UGVoiceInterface_OpenTeamInterphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenSpeakerByTempLbs
struct UGVoiceInterface_OpenSpeakerByTempLbs_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenSpeaker
struct UGVoiceInterface_OpenSpeaker_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenMicByTempLbs
struct UGVoiceInterface_OpenMicByTempLbs_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinLbsRoom
struct UGVoiceInterface_OpenMicAndSpeakerAfterJoinLbsRoom_Params
{
};

// Function Client.GVoiceInterface.OpenMic
struct UGVoiceInterface_OpenMic_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenIngameSpeaker
struct UGVoiceInterface_OpenIngameSpeaker_Params
{
};

// Function Client.GVoiceInterface.OpenIngameMicphone
struct UGVoiceInterface_OpenIngameMicphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllSpeaker
struct UGVoiceInterface_OpenAllSpeaker_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllMicphone
struct UGVoiceInterface_OpenAllMicphone_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllInterphone
struct UGVoiceInterface_OpenAllInterphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OnRoomTypeChanged
struct UGVoiceInterface_OnRoomTypeChanged_Params
{
	struct FString                                     itemtext;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.LbsSpeakerEnable
struct UGVoiceInterface_LbsSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.LbsMicphoneEnable
struct UGVoiceInterface_LbsMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.JoinTempLbsRoom
struct UGVoiceInterface_JoinTempLbsRoom_Params
{
	struct FString                                     room;                                                     // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.JoinRoom
struct UGVoiceInterface_JoinRoom_Params
{
	struct FString                                     room;                                                     // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.JoinLbsRoom
struct UGVoiceInterface_JoinLbsRoom_Params
{
	struct FString                                     lbsRoom;                                                  // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.IsTeamInterphoneOpenned
struct UGVoiceInterface_IsTeamInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.IsLbsInterphoneOpenned
struct UGVoiceInterface_IsLbsInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.IsInterphoneMode
struct UGVoiceInterface_IsInterphoneMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.InitGVoiceComponent
struct UGVoiceInterface_InitGVoiceComponent_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.HaveTeamRoom
struct UGVoiceInterface_HaveTeamRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.HaveLbsRoom
struct UGVoiceInterface_HaveLbsRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetVoiceLength
struct UGVoiceInterface_GetVoiceLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetPlayerVolume
struct UGVoiceInterface_GetPlayerVolume_Params
{
	struct FString                                     InPlayerid;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetAuthKey
struct UGVoiceInterface_GetAuthKey_Params
{
};

// Function Client.GVoiceInterface.ForbidTeammateVoiceById
struct UGVoiceInterface_ForbidTeammateVoiceById_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.EnbleMicAndSpeakerByRoomName
struct UGVoiceInterface_EnbleMicAndSpeakerByRoomName_Params
{
	struct FString                                     roomName;                                                 // (Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.EnableReportALLAbroad
struct UGVoiceInterface_EnableReportALLAbroad_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InWithEncryption;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTimeout;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.DownloadRecordFile
struct UGVoiceInterface_DownloadRecordFile_Params
{
};

// Function Client.GVoiceInterface.CommonTestMic
struct UGVoiceInterface_CommonTestMic_Params
{
};

// Function Client.GVoiceInterface.CloseSpeaker
struct UGVoiceInterface_CloseSpeaker_Params
{
};

// Function Client.GVoiceInterface.CloseMic
struct UGVoiceInterface_CloseMic_Params
{
};

// Function Client.GVoiceInterface.CloseIngameSpeaker
struct UGVoiceInterface_CloseIngameSpeaker_Params
{
};

// Function Client.GVoiceInterface.CloseIngameMicphone
struct UGVoiceInterface_CloseIngameMicphone_Params
{
};

// Function Client.GVoiceInterface.CloseAllSpeaker
struct UGVoiceInterface_CloseAllSpeaker_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.CloseAllMicphone
struct UGVoiceInterface_CloseAllMicphone_Params
{
	bool                                               ShowTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.CheckAndEnableRoomSpeaker
struct UGVoiceInterface_CheckAndEnableRoomSpeaker_Params
{
};

// Function Client.GVoiceInterface.ChatShowAgeRestrictionMsgInLobby
struct UGVoiceInterface_ChatShowAgeRestrictionMsgInLobby_Params
{
};

// Function Client.GVoiceInterface.ChatShowAgeRestrictionMsgInFighting
struct UGVoiceInterface_ChatShowAgeRestrictionMsgInFighting_Params
{
};

// Function Client.GVoiceInterface.ChatShowAgeRestrictionMsgInChat
struct UGVoiceInterface_ChatShowAgeRestrictionMsgInChat_Params
{
};

// Function Client.GVoiceInterface.ChatRequestPrivacyInSetting
struct UGVoiceInterface_ChatRequestPrivacyInSetting_Params
{
};

// Function Client.GVoiceInterface.ChatRequestPrivacyInGame
struct UGVoiceInterface_ChatRequestPrivacyInGame_Params
{
};

// Function Client.HotUpdater.OnGetVersionData
struct UHotUpdater_OnGetVersionData_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.HotUpdater.OnDownloadedOneFile
struct UHotUpdater_OnDownloadedOneFile_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.Translator.TranslateV2
struct UTranslator_TranslateV2_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Client.Translator.Translate
struct UTranslator_Translate_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Verb;                                                     // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               Headers;                                                  // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.Translator.PostWithHead
struct UTranslator_PostWithHead_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               Headers;                                                  // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.Translator.PostMsg
struct UTranslator_PostMsg_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnTranslateV2
struct UTranslator_OnTranslateV2_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// DelegateFunction Client.Translator.OnTranslate__DelegateSignature
struct UTranslator_OnTranslate__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LanguageFrom;                                             // (Parm, ZeroConstructor)
	struct FString                                     Translation;                                              // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnTranslate
struct UTranslator_OnTranslate_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// DelegateFunction Client.Translator.OnPostResponse__DelegateSignature
struct UTranslator_OnPostResponse__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnGetAccessTokenV2
struct UTranslator_OnGetAccessTokenV2_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// DelegateFunction Client.Translator.OnGetAccessToken__DelegateSignature
struct UTranslator_OnGetAccessToken__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Token;                                                    // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnGetAccessToken
struct UTranslator_OnGetAccessToken_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnDetectV2
struct UTranslator_OnDetectV2_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// DelegateFunction Client.Translator.OnDetect__DelegateSignature
struct UTranslator_OnDetect__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     from;                                                     // (Parm, ZeroConstructor)
	struct FString                                     to;                                                       // (Parm, ZeroConstructor)
};

// Function Client.Translator.OnDetect
struct UTranslator_OnDetect_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function Client.Translator.HasTranslating
struct UTranslator_HasTranslating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.Translator.GetAccessToken
struct UTranslator_GetAccessToken_Params
{
	bool                                               bForceGet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Verb;                                                     // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               Headers;                                                  // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.Translator.Detect
struct UTranslator_Detect_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Verb;                                                     // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               Headers;                                                  // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.Start
struct UImageDownloader_Start_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.MakeDownloaderInGame
struct UImageDownloader_MakeDownloaderInGame_Params
{
	class UImageDownloader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ImageDownloader.MakeDownloader
struct UImageDownloader_MakeDownloader_Params
{
	class UImageDownloader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ImageDownloader.GetTextureFromUrlWithoutDownload
struct UImageDownloader_GetTextureFromUrlWithoutDownload_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.InGameUIManager.SubUIWidgetListWithMountData
struct UInGameUIManager_SubUIWidgetListWithMountData_Params
{
	TArray<struct FInGameWidgetData>                   InGameWidgetDataList;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               InPersistentUI;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUsedByControler;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOberverOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                inUIControlState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.SubUIWidgetList
struct UInGameUIManager_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               InPersistentUI;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUsedByControler;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOberverOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.SubDynamicUIWidgetList
struct UInGameUIManager_SubDynamicUIWidgetList_Params
{
	TArray<struct FDynamicWidgetData>                  DynamicWidgetMap;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.InGameUIManager.OnAsyncLoadWidgetClassObj
struct UInGameUIManager_OnAsyncLoadWidgetClassObj_Params
{
	class UObject*                                     InClassObj;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.HandleUIMessage
struct UInGameUIManager_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.InGameUIManager.HandleMountWidget
struct UInGameUIManager_HandleMountWidget_Params
{
	class UInGameUIManager*                            IngameManager;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.HandleDynamicDestroy
struct UInGameUIManager_HandleDynamicDestroy_Params
{
};

// Function Client.InGameUIManager.HandleDynamicCreation
struct UInGameUIManager_HandleDynamicCreation_Params
{
	bool                                               isAsyncLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.GetWidgetHandleAsyncWithCallBack
struct UInGameUIManager_GetWidgetHandleAsyncWithCallBack_Params
{
	struct FString                                     WidgetKey;                                                // (Parm, ZeroConstructor)
	struct FScriptDelegate                             InCallback;                                               // (Parm, ZeroConstructor)
};

// Function Client.InGameUIManager.GetWidgetHandle
struct UInGameUIManager_GetWidgetHandle_Params
{
	struct FString                                     WidgetKey;                                                // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.InGameUIManager.ChangeSubUIWidgetList
struct UInGameUIManager_ChangeSubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LiveBroadcast.SetFullScreen
struct ULiveBroadcast_SetFullScreen_Params
{
	bool                                               FullScreen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LiveBroadcast.OpenLiveBroadcast
struct ULiveBroadcast_OpenLiveBroadcast_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	float                                              Margin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LiveBroadcast.GetInstance
struct ULiveBroadcast_GetInstance_Params
{
	class ULiveBroadcast*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LiveBroadcast.CloseWebView
struct ULiveBroadcast_CloseWebView_Params
{
};

// Function Client.LiveBroadcast.C2JSetString
struct ULiveBroadcast_C2JSetString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
};

// Function Client.LiveBroadcast.C2JSetIndex
struct ULiveBroadcast_C2JSetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LoadTexture.LoadTexture2D
struct ULoadTexture_LoadTexture2D_Params
{
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LoadTexture.GetTexture2DFromDiskFile
struct ULoadTexture_GetTexture2DFromDiskFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintLibrary.StringToLVar
struct ULuaBlueprintLibrary_StringToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.LuaBlueprintLibrary.ObjectToLVar
struct ULuaBlueprintLibrary_ObjectToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     O;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.LuaBlueprintLibrary.LVarToString
struct ULuaBlueprintLibrary_LVarToString_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaBlueprintLibrary.LVarToObject
struct ULuaBlueprintLibrary_LVarToObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintLibrary.LVarToInt
struct ULuaBlueprintLibrary_LVarToInt_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintLibrary.LVarToFloat
struct ULuaBlueprintLibrary_LVarToFloat_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintLibrary.LVarToBool
struct ULuaBlueprintLibrary_LVarToBool_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintLibrary.IntToLVar
struct ULuaBlueprintLibrary_IntToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.LuaBlueprintLibrary.FloatToLVar
struct ULuaBlueprintLibrary_FloatToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.LuaBlueprintLibrary.CallLuaWithMultiArgs
struct ULuaBlueprintLibrary_CallLuaWithMultiArgs_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Function;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLuaBPVar                                   InA;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InB;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InC;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InE;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InF;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   OutA;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutB;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutC;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutD;                                                     // (Parm, OutParm)
};

// Function Client.LuaBlueprintLibrary.CallLuaWithHUD
struct ULuaBlueprintLibrary_CallLuaWithHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Function;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLuaBPVar                                   InA;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InB;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InC;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   OutA;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutB;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutC;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutD;                                                     // (Parm, OutParm)
};

// Function Client.LuaBlueprintLibrary.CallLuaWithArgs
struct ULuaBlueprintLibrary_CallLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Function;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLuaBPVar                                   InA;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InB;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InC;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   InD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLuaBPVar                                   OutA;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutB;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutC;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutD;                                                     // (Parm, OutParm)
};

// Function Client.LuaBlueprintLibrary.CallLua
struct ULuaBlueprintLibrary_CallLua_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Function;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLuaBPVar                                   OutA;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutB;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutC;                                                     // (Parm, OutParm)
	struct FLuaBPVar                                   OutD;                                                     // (Parm, OutParm)
};

// Function Client.LuaBlueprintLibrary.BoolToLVar
struct ULuaBlueprintLibrary_BoolToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.LuaBlueprintMgr.GetSystemByName
struct ULuaBlueprintMgr_GetSystemByName_Params
{
	struct FString                                     SystemName;                                               // (ConstParm, Parm, ZeroConstructor)
	class ULuaBluepirntSys*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaBlueprintMgr.AddSystem
struct ULuaBlueprintMgr_AddSystem_Params
{
	struct FString                                     SystemName;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     BPPath;                                                   // (ConstParm, Parm, ZeroConstructor)
};

// Function Client.LuaBluepirntSys.Init
struct ULuaBluepirntSys_Init_Params
{
};

// Function Client.LuaClassObj.SubUIWidgetList
struct ALuaClassObj_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPersistentUI;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStatusConcern;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDynamicWidget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.SubShowHideEvent
struct ALuaClassObj_SubShowHideEvent_Params
{
	TArray<struct FString>                             WidgetPathList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.SubDefaultSceneCamera
struct ALuaClassObj_SubDefaultSceneCamera_Params
{
	int                                                sceneCameraIndex;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.SubDefaultChildUI
struct ALuaClassObj_SubDefaultChildUI_Params
{
	TArray<struct FString>                             childList;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.SubDefaultBaseUI
struct ALuaClassObj_SubDefaultBaseUI_Params
{
	struct FString                                     baseUI;                                                   // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.SubCollapseWidgetList
struct ALuaClassObj_SubCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildWidgetNames;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Client.LuaClassObj.SetWidgetZorder
struct ALuaClassObj_SetWidgetZorder_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.RestoreWidgetZorder
struct ALuaClassObj_RestoreWidgetZorder_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.RestoreAllWidgetZorder
struct ALuaClassObj_RestoreAllWidgetZorder_Params
{
};

// Function Client.LuaClassObj.IsTopStackPanel
struct ALuaClassObj_IsTopStackPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.IsPushedPanel
struct ALuaClassObj_IsPushedPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.InCombatState
struct ALuaClassObj_InCombatState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.HandleUIMessageNoFetch
struct ALuaClassObj_HandleUIMessageNoFetch_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleUIMessage
struct ALuaClassObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleStopAsyncLoad
struct ALuaClassObj_HandleStopAsyncLoad_Params
{
};

// Function Client.LuaClassObj.HandleDynamicDestroy
struct ALuaClassObj_HandleDynamicDestroy_Params
{
};

// Function Client.LuaClassObj.HandleDynamicCreationInternal
struct ALuaClassObj_HandleDynamicCreationInternal_Params
{
	bool                                               isAsyncLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.HandleDynamicCreation
struct ALuaClassObj_HandleDynamicCreation_Params
{
	bool                                               isAsyncLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.HandleCollapseWidgetList
struct ALuaClassObj_HandleCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.GetTopStackPanelSrcTag
struct ALuaClassObj_GetTopStackPanelSrcTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.GetTopStackPanelDstTag
struct ALuaClassObj_GetTopStackPanelDstTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.GetGameStatus
struct ALuaClassObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.ChangeSubUIWidgetList
struct ALuaClassObj_ChangeSubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.AddToTopStackPanel
struct ALuaClassObj_AddToTopStackPanel_Params
{
};

// Function Client.MaskBox.SetMaskTransformScale
struct UMaskBox_SetMaskTransformScale_Params
{
	struct FVector2D                                   Scale;                                                    // (Parm, IsPlainOldData)
};

// Function Client.MaskBox.SetMaskTransformPivot
struct UMaskBox_SetMaskTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (Parm, IsPlainOldData)
};

// Function Client.MaskBox.SetMaskTransformAngle
struct UMaskBox_SetMaskTransformAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MaskBox.SetMaskMaterial
struct UMaskBox_SetMaskMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MaskBox.SetBrushFromTexture
struct UMaskBox_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.MaskBox.GetVector2D__DelegateSignature
struct UMaskBox_GetVector2D__DelegateSignature_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.MaskBox.GetMaskMaterial
struct UMaskBox_GetMaskMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.MidasManager.TickMidasPackage
struct UMidasManager_TickMidasPackage_Params
{
};

// Function Client.MidasManager.Tick
struct UMidasManager_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.SwitchPayChannel
struct UMidasManager_SwitchPayChannel_Params
{
	EMidasMultiPayChannelSwitch                        switchChannel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.Subscribe
struct UMidasManager_Subscribe_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	struct FString                                     serviceCode;                                              // (Parm, ZeroConstructor)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
	bool                                               autoPay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.SetZoneID
struct UMidasManager_SetZoneID_Params
{
	struct FString                                     inZoneID;                                                 // (Parm, ZeroConstructor)
	struct FString                                     inGoodsZoneID;                                            // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.SetRoleInfo
struct UMidasManager_SetRoleInfo_Params
{
	int                                                InChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.SetMidasIDC
struct UMidasManager_SetMidasIDC_Params
{
	struct FString                                     idc;                                                      // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.SetJPAge
struct UMidasManager_SetJPAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.SetFrontendHUD
struct UMidasManager_SetFrontendHUD_Params
{
	class UGameFrontendHUD*                            InFrontendHUD;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.Reprovide
struct UMidasManager_Reprovide_Params
{
};

// Function Client.MidasManager.Pay
struct UMidasManager_Pay_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.ModifySubscribe
struct UMidasManager_ModifySubscribe_Params
{
	struct FString                                     oldProductId;                                             // (Parm, ZeroConstructor)
	struct FString                                     newProductid;                                             // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	struct FString                                     serviceCode;                                              // (Parm, ZeroConstructor)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
	bool                                               autoPay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.Initialize
struct UMidasManager_Initialize_Params
{
	EMidasMultiPayChannelSwitch                        envior;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.MidasManager.H5Pay
struct UMidasManager_H5Pay_Params
{
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.GoodsPresent
struct UMidasManager_GoodsPresent_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     price;                                                    // (Parm, ZeroConstructor)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MetaData;                                                 // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.Goods
struct UMidasManager_Goods_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     price;                                                    // (Parm, ZeroConstructor)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.GetProductInfo
struct UMidasManager_GetProductInfo_Params
{
	TArray<struct FString>                             listProductID;                                            // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.getPF
struct UMidasManager_getPF_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetPayEnvironment
struct UMidasManager_GetPayEnvironment_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetPayChannel
struct UMidasManager_GetPayChannel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetPackChannel
struct UMidasManager_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetOfferID
struct UMidasManager_GetOfferID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetNativePackageTag
struct UMidasManager_GetNativePackageTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetMPInfo
struct UMidasManager_GetMPInfo_Params
{
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.GetIntroPrice
struct UMidasManager_GetIntroPrice_Params
{
	TArray<struct FString>                             listProductID;                                            // (Parm, ZeroConstructor)
};

// Function Client.MidasManager.GetInstance
struct UMidasManager_GetInstance_Params
{
	class UMidasManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.MidasManager.GetInIDC
struct UMidasManager_GetInIDC_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.MidasManager.GetAOSSHOP
struct UMidasManager_GetAOSSHOP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.NewButton.SetClickSound
struct UNewButton_SetClickSound_Params
{
	EButtonClickSoundTypes                             inSoundType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScreenInput.Shutdown
struct UScreenInput_Shutdown_Params
{
};

// DelegateFunction Client.ScreenInput.OnScreenTouch__DelegateSignature
struct UScreenInput_OnScreenTouch__DelegateSignature_Params
{
};

// DelegateFunction Client.ScreenInput.OnMouseButtonDown__DelegateSignature
struct UScreenInput_OnMouseButtonDown__DelegateSignature_Params
{
	struct FVector2D                                   ContainerPos;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Client.ScreenInput.Init
struct UScreenInput_Init_Params
{
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
struct UScreenshotMaker_SaveToPhotosAlbumEx_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbum
struct UScreenshotMaker_SaveToPhotosAlbum_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.ResizePicture
struct UScreenshotMaker_ResizePicture_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     savePathStr;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScreenshotMaker.ReMakePicture
struct UScreenshotMaker_ReMakePicture_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	struct FVector4                                    Vector4;                                                  // (Parm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.ReMakeMomentPicture
struct UScreenshotMaker_ReMakeMomentPicture_Params
{
	struct FString                                     srcPath;                                                  // (Parm, ZeroConstructor)
	struct FVector4                                    Vector4;                                                  // (Parm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakePictureWithName
struct UScreenshotMaker_MakePictureWithName_Params
{
	struct FString                                     PicName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakePictureToLua
struct UScreenshotMaker_MakePictureToLua_Params
{
	class UGameFrontendHUD*                            InFrontendHUD;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakePicture
struct UScreenshotMaker_MakePicture_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakeBugReprotPic
struct UScreenshotMaker_MakeBugReprotPic_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.HasCaptured
struct UScreenshotMaker_HasCaptured_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.GetSaveStatus
struct UScreenshotMaker_GetSaveStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.GetPhotoHash
struct UScreenshotMaker_GetPhotoHash_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	int                                                algorithmVersion;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.GetMomentThumbPictureFullPathFiles
struct UScreenshotMaker_GetMomentThumbPictureFullPathFiles_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.GetMomentPictureFullPathFiles
struct UScreenshotMaker_GetMomentPictureFullPathFiles_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ZLIBDecompress
struct UScriptHelperClient_ZLIBDecompress_Params
{
	struct FString                                     CompressedData;                                           // (Parm, ZeroConstructor)
	int                                                CompressedSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UnCompressedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ZLIBCompress_LuaState
struct UScriptHelperClient_ZLIBCompress_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareWithUrlInfo
struct UScriptHelperClient_WechatShareWithUrlInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WeChatShareWithMiniApp
struct UScriptHelperClient_WeChatShareWithMiniApp_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _webpageUrl;                                              // (Parm, ZeroConstructor)
	struct FString                                     _userName;                                                // (Parm, ZeroConstructor)
	struct FString                                     _path;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareToFriend
struct UScriptHelperClient_WechatShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     mediaId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     messageExt;                                               // (Parm, ZeroConstructor)
	struct FString                                     mediaTagName;                                             // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatShare
struct UScriptHelperClient_WechatShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatQueryGroup
struct UScriptHelperClient_WechatQueryGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OpenIdList;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatJoinGroup
struct UScriptHelperClient_WechatJoinGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatCreateGroup
struct UScriptHelperClient_WechatCreateGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomName;                                             // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WakeupFromSuspendSound
struct UScriptHelperClient_WakeupFromSuspendSound_Params
{
};

// Function Client.ScriptHelperClient.VPNTearDown
struct UScriptHelperClient_VPNTearDown_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNSetUserInfo
struct UScriptHelperClient_VPNSetUserInfo_Params
{
	struct FString                                     InUserId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InUserToken;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNSetPortRange
struct UScriptHelperClient_VPNSetPortRange_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNSetNodelist
struct UScriptHelperClient_VPNSetNodelist_Params
{
	struct FString                                     InNodelist;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNPrepare
struct UScriptHelperClient_VPNPrepare_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNHandUp
struct UScriptHelperClient_VPNHandUp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.VPNGetNodeRegionList
struct UScriptHelperClient_VPNGetNodeRegionList_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.VPNDialUp
struct UScriptHelperClient_VPNDialUp_Params
{
	struct FString                                     InRegion;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Vibrate
struct UScriptHelperClient_Vibrate_Params
{
	int                                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UserName
struct UScriptHelperClient_UserName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.UrlEncode
struct UScriptHelperClient_UrlEncode_Params
{
	struct FString                                     UnencodedString;                                          // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.UpdateXGPushNightTag
struct UScriptHelperClient_UpdateXGPushNightTag_Params
{
	bool                                               bInit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UpdateXGPushDayTag
struct UScriptHelperClient_UpdateXGPushDayTag_Params
{
	bool                                               bInit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UpdatePublishRegionForBattle
struct UScriptHelperClient_UpdatePublishRegionForBattle_Params
{
};

// Function Client.ScriptHelperClient.UpdateMemResource
struct UScriptHelperClient_UpdateMemResource_Params
{
	struct FString                                     ResType;                                                  // (Parm, ZeroConstructor)
	struct FString                                     KeyWord;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.UpdateAkAudioDeviceBluetoothDelay
struct UScriptHelperClient_UpdateAkAudioDeviceBluetoothDelay_Params
{
	int                                                InDelayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UnsubscribeFromTopic
struct UScriptHelperClient_UnsubscribeFromTopic_Params
{
	struct FString                                     Topic;                                                    // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.UnmountPakFile
struct UScriptHelperClient_UnmountPakFile_Params
{
	struct FString                                     InPakFilename;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UnitTestODPaksOpen
struct UScriptHelperClient_UnitTestODPaksOpen_Params
{
	int                                                fileCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                threadNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.UnInitTweenMaker
struct UScriptHelperClient_UnInitTweenMaker_Params
{
};

// Function Client.ScriptHelperClient.TVMacroTesting
struct UScriptHelperClient_TVMacroTesting_Params
{
};

// Function Client.ScriptHelperClient.TriggerTouchEvent
struct UScriptHelperClient_TriggerTouchEvent_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                event_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TriggerLoginCrashTest
struct UScriptHelperClient_TriggerLoginCrashTest_Params
{
};

// Function Client.ScriptHelperClient.TriggerLobbyCrashTest
struct UScriptHelperClient_TriggerLobbyCrashTest_Params
{
};

// Function Client.ScriptHelperClient.TriggerBlockAndroidANR
struct UScriptHelperClient_TriggerBlockAndroidANR_Params
{
};

// Function Client.ScriptHelperClient.Tex_UpdateMemResource
struct UScriptHelperClient_Tex_UpdateMemResource_Params
{
	struct FString                                     KeyWord;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.Tex_DumpMemObjectInfo
struct UScriptHelperClient_Tex_DumpMemObjectInfo_Params
{
	struct FString                                     KeyWord;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.Tea2Encrypt_LuaState
struct UScriptHelperClient_Tea2Encrypt_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Tea2Decrypt_LuaState
struct UScriptHelperClient_Tea2Decrypt_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TapmReport
struct UScriptHelperClient_TapmReport_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraInfo;                                                // (Parm, ZeroConstructor)
	bool                                               send;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TapmPostLargeValueS
struct UScriptHelperClient_TapmPostLargeValueS_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.TapmMarkTime
struct UScriptHelperClient_TapmMarkTime_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TapmMarkLevelFin
struct UScriptHelperClient_TapmMarkLevelFin_Params
{
};

// Function Client.ScriptHelperClient.TApmDisconnectReport
struct UScriptHelperClient_TApmDisconnectReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TApmDataReport
struct UScriptHelperClient_TApmDataReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SwitchUser
struct UScriptHelperClient_SwitchUser_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               useExternalAccount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SwitchSceneCamera
struct UScriptHelperClient_SwitchSceneCamera_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SceneCameraName;                                          // (Parm, ZeroConstructor)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SwitchCampRoom
struct UScriptHelperClient_SwitchCampRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                campMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SuspendSound
struct UScriptHelperClient_SuspendSound_Params
{
};

// Function Client.ScriptHelperClient.SubscribeToTopic
struct UScriptHelperClient_SubscribeToTopic_Params
{
	struct FString                                     Topic;                                                    // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.StringToFMargin
struct UScriptHelperClient_StringToFMargin_Params
{
	struct FString                                     MarginStr;                                                // (Parm, ZeroConstructor)
	struct FMargin                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StopUIStat
struct UScriptHelperClient_StopUIStat_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
	bool                                               bReport;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StopTouchRecord
struct UScriptHelperClient_StopTouchRecord_Params
{
	struct FTouchInputRecord                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.ScriptHelperClient.StopTask
struct UScriptHelperClient_StopTask_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StopShaderPrecompile
struct UScriptHelperClient_StopShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StopHapticsEngine
struct UScriptHelperClient_StopHapticsEngine_Params
{
};

// Function Client.ScriptHelperClient.StopH5Downloading
struct UScriptHelperClient_StopH5Downloading_Params
{
};

// Function Client.ScriptHelperClient.StopCampMode
struct UScriptHelperClient_StopCampMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartUIStat
struct UScriptHelperClient_StartUIStat_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.StartTrace
struct UScriptHelperClient_StartTrace_Params
{
	struct FString                                     InHost;                                                   // (Parm, ZeroConstructor)
	int                                                InStartTTL;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMaxTTL;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartTouchRecord
struct UScriptHelperClient_StartTouchRecord_Params
{
};

// Function Client.ScriptHelperClient.StartShaderPrecompile
struct UScriptHelperClient_StartShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartOpenReadCollect
struct UScriptHelperClient_StartOpenReadCollect_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStart;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartHapticsEngine
struct UScriptHelperClient_StartHapticsEngine_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.StartGrayUpdate
struct UScriptHelperClient_StartGrayUpdate_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartDownloadItem
struct UScriptHelperClient_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnItemDownloadDelegate;                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.StartDolphinResourceUpdate
struct UScriptHelperClient_StartDolphinResourceUpdate_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartCDNUpdateAfterDolphinUpdateFailed
struct UScriptHelperClient_StartCDNUpdateAfterDolphinUpdateFailed_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartCampMode
struct UScriptHelperClient_StartCampMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ZombieCampRoomName;                                       // (Parm, ZeroConstructor)
	struct FString                                     ManCampRoomName;                                          // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.StartBatchDownloadItem
struct UScriptHelperClient_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  // (Parm, ZeroConstructor)
	uint32_t                                           Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShutdownUnrealNetwork
struct UScriptHelperClient_ShutdownUnrealNetwork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShutdownPuffer
struct UScriptHelperClient_ShutdownPuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowWebView
struct UScriptHelperClient_ShowWebView_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowVLink
struct UScriptHelperClient_ShowVLink_Params
{
	struct FString                                     jsonString;                                               // (Parm, ZeroConstructor)
	struct FString                                     signString;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShowVideoListDialog
struct UScriptHelperClient_ShowVideoListDialog_Params
{
};

// Function Client.ScriptHelperClient.ShowScreenDebugMessage
struct UScriptHelperClient_ShowScreenDebugMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShowH5WebView
struct UScriptHelperClient_ShowH5WebView_Params
{
};

// Function Client.ScriptHelperClient.ShorterStreamingDistanceWhenGameEnd
struct UScriptHelperClient_ShorterStreamingDistanceWhenGameEnd_Params
{
	uint32_t                                           Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShareWithUploadPhotoByChannel
struct UScriptHelperClient_ShareWithUploadPhotoByChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	int                                                _channel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShareWithPhotoByChannel
struct UScriptHelperClient_ShareWithPhotoByChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _channel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShareLogFile
struct UScriptHelperClient_ShareLogFile_Params
{
};

// Function Client.ScriptHelperClient.SetWeatherInfo
struct UScriptHelperClient_SetWeatherInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetVoiceSwitch
struct UScriptHelperClient_SetVoiceSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FirstVoicePopupSwitch;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRForbidVoiceSwitch;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRSettingSwitch;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetVoiceReEneterInfo
struct UScriptHelperClient_SetVoiceReEneterInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetUserVulkanSetting
struct UScriptHelperClient_SetUserVulkanSetting_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetUserProperty
struct UScriptHelperClient_SetUserProperty_Params
{
	struct FString                                     propertyKey;                                              // (Parm, ZeroConstructor)
	struct FString                                     propertyValue;                                            // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetUpdatedSoPatchFile
struct UScriptHelperClient_SetUpdatedSoPatchFile_Params
{
	struct FString                                     InSourceFile;                                             // (Parm, ZeroConstructor)
	int                                                InABI;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetupAkAudioDeviceListener
struct UScriptHelperClient_SetupAkAudioDeviceListener_Params
{
};

// Function Client.ScriptHelperClient.SetUIStatMaxClickTimes
struct UScriptHelperClient_SetUIStatMaxClickTimes_Params
{
	int                                                Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetUIRectOffset
struct UScriptHelperClient_SetUIRectOffset_Params
{
	struct FString                                     uirect;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetUIElemLayoutJsonConfigSwitch
struct UScriptHelperClient_SetUIElemLayoutJsonConfigSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UIElemLayoutJsonConfigSwitch;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetTssNetworkStatus
struct UScriptHelperClient_SetTssNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetTickMemoryInterval
struct UScriptHelperClient_SetTickMemoryInterval_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetTestEditorNum
struct UScriptHelperClient_SetTestEditorNum_Params
{
	int                                                playerCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Num;                                                      // (Parm, ZeroConstructor)
	struct FString                                     SceneName;                                                // (Parm, ZeroConstructor)
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetTableFilterInfo_LuaState
struct UScriptHelperClient_SetTableFilterInfo_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetSoundEffectQuality
struct UScriptHelperClient_SetSoundEffectQuality_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetShowFriendObservers
struct UScriptHelperClient_SetShowFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetSelfieSwitch
struct UScriptHelperClient_SetSelfieSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelfieSwitch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetSdkIoctl
struct UScriptHelperClient_SetSdkIoctl_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                request;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Token;                                                    // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetScreenHole
struct UScriptHelperClient_SetScreenHole_Params
{
	struct FString                                     sceenHole;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetReportBugSwitch
struct UScriptHelperClient_SetReportBugSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReportBugSwitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetRemoteResource
struct UScriptHelperClient_SetRemoteResource_Params
{
	struct FString                                     AssetId;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     DescObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetRegionNoByLua
struct UScriptHelperClient_SetRegionNoByLua_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                regionNo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetRedBloodSwitch
struct UScriptHelperClient_SetRedBloodSwitch_Params
{
	bool                                               redBloodSwitch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetPufferBuildInfo
struct UScriptHelperClient_SetPufferBuildInfo_Params
{
	struct FString                                     PipeLineID;                                               // (Parm, ZeroConstructor)
	struct FString                                     BuildNo;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetPublishRegion
struct UScriptHelperClient_SetPublishRegion_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetPlayerBaseInfo
struct UScriptHelperClient_SetPlayerBaseInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	uint64_t                                           RoleID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeadIconUrl;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetOnGetItemBigIcon
struct UScriptHelperClient_SetOnGetItemBigIcon_Params
{
	struct FScriptDelegate                             onShow;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetNationSwitch
struct UScriptHelperClient_SetNationSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NationAllSwitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NationBattleSwitch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NationRankSwitch;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetMyFriendObserversDetail
struct UScriptHelperClient_SetMyFriendObserversDetail_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFriendObserver>                     FriendObserversDetails;                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetModName_LuaState
struct UScriptHelperClient_SetModName_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetMiniGameFinalAwardResId
struct UScriptHelperClient_SetMiniGameFinalAwardResId_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AwardResId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetMidasZoneID_LuaState
struct UScriptHelperClient_SetMidasZoneID_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetMidasIDC
struct UScriptHelperClient_SetMidasIDC_Params
{
	struct FString                                     midasIdc;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetLinkStyle
struct UScriptHelperClient_SetLinkStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               ShowUnderline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathHyperLinkNormalBrush;                                 // (Parm, ZeroConstructor)
	struct FString                                     PathHyperLinkHoveredrBrush;                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetLevelStreamingUnloadTimeslice
struct UScriptHelperClient_SetLevelStreamingUnloadTimeslice_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetiTOPLbsDelay
struct UScriptHelperClient_SetiTOPLbsDelay_Params
{
	int                                                Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIPRegion
struct UScriptHelperClient_SetIPRegion_Params
{
	int                                                region_no;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIosStuckEnableByServerConfig
struct UScriptHelperClient_SetIosStuckEnableByServerConfig_Params
{
	int                                                bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIOSBGDownloadAttribute
struct UScriptHelperClient_SetIOSBGDownloadAttribute_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCellularAccess;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableResumeData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nMinFileSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nMaxTasks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIntDefaultConfig
struct UScriptHelperClient_SetIntDefaultConfig_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetImageVersionString
struct UScriptHelperClient_SetImageVersionString_Params
{
	struct FString                                     oldVersion;                                               // (Parm, ZeroConstructor)
	struct FString                                     newVersion;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetImageStyle
struct UScriptHelperClient_SetImageStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                ImageSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	struct FString                                     ImageColor;                                               // (Parm, ZeroConstructor)
	bool                                               bPreLoad;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetHapticsEngineEnable
struct UScriptHelperClient_SetHapticsEngineEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetGlobalRedBloodSwitch
struct UScriptHelperClient_SetGlobalRedBloodSwitch_Params
{
	bool                                               redBloodSwitch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetGDPRUserType
struct UScriptHelperClient_SetGDPRUserType_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GDPRUserType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetGameStatusMap
struct UScriptHelperClient_SetGameStatusMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetGameSrvID
struct UScriptHelperClient_SetGameSrvID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameSrvID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetFontStyle
struct UScriptHelperClient_SetFontStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               UseShadow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBold;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetExtraLocalizationMap
struct UScriptHelperClient_SetExtraLocalizationMap_Params
{
	TMap<struct FString, struct FString>               translationMap;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.ScriptHelperClient.SetDynamicLevels
struct UScriptHelperClient_SetDynamicLevels_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             DynamicLevels;                                            // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetDumpShaderCompile
struct UScriptHelperClient_SetDumpShaderCompile_Params
{
	int                                                iDumpVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetCrashContextReportLevel
struct UScriptHelperClient_SetCrashContextReportLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetCanWatchEnemy
struct UScriptHelperClient_SetCanWatchEnemy_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetBtnClickInCdFunc
struct UScriptHelperClient_SetBtnClickInCdFunc_Params
{
};

// Function Client.ScriptHelperClient.SetAccountRegion
struct UScriptHelperClient_SetAccountRegion_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq
struct UScriptHelperClient_SendRetriveBeginnerFinisheGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
struct UScriptHelperClient_SendRecordFinishedGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TipsID;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendPlayEmote
struct UScriptHelperClient_SendPlayEmote_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendLobbyChat
struct UScriptHelperClient_SendLobbyChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendDirtyToFilter
struct UScriptHelperClient_SendDirtyToFilter_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     dirtyString;                                              // (Parm, ZeroConstructor)
	struct FString                                     prefixString;                                             // (Parm, ZeroConstructor)
	int                                                UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendClientLog
struct UScriptHelperClient_SendClientLog_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     errorReason;                                              // (Parm, ZeroConstructor)
	struct FString                                     errorDescription;                                         // (Parm, ZeroConstructor)
	bool                                               pullAll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ScheduleLocalNotificationAtTime
struct UScriptHelperClient_ScheduleLocalNotificationAtTime_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Body;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Action;                                                   // (Parm, ZeroConstructor)
	int                                                NotificationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SaveStringToIntermediateFile
struct UScriptHelperClient_SaveStringToIntermediateFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SaveStringToFile
struct UScriptHelperClient_SaveStringToFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SaveSavFile
struct UScriptHelperClient_SaveSavFile_Params
{
	struct FString                                     CompressedData;                                           // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                CompressedSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UnCompressedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SaveLuaMemoryFile
struct UScriptHelperClient_SaveLuaMemoryFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InputContent;                                             // (Parm, ZeroConstructor)
	bool                                               RmExistFile;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SaveArrayToFile
struct UScriptHelperClient_SaveArrayToFile_Params
{
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RunConsoleCommond
struct UScriptHelperClient_RunConsoleCommond_Params
{
	struct FString                                     commond;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.RoomOwnerInterruptGame
struct UScriptHelperClient_RoomOwnerInterruptGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReturnToLobby
struct UScriptHelperClient_ReturnToLobby_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RequestFile
struct UScriptHelperClient_RequestFile_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReportFirebaseEventWithString
struct UScriptHelperClient_ReportFirebaseEventWithString_Params
{
	struct FString                                     eventTypeString;                                          // (Parm, ZeroConstructor)
	struct FString                                     bundleExtraKey;                                           // (Parm, ZeroConstructor)
	struct FString                                     bundleExtraValue;                                         // (Parm, ZeroConstructor)
	bool                                               isUnique;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReportFirebaseEventWithParam
struct UScriptHelperClient_ReportFirebaseEventWithParam_Params
{
	struct FString                                     eventTypeString;                                          // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               _params;                                                  // (Parm, ZeroConstructor)
	bool                                               isUnique;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReportEventRegisterCompleted
struct UScriptHelperClient_ReportEventRegisterCompleted_Params
{
};

// Function Client.ScriptHelperClient.ReportEventPurchaseConsider
struct UScriptHelperClient_ReportEventPurchaseConsider_Params
{
};

// Function Client.ScriptHelperClient.ReportEventLoadingCompleted
struct UScriptHelperClient_ReportEventLoadingCompleted_Params
{
};

// Function Client.ScriptHelperClient.ReportContextValuesOnCrash
struct UScriptHelperClient_ReportContextValuesOnCrash_Params
{
	struct FString                                     Json;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ReportBuglyLogWithFDNum
struct UScriptHelperClient_ReportBuglyLogWithFDNum_Params
{
	struct FString                                     baseLogInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ReportBattleChat
struct UScriptHelperClient_ReportBattleChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                msgExtraParam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReplyInvite
struct UScriptHelperClient_ReplyInvite_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	bool                                               bReply;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RemoveKnownMissingPackage
struct UScriptHelperClient_RemoveKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.RemountPakFiles
struct UScriptHelperClient_RemountPakFiles_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReInitializePuffer
struct UScriptHelperClient_ReInitializePuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               needCheck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownloadsPerTask;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownTask;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownloadSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useOldInterface;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removeOldWhenUpdate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                versionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RecordLuaExceptionInfo
struct UScriptHelperClient_RecordLuaExceptionInfo_Params
{
	struct FString                                     exception;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.QuitVoiceRoom
struct UScriptHelperClient_QuitVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitLbsVoiceRoom
struct UScriptHelperClient_QuitLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitFightChat
struct UScriptHelperClient_QuitFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuickLogin
struct UScriptHelperClient_QuickLogin_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                refreshTokenBeforeExpDays;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareToFriend
struct UScriptHelperClient_QQShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                act;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     targetUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     imgUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     previewText;                                              // (Parm, ZeroConstructor)
	struct FString                                     gameTag;                                                  // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.QQShareH5WithPhoto
struct UScriptHelperClient_QQShareH5WithPhoto_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _title;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _fullURL;                                                 // (Parm, ZeroConstructor)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShare
struct UScriptHelperClient_QQShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _imgUrl;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQAddFriend
struct UScriptHelperClient_QQAddFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PVEAutoTestGetEnermyLocation
struct UScriptHelperClient_PVEAutoTestGetEnermyLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.PubgmSimulateActionClientEx
struct UScriptHelperClient_PubgmSimulateActionClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SimulateType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ProjectSavedDir
struct UScriptHelperClient_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ProjectContentDir
struct UScriptHelperClient_ProjectContentDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ProcessSoPatch
struct UScriptHelperClient_ProcessSoPatch_Params
{
	struct FString                                     InAppVerStr;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ProcessServerRelationChainError
struct UScriptHelperClient_ProcessServerRelationChainError_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorMsg;                                                 // (Parm, ZeroConstructor)
	int                                                iForceLoginInterval;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.PostGameStatusToTGPASMap
struct UScriptHelperClient_PostGameStatusToTGPASMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               mapData;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PlayHapticsFile
struct UScriptHelperClient_PlayHapticsFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PandoraSendCmd
struct UScriptHelperClient_PandoraSendCmd_Params
{
	struct FString                                     jsonStr;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PandoraInit
struct UScriptHelperClient_PandoraInit_Params
{
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRoleId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InPlatId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAccType;                                                // (Parm, ZeroConstructor)
	struct FString                                     InArea;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InPartion;                                                // (Parm, ZeroConstructor)
	struct FString                                     InCloudTest;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAccessToken;                                            // (Parm, ZeroConstructor)
	struct FString                                     InSdkVersion;                                             // (Parm, ZeroConstructor)
	struct FString                                     InGameVersion;                                            // (Parm, ZeroConstructor)
	struct FString                                     InRoleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     InPayToken;                                               // (Parm, ZeroConstructor)
	struct FString                                     InHeadUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     InChanelId;                                               // (Parm, ZeroConstructor)
	struct FString                                     InBelongingId;                                            // (Parm, ZeroConstructor)
	struct FString                                     InLanguage;                                               // (Parm, ZeroConstructor)
	struct FString                                     InTicket;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InIp;                                                     // (Parm, ZeroConstructor)
	struct FString                                     InNation;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InNetType;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PandoraErrorReport
struct UScriptHelperClient_PandoraErrorReport_Params
{
	int                                                iType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iActId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                errCode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     errMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     extraMsg;                                                 // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               extendDict;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.ScriptHelperClient.PandoraEnable
struct UScriptHelperClient_PandoraEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.PandoraClose
struct UScriptHelperClient_PandoraClose_Params
{
};

// Function Client.ScriptHelperClient.OpenWebviewInGameProcess
struct UScriptHelperClient_OpenWebviewInGameProcess_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bottom;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OpenURL
struct UScriptHelperClient_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               isGetTicket;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               withNeverAdjust;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepCache;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OpenShaderCodeLibrary
struct UScriptHelperClient_OpenShaderCodeLibrary_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     VersionNum;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OpenH5FromCache
struct UScriptHelperClient_OpenH5FromCache_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Language;                                                 // (Parm, ZeroConstructor)
	int                                                netType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ViewParam;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnNotifyFightFriendChat
struct UScriptHelperClient_OnNotifyFightFriendChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFightFriendChat                            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.ScriptHelperClient.OnMiniGameEnded
struct UScriptHelperClient_OnMiniGameEnded_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGameClosed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnIslandPlayerInfoNotify
struct UScriptHelperClient_OnIslandPlayerInfoNotify_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnInviteNextBattle
struct UScriptHelperClient_OnInviteNextBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnGetUpdateStateCDNConfigUrl
struct UScriptHelperClient_OnGetUpdateStateCDNConfigUrl_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// DelegateFunction Client.ScriptHelperClient.OnGetItemBigIcon__DelegateSignature
struct UScriptHelperClient_OnGetItemBigIcon__DelegateSignature_Params
{
	struct FString                                     strPath;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.OnFilterFinish
struct UScriptHelperClient_OnFilterFinish_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     filterText;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnEnterLobbyReloadLocalizationResource
struct UScriptHelperClient_OnEnterLobbyReloadLocalizationResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnEnterGameReleaseLocalizationResource
struct UScriptHelperClient_OnEnterGameReleaseLocalizationResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnDolphinAppUpdateFinished
struct UScriptHelperClient_OnDolphinAppUpdateFinished_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnCombatHitFeedback
struct UScriptHelperClient_OnCombatHitFeedback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCombatHitFeedbackEnable;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnBattleResultCallBack
struct UScriptHelperClient_OnBattleResultCallBack_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleResultData                           BattleResultData;                                         // (Parm)
};

// Function Client.ScriptHelperClient.OnBattleResult
struct UScriptHelperClient_OnBattleResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleResultData                           BattleResultData;                                         // (Parm)
};

// Function Client.ScriptHelperClient.ObjectPoolServerSwitch
struct UScriptHelperClient_ObjectPoolServerSwitch_Params
{
	bool                                               bSwitchOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
struct UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GuideSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerFinishedGuide>                finished_guide;                                           // (ConstParm, Parm, ZeroConstructor)
	int                                                player_level;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player_exp_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MSDKWebViewCallJS
struct UScriptHelperClient_MSDKWebViewCallJS_Params
{
	struct FString                                     strJS;                                                    // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MoveFollowTarget
struct UScriptHelperClient_MoveFollowTarget_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FollowType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MoveFile
struct UScriptHelperClient_MoveFile_Params
{
	struct FString                                     SrcFullPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     DesFullPath;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MountPakFile
struct UScriptHelperClient_MountPakFile_Params
{
	struct FString                                     InPakFilename;                                            // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MidasSDKInit_LuaState
struct UScriptHelperClient_MidasSDKInit_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MidasReprovide_LuaState
struct UScriptHelperClient_MidasReprovide_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MidasPay
struct UScriptHelperClient_MidasPay_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MidasH5Pay
struct UScriptHelperClient_MidasH5Pay_Params
{
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MidasGoodsPresent
struct UScriptHelperClient_MidasGoodsPresent_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     price;                                                    // (Parm, ZeroConstructor)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MetaData;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MidasGoods
struct UScriptHelperClient_MidasGoods_Params
{
	struct FString                                     productid;                                                // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     price;                                                    // (Parm, ZeroConstructor)
	struct FString                                     country;                                                  // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MessageBoxExt
struct UScriptHelperClient_MessageBoxExt_Params
{
	struct FString                                     Caption;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MediaCopyFromPakToLocal
struct UScriptHelperClient_MediaCopyFromPakToLocal_Params
{
	struct FString                                     from;                                                     // (Parm, ZeroConstructor)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MD5LuaString_LuaState
struct UScriptHelperClient_MD5LuaString_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MD5HashAnsiString
struct UScriptHelperClient_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ManualSleep
struct UScriptHelperClient_ManualSleep_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LogoutAllDevices
struct UScriptHelperClient_LogoutAllDevices_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Logout
struct UScriptHelperClient_Logout_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoginWithExtraInfo
struct UScriptHelperClient_LoginWithExtraInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.Login
struct UScriptHelperClient_Login_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LobbySetUserRegion
struct UScriptHelperClient_LobbySetUserRegion_Params
{
	int                                                InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LobbySetProxyPortlist
struct UScriptHelperClient_LobbySetProxyPortlist_Params
{
	struct FString                                     InNodePortList;                                           // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.LobbySetProxyNodelist
struct UScriptHelperClient_LobbySetProxyNodelist_Params
{
	struct FString                                     InNodeIpList;                                             // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.LobbySetEchoPortlist
struct UScriptHelperClient_LobbySetEchoPortlist_Params
{
	struct FString                                     InEchoPortList;                                           // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.LobbyIsLinkProxy
struct UScriptHelperClient_LobbyIsLinkProxy_Params
{
	struct FString                                     InIp;                                                     // (Parm, ZeroConstructor)
	int                                                InPort;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LobbyAddAddress
struct UScriptHelperClient_LobbyAddAddress_Params
{
	struct FString                                     InProtocol;                                               // (Parm, ZeroConstructor)
	struct FString                                     InIp;                                                     // (Parm, ZeroConstructor)
	int                                                InPort;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadSavFile_LuaState
struct UScriptHelperClient_LoadSavFile_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadMidasProductInfo_LuaState
struct UScriptHelperClient_LoadMidasProductInfo_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadMidasMP_LuaState
struct UScriptHelperClient_LoadMidasMP_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadMidasIntroPrice_LuaState
struct UScriptHelperClient_LoadMidasIntroPrice_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadIntermediateFileToString
struct UScriptHelperClient_LoadIntermediateFileToString_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.LoadH5FromCache
struct UScriptHelperClient_LoadH5FromCache_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Language;                                                 // (Parm, ZeroConstructor)
	int                                                netType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ViewParam;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.LoadFileToStringByFullPath
struct UScriptHelperClient_LoadFileToStringByFullPath_Params
{
	struct FString                                     FullPathName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.LoadFileToString
struct UScriptHelperClient_LoadFileToString_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.LoadFileToArray
struct UScriptHelperClient_LoadFileToArray_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.LoadAFDTranslation
struct UScriptHelperClient_LoadAFDTranslation_Params
{
};

// Function Client.ScriptHelperClient.LaunchUrl
struct UScriptHelperClient_LaunchUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinVoiceRoom
struct UScriptHelperClient_JoinVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     roomName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinLbsVoiceRoom
struct UScriptHelperClient_JoinLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     lbsRoomName;                                              // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.IsWindowsClientReplay
struct UScriptHelperClient_IsWindowsClientReplay_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsWindowOB
struct UScriptHelperClient_IsWindowOB_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsUsingBluetooth
struct UScriptHelperClient_IsUsingBluetooth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsUseTypicalResultFlowMode
struct UScriptHelperClient_IsUseTypicalResultFlowMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsUpdateSkip
struct UScriptHelperClient_IsUpdateSkip_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsUIAutoTest
struct UScriptHelperClient_IsUIAutoTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsTypicalMode
struct UScriptHelperClient_IsTypicalMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsTest
struct UScriptHelperClient_IsTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsTableDataExist_LuaState
struct UScriptHelperClient_IsTableDataExist_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsSystemVPNOpened
struct UScriptHelperClient_IsSystemVPNOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsSupportVulkan
struct UScriptHelperClient_IsSupportVulkan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsSplitMiniPakVersion
struct UScriptHelperClient_IsSplitMiniPakVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsSplitMapPakVersion
struct UScriptHelperClient_IsSplitMapPakVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.isSkipUpdateByRepair
struct UScriptHelperClient_isSkipUpdateByRepair_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsShipping
struct UScriptHelperClient_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsSavFileData
struct UScriptHelperClient_IsSavFileData_Params
{
	struct FString                                     CompressedData;                                           // (Parm, ZeroConstructor)
	int                                                CompressedSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UnCompressedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ToCheckEndWithCDLenght;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsRuningOnVulkan
struct UScriptHelperClient_IsRuningOnVulkan_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsRemoteNotificationsEnabled
struct UScriptHelperClient_IsRemoteNotificationsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsReleaseVersion
struct UScriptHelperClient_IsReleaseVersion_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsPVEMode
struct UScriptHelperClient_IsPVEMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsOpenAOS90FPSConfig
struct UScriptHelperClient_IsOpenAOS90FPSConfig_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsODPakMonted
struct UScriptHelperClient_IsODPakMonted_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsNotificationEnabled
struct UScriptHelperClient_IsNotificationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsNoAuthMode
struct UScriptHelperClient_IsNoAuthMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsNetworkReachable
struct UScriptHelperClient_IsNetworkReachable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsNeedClearHiddenUI
struct UScriptHelperClient_IsNeedClearHiddenUI_Params
{
	class UFrontendHUD*                                GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsMounted
struct UScriptHelperClient_IsMounted_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsLaunchedByLocalNotification
struct UScriptHelperClient_IsLaunchedByLocalNotification_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsJaguar
struct UScriptHelperClient_IsJaguar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsIPhoneFiveSOriginal
struct UScriptHelperClient_IsIPhoneFiveSOriginal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsIPhoneFiveS
struct UScriptHelperClient_IsIPhoneFiveS_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsIOSVersionAbove13
struct UScriptHelperClient_IsIOSVersionAbove13_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallWX
struct UScriptHelperClient_IsInstallWX_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallWhatsapp
struct UScriptHelperClient_IsInstallWhatsapp_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallVK
struct UScriptHelperClient_IsInstallVK_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallTwitter
struct UScriptHelperClient_IsInstallTwitter_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallQQByiTOP
struct UScriptHelperClient_IsInstallQQByiTOP_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallOpenRec
struct UScriptHelperClient_IsInstallOpenRec_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallMirrativ
struct UScriptHelperClient_IsInstallMirrativ_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallMessenger
struct UScriptHelperClient_IsInstallMessenger_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallLite
struct UScriptHelperClient_IsInstallLite_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallLine
struct UScriptHelperClient_IsInstallLine_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallFaceBook
struct UScriptHelperClient_IsInstallFaceBook_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallDiscord
struct UScriptHelperClient_IsInstallDiscord_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsHarmonyOS
struct UScriptHelperClient_IsHarmonyOS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsHapticsEngineEnable
struct UScriptHelperClient_IsHapticsEngineEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsForCE
struct UScriptHelperClient_IsForCE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileReady
struct UScriptHelperClient_IsFileReady_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExistsWithPakCheckMatchExt
struct UScriptHelperClient_IsFileExistsWithPakCheckMatchExt_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExistsWithPakCheck
struct UScriptHelperClient_IsFileExistsWithPakCheck_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExistsWithOutPakCheck
struct UScriptHelperClient_IsFileExistsWithOutPakCheck_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExistByFileName
struct UScriptHelperClient_IsFileExistByFileName_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExistByExtension
struct UScriptHelperClient_IsFileExistByExtension_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     fileExtension;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsFileExist
struct UScriptHelperClient_IsFileExist_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulatorWhenInit
struct UScriptHelperClient_IsEmulatorWhenInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulator
struct UScriptHelperClient_IsEmulator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEditorDedicatedServer
struct UScriptHelperClient_IsEditorDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEditor
struct UScriptHelperClient_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsDolbyAtmosSupported
struct UScriptHelperClient_IsDolbyAtmosSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsDeviceSupportsViberation
struct UScriptHelperClient_IsDeviceSupportsViberation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsDeviceSupportsHapticsEngine
struct UScriptHelperClient_IsDeviceSupportsHapticsEngine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsDeviceHWSupportVulkan
struct UScriptHelperClient_IsDeviceHWSupportVulkan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsDevelopment
struct UScriptHelperClient_IsDevelopment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsConnected
struct UScriptHelperClient_IsConnected_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsCEVersion
struct UScriptHelperClient_IsCEVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsCEHideLobbyUI
struct UScriptHelperClient_IsCEHideLobbyUI_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsBasePrefecthOpen
struct UScriptHelperClient_IsBasePrefecthOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsAwakedByNotification
struct UScriptHelperClient_IsAwakedByNotification_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsAndroidHasGyr
struct UScriptHelperClient_IsAndroidHasGyr_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InviteWhatsappOfflineFriends
struct UScriptHelperClient_InviteWhatsappOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InviteSystemOfflineFriends
struct UScriptHelperClient_InviteSystemOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InviteSMSOfflineFriends
struct UScriptHelperClient_InviteSMSOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InviteLineOfflineFriends
struct UScriptHelperClient_InviteLineOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InviteFBOfflineFriends
struct UScriptHelperClient_InviteFBOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
	struct FString                                     link;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InstallNewApp
struct UScriptHelperClient_InstallNewApp_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitVPN
struct UScriptHelperClient_InitVPN_Params
{
	struct FString                                     InVPNGUID;                                                // (Parm, ZeroConstructor)
	struct FString                                     InClientVersion;                                          // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitVlink
struct UScriptHelperClient_InitVlink_Params
{
};

// Function Client.ScriptHelperClient.InitTweenMaker
struct UScriptHelperClient_InitTweenMaker_Params
{
};

// Function Client.ScriptHelperClient.InitQuantumPlatformMisc
struct UScriptHelperClient_InitQuantumPlatformMisc_Params
{
};

// Function Client.ScriptHelperClient.InitLoginAccount
struct UScriptHelperClient_InitLoginAccount_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           AccUin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AccPswd;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.InitJavaFunctions
struct UScriptHelperClient_InitJavaFunctions_Params
{
};

// Function Client.ScriptHelperClient.InitIMSDKEnv
struct UScriptHelperClient_InitIMSDKEnv_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           iEnv;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitializePuffer
struct UScriptHelperClient_InitializePuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               needCheck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownloadsPerTask;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownTask;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDownloadSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useOldInterface;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removeOldWhenUpdate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                versionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitializeLaggingReporter
struct UScriptHelperClient_InitializeLaggingReporter_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitHF
struct UScriptHelperClient_InitHF_Params
{
};

// Function Client.ScriptHelperClient.InitGCloudRemoteConfig
struct UScriptHelperClient_InitGCloudRemoteConfig_Params
{
};

// Function Client.ScriptHelperClient.InitDH
struct UScriptHelperClient_InitDH_Params
{
	struct FString                                     gen;                                                      // (Parm, ZeroConstructor)
	struct FString                                     prime;                                                    // (Parm, ZeroConstructor)
	int                                                v_srand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Ini_UpdateMemResource
struct UScriptHelperClient_Ini_UpdateMemResource_Params
{
	struct FString                                     KeyWord;                                                  // (Parm, ZeroConstructor)
	struct FString                                     CMDvalue;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.HtmlEncode
struct UScriptHelperClient_HtmlEncode_Params
{
	struct FString                                     UnencodedString;                                          // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.HideH5WebView
struct UScriptHelperClient_HideH5WebView_Params
{
};

// Function Client.ScriptHelperClient.HelpshiftShowFAQsWithInfo
struct UScriptHelperClient_HelpshiftShowFAQsWithInfo_Params
{
};

// Function Client.ScriptHelperClient.HelpshiftShowConversion
struct UScriptHelperClient_HelpshiftShowConversion_Params
{
};

// Function Client.ScriptHelperClient.HelpshiftRequestUnreadMessagesCount
struct UScriptHelperClient_HelpshiftRequestUnreadMessagesCount_Params
{
};

// Function Client.ScriptHelperClient.HelpshiftGetUnreadMessgesCount
struct UScriptHelperClient_HelpshiftGetUnreadMessgesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HelpshiftClearUnreadMessgesCount
struct UScriptHelperClient_HelpshiftClearUnreadMessgesCount_Params
{
};

// Function Client.ScriptHelperClient.HaveReceivedNoticeCallback
struct UScriptHelperClient_HaveReceivedNoticeCallback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasRemoteConfigReady
struct UScriptHelperClient_HasRemoteConfigReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasNotice
struct UScriptHelperClient_HasNotice_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Scene;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasNotchInScreen
struct UScriptHelperClient_HasNotchInScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasDownloadedBasePak
struct UScriptHelperClient_HasDownloadedBasePak_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasActiveWifi
struct UScriptHelperClient_HasActiveWifi_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GotoPlatformAppraise
struct UScriptHelperClient_GotoPlatformAppraise_Params
{
};

// Function Client.ScriptHelperClient.GMTestAllocUObjs
struct UScriptHelperClient_GMTestAllocUObjs_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GMH5Enable
struct UScriptHelperClient_GMH5Enable_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetWidgetsByClass
struct UScriptHelperClient_GetWidgetsByClass_Params
{
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetWebViewTicket
struct UScriptHelperClient_GetWebViewTicket_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetWeaponDIYIconPath
struct UScriptHelperClient_GetWeaponDIYIconPath_Params
{
	struct FString                                     PlayerUID;                                                // (Parm, ZeroConstructor)
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlanID;                                                   // (Parm, ZeroConstructor)
	bool                                               relativePath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUserVulkanSetting
struct UScriptHelperClient_GetUserVulkanSetting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetUnrealNetworkStatus
struct UScriptHelperClient_GetUnrealNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIRectOffset
struct UScriptHelperClient_GetUIRectOffset_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetToken
struct UScriptHelperClient_GetToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetTimeInMiliSeconds
struct UScriptHelperClient_GetTimeInMiliSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTelecomSvr
struct UScriptHelperClient_GetTelecomSvr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetTCDeviceLevel
struct UScriptHelperClient_GetTCDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTableData_LuaState
struct UScriptHelperClient_GetTableData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTableCount
struct UScriptHelperClient_GetTableCount_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTable_LuaState
struct UScriptHelperClient_GetTable_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetSystemLanguage_LuaState
struct UScriptHelperClient_GetSystemLanguage_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetSubsideFeatureLevel
struct UScriptHelperClient_GetSubsideFeatureLevel_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetSrcVersion
struct UScriptHelperClient_GetSrcVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetSplitMapConfigInfo
struct UScriptHelperClient_GetSplitMapConfigInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetSpecialData
struct UScriptHelperClient_GetSpecialData_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetSoundEffectQuality
struct UScriptHelperClient_GetSoundEffectQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetShaderPrecompileProgress
struct UScriptHelperClient_GetShaderPrecompileProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetServerDelay
struct UScriptHelperClient_GetServerDelay_Params
{
	struct FString                                     ServerAddress;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenWidthForWebview
struct UScriptHelperClient_GetScreenWidthForWebview_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenWidth
struct UScriptHelperClient_GetScreenWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenHole
struct UScriptHelperClient_GetScreenHole_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetScreenHight
struct UScriptHelperClient_GetScreenHight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenHeightForWebview
struct UScriptHelperClient_GetScreenHeightForWebview_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenDensity
struct UScriptHelperClient_GetScreenDensity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetSavedXGPushNightTag
struct UScriptHelperClient_GetSavedXGPushNightTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetSavedXGPushDayTag
struct UScriptHelperClient_GetSavedXGPushDayTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetRemarkNameByGIDWithObj
struct UScriptHelperClient_GetRemarkNameByGIDWithObj_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetRemarkNameByGID
struct UScriptHelperClient_GetRemarkNameByGID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetRegisterChannelID
struct UScriptHelperClient_GetRegisterChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetRedBloodSwitch
struct UScriptHelperClient_GetRedBloodSwitch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetPufferInitResult
struct UScriptHelperClient_GetPufferInitResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetPufferInitErrCode
struct UScriptHelperClient_GetPufferInitErrCode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetPublishRegion
struct UScriptHelperClient_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPublicKey
struct UScriptHelperClient_GetPublicKey_Params
{
	struct FString                                     cli_pri_key;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPrivateKey
struct UScriptHelperClient_GetPrivateKey_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPingReportInfo
struct UScriptHelperClient_GetPingReportInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPingReportData
struct UScriptHelperClient_GetPingReportData_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhysicalFileTime
struct UScriptHelperClient_GetPhysicalFileTime_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetPhoneType
struct UScriptHelperClient_GetPhoneType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneDeviceID
struct UScriptHelperClient_GetPhoneDeviceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneAdvertisingID
struct UScriptHelperClient_GetPhoneAdvertisingID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPackChannel
struct UScriptHelperClient_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetOSVersion
struct UScriptHelperClient_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetODPaksFileUseTime
struct UScriptHelperClient_GetODPaksFileUseTime_Params
{
	struct FString                                     DumpFilename;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNotificationExtraDataString
struct UScriptHelperClient_GetNotificationExtraDataString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNotchSize
struct UScriptHelperClient_GetNotchSize_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNetWorkType
struct UScriptHelperClient_GetNetWorkType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNativeVersion
struct UScriptHelperClient_GetNativeVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNativePackageTag
struct UScriptHelperClient_GetNativePackageTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetMyFriendObservers
struct UScriptHelperClient_GetMyFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetMidasPF_LuaState
struct UScriptHelperClient_GetMidasPF_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMidasPayChannel_LuaState
struct UScriptHelperClient_GetMidasPayChannel_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMemoryStats_LuaState
struct UScriptHelperClient_GetMemoryStats_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMemorySize
struct UScriptHelperClient_GetMemorySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLuaRootDir
struct UScriptHelperClient_GetLuaRootDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetLoginChannel
struct UScriptHelperClient_GetLoginChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLocalTimezone_LuaState
struct UScriptHelperClient_GetLocalTimezone_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLaunchLocalNotificationID
struct UScriptHelperClient_GetLaunchLocalNotificationID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetKnownMissingPackage
struct UScriptHelperClient_GetKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
	struct FString                                     DumpFilename;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetiTOPLbsDelay
struct UScriptHelperClient_GetiTOPLbsDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetITopGameId
struct UScriptHelperClient_GetITopGameId_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetIsSecretVersion
struct UScriptHelperClient_GetIsSecretVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIsPlayerUsingVPN
struct UScriptHelperClient_GetIsPlayerUsingVPN_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIsOpenBattlePlayback
struct UScriptHelperClient_GetIsOpenBattlePlayback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIPRegion
struct UScriptHelperClient_GetIPRegion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIpAddrByHost
struct UScriptHelperClient_GetIpAddrByHost_Params
{
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetIpAddr
struct UScriptHelperClient_GetIpAddr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetIntDefaultOffset
struct UScriptHelperClient_GetIntDefaultOffset_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetInstallChannelID
struct UScriptHelperClient_GetInstallChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetIMSDKEnv
struct UScriptHelperClient_GetIMSDKEnv_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetH5CacheStatus
struct UScriptHelperClient_GetH5CacheStatus_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetGvoiceReconnectInfo
struct UScriptHelperClient_GetGvoiceReconnectInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               Data;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetGroupInfo
struct UScriptHelperClient_GetGroupInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SnsAction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGroupInfoWrapper                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGoogleServiceVersionCode
struct UScriptHelperClient_GetGoogleServiceVersionCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetGLVersion
struct UScriptHelperClient_GetGLVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGLType
struct UScriptHelperClient_GetGLType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGameStatus
struct UScriptHelperClient_GetGameStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGameModeID
struct UScriptHelperClient_GetGameModeID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGameMasterGUID
struct UScriptHelperClient_GetGameMasterGUID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetFPS
struct UScriptHelperClient_GetFPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetFileSizeOnDiskBytes
struct UScriptHelperClient_GetFileSizeOnDiskBytes_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetFileSizeOnDisk
struct UScriptHelperClient_GetFileSizeOnDisk_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetFileSizeCompressed
struct UScriptHelperClient_GetFileSizeCompressed_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetFileDirPath
struct UScriptHelperClient_GetFileDirPath_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetFBFriendsUnregistered
struct UScriptHelperClient_GetFBFriendsUnregistered_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     extend;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetExactDeviceLevel
struct UScriptHelperClient_GetExactDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetEncodeUrl
struct UScriptHelperClient_GetEncodeUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetEmulatorName
struct UScriptHelperClient_GetEmulatorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDSVersion
struct UScriptHelperClient_GetDSVersion_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDeviceQualityLevel
struct UScriptHelperClient_GetDeviceQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetDevicePlatformName
struct UScriptHelperClient_GetDevicePlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDeviceModel
struct UScriptHelperClient_GetDeviceModel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDeviceMaxSupportSoundEffect
struct UScriptHelperClient_GetDeviceMaxSupportSoundEffect_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetDeviceInfo
struct UScriptHelperClient_GetDeviceInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDeviceFreeSpace
struct UScriptHelperClient_GetDeviceFreeSpace_Params
{
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetCurrentZoneID
struct UScriptHelperClient_GetCurrentZoneID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetCurrentRHILevel
struct UScriptHelperClient_GetCurrentRHILevel_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetCurrentLanguage_LuaState
struct UScriptHelperClient_GetCurrentLanguage_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetCurrentChannel
struct UScriptHelperClient_GetCurrentChannel_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetCpuType
struct UScriptHelperClient_GetCpuType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetCDNUpdateInfo
struct UScriptHelperClient_GetCDNUpdateInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               Data;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetBuildVersion
struct UScriptHelperClient_GetBuildVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetBattleKey
struct UScriptHelperClient_GetBattleKey_Params
{
	struct FString                                     svr_pub_key;                                              // (Parm, ZeroConstructor)
	struct FString                                     cli_pri_key;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAreaIPNo
struct UScriptHelperClient_GetAreaIPNo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAppVersion
struct UScriptHelperClient_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetApplicationVersion
struct UScriptHelperClient_GetApplicationVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAOSSHOP
struct UScriptHelperClient_GetAOSSHOP_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAndroidSysInfo
struct UScriptHelperClient_GetAndroidSysInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAndroidSOVersion
struct UScriptHelperClient_GetAndroidSOVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAndroidMaxStackSize
struct UScriptHelperClient_GetAndroidMaxStackSize_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAndroidMaxFDNum
struct UScriptHelperClient_GetAndroidMaxFDNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAndroidCurrentFDNum
struct UScriptHelperClient_GetAndroidCurrentFDNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAndroidBuildForArm
struct UScriptHelperClient_GetAndroidBuildForArm_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAllLocalNotificationIDs
struct UScriptHelperClient_GetAllLocalNotificationIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAllFilesInDir
struct UScriptHelperClient_GetAllFilesInDir_Params
{
	struct FString                                     Dir;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAccountRegion
struct UScriptHelperClient_GetAccountRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAccessToken
struct UScriptHelperClient_GetAccessToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GenerateQRImage
struct UScriptHelperClient_GenerateQRImage_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
	struct FString                                     logoPath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GEMReportSubEvent
struct UScriptHelperClient_GEMReportSubEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     SubEventName;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             eventParams;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.ScriptHelperClient.GEMReportShaderPrecompileEvent
struct UScriptHelperClient_GEMReportShaderPrecompileEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strDesc;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GEMReportEvent
struct UScriptHelperClient_GEMReportEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               eventParams;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GEMReportEnterLobbyEvent
struct UScriptHelperClient_GEMReportEnterLobbyEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strDesc;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GCloudRemoteConfigGetString
struct UScriptHelperClient_GCloudRemoteConfigGetString_Params
{
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	struct FString                                     InDefaultValue;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GCloudRemoteConfigGetInt
struct UScriptHelperClient_GCloudRemoteConfigGetInt_Params
{
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	int                                                InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GCloudRemoteConfigGetBool
struct UScriptHelperClient_GCloudRemoteConfigGetBool_Params
{
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	bool                                               InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterSetUserInfo
struct UScriptHelperClient_GameMasterSetUserInfo_Params
{
	struct FString                                     InPaidInfo;                                               // (Parm, ZeroConstructor)
	struct FString                                     InUserToken;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameMasterSetUsableRegion
struct UScriptHelperClient_GameMasterSetUsableRegion_Params
{
	struct FString                                     InRegion;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameMasterSetUdpEchoPort
struct UScriptHelperClient_GameMasterSetUdpEchoPort_Params
{
	int                                                InPort;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterSetOnlyWifiAccel
struct UScriptHelperClient_GameMasterSetOnlyWifiAccel_Params
{
	bool                                               InOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterSetFreeFlowUser
struct UScriptHelperClient_GameMasterSetFreeFlowUser_Params
{
	int                                                InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterOnNetDelay
struct UScriptHelperClient_GameMasterOnNetDelay_Params
{
	int                                                InMillis;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterIsAccelOpened
struct UScriptHelperClient_GameMasterIsAccelOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterInit
struct UScriptHelperClient_GameMasterInit_Params
{
	int                                                InHookType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InGuid;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InLibs;                                                   // (Parm, ZeroConstructor)
	int                                                InEchoPort;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterGetWebUIUrl
struct UScriptHelperClient_GameMasterGetWebUIUrl_Params
{
	int                                                InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GameMasterGetVIPValidTime
struct UScriptHelperClient_GameMasterGetVIPValidTime_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GameMasterGetUserID
struct UScriptHelperClient_GameMasterGetUserID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GameMasterGetAccelerationStatus
struct UScriptHelperClient_GameMasterGetAccelerationStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterClearAccelAddr
struct UScriptHelperClient_GameMasterClearAccelAddr_Params
{
};

// Function Client.ScriptHelperClient.GameMasterBeginRound
struct UScriptHelperClient_GameMasterBeginRound_Params
{
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InPvpId;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameMasterAddNewArenaAddress
struct UScriptHelperClient_GameMasterAddNewArenaAddress_Params
{
	struct FString                                     InProtocol;                                               // (Parm, ZeroConstructor)
	struct FString                                     InIp;                                                     // (Parm, ZeroConstructor)
	int                                                InPort;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameMasterAddAccelAddr
struct UScriptHelperClient_GameMasterAddAccelAddr_Params
{
	struct FString                                     InProtocol;                                               // (Parm, ZeroConstructor)
	struct FString                                     InIp;                                                     // (Parm, ZeroConstructor)
	int                                                InPort;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoySwitchOn
struct UScriptHelperClient_GameJoySwitchOn_Params
{
	int                                                isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyStopManualRecord
struct UScriptHelperClient_GameJoyStopManualRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyStartMomentsRecord
struct UScriptHelperClient_GameJoyStartMomentsRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyStartManualRecord
struct UScriptHelperClient_GameJoyStartManualRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoySetVideoQuality
struct UScriptHelperClient_GameJoySetVideoQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoySetMomentRecordSwitchOn
struct UScriptHelperClient_GameJoySetMomentRecordSwitchOn_Params
{
	int                                                isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoySetLuaguage
struct UScriptHelperClient_GameJoySetLuaguage_Params
{
};

// Function Client.ScriptHelperClient.GameJoySetCurrentRecorderPosition
struct UScriptHelperClient_GameJoySetCurrentRecorderPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyIsSDKFeatureSupport
struct UScriptHelperClient_GameJoyIsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyGenerateMomentsVideo
struct UScriptHelperClient_GameJoyGenerateMomentsVideo_Params
{
	TArray<struct FTimeStamp>                          shortVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	TArray<struct FTimeStamp>                          largeVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               ExtraInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameJoyEndMomentsRecord
struct UScriptHelperClient_GameJoyEndMomentsRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyClearMomentsVideo
struct UScriptHelperClient_GameJoyClearMomentsVideo_Params
{
};

// Function Client.ScriptHelperClient.FullPathFileExist
struct UScriptHelperClient_FullPathFileExist_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.FlushKnownMissingPackageRefObject
struct UScriptHelperClient_FlushKnownMissingPackageRefObject_Params
{
};

// Function Client.ScriptHelperClient.FinishPufferUpdateInDolphin
struct UScriptHelperClient_FinishPufferUpdateInDolphin_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinished;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.FindFilesRecursiveSkipPakPlatform
struct UScriptHelperClient_FindFilesRecursiveSkipPakPlatform_Params
{
	struct FString                                     Dir;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.FindFiles_LuaState
struct UScriptHelperClient_FindFiles_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.FileSystemTesting
struct UScriptHelperClient_FileSystemTesting_Params
{
	uint32_t                                           Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ExitGameForSafety
struct UScriptHelperClient_ExitGameForSafety_Params
{
};

// Function Client.ScriptHelperClient.ExitGame
struct UScriptHelperClient_ExitGame_Params
{
};

// Function Client.ScriptHelperClient.EnterLoading
struct UScriptHelperClient_EnterLoading_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnterFightChat
struct UScriptHelperClient_EnterFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.EnterBattleStandAlone
struct UScriptHelperClient_EnterBattleStandAlone_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapPath;                                                  // (Parm, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.EnterBattle
struct UScriptHelperClient_EnterBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HostnameOrIP;                                             // (Parm, ZeroConstructor)
	uint32_t                                           Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     PacketKey;                                                // (Parm, ZeroConstructor)
	uint64_t                                           GameID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsObserver;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FString>                          AdvConfig;                                                // (Parm, ZeroConstructor)
	int                                                WaterType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WaterUserID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EncryptUID
struct UScriptHelperClient_EncryptUID_Params
{
	struct FString                                     sUid;                                                     // (Parm, ZeroConstructor)
	struct FString                                     sKey;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.EnableUseOldInterface
struct UScriptHelperClient_EnableUseOldInterface_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableTxtCheck
struct UScriptHelperClient_EnableTxtCheck_Params
{
};

// Function Client.ScriptHelperClient.EnableReportGVoiceEvent
struct UScriptHelperClient_EnableReportGVoiceEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceInitGVoiceComponentReportEnable;                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceJoinRoomReportEnable;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceQuitRoomReportEnable;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceJoinLbsRoomReportEnable;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceQuitLbsRoomReportEnable;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceOnJoinTeamRoomReportEnable;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GVoiceOnJoinLbsRoomReportEnable;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableLocalizationStatus
struct UScriptHelperClient_EnableLocalizationStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableIosStuckWork
struct UScriptHelperClient_EnableIosStuckWork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableGvoiceGemReport
struct UScriptHelperClient_EnableGvoiceGemReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableGvoice
struct UScriptHelperClient_EnableGvoice_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableCampGvoice
struct UScriptHelperClient_EnableCampGvoice_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableAutoObjectRefreshStage
struct UScriptHelperClient_EnableAutoObjectRefreshStage_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnableAudioRouteChangedNotify
struct UScriptHelperClient_EnableAudioRouteChangedNotify_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DumpOpenReadCollect
struct UScriptHelperClient_DumpOpenReadCollect_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DumpFilename;                                             // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.DownloadCDNFile
struct UScriptHelperClient_DownloadCDNFile_Params
{
	struct FString                                     cdnUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     savePath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.Disconnect
struct UScriptHelperClient_Disconnect_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DisableRepairResource
struct UScriptHelperClient_DisableRepairResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DirectToSetting
struct UScriptHelperClient_DirectToSetting_Params
{
};

// Function Client.ScriptHelperClient.DestroyConnector
struct UScriptHelperClient_DestroyConnector_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DeleteFile
struct UScriptHelperClient_DeleteFile_Params
{
	struct FString                                     fullPath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DeleteDirectory
struct UScriptHelperClient_DeleteDirectory_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.DelayToSetAutoInitFacebookLog
struct UScriptHelperClient_DelayToSetAutoInitFacebookLog_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DelayToInitFacebookSDK
struct UScriptHelperClient_DelayToInitFacebookSDK_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithLaunchOption;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DelayInitThirdPartSDK
struct UScriptHelperClient_DelayInitThirdPartSDK_Params
{
};

// Function Client.ScriptHelperClient.CreateHapticsEngine
struct UScriptHelperClient_CreateHapticsEngine_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ConvertToAbsolutePathForExternalAppForWrite
struct UScriptHelperClient_ConvertToAbsolutePathForExternalAppForWrite_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ConvertToAbsolutePathForExternalAppForRead
struct UScriptHelperClient_ConvertToAbsolutePathForExternalAppForRead_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ConvertRelativePathToFull
struct UScriptHelperClient_ConvertRelativePathToFull_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ConvertGamePathToRelativeFilePath
struct UScriptHelperClient_ConvertGamePathToRelativeFilePath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ConnectToURL
struct UScriptHelperClient_ConnectToURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                ConnectTimeOutSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ComputerName
struct UScriptHelperClient_ComputerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.CloseWebView
struct UScriptHelperClient_CloseWebView_Params
{
};

// Function Client.ScriptHelperClient.CloseVLink
struct UScriptHelperClient_CloseVLink_Params
{
};

// Function Client.ScriptHelperClient.CloseVideoListDialog
struct UScriptHelperClient_CloseVideoListDialog_Params
{
};

// Function Client.ScriptHelperClient.CloseH5WebView
struct UScriptHelperClient_CloseH5WebView_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClipBoardCopy
struct UScriptHelperClient_ClipBoardCopy_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ClientKickPlayerFromGame
struct UScriptHelperClient_ClientKickPlayerFromGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClientEnterWarMode
struct UScriptHelperClient_ClientEnterWarMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClientConfirmReturnToGame
struct UScriptHelperClient_ClientConfirmReturnToGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClientConfirmMisKill
struct UScriptHelperClient_ClientConfirmMisKill_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bConfirm;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClearUpdatedSoPatch
struct UScriptHelperClient_ClearUpdatedSoPatch_Params
{
};

// Function Client.ScriptHelperClient.ClearNotifications
struct UScriptHelperClient_ClearNotifications_Params
{
};

// Function Client.ScriptHelperClient.ClearNotice
struct UScriptHelperClient_ClearNotice_Params
{
};

// Function Client.ScriptHelperClient.ClearChannelID
struct UScriptHelperClient_ClearChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClearAllLocalNotifications
struct UScriptHelperClient_ClearAllLocalNotifications_Params
{
};

// Function Client.ScriptHelperClient.ClearAdjustDeepLink
struct UScriptHelperClient_ClearAdjustDeepLink_Params
{
};

// Function Client.ScriptHelperClient.CheckRegisterGestureConflictWithZoom
struct UScriptHelperClient_CheckRegisterGestureConflictWithZoom_Params
{
};

// Function Client.ScriptHelperClient.CheckFilesInPak
struct UScriptHelperClient_CheckFilesInPak_Params
{
	TArray<struct FString>                             Files;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.CheckBeforeInitPuffer
struct UScriptHelperClient_CheckBeforeInitPuffer_Params
{
};

// Function Client.ScriptHelperClient.ChangeLocalizationReleaseTestStatus
struct UScriptHelperClient_ChangeLocalizationReleaseTestStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CanUseHapticsEngine
struct UScriptHelperClient_CanUseHapticsEngine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CancelLocalNotification
struct UScriptHelperClient_CancelLocalNotification_Params
{
	int                                                NotificationID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CallIngameFirstTimeTips
struct UScriptHelperClient_CallIngameFirstTimeTips_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.CallEngineGC
struct UScriptHelperClient_CallEngineGC_Params
{
};

// Function Client.ScriptHelperClient.CacheH5WebView
struct UScriptHelperClient_CacheH5WebView_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.BuglySetAppVersion
struct UScriptHelperClient_BuglySetAppVersion_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Version;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.BuglyPutUserData
struct UScriptHelperClient_BuglyPutUserData_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.BuglyPostException
struct UScriptHelperClient_BuglyPostException_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.BuglyLog
struct UScriptHelperClient_BuglyLog_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Log;                                                      // (Parm, ZeroConstructor)
	bool                                               needDump;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestWaitForUIWithName
struct UScriptHelperClient_AutoTestWaitForUIWithName_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestWaitForSecond
struct UScriptHelperClient_AutoTestWaitForSecond_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestWaitForJumpPlane
struct UScriptHelperClient_AutoTestWaitForJumpPlane_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestVehicleDriverShoot
struct UScriptHelperClient_AutoTestVehicleDriverShoot_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestVaultWall
struct UScriptHelperClient_AutoTestVaultWall_Params
{
};

// Function Client.ScriptHelperClient.AutoTestUsePropSkillClientEx
struct UScriptHelperClient_AutoTestUsePropSkillClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestUseItemClientEx
struct UScriptHelperClient_AutoTestUseItemClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestUseItem
struct UScriptHelperClient_AutoTestUseItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestUpgradePropSkillClientEx
struct UScriptHelperClient_AutoTestUpgradePropSkillClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestToggleVehicleSync
struct UScriptHelperClient_AutoTestToggleVehicleSync_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestThrowBoomOnlyClientEx
struct UScriptHelperClient_AutoTestThrowBoomOnlyClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestThrowBoom
struct UScriptHelperClient_AutoTestThrowBoom_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSwitchWeapon
struct UScriptHelperClient_AutoTestSwitchWeapon_Params
{
	int                                                WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSwitchMode
struct UScriptHelperClient_AutoTestSwitchMode_Params
{
	struct FString                                     FunName;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestSwitchGameStatus
struct UScriptHelperClient_AutoTestSwitchGameStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GameStatus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestStopRecordStats
struct UScriptHelperClient_AutoTestStopRecordStats_Params
{
};

// Function Client.ScriptHelperClient.AutoTestStartRecordStats
struct UScriptHelperClient_AutoTestStartRecordStats_Params
{
	struct FString                                     FileStr;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestStartFireOnlyClientEx
struct UScriptHelperClient_AutoTestStartFireOnlyClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestStartFire
struct UScriptHelperClient_AutoTestStartFire_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSpecating
struct UScriptHelperClient_AutoTestSpecating_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                leftTeamCnt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSpawnVehicle
struct UScriptHelperClient_AutoTestSpawnVehicle_Params
{
	struct FString                                     ResPath;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestSetVehicleRotation
struct UScriptHelperClient_AutoTestSetVehicleRotation_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetRecordFrequency
struct UScriptHelperClient_AutoTestSetRecordFrequency_Params
{
	uint32_t                                           Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorRotation
struct UScriptHelperClient_AutoTestSetActorRotation_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorPitch
struct UScriptHelperClient_AutoTestSetActorPitch_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorFacePoint
struct UScriptHelperClient_AutoTestSetActorFacePoint_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSendBuffertoSvr
struct UScriptHelperClient_AutoTestSendBuffertoSvr_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestReloadOnlyClientEx
struct UScriptHelperClient_AutoTestReloadOnlyClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestPickupItemOnlyClientEx
struct UScriptHelperClient_AutoTestPickupItemOnlyClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestPickupItem
struct UScriptHelperClient_AutoTestPickupItem_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestOpenTraceRPC
struct UScriptHelperClient_AutoTestOpenTraceRPC_Params
{
};

// Function Client.ScriptHelperClient.AutoTestOpenScope
struct UScriptHelperClient_AutoTestOpenScope_Params
{
	bool                                               bOpenScope;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestOpenDoorOnlyClientEx
struct UScriptHelperClient_AutoTestOpenDoorOnlyClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestMustDie
struct UScriptHelperClient_AutoTestMustDie_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                leftTeamCnt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestMoveVehicleForward
struct UScriptHelperClient_AutoTestMoveVehicleForward_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestMoveToPoint
struct UScriptHelperClient_AutoTestMoveToPoint_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestJumpPlane
struct UScriptHelperClient_AutoTestJumpPlane_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestJump
struct UScriptHelperClient_AutoTestJump_Params
{
};

// Function Client.ScriptHelperClient.AutoTestIsOnVehicle
struct UScriptHelperClient_AutoTestIsOnVehicle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestIsDriver
struct UScriptHelperClient_AutoTestIsDriver_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestInputMovement
struct UScriptHelperClient_AutoTestInputMovement_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMVehicleMoveAndTowardClientEx
struct UScriptHelperClient_AutoTestGMVehicleMoveAndTowardClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              x1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMGotoClientEx
struct UScriptHelperClient_AutoTestGMGotoClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMGoto
struct UScriptHelperClient_AutoTestGMGoto_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMCommand
struct UScriptHelperClient_AutoTestGMCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestGetVehicleLocationClientEx
struct UScriptHelperClient_AutoTestGetVehicleLocationClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetVehicleLocation
struct UScriptHelperClient_AutoTestGetVehicleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetRuntimeStats
struct UScriptHelperClient_AutoTestGetRuntimeStats_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetOnVehicle
struct UScriptHelperClient_AutoTestGetOnVehicle_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetOffVehicle
struct UScriptHelperClient_AutoTestGetOffVehicle_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetNearVehiclePos
struct UScriptHelperClient_AutoTestGetNearVehiclePos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetMapName
struct UScriptHelperClient_AutoTestGetMapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetGameModeState
struct UScriptHelperClient_AutoTestGetGameModeState_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetFrameInfo
struct UScriptHelperClient_AutoTestGetFrameInfo_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetDis2D
struct UScriptHelperClient_AutoTestGetDis2D_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                x2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                y2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                z2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetCircleLocationClientEx
struct UScriptHelperClient_AutoTestGetCircleLocationClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetActorName
struct UScriptHelperClient_AutoTestGetActorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetActorLocationListClientEx
struct UScriptHelperClient_AutoTestGetActorLocationListClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetActorLocation
struct UScriptHelperClient_AutoTestGetActorLocation_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestForceVehiclePosPullClientEx
struct UScriptHelperClient_AutoTestForceVehiclePosPullClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestEnableUITest
struct UScriptHelperClient_AutoTestEnableUITest_Params
{
};

// Function Client.ScriptHelperClient.AutoTestDropItemClientEx
struct UScriptHelperClient_AutoTestDropItemClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestContinuousMoveTo
struct UScriptHelperClient_AutoTestContinuousMoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestConsoleCommand
struct UScriptHelperClient_AutoTestConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestCloseTraceRPC
struct UScriptHelperClient_AutoTestCloseTraceRPC_Params
{
};

// Function Client.ScriptHelperClient.AutoTestClickButton
struct UScriptHelperClient_AutoTestClickButton_Params
{
	struct FString                                     ButtonName;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestAddItemClientEx
struct UScriptHelperClient_AutoTestAddItemClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestAddItem
struct UScriptHelperClient_AutoTestAddItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoMoveToTargetPosClientEx
struct UScriptHelperClient_AutoMoveToTargetPosClientEx_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     targetPos;                                                // (Parm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AskForNotificationPermission
struct UScriptHelperClient_AskForNotificationPermission_Params
{
};

// Function Client.ScriptHelperClient.AndroidShouldShowPermissionRationale
struct UScriptHelperClient_AndroidShouldShowPermissionRationale_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AndroidCheckPermission
struct UScriptHelperClient_AndroidCheckPermission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AkAudio_UnloadInitBank
struct UScriptHelperClient_AkAudio_UnloadInitBank_Params
{
};

// Function Client.ScriptHelperClient.AkAudio_UnloadAllFilePackages
struct UScriptHelperClient_AkAudio_UnloadAllFilePackages_Params
{
};

// Function Client.ScriptHelperClient.AkAudio_StopAllSounds
struct UScriptHelperClient_AkAudio_StopAllSounds_Params
{
	bool                                               bShouldStopUISounds;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AkAudio_LoadInitBank
struct UScriptHelperClient_AkAudio_LoadInitBank_Params
{
};

// Function Client.ScriptHelperClient.AkAudio_Flush
struct UScriptHelperClient_AkAudio_Flush_Params
{
	class UWorld*                                      WorldToFlush;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AkAudio_ClearBanks
struct UScriptHelperClient_AkAudio_ClearBanks_Params
{
};

// Function Client.ScriptHelperClient.AdjustParaAnalysis
struct UScriptHelperClient_AdjustParaAnalysis_Params
{
};

// Function Client.ScriptHelperClient.AddKnownMissingPackage
struct UScriptHelperClient_AddKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
	class UObject*                                     BindObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AddErrorCodeToHistory
struct UScriptHelperClient_AddErrorCodeToHistory_Params
{
	struct FString                                     ErrorCode;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AddCrashContextData
struct UScriptHelperClient_AddCrashContextData_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Val;                                                      // (Parm, ZeroConstructor)
	bool                                               bAppendTimeStamp;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reportLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AddAttachFileString
struct UScriptHelperClient_AddAttachFileString_Params
{
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strinfo;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Client.ScriptHelperEngine.TestLz4Decompress
struct UScriptHelperEngine_TestLz4Decompress_Params
{
	TArray<unsigned char>                              Source;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperEngine.TestLz4Compress
struct UScriptHelperEngine_TestLz4Compress_Params
{
	TArray<unsigned char>                              Source;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperEngine.ReplaceEmoji
struct UScriptHelperEngine_ReplaceEmoji_Params
{
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
	int                                                MaxEmojiNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpecialCharacter;                                         // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperEngine.IsLowMemoryDevice
struct UScriptHelperEngine_IsLowMemoryDevice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperEngine.GetMemoryUsedVirtualInKB
struct UScriptHelperEngine_GetMemoryUsedVirtualInKB_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperEngine.GetMemoryUsedPhysicalInKB
struct UScriptHelperEngine_GetMemoryUsedPhysicalInKB_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.STExtraClientUtils.GetWidgetHandleAsyncWithCallBack
struct USTExtraClientUtils_GetWidgetHandleAsyncWithCallBack_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     WidgetKey;                                                // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function Client.STExtraClientUtils.GetDynamicWidgetHandle
struct USTExtraClientUtils_GetDynamicWidgetHandle_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     WidetKey;                                                 // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.STExtraClientUtils.GetBPUtils
struct USTExtraClientUtils_GetBPUtils_Params
{
	class USTExtraClientUIBPUtils*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.STExtraClientUtils.AsyncLoadAssetInstWithCallback
struct USTExtraClientUtils_AsyncLoadAssetInstWithCallback_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.STExtraClientUIBPUtils.OnAsyncAssetLoaded
struct USTExtraClientUIBPUtils_OnAsyncAssetLoaded_Params
{
	struct FSoftObjectPath                             InSoftPath;                                               // (Parm)
	int                                                RequestIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.STExtraClientUIBPUtils.AsyncLoadAssetInstWithCallback
struct USTExtraClientUIBPUtils_AsyncLoadAssetInstWithCallback_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.SendSkdData_LuaState
struct UTssManager_SendSkdData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.SendEigeninfoData_LuaState
struct UTssManager_SendEigeninfoData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.SaveSendEigeninfoCode_LuaState
struct UTssManager_SaveSendEigeninfoCode_LuaState_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.OnRecvData_LuaState
struct UTssManager_OnRecvData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.GetUserTag4Lua_LuaState
struct UTssManager_GetUserTag4Lua_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.GetDeviceFeature_LuaState
struct UTssManager_GetDeviceFeature_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.EigenArrayObfuscationVerify_LuaState
struct UTssManager_EigenArrayObfuscationVerify_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UTRichTextBlock.SetText
struct UUTRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function Client.UTRichTextBlock.SetGameFrontendHUD
struct UUTRichTextBlock_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.UTRichTextBlock.OnHyperlinkClickedEvent__DelegateSignature
struct UUTRichTextBlock_OnHyperlinkClickedEvent__DelegateSignature_Params
{
	struct FMetaDataHolder                             MetaDataHolder;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.UTRichTextBlock.GetText
struct UUTRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.AEVarButton.SetTouchMethod
struct UAEVarButton_SetTouchMethod_Params
{
	TEnumAsByte<enum EButtonTouchMethod>               InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.AEVarButton.SetStyle
struct UAEVarButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.AEVarButton.SetColorAndOpacity
struct UAEVarButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, IsPlainOldData)
};

// Function Client.AEVarButton.SetClickMethod
struct UAEVarButton_SetClickMethod_Params
{
	TEnumAsByte<enum EButtonClickMethod>               InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.AEVarButton.SetBackgroundColor
struct UAEVarButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (Parm, IsPlainOldData)
};

// Function Client.AEVarButton.IsPressed
struct UAEVarButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseFallC.SetScrollOffset
struct UReuseFallC_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.SetItemSize
struct UReuseFallC_SetItemSize_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              __Size;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.SetItemFullStyle
struct UReuseFallC_SetItemFullStyle_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.SetCurItemClass
struct UReuseFallC_SetCurItemClass_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseFallC.ScrollToStart
struct UReuseFallC_ScrollToStart_Params
{
};

// Function Client.ReuseFallC.ScrollToEnd
struct UReuseFallC_ScrollToEnd_Params
{
};

// Function Client.ReuseFallC.ResetCurItemClassToDefault
struct UReuseFallC_ResetCurItemClassToDefault_Params
{
};

// Function Client.ReuseFallC.Reload
struct UReuseFallC_Reload_Params
{
	int                                                __ItemCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.RefreshOne
struct UReuseFallC_RefreshOne_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.Refresh
struct UReuseFallC_Refresh_Params
{
};

// DelegateFunction Client.ReuseFallC.OnUpdateItemDelegate__DelegateSignature
struct UReuseFallC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseFallC.OnTouchFinishDelegate__DelegateSignature
struct UReuseFallC_OnTouchFinishDelegate__DelegateSignature_Params
{
};

// Function Client.ReuseFallC.OnTouchFinishCallback
struct UReuseFallC_OnTouchFinishCallback_Params
{
};

// DelegateFunction Client.ReuseFallC.OnOverscrollStateDelegate__DelegateSignature
struct UReuseFallC_OnOverscrollStateDelegate__DelegateSignature_Params
{
	EReuseFallOverscrollState                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseFallC.OnCreateItemDelegate__DelegateSignature
struct UReuseFallC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseFallC.OnBeforeNewItemDelegate__DelegateSignature
struct UReuseFallC_OnBeforeNewItemDelegate__DelegateSignature_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseFallC.OnAfterNewItemDelegate__DelegateSignature
struct UReuseFallC_OnAfterNewItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.JumpByIdx
struct UReuseFallC_JumpByIdx_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmedia;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseFallC.GetViewSize
struct UReuseFallC_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Client.ReuseFallC.GetScrollOffset
struct UReuseFallC_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseFallC.GetOverscrollState
struct UReuseFallC_GetOverscrollState_Params
{
	EReuseFallOverscrollState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseFallC.GetContentSize
struct UReuseFallC_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Client.ReuseFallC.ClearItemFullStyle
struct UReuseFallC_ClearItemFullStyle_Params
{
};

// Function Client.ReuseFallC.Clear
struct UReuseFallC_Clear_Params
{
};

// Function Client.ReuseListC.SetTitleSlotAutoSize
struct UReuseListC_SetTitleSlotAutoSize_Params
{
	bool                                               as;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.SetTitleSize
struct UReuseListC_SetTitleSize_Params
{
	int                                                sz;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.SetScrollOffset
struct UReuseListC_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.ScrollToStart
struct UReuseListC_ScrollToStart_Params
{
};

// Function Client.ReuseListC.ScrollToEnd
struct UReuseListC_ScrollToEnd_Params
{
};

// Function Client.ReuseListC.Reset
struct UReuseListC_Reset_Params
{
	class UClass*                                      __ItemClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EReuseListStyle                                    __Style;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __ItemWidth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __ItemHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __PaddingX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                __PaddingY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.Reload
struct UReuseListC_Reload_Params
{
	int                                                __ItemCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.RefreshParam
struct UReuseListC_RefreshParam_Params
{
	struct FString                                     _Param;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ReuseListC.RefreshOneParam
struct UReuseListC_RefreshOneParam_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _Param;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ReuseListC.RefreshOne
struct UReuseListC_RefreshOne_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.Refresh
struct UReuseListC_Refresh_Params
{
};

// DelegateFunction Client.ReuseListC.OnUpdateItemParamDelegate__DelegateSignature
struct UReuseListC_OnUpdateItemParamDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
};

// DelegateFunction Client.ReuseListC.OnUpdateItemDelegate__DelegateSignature
struct UReuseListC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseListC.OnScrollItemDelegate__DelegateSignature
struct UReuseListC_OnScrollItemDelegate__DelegateSignature_Params
{
	int                                                BeginIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReuseListC.OnCreateItemDelegate__DelegateSignature
struct UReuseListC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Client.ReuseListC.JumpByIdxStyle
struct UReuseListC_JumpByIdxStyle_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EReuseListJumpStyle                                __Style;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.JumpByIdx
struct UReuseListC_JumpByIdx_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseListC.GetViewSize
struct UReuseListC_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetScrollOffset
struct UReuseListC_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetPaddingY
struct UReuseListC_GetPaddingY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetPaddingX
struct UReuseListC_GetPaddingX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetItemWidthAndPaddingX
struct UReuseListC_GetItemWidthAndPaddingX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetItemWidth
struct UReuseListC_GetItemWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetItemHeightAndPaddingY
struct UReuseListC_GetItemHeightAndPaddingY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetItemHeight
struct UReuseListC_GetItemHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetContentSize
struct UReuseListC_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Client.ReuseListC.GetAllWidgetItems
struct UReuseListC_GetAllWidgetItems_Params
{
	TArray<class UUserWidget*>                         ResultItemList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Client.ReuseListC.FindItem
struct UReuseListC_FindItem_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.ReuseListC.Clear
struct UReuseListC_Clear_Params
{
};

// Function Client.ReusePageC.SetAutoPlayRate
struct UReusePageC_SetAutoPlayRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReusePageC.SelectPage
struct UReusePageC_SelectPage_Params
{
	int                                                __Idx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReusePageC.Reload
struct UReusePageC_Reload_Params
{
	int                                                __Count;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReusePageC.Play
struct UReusePageC_Play_Params
{
	bool                                               bPlay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnUpdateItemDelegate__DelegateSignature
struct UReusePageC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnPageChangedDelegate__DelegateSignature
struct UReusePageC_OnPageChangedDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnEndScrollDelegate__DelegateSignature
struct UReusePageC_OnEndScrollDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnEndDragDelegate__DelegateSignature
struct UReusePageC_OnEndDragDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnCreateItemDelegate__DelegateSignature
struct UReusePageC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Client.ReusePageC.OnBeginDragDelegate__DelegateSignature
struct UReusePageC_OnBeginDragDelegate__DelegateSignature_Params
{
};

// Function Client.ReusePageC.MovePrePage
struct UReusePageC_MovePrePage_Params
{
};

// Function Client.ReusePageC.MoveNextPage
struct UReusePageC_MoveNextPage_Params
{
};

// Function Client.ReusePageC.IsDraging
struct UReusePageC_IsDraging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReusePageC.GetPageCount
struct UReusePageC_GetPageCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReusePageC.GetPage
struct UReusePageC_GetPage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReusePageC.GetOffset
struct UReusePageC_GetOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReusePageC.GetAutoPlayRate
struct UReusePageC_GetAutoPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReusePageC.GetAllItems
struct UReusePageC_GetAllItems_Params
{
	TArray<class UUserWidget*>                         ResultItemList;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               OnlyVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReusePageC.ClearCache
struct UReusePageC_ClearCache_Params
{
};

// Function Client.UDPPingCollector.TickUDPPing
struct UUDPPingCollector_TickUDPPing_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UDPPingCollector.setUDPPingServerAddress
struct UUDPPingCollector_setUDPPingServerAddress_Params
{
	struct FString                                     ServerIP;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ServerPort;                                               // (Parm, ZeroConstructor)
	int                                                ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaterMarkType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UDPPingCollector.PingServer
struct UUDPPingCollector_PingServer_Params
{
	struct FString                                     address;                                                  // (Parm, ZeroConstructor)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaterMarkType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Client.UDPPingCollector.OnPingServerResultDelegate__DelegateSignature
struct UUDPPingCollector_OnPingServerResultDelegate__DelegateSignature_Params
{
	struct FString                                     address;                                                  // (Parm, ZeroConstructor)
	int                                                IsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UDPPingCollector.IsChooingZoneAccess
struct UUDPPingCollector_IsChooingZoneAccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UDPPingCollector.isAllZoneHasPingValue
struct UUDPPingCollector_isAllZoneHasPingValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UDPPingCollector.Init
struct UUDPPingCollector_Init_Params
{
	float                                              MinPingintervalTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              pingintervalTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              pingTimeoutSecond;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              normalDelayMilliSecond;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxAutoChooseZoneDelayMilliSecond;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UDPPingCollector.GetZoneServerDelay
struct UUDPPingCollector_GetZoneServerDelay_Params
{
	struct FString                                     ServerAddress;                                            // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UDPPingCollector.GetMinDealyAddress
struct UUDPPingCollector_GetMinDealyAddress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UDPPingCollector.ChoosingZone
struct UUDPPingCollector_ChoosingZone_Params
{
	int                                                ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AddrIP;                                                   // (Parm, ZeroConstructor)
};

// DelegateFunction Client.WINSDKFBWebLogin.OnWINSDKHttpResponed__DelegateSignature
struct UWINSDKFBWebLogin_OnWINSDKHttpResponed__DelegateSignature_Params
{
	bool                                               requestSucc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     txtContent;                                               // (Parm, ZeroConstructor)
};

// DelegateFunction Client.WINSDKFBWebLogin.OnUrlChanged__DelegateSignature
struct UWINSDKFBWebLogin_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.WINSDKFBWebLogin.LoadURL
struct UWINSDKFBWebLogin_LoadURL_Params
{
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
};

// Function Client.WINSDKFBWebLogin.DoHttpRequest
struct UWINSDKFBWebLogin_DoHttpRequest_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

}

