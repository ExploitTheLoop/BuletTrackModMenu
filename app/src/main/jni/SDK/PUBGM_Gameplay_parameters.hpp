#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Gameplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gameplay.UAECharacter.SendLuaDSToClient
struct AUAECharacter_SendLuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAECharacter.RPC_LuaDSToClient
struct AUAECharacter_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAECharacter.OnRep_UseWholeModel
struct AUAECharacter_OnRep_UseWholeModel_Params
{
};

// Function Gameplay.UAECharacter.OnRep_TeamID
struct AUAECharacter_OnRep_TeamID_Params
{
};

// Function Gameplay.UAECharacter.OnRep_PlayerUID
struct AUAECharacter_OnRep_PlayerUID_Params
{
};

// Function Gameplay.UAECharacter.OnRep_PlayerKey
struct AUAECharacter_OnRep_PlayerKey_Params
{
};

// Function Gameplay.UAECharacter.OnRep_CampID
struct AUAECharacter_OnRep_CampID_Params
{
};

// Function Gameplay.UAECharacter.IsDefaultCharType
struct AUAECharacter_IsDefaultCharType_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAECharacter.GetTeamId
struct AUAECharacter_GetTeamId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAECharacter.GetPlayerKey
struct AUAECharacter_GetPlayerKey_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
struct AUAECharacter_GetNonSimulatedComponents_OnFighting_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
struct AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents
struct AUAECharacter_GetNonSimulatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonDedicatedComponents
struct AUAECharacter_GetNonDedicatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetCampId
struct AUAECharacter_GetCampId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
struct AUAECharacter_ClientAcknowledgeReconnection_3_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.WriteStatistics
struct AUAEGameMode_WriteStatistics_Params
{
};

// Function Gameplay.UAEGameMode.SyncPlayerNames
struct AUAEGameMode_SyncPlayerNames_Params
{
};

// Function Gameplay.UAEGameMode.SyncNewCorpsData
struct AUAEGameMode_SyncNewCorpsData_Params
{
	TArray<struct FDSCorpsInfo>                        OutCorpsData;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEGameMode.SpawnUAEPawnFor
struct AUAEGameMode_SpawnUAEPawnFor_Params
{
	class AController*                                 NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Trans;                                                    // (Parm, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.SetVehicleReportEntry
struct AUAEGameMode_SetVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleReportEntry                         InEntry;                                                  // (Parm)
};

// Function Gameplay.UAEGameMode.SetPlayerOpenId
struct AUAEGameMode_SetPlayerOpenId_Params
{
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPlayerOpenID;                                           // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEGameMode.SetMaxWeaponReportNum
struct AUAEGameMode_SetMaxWeaponReportNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.SetGameEndReportData
struct AUAEGameMode_SetGameEndReportData_Params
{
};

// Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData
struct AUAEGameMode_RetrieveTeamBattleResultData_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameModeTeamBattleResultData               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEGameMode.RetrieveBattleData
struct AUAEGameMode_RetrieveBattleData_Params
{
	struct FBattleData                                 OutBattleData;                                            // (Parm, OutParm)
};

// Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
struct AUAEGameMode_RestartPlayerAtPlayerStart_Params
{
	class AController*                                 NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartSpot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode
struct AUAEGameMode_ResetGameParamsFromGameMode_Params
{
};

// Function Gameplay.UAEGameMode.Rescue
struct AUAEGameMode_Rescue_Params
{
	class APawn*                                       RescueWho;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Hero;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayerValidation
struct AUAEGameMode_ReportCollectedEventDataWithPlayerValidation_Params
{
	class AUAEPlayerController*                        UAEPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CollectReportedEventDataCallback;                         // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayersValidation
struct AUAEGameMode_ReportCollectedEventDataWithPlayersValidation_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CollectReportedEventDataCallback;                         // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ReportCollectedEventData
struct AUAEGameMode_ReportCollectedEventData_Params
{
	struct FString                                     UId;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCollectedEventData                         Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag
struct AUAEGameMode_RegisterItemGroupSpotsByTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.RegisterItemGroupSpots
struct AUAEGameMode_RegisterItemGroupSpots_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.RefreshWorldActiveRange
struct AUAEGameMode_RefreshWorldActiveRange_Params
{
};

// Function Gameplay.UAEGameMode.RefreshWatchTeammates
struct AUAEGameMode_RefreshWatchTeammates_Params
{
	class AUAEPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTeamID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.RefreshPlayerNames
struct AUAEGameMode_RefreshPlayerNames_Params
{
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPlayerName;                                             // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLogin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IdxInTeam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.RecoardAlivePlayerNum
struct AUAEGameMode_RecoardAlivePlayerNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.PreCreatePlayerController
struct AUAEGameMode_PreCreatePlayerController_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnStandAloneGameEnd
struct AUAEGameMode_OnStandAloneGameEnd_Params
{
};

// Function Gameplay.UAEGameMode.OnReportNetworkData
struct AUAEGameMode_OnReportNetworkData_Params
{
};

// Function Gameplay.UAEGameMode.OnPlayerFiring
struct AUAEGameMode_OnPlayerFiring_Params
{
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd
struct AUAEGameMode_OnPlayerControlDestroyEnd_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnObserverLogout
struct AUAEGameMode_OnObserverLogout_Params
{
	class AUAEPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnObserverLogin
struct AUAEGameMode_OnObserverLogin_Params
{
	class AUAEPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnMsg
struct AUAEGameMode_OnMsg_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
struct AUAEGameMode_OnAirDropBoxLanded_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
struct AUAEGameMode_OnAirDropBoxEmpty_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted
struct AUAEGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEGameMode.NotifyPlayerExit
struct AUAEGameMode_NotifyPlayerExit_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyPlayerController;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSendFailure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailureMessage;                                           // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely
struct AUAEGameMode_NotifyPlayerAbleToExitSafely_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged
struct AUAEGameMode_NotifyGameModeParamsChanged_Params
{
	struct FGameModeParams                             GameModeParams;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.UAEGameMode.NotifyGameModeLuckmate
struct AUAEGameMode_NotifyGameModeLuckmate_Params
{
	int64_t                                            MyUID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            LuckmateUID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.NotifyGameModeInit
struct AUAEGameMode_NotifyGameModeInit_Params
{
};

// Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter
struct AUAEGameMode_NotifyExistPlayerReEnter_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.NotifyAIPlayerEnter
struct AUAEGameMode_NotifyAIPlayerEnter_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.NotifyAIDropInfo
struct AUAEGameMode_NotifyAIDropInfo_Params
{
	int                                                NewAI;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDSAIDropInfo                               Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.UAEGameMode.ModifyVehicleDamage
struct AUAEGameMode_ModifyVehicleDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ModifyDamage
struct AUAEGameMode_ModifyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.Killed
struct AUAEGameMode_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea
struct AUAEGameMode_IsSatisfyGeneratorArea_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.IsPlayerCollectedEventDataReportingEnabled
struct AUAEGameMode_IsPlayerCollectedEventDataReportingEnabled_Params
{
	class AUAEPlayerController*                        UAEPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.IsCollectedEventEnabled
struct AUAEGameMode_IsCollectedEventEnabled_Params
{
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.InitWorldActiveRange
struct AUAEGameMode_InitWorldActiveRange_Params
{
};

// Function Gameplay.UAEGameMode.InitSeasonStatue
struct AUAEGameMode_InitSeasonStatue_Params
{
};

// Function Gameplay.UAEGameMode.InitMissionBoard
struct AUAEGameMode_InitMissionBoard_Params
{
};

// Function Gameplay.UAEGameMode.InitGenerator
struct AUAEGameMode_InitGenerator_Params
{
};

// Function Gameplay.UAEGameMode.InitGameParamsFromGameMode
struct AUAEGameMode_InitGameParamsFromGameMode_Params
{
};

// Function Gameplay.UAEGameMode.InitDynamicTriggers
struct AUAEGameMode_InitDynamicTriggers_Params
{
};

// Function Gameplay.UAEGameMode.InitDynamicBuildingGroups
struct AUAEGameMode_InitDynamicBuildingGroups_Params
{
};

// Function Gameplay.UAEGameMode.InitBornWithApple
struct AUAEGameMode_InitBornWithApple_Params
{
};

// Function Gameplay.UAEGameMode.InitAdvertisement
struct AUAEGameMode_InitAdvertisement_Params
{
};

// Function Gameplay.UAEGameMode.Heartbeat
struct AUAEGameMode_Heartbeat_Params
{
};

// Function Gameplay.UAEGameMode.HasVehicleReportEntry
struct AUAEGameMode_HasVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.HasDynamicBuildingGroup
struct AUAEGameMode_HasDynamicBuildingGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse
struct AUAEGameMode_HandlePlayerPaintDecalResponse_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DecalId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GotoNearDeath
struct AUAEGameMode_GotoNearDeath_Params
{
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetVehicleReportEntry
struct AUAEGameMode_GetVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleReportEntry                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEGameMode.GetSurvivingTeamCount
struct AUAEGameMode_GetSurvivingTeamCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetSurvivingCharacterCount
struct AUAEGameMode_GetSurvivingCharacterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
struct AUAEGameMode_GetPlayerStateListWithTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUAEPlayerState*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEGameMode.GetPlayerControllerWithUID
struct AUAEGameMode_GetPlayerControllerWithUID_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
struct AUAEGameMode_GetPlayerControllerListWithTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUAEPlayerController*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum
struct AUAEGameMode_GetPlayerAndRealAiNum_Params
{
	struct FHeartBeatData                              Data;                                                     // (Parm, OutParm)
};

// Function Gameplay.UAEGameMode.GetObserverControllerList
struct AUAEGameMode_GetObserverControllerList_Params
{
	TArray<class AUAEPlayerController*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEGameMode.GetMonsterNum
struct AUAEGameMode_GetMonsterNum_Params
{
	struct FHeartBeatData                              Data;                                                     // (Parm, OutParm)
};

// Function Gameplay.UAEGameMode.GetMaxWeaponReportNum
struct AUAEGameMode_GetMaxWeaponReportNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetClassicPlaneDirection
struct AUAEGameMode_GetClassicPlaneDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
struct AUAEGameMode_FindPlayerStateWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
struct AUAEGameMode_FindPlayerControllerWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.FindPlayerControllerByUId
struct AUAEGameMode_FindPlayerControllerByUId_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor
struct AUAEGameMode_DestroyNoActiveWorldActor_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController
struct AUAEGameMode_DestroyCharacterForPlayerController_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.DestroyAllPickUpObjs
struct AUAEGameMode_DestroyAllPickUpObjs_Params
{
};

// Function Gameplay.UAEGameMode.DeleteSeasonStatue
struct AUAEGameMode_DeleteSeasonStatue_Params
{
};

// Function Gameplay.UAEGameMode.DeleteDynamicLoadItem
struct AUAEGameMode_DeleteDynamicLoadItem_Params
{
};

// Function Gameplay.UAEGameMode.DebugEnterFriendObserver
struct AUAEGameMode_DebugEnterFriendObserver_Params
{
	class AUAEPlayerController*                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups
struct AUAEGameMode_CreateDynamicBuildingGroups_Params
{
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
};

// DelegateFunction Gameplay.UAEGameMode.CollectReportedEventDataCallback__DelegateSignature
struct AUAEGameMode_CollectReportedEventDataCallback__DelegateSignature_Params
{
	class AUAEGameMode*                                UAEGameMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerController*                        UAEPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCollectedEventData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEGameMode.CollectAllPlayerInfo
struct AUAEGameMode_CollectAllPlayerInfo_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.ChangeName
struct AUAEGameMode_ChangeName_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
	bool                                               bNameChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.AddAirDropBox
struct AUAEGameMode_AddAirDropBox_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEGameState.SendLuaDSToClient
struct AUAEGameState_SendLuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEGameState.RPC_LuaDSToClient
struct AUAEGameState_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEGameState.GetWeaponAttrReloadTableRow
struct AUAEGameState_GetWeaponAttrReloadTableRow_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttrReloadTableStruct                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEGameState.GetVehicleAttrReloadTableRow
struct AUAEGameState_GetVehicleAttrReloadTableRow_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleAttrReloadTableStruct               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEGameState.GetGameBridge
struct AUAEGameState_GetGameBridge_Params
{
	class UUAEGameSubsystem*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameState.CheckDSSwitchOpen
struct AUAEGameState_CheckDSSwitchOpen_Params
{
	int                                                SwitchId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
struct AUAEPlayerState_SetGVMemberIDServerCall_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.SetGVMemberID
struct AUAEPlayerState_SetGVMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.SetDeliveryResult
struct AUAEPlayerState_SetDeliveryResult_Params
{
	uint32_t                                           InDeliverPlayerKey;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSuccess;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.SendLuaDSToClient
struct AUAEPlayerState_SendLuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerState.RPC_LuaDSToClient
struct AUAEPlayerState_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerState.ReportTaskExtInfo
struct AUAEPlayerState_ReportTaskExtInfo_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtInfo;                                                  // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerState.ReportTaskData
struct AUAEPlayerState_ReportTaskData_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                process;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportSpecialCollection
struct AUAEPlayerState_ReportSpecialCollection_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportSecretAreaID
struct AUAEPlayerState_ReportSecretAreaID_Params
{
	int                                                SecretAreaID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLikeTeammate
struct AUAEPlayerState_ReportLikeTeammate_Params
{
	int64_t                                            BeLikeUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LikeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLikeSwitch
struct AUAEPlayerState_ReportLikeSwitch_Params
{
	int                                                SwitchSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLikeSelf
struct AUAEPlayerState_ReportLikeSelf_Params
{
	int                                                LikeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLandLocType
struct AUAEPlayerState_ReportLandLocType_Params
{
	int                                                TouchDownLocType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLandAreaList
struct AUAEPlayerState_ReportLandAreaList_Params
{
	TArray<int>                                        TouchDownAreaIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerState.ReportLandArea
struct AUAEPlayerState_ReportLandArea_Params
{
	int                                                TouchDownArea;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.ReportLabelCheck
struct AUAEPlayerState_ReportLabelCheck_Params
{
	int                                                TeammateUID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.RecordUseHelicoper
struct AUAEPlayerState_RecordUseHelicoper_Params
{
	uint32_t                                           UseHelicoperId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.OnRepCampIDBP
struct AUAEPlayerState_OnRepCampIDBP_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex
struct AUAEPlayerState_OnRep_VeteranRecruitIndex_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum
struct AUAEPlayerState_OnRep_UpdateKillMonsterNum_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_UID
struct AUAEPlayerState_OnRep_UID_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
struct AUAEPlayerState_OnRep_PlayerKillsChange_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_MatchLabel
struct AUAEPlayerState_OnRep_MatchLabel_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord
struct AUAEPlayerState_OnRep_CollectItemRecord_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_CampID
struct AUAEPlayerState_OnRep_CampID_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_AliasInfo
struct AUAEPlayerState_OnRep_AliasInfo_Params
{
};

// Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated
struct AUAEPlayerState_OnClientVeteranRecruitIndexUpdated_Params
{
};

// Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted
struct AUAEPlayerState_IsSpecialPickItemCollectionCompleted_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.IsSpecialPickItem
struct AUAEPlayerState_IsSpecialPickItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.IsItemForbidMerge
struct AUAEPlayerState_IsItemForbidMerge_Params
{
	int                                                ItemResId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid
struct AUAEPlayerState_IsDeathDamageInfoValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetWeaponRecordData
struct AUAEPlayerState_GetWeaponRecordData_Params
{
	struct FOnePlayerWeapon                            OutWeaponInfo;                                            // (Parm, OutParm)
};

// Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel
struct AUAEPlayerState_GetVeteranPlayerLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
struct AUAEPlayerState_GetUserIDByMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetUIDString
struct AUAEPlayerState_GetUIDString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
struct AUAEPlayerState_GetTeammateBattleResultData_Params
{
	struct FGameModeTeammateBattleResultData           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerState.GetPlayerKey
struct AUAEPlayerState_GetPlayerKey_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold
struct AUAEPlayerState_GetPlayerBattleResultData_SuperCold_Params
{
	struct FGameModePlayerBattleResultData_SuperCold   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
struct AUAEPlayerState_GetPlayerBattleResultData_Params
{
	struct FGameModePlayerBattleResultData             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerState.GetMentorPlayerType
struct AUAEPlayerState_GetMentorPlayerType_Params
{
	EMentorPlayerType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetDeathDamageInfo
struct AUAEPlayerState_GetDeathDamageInfo_Params
{
	struct FDamageInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList
struct AUAEPlayerState_ForceUpdateCampCharacterList_Params
{
};

// Function Gameplay.UAEPlayerState.ClearTlogData
struct AUAEPlayerState_ClearTlogData_Params
{
};

// Function Gameplay.UAEPlayerState.ChangeCollectItemRecord
struct AUAEPlayerState_ChangeCollectItemRecord_Params
{
	int                                                InItemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNewState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.AddGeneralCount
struct AUAEPlayerState_AddGeneralCount_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.AddEventCount
struct AUAEPlayerState_AddEventCount_Params
{
	unsigned char                                      EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController
struct AUAEBuffApplierActor_GetTheInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEHouseActor.ProcessWindowCreateList
struct AUAEHouseActor_ProcessWindowCreateList_Params
{
};

// Function Gameplay.UAEHouseActor.OnRep_WindowList
struct AUAEHouseActor_OnRep_WindowList_Params
{
};

// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
struct AUAEHouseActor_BroadcastWindowRepDataUpdated_Params
{
	struct FUAEWindowRepData                           InRepData;                                                // (Parm)
};

// Function Gameplay.UAEPlayerController.UseingWeaponScheme
struct AUAEPlayerController_UseingWeaponScheme_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation
struct AUAEPlayerController_TestShowLongTimeNoOperation_Params
{
};

// Function Gameplay.UAEPlayerController.TestShowConfirmDialogOfMisKill
struct AUAEPlayerController_TestShowConfirmDialogOfMisKill_Params
{
};

// Function Gameplay.UAEPlayerController.TestRespawn
struct AUAEPlayerController_TestRespawn_Params
{
};

// Function Gameplay.UAEPlayerController.TestLogout
struct AUAEPlayerController_TestLogout_Params
{
};

// Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara
struct AUAEPlayerController_TestCastUIMsgWithPara_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
	int                                                TestID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo
struct AUAEPlayerController_SyncDailyTaskStoreInfo_Params
{
	TArray<struct FDailyTaskStoreInfo>                 NewDailyTaskStoreList;                                    // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.SetUsedSimulationCVar
struct AUAEPlayerController_SetUsedSimulationCVar_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate
struct AUAEPlayerController_SetTargetMsgReceiveDelegate_Params
{
	class UGameInstance*                               InGameInstance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.SetPanels
struct AUAEPlayerController_SetPanels_Params
{
	TArray<class UUAEUserWidget*>                      panels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate
struct AUAEPlayerController_SetDSMsgReceiveDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate
struct AUAEPlayerController_SetClientMsgReceiveDelegate_Params
{
	class UGameInstance*                               InGameInstance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ServerTestLogout
struct AUAEPlayerController_ServerTestLogout_Params
{
};

// Function Gameplay.UAEPlayerController.ServerSetVoiceId
struct AUAEPlayerController_ServerSetVoiceId_Params
{
	int                                                VoiceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ServerKickSelf
struct AUAEPlayerController_ServerKickSelf_Params
{
};

// Function Gameplay.UAEPlayerController.ServerGotoSpectating
struct AUAEPlayerController_ServerGotoSpectating_Params
{
	class APawn*                                       ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ServerExitGame
struct AUAEPlayerController_ServerExitGame_Params
{
};

// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
struct AUAEPlayerController_ServerAcknowledgeReconnection_2_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.SendLuaDSToClient
struct AUAEPlayerController_SendLuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.SendLuaClientToDS
struct AUAEPlayerController_SendLuaClientToDS_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo
struct AUAEPlayerController_RPC_Server_SyncClientNetInfo_Params
{
	int                                                InLoss;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLoss;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InNetworkType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo
struct AUAEPlayerController_RPC_Server_ReportClientNetInfo_Params
{
	int                                                AvgPing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinPing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LostPackRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvgNoOutlier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StdNoOutlier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumNoOutlier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLoss;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLoss;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.RPC_LuaDSToClient
struct AUAEPlayerController_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.RPC_LuaClientToDS
struct AUAEPlayerController_RPC_LuaClientToDS_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.Respawn
struct AUAEPlayerController_Respawn_Params
{
};

// Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar
struct AUAEPlayerController_ResetUsedSimulationCVar_Params
{
};

// Function Gameplay.UAEPlayerController.ReleaseInGameUI
struct AUAEPlayerController_ReleaseInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.ReceivePostLoginInit
struct AUAEPlayerController_ReceivePostLoginInit_Params
{
};

// Function Gameplay.UAEPlayerController.PrintStatistics
struct AUAEPlayerController_PrintStatistics_Params
{
};

// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
struct AUAEPlayerController_PlayerStartIDReceived_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList
struct AUAEPlayerController_OnRep_WeaponAvatarDataList_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_WatchPlayerKey
struct AUAEPlayerController_OnRep_WatchPlayerKey_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_UsedSimulation
struct AUAEPlayerController_OnRep_UsedSimulation_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_PveLevel
struct AUAEPlayerController_OnRep_PveLevel_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList
struct AUAEPlayerController_OnRep_PlayerOBInfoList_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime
struct AUAEPlayerController_OnRep_LastGameResultTime_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy
struct AUAEPlayerController_OnRep_IsSpectatingEnemy_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
struct AUAEPlayerController_OnRep_IsSpectating_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_IsObserver
struct AUAEPlayerController_OnRep_IsObserver_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo
struct AUAEPlayerController_OnRep_InitialWeaponSchemeInfo_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar
struct AUAEPlayerController_OnRep_InitialEquipmentAvatar_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar
struct AUAEPlayerController_OnRep_InitialConsumableAvatar_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_FriendObservers
struct AUAEPlayerController_OnRep_FriendObservers_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex
struct AUAEPlayerController_OnRep_CurWeaponSchemeIndex_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_bRoomOwner
struct AUAEPlayerController_OnRep_bRoomOwner_Params
{
};

// Function Gameplay.UAEPlayerController.NotifyEnterBattle
struct AUAEPlayerController_NotifyEnterBattle_Params
{
};

// Function Gameplay.UAEPlayerController.LuaDoString
struct AUAEPlayerController_LuaDoString_Params
{
	struct FString                                     LuaString;                                                // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.KickSelf
struct AUAEPlayerController_KickSelf_Params
{
};

// Function Gameplay.UAEPlayerController.IsSpectator
struct AUAEPlayerController_IsSpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsRoomMode
struct AUAEPlayerController_IsRoomMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsPureSpectator
struct AUAEPlayerController_IsPureSpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsObserver
struct AUAEPlayerController_IsObserver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsInSpectatingEnemy
struct AUAEPlayerController_IsInSpectatingEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsInSpectating
struct AUAEPlayerController_IsInSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator
struct AUAEPlayerController_IsFriendOrEnemySpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsFriendObserver
struct AUAEPlayerController_IsFriendObserver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsExited
struct AUAEPlayerController_IsExited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsDemoRecSpectator
struct AUAEPlayerController_IsDemoRecSpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsDemoPlaySpectator
struct AUAEPlayerController_IsDemoPlaySpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver
struct AUAEPlayerController_IsDemoPlayGlobalObserver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.InitWithPlayerParams
struct AUAEPlayerController_InitWithPlayerParams_Params
{
	struct FGameModePlayerParams                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.InitWeaponAvatarItems
struct AUAEPlayerController_InitWeaponAvatarItems_Params
{
};

// Function Gameplay.UAEPlayerController.InitVehicleMusicList
struct AUAEPlayerController_InitVehicleMusicList_Params
{
};

// Function Gameplay.UAEPlayerController.InitVehicleAvatarList
struct AUAEPlayerController_InitVehicleAvatarList_Params
{
};

// Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList
struct AUAEPlayerController_InitVehicleAdvanceAvatarList_Params
{
};

// Function Gameplay.UAEPlayerController.InitIngameUI
struct AUAEPlayerController_InitIngameUI_Params
{
};

// Function Gameplay.UAEPlayerController.InitGrenadeAvatarList
struct AUAEPlayerController_InitGrenadeAvatarList_Params
{
	bool                                               ReInitial;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GotoSpectating
struct AUAEPlayerController_GotoSpectating_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GetWeaponPandentReflect
struct AUAEPlayerController_GetWeaponPandentReflect_Params
{
	int                                                wraponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pendantID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId
struct AUAEPlayerController_GetWeaponAvatarItemId_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName
struct AUAEPlayerController_GetVisibleLevelsLoadedName_Params
{
	TArray<struct FString>                             VisibleLevels;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId
struct AUAEPlayerController_GetDailyTaskStoreInfoByTaskId_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDailyTaskStoreInfo                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId
struct AUAEPlayerController_GetCurrentWeaponSchemeMainSlotItemId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey
struct AUAEPlayerController_GetCurrentOBPlayerKey_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex
struct AUAEPlayerController_GetCurrentOBPlayerInfoIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ForceNetReady
struct AUAEPlayerController_ForceNetReady_Params
{
};

// Function Gameplay.UAEPlayerController.ExitGame
struct AUAEPlayerController_ExitGame_Params
{
};

// Function Gameplay.UAEPlayerController.ExhaustCPU
struct AUAEPlayerController_ExhaustCPU_Params
{
};

// Function Gameplay.UAEPlayerController.ExecDSCommand
struct AUAEPlayerController_ExecDSCommand_Params
{
	struct FString                                     DSCommand;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.ExcuteIntRecord
struct AUAEPlayerController_ExcuteIntRecord_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
struct AUAEPlayerController_ExcuteIntCounterRecord_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.EnableInGameUI
struct AUAEPlayerController_EnableInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.DumpUAENetActors
struct AUAEPlayerController_DumpUAENetActors_Params
{
};

// Function Gameplay.UAEPlayerController.DumpRegions
struct AUAEPlayerController_DumpRegions_Params
{
};

// Function Gameplay.UAEPlayerController.DumpNetActors
struct AUAEPlayerController_DumpNetActors_Params
{
};

// Function Gameplay.UAEPlayerController.DumpCharacters
struct AUAEPlayerController_DumpCharacters_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllUI
struct AUAEPlayerController_DumpAllUI_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllObjects
struct AUAEPlayerController_DumpAllObjects_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllActors
struct AUAEPlayerController_DumpAllActors_Params
{
};

// Function Gameplay.UAEPlayerController.DoLuaFile
struct AUAEPlayerController_DoLuaFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.DoCrash
struct AUAEPlayerController_DoCrash_Params
{
};

// Function Gameplay.UAEPlayerController.DisableInGameUI
struct AUAEPlayerController_DisableInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.DealWithPickUpFailed
struct AUAEPlayerController_DealWithPickUpFailed_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice
struct AUAEPlayerController_ClientShowTeammateEscapeNotice_Params
{
};

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings
struct AUAEPlayerController_ClientRPC_CastUIMsgWithStrings_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
	int                                                TipsID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     param1;                                                   // (Parm, ZeroConstructor)
	struct FString                                     param2;                                                   // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams
struct AUAEPlayerController_ClientRPC_CastUIMsgParams_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
	int                                                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg
struct AUAEPlayerController_ClientRPC_CastUIMsg_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton
struct AUAEPlayerController_ClientInitPlayerOBInfoButton_Params
{
};

// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
struct AUAEPlayerController_ClientBroadcastRespawnComplete_Params
{
};

// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
struct AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params
{
};

// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
struct AUAEPlayerController_ClientAcknowledgeReconnection_4_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit
struct AUAEPlayerController_CheckPlayerOBInfoButtonInit_Params
{
};

// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
struct AUAEPlayerController_CheckAcknowledgedPawn_Params
{
	class APawn*                                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.CastUIMsg
struct AUAEPlayerController_CastUIMsg_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.CanPickUpItem
struct AUAEPlayerController_CanPickUpItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EPickUpCheckResult                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.CallLuaTableFunction
struct AUAEPlayerController_CallLuaTableFunction_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.CallLuaGlobalFunction
struct AUAEPlayerController_CallLuaGlobalFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.BroadcastRespawnComplete
struct AUAEPlayerController_BroadcastRespawnComplete_Params
{
};

// Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent
struct AUAEProjectile_WorkAsBuffApplierEvent_Params
{
	struct FString                                     BuffName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APawn*                                       BuffTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP
struct AUAEProjectile_TimeoutExplodeMulticast_CPP_Params
{
};

// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent
struct AUAEProjectile_TimeoutExplodeMulticast_BPEvent_Params
{
};

// Function Gameplay.UAEProjectile.StartFlyMulticast_CPP
struct AUAEProjectile_StartFlyMulticast_CPP_Params
{
	struct FVector                                     Vel;                                                      // (Parm, IsPlainOldData)
	bool                                               isHighMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.StartFlyMulticast_BPEvent
struct AUAEProjectile_StartFlyMulticast_BPEvent_Params
{
	struct FVector                                     Vel;                                                      // (Parm, IsPlainOldData)
	bool                                               isHighMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset
struct AUAEProjectile_SetActorInitialRelativeOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     StandOffset;                                              // (Parm, IsPlainOldData)
	struct FVector                                     CrouchOffset;                                             // (Parm, IsPlainOldData)
	struct FVector                                     ProneOffset;                                              // (Parm, IsPlainOldData)
	TEnumAsByte<enum ECharacterPoseType>               PrevoisOwnerPose;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient
struct AUAEProjectile_ServerNotifyGroundEventOnClient_Params
{
};

// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
struct AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params
{
};

// Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp
struct AUAEProjectile_OnRep_IsGroundedOnServerCpp_Params
{
};

// Function Gameplay.UAEProjectile.OnProjectileStopOnServer
struct AUAEProjectile_OnProjectileStopOnServer_Params
{
};

// Function Gameplay.UAEProjectile.OnProjectileStopOnClient
struct AUAEProjectile_OnProjectileStopOnClient_Params
{
};

// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
struct AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params
{
};

// Function Gameplay.UAEProjectile.IsOwnerAutomous
struct AUAEProjectile_IsOwnerAutomous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.GlassDetect
struct AUAEProjectile_GlassDetect_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.GetRemainingEffectTime
struct AUAEProjectile_GetRemainingEffectTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.CallExplode
struct AUAEProjectile_CallExplode_Params
{
};

// Function Gameplay.UAEProjectile.BroadcastClientExplode
struct AUAEProjectile_BroadcastClientExplode_Params
{
};

// Function Gameplay.BackpackComponent.UseItem
struct UBackpackComponent_UseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.UpdateCapacity
struct UBackpackComponent_UpdateCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive
struct UBackpackComponent_UnlockUpdateItemListReceive_Params
{
};

// Function Gameplay.BackpackComponent.UnequipItem
struct UBackpackComponent_UnequipItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.TryMergeItemHandles
struct UBackpackComponent_TryMergeItemHandles_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.TakeItem
struct UBackpackComponent_TakeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallHandleDrop;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.SwapItem
struct UBackpackComponent_SwapItem_Params
{
	struct FItemDefineID                               DefineID1;                                                // (Parm)
	struct FItemDefineID                               DefineID2;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ServerSetShowBounty
struct UBackpackComponent_ServerSetShowBounty_Params
{
	bool                                               bInShowBounty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ServerSetCustomAccessories
struct UBackpackComponent_ServerSetCustomAccessories_Params
{
	int                                                WeaponItemID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ServerEnableItem
struct UBackpackComponent_ServerEnableItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ReturnItem
struct UBackpackComponent_ReturnItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallHandlePickup;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.RemoveItemHandle
struct UBackpackComponent_RemoveItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ReceiveItemList
struct UBackpackComponent_ReceiveItemList_Params
{
};

// Function Gameplay.BackpackComponent.ReceiveCapacity
struct UBackpackComponent_ReceiveCapacity_Params
{
};

// Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail
struct UBackpackComponent_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.PickUpItem_Default
struct UBackpackComponent_PickUpItem_Default_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.PickupItem
struct UBackpackComponent_PickupItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.PickupBattleItemOnPlane
struct UBackpackComponent_PickupBattleItemOnPlane_Params
{
};

// Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox
struct UBackpackComponent_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.PickItem_IntoBackpack
struct UBackpackComponent_PickItem_IntoBackpack_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.OnRep_specialCountLimit
struct UBackpackComponent_OnRep_specialCountLimit_Params
{
};

// Function Gameplay.BackpackComponent.OnRep_ItemListNet
struct UBackpackComponent_OnRep_ItemListNet_Params
{
};

// Function Gameplay.BackpackComponent.OnRep_ItemList
struct UBackpackComponent_OnRep_ItemList_Params
{
};

// Function Gameplay.BackpackComponent.OnRep_Capacity
struct UBackpackComponent_OnRep_Capacity_Params
{
};

// Function Gameplay.BackpackComponent.NotifyItemUpdated
struct UBackpackComponent_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.NotifyItemRemoved
struct UBackpackComponent_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.NotifyItemListUpdated
struct UBackpackComponent_NotifyItemListUpdated_Params
{
};

// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
struct UBackpackComponent_NotifyCapacityUpdated_Params
{
};

// Function Gameplay.BackpackComponent.NewItemHandle
struct UBackpackComponent_NewItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
struct UBackpackComponent_ModifyItemHandleEquippingState_Params
{
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyItemHandleCount
struct UBackpackComponent_ModifyItemHandleCount_Params
{
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyAutoPickClipType
struct UBackpackComponent_ModifyAutoPickClipType_Params
{
	int                                                InAutoPickClipType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyAimNotAutoUse
struct UBackpackComponent_ModifyAimNotAutoUse_Params
{
	bool                                               bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.LockUpdateItemListReceive
struct UBackpackComponent_LockUpdateItemListReceive_Params
{
};

// Function Gameplay.BackpackComponent.ItemNet2Data
struct UBackpackComponent_ItemNet2Data_Params
{
	struct FNetArrayUnit                               netItem;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.IsNeedToShowInBackpack
struct UBackpackComponent_IsNeedToShowInBackpack_Params
{
	int                                                TypeDefineID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.IsItemExist
struct UBackpackComponent_IsItemExist_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon
struct UBackpackComponent_IsEnableWeaponAttachmentBindToWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories
struct UBackpackComponent_IsCustomIgnoreAccessories_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.IsCustomAccessories
struct UBackpackComponent_IsCustomAccessories_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.IsAutoUse
struct UBackpackComponent_IsAutoUse_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange
struct UBackpackComponent_HasUnEquipItemByDefindIdRange_Params
{
	int                                                LowValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HighValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HasTagSub
struct UBackpackComponent_HasTagSub_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HasItemBySubType
struct UBackpackComponent_HasItemBySubType_Params
{
	int                                                SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HasItemByDefineID
struct UBackpackComponent_HasItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HasItemByDefindIdRange
struct UBackpackComponent_HasItemByDefindIdRange_Params
{
	int                                                LowValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HighValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.HandleDropInDisuse
struct UBackpackComponent_HandleDropInDisuse_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBattleItemHandleBase*                       ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OccupiedCapacityBeforeDisuse;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetWorld_BP
struct UBackpackComponent_GetWorld_BP_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId
struct UBackpackComponent_GetUnEquipItemNumByItemId_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetSpecialItemNow
struct UBackpackComponent_GetSpecialItemNow_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FSpecialPickInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetSpecialItemBefore
struct UBackpackComponent_GetSpecialItemBefore_Params
{
	int                                                ItemResId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpecialPickInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData
struct UBackpackComponent_GetLeastElectrictyBattleItemData_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FString                                     AdditionalDataName;                                       // (Parm, ZeroConstructor)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemSubType
struct UBackpackComponent_GetItemSubType_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetItemListByDefineID
struct UBackpackComponent_GetItemListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	TArray<struct FBattleItemData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemHandleMap
struct UBackpackComponent_GetItemHandleMap_Params
{
	TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemHandleList
struct UBackpackComponent_GetItemHandleList_Params
{
	TArray<class UItemHandleBase*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemCountByType
struct UBackpackComponent_GetItemCountByType_Params
{
	int                                                InItemType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID
struct UBackpackComponent_GetItemCountByItemSpecialID_Params
{
	int                                                InItemSpecialID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetItemByDefineID
struct UBackpackComponent_GetItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemAssociateWeights
struct UBackpackComponent_GetItemAssociateWeights_Params
{
	struct FBattleItemData                             InItemData;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetFirstItemBySubType
struct UBackpackComponent_GetFirstItemBySubType_Params
{
	int                                                SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance
struct UBackpackComponent_GetFirstItemByDefineIDIgnoreInstance_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
struct UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemFeatureData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetAllItemList
struct UBackpackComponent_GetAllItemList_Params
{
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetAIPickupType
struct UBackpackComponent_GetAIPickupType_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ForceNetUpdate
struct UBackpackComponent_ForceNetUpdate_Params
{
};

// Function Gameplay.BackpackComponent.EquipItem
struct UBackpackComponent_EquipItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.DropItem
struct UBackpackComponent_DropItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.DisuseItem
struct UBackpackComponent_DisuseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CreateItemHandleInternal
struct UBackpackComponent_CreateItemHandleInternal_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CreateItemHandle
struct UBackpackComponent_CreateItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ConsumeItem
struct UBackpackComponent_ConsumeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ClientUpdateSingleItem
struct UBackpackComponent_ClientUpdateSingleItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Gameplay.BackpackComponent.ClientUpdateItemData
struct UBackpackComponent_ClientUpdateItemData_Params
{
	struct FBattleItemData                             InItemData;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Gameplay.BackpackComponent.ClientRemoveItemData
struct UBackpackComponent_ClientRemoveItemData_Params
{
	struct FBattleItemData                             InItemData;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
struct UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationFailedReason                   FailedReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
struct UBackpackComponent_ClientBroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem
struct UBackpackComponent_CheckSpecialMaxCountForItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup
struct UBackpackComponent_CheckSkillPropItemCanBePickup_Params
{
	class UBackpackComponent*                          BackpackComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CheckCapacityForItem
struct UBackpackComponent_CheckCapacityForItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ChangeItemStoreArea
struct UBackpackComponent_ChangeItemStoreArea_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                InItemNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CanDisuseToBackpack
struct UBackpackComponent_CanDisuseToBackpack_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse
struct UBackpackComponent_CacheItemAssociationBeforeDisuse_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate
struct UBackpackComponent_BroadcastItemOperCountDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate
struct UBackpackComponent_BroadcastItemOperationInfoDelegate_Params
{
	struct FItemOperationInfo                          ItemOperationInfo;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
struct UBackpackComponent_BroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationFailedReason                   FailedReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
struct UBackpackComponent_BroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           OperationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.AddItemHandle
struct UBackpackComponent_AddItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane
struct UBackpackComponent_AddBattleItemPickupOnPlane_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm, OutParm)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // (Parm, OutParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
struct UBaseGeneratorComponent_RegisterWorldTileSpot_Params
{
	class USpotSceneComponent*                         Spot;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
struct UBaseGeneratorComponent_RegisterSpotComponentToTick_Params
{
	class USpotSceneComponent*                         SpotComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
struct UBaseGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.GetRandomCategory
struct UBaseGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
struct UBaseGeneratorComponent_GeneratorWorldTileSpots_Params
{
	struct FWorldTileSpotArray                         SpotArray;                                                // (Parm, OutParm)
};

// Function Gameplay.BaseGeneratorComponent.GenerateSpots
struct UBaseGeneratorComponent_GenerateSpots_Params
{
};

// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
struct UBaseGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.GeneratePickupActor
struct UBaseGeneratorComponent_GeneratePickupActor_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    ActorRotator;                                             // (Parm, OutParm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemGenerateSpawnClass                     ItemData;                                                 // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
struct UBaseGeneratorComponent_CheckTileLevelsVisible_Params
{
};

// Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
struct UGeneratorActorAIInterface_RegisterAIPickupPoint_Params
{
	struct FVector                                     BuildingLoc;                                              // (Parm, IsPlainOldData)
	struct FVector                                     SpotLoc;                                                  // (Parm, IsPlainOldData)
	class AActor*                                      PickUpActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.SetExtendData
struct UGeneratorActorInterface_SetExtendData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.SetAttachedActor
struct UGeneratorActorInterface_SetAttachedActor_Params
{
	class AActor*                                      AttachedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.InitDataNew
struct UGeneratorActorInterface_InitDataNew_Params
{
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	bool                                               RepeatGenerateItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpotDataIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.InitData
struct UGeneratorActorInterface_InitData_Params
{
	class UItemSpotSceneComponent*                     ItemSpotSceneComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	bool                                               RepeatGenerateItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.GetItemId
struct UGeneratorActorInterface_GetItemId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn
struct UGeneratorVehicleInterface_SetSafeSpawn_Params
{
	bool                                               ab_IsSafeSpawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorVehicleInterface.InitVehicle
struct UGeneratorVehicleInterface_InitVehicle_Params
{
	int                                                FuelPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEngineOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHouse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation
struct UGeneratorVehicleInterface_CheckSpawnLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	float                                              MaxSpawnDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GlobalConfigActor.Init
struct AGlobalConfigActor_Init_Params
{
};

// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
struct UGroupSpotSceneComponent_SetGroupValid_Params
{
	bool                                               Valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
struct UGroupSpotSceneComponent_IsValidGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
struct UGroupSpotSceneComponent_FindWorldCompositionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.GroupSpotSceneComponent.DoPickUp
struct UGroupSpotSceneComponent_DoPickUp_Params
{
};

// Function Gameplay.ImplItemRegionInterface.GetRegion
struct UImplItemRegionInterface_GetRegion_Params
{
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
	struct FItemRegionCircle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.SpotSceneComponent.SetSpotValid
struct USpotSceneComponent_SetSpotValid_Params
{
	bool                                               Valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.LineTraceSingle
struct USpotSceneComponent_LineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.IsSpotValid
struct USpotSceneComponent_IsSpotValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.GetRandomCategory
struct USpotSceneComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.SpotSceneComponent.GenerateSpot
struct USpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.GenerateActor
struct USpotSceneComponent_GenerateActor_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    ActorRotator;                                             // (Parm, OutParm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
struct UItemConfigActorComponent_RegisterGroupSceneComponent_Params
{
	int                                                GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             GroupSceneComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
struct UItemConfigActorComponent_RandomItemSpawnClass_Params
{
	struct FString                                     ItemValue;                                                // (Parm, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // (Parm, ZeroConstructor)
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
struct UItemConfigActorComponent_RandomGroupSceneComponents_Params
{
	int                                                GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Persent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
struct UItemConfigActorComponent_RandomGroupSceneComponent_Params
{
	TArray<class USceneComponent*>                     AllGroups;                                                // (Parm, ZeroConstructor)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.LoadActorClass
struct UItemConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
struct UItemConfigActorComponent_GetItemSpawnClass_Params
{
	struct FItemSpawnData                              Data;                                                     // (Parm)
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemCountArea.IsInArea
struct AItemCountArea_IsInArea_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas
struct UItemGeneratorComponent_WriteItemSpotStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15
struct UItemGeneratorComponent_WriteItemClassStatisticsDatas_V15_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
struct UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
struct UItemGeneratorComponent_WriteGroupStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
struct UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas
struct UItemGeneratorComponent_WriteAreaItemStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog
struct UItemGeneratorComponent_WriteAllStatisticsDatasToLog_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
struct UItemGeneratorComponent_WriteAllStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.SetCatetoryRate
struct UItemGeneratorComponent_SetCatetoryRate_Params
{
	TMap<struct FString, float>                        Rates;                                                    // (Parm, ZeroConstructor)
};

// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
struct UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params
{
	struct FItemGenerateSpawnData                      Data;                                                     // (Parm)
};

// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
struct UItemGeneratorComponent_RegisterBornIslandItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable
struct UItemGeneratorComponent_ReadItemGenerateTable_Params
{
	struct FString                                     TablePath;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
struct UItemGeneratorComponent_RandomSingleGroup_Params
{
	TArray<class UGroupSpotSceneComponent*>            Groups;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FSpotGroupProperty                          GroupProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UItemGroupSpotSceneComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData
struct UItemGeneratorComponent_RandomItemGenerateSpawnData_Params
{
	TArray<struct FItemGenerateSpawnData>              Items;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FItemGenerateSpawnData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
struct UItemGeneratorComponent_RandomGroupsByType_Params
{
	struct FSpotGroupProperty                          GroupProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGeneratorComponent.RandomGroups
struct UItemGeneratorComponent_RandomGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
struct UItemGeneratorComponent_RandomBornIslandGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish
struct UItemGeneratorComponent_OnAsyncLoadItemClassFinish_Params
{
	struct FItemGenerateSpawnClass                     SpawnClass;                                               // (Parm)
};

// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
struct UItemGeneratorComponent_LoadItemGenerateTable_Params
{
};

// Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled
struct UItemGeneratorComponent_IsCatetoryEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.InitCatetorys
struct UItemGeneratorComponent_InitCatetorys_Params
{
};

// Function Gameplay.ItemGeneratorComponent.InitCategoryEx
struct UItemGeneratorComponent_InitCategoryEx_Params
{
};

// Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType
struct UItemGeneratorComponent_GetSpotGroupPropertyByGroupType_Params
{
	TEnumAsByte<enum ESpotGroupType>                   SpotGroupType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpotGroupProperty                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
struct UItemGeneratorComponent_GetRandomItemClassArray_Params
{
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FItemGenerateSpawnClass>             Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               RepeatGenerateItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemSpotSceneComponent*                     SpotComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.GetItemDefineID
struct UItemGeneratorComponent_GetItemDefineID_Params
{
	class UClass*                                      PickUpClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.GetCatetoryRate
struct UItemGeneratorComponent_GetCatetoryRate_Params
{
	struct FString                                     Catetory;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
struct UItemGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.FindASpawnLoc
struct UItemGeneratorComponent_FindASpawnLoc_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.DeleteValidGroups
struct UItemGeneratorComponent_DeleteValidGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
struct UItemGeneratorComponent_DeleteBornIslandItems_Params
{
};

// Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem
struct UItemGeneratorComponent_CheckShouldGenerateItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.CheckRecoverItems
struct UItemGeneratorComponent_CheckRecoverItems_Params
{
};

// Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath
struct UItemGeneratorComponent_AddIgnoreItemClassPath_Params
{
	TArray<struct FString>                             IgnoreItemClassList;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.ItemGroupRepeatSpotComponent.Stop
struct UItemGroupRepeatSpotComponent_Stop_Params
{
};

// Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll
struct UItemGroupRepeatSpotComponent_SetPropertySpotAll_Params
{
};

// Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode
struct UItemGroupRepeatSpotComponent_GetGameMode_Params
{
	class AUAEGameMode*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll
struct UItemGroupRepeatSpotComponent_GenerateSpotAll_Params
{
};

// Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems
struct UItemGroupRepeatSpotComponent_ClearAllSpotItems_Params
{
};

// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
struct UItemGroupSpotSceneComponent_SetGroupProperty_Params
{
	class UItemGeneratorComponent*                     Generator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSpotGroupProperty                          Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots
struct UItemGroupSpotSceneComponent_RepeatSpots_Params
{
};

// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot
struct UItemGroupSpotSceneComponent_RepeatSingleSpot_Params
{
	class UItemSpotSceneComponent*                     Spot;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
struct UItemGroupSpotSceneComponent_RandomSpotByType_Params
{
	TEnumAsByte<enum ESpotType>                        SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
struct UItemGroupSpotSceneComponent_RandomSingleSpot_Params
{
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD
struct UItemGroupSpotSceneComponent_RandomRepeatGenerateItemCD_Params
{
	struct FSpotGroupProperty                          GroupProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
struct UItemSpotSceneComponent_SetSpotProperty_Params
{
	int                                                CompositionID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESpotGroupType>                   GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemGeneratorComponent*                     Generator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGroupSpotSceneComponent*                    Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               RepeatGenerateItem;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty
struct UItemSpotSceneComponent_RepeatSpotProperty_Params
{
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
struct UItemSpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemSpotSceneComponent.GenerateItems
struct UItemSpotSceneComponent_GenerateItems_Params
{
	TArray<struct FItemGenerateSpawnClass>             AllItemClass;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Gameplay.ItemSpotSceneComponent.DoPickUp
struct UItemSpotSceneComponent_DoPickUp_Params
{
	struct FString                                     ItemValue;                                                // (Parm, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // (Parm, ZeroConstructor)
};

// Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory
struct UItemSpotSceneComponent_CountCacheItemValeCategory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemSpotSceneComponent.ClearCacheItems
struct UItemSpotSceneComponent_ClearCacheItems_Params
{
};

// Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId
struct ULuaBTTaskBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.SetFinishOnMessage
struct ULuaBTTaskBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveTickAI
struct ULuaBTTaskBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveTick
struct ULuaBTTaskBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI
struct ULuaBTTaskBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveExecute
struct ULuaBTTaskBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveAbortAI
struct ULuaBTTaskBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.ReceiveAbort
struct ULuaBTTaskBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.IsTaskExecuting
struct ULuaBTTaskBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.IsTaskAborting
struct ULuaBTTaskBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.FinishExecute
struct ULuaBTTaskBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.LuaBTTaskBase.FinishAbort
struct ULuaBTTaskBase_FinishAbort_Params
{
};

// Function Gameplay.MissionBoardComponent.OnRep_Config
struct UMissionBoardComponent_OnRep_Config_Params
{
};

// Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig
struct UMissionBoardComponent_GetUtcLeftSecondsByConfig_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess
struct AUAEAdvertisementActor_OnRequestImgSuccess_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RequestedURL;                                             // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEAdvertisementActor.OnRep_PicURL
struct AUAEAdvertisementActor_OnRep_PicURL_Params
{
};

// Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath
struct AUAEAdvertisementActor_OnRep_MeshPath_Params
{
};

// Function Gameplay.UAEAdvertisementActor.OnRep_Id
struct AUAEAdvertisementActor_OnRep_Id_Params
{
};

// Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets
struct UUAEChaParachuteAnimListComponent_ReleaseParachuteAnimAssets_Params
{
};

// Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished
struct UUAEChaParachuteAnimListComponent_OnParachuteAnimAsyncLoadingFinished_Params
{
	struct FString                                     AnimLoaded;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished
struct UUAEChaParachuteAnimListComponent_OnAnimListAsyncLoadingFinished_Params
{
};

// Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished
struct UUAEChaParachuteAnimListComponent_HasAnimAsyncLoadingFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent
struct UUAEChaParachuteAnimListComponent_HandleAsyncLoadingFinishedEvent_Params
{
};

// Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName
struct UUAEChaParachuteAnimListComponent_GetOwnerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim
struct UUAEChaParachuteAnimListComponent_GetCharacterParachuteAnim_Params
{
	TEnumAsByte<enum ECharacterParachuteAnimType>      AnimType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished
struct UUAECharacterAnimListComponent_OnPreLoadingFinished_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew
struct UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             // (Parm)
};

// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished
struct UUAECharacterAnimListComponent_OnAsyncLoadingFinished_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             // (Parm)
};

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim
struct UUAECharacterAnimListComponent_GetCharacterShovelAnim_Params
{
	TArray<struct FPlayerAnimData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
struct UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params
{
	TEnumAsByte<enum ECharacterJumpType>               JumpType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerAnimData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset
struct UUAECharacterAnimListComponent_GetAnimationAsset_Params
{
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished
struct UUAEChaVehAnimListComponent_OnIdleAnimListAsyncLoadingFinished_Params
{
};

// Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished
struct UUAEChaVehAnimListComponent_OnAnimListAsyncLoadingFinished_Params
{
	struct FAsyncLoadCharVehAnimParams                 LoadingParam;                                             // (Parm)
};

// Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData
struct UUAEChaVehAnimListComponent_ChangeAnimData_Params
{
	TArray<struct FVehCharAnimData>                    InAnimData;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEGameplayStatics.GetGameBridge
struct UUAEGameplayStatics_GetGameBridge_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEGameSubsystem*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAELevelSequenceActor.UpdateSequence
struct AUAELevelSequenceActor_UpdateSequence_Params
{
	struct FString                                     LevelSequencePath;                                        // (Parm, ZeroConstructor)
};

// Function Gameplay.UAELevelSequenceActor.UpdatePlayback
struct AUAELevelSequenceActor_UpdatePlayback_Params
{
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableMovementInput;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableLookAtInput;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHidePlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAELevelSequenceActor.UpdateInstanceData
struct AUAELevelSequenceActor_UpdateInstanceData_Params
{
	struct FVector                                     OffsetVector;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer
struct AUAELevelSequenceActor_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              InLevelSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class AUAELevelSequenceActor*                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished
struct UAELobbyCharAnimListComp_OnAsyncLoadingFinished_Params
{
	struct FLobbyAsyncLoadCharAnimParams               LoadingParam;                                             // (Parm)
};

// Function Gameplay.AELobbyCharAnimListComp.InitPendingList
struct UAELobbyCharAnimListComp_InitPendingList_Params
{
	TArray<struct FLobbyCharacterWeaponAnimData>       animEditList;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     PendingList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim
struct UAELobbyCharAnimListComp_GetCharacterAnim_Params
{
	TEnumAsByte<enum ELobbyCharacterPosIndex>          PosIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ELobbyCharacterAnimType>          GenderType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAnimType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ECharacterShowSceneType>          sceneType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap
struct UAELobbyCharAnimListComp_BuildAnimMap_Params
{
	TArray<struct FLobbyCharacterWeaponAnimData>       AnimList;                                                 // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<enum ECharacterShowSceneType>          sceneType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAESpawnActorComponent.UAESpawnActor
struct UUAESpawnActorComponent_UAESpawnActor_Params
{
	struct FUAESpawnActorParam                         Param;                                                    // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAESpawnActorComponent.PrepareSpawnData
struct UUAESpawnActorComponent_PrepareSpawnData_Params
{
	int                                                TemplateID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAESpawnActorComponent.InitializeActor
struct UUAESpawnActorComponent_InitializeActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TemplateID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.NotifyServerBroken
struct UUAEWindowComponent_NotifyServerBroken_Params
{
};

// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
struct UUAEWindowComponent_NotifyRepDataUpdated_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
struct UUAEWindowComponent_LocalHandleWindowBrokenBP_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
struct UUAEWindowComponent_LocalHandleWindowBroken_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.HandleBroken
struct UUAEWindowComponent_HandleBroken_Params
{
	class APlayerController*                           Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.GetRepData
struct UUAEWindowComponent_GetRepData_Params
{
	struct FUAEWindowRepData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleConfigActorComponent.LoadActorClass
struct UVehicleConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15
struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_V15_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas
struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15
struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_V15_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas
struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog
struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatasToLog_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15
struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_V15_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas
struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData
struct UVehicleAndTreasureBoxGeneratorComponent_RegisterVehicleGenerateSpawnData_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     // (Parm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent
struct UVehicleAndTreasureBoxGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType
struct UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSpotsByType_Params
{
	struct FTreasureBoxSpotProperty                    Property;                                                 // (Parm, OutParm)
	struct FVehicleSpotComponentArray                  Spots;                                                    // (Parm, OutParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots
struct UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FTreasureBoxSpotProperty                    Property;                                                 // (Parm, OutParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType
struct UVehicleAndTreasureBoxGeneratorComponent_RandomSpotsByType_Params
{
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
	struct FVehicleSpotComponentArray                  Spots;                                                    // (Parm, OutParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots
struct UVehicleAndTreasureBoxGeneratorComponent_RandomSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups
struct UVehicleAndTreasureBoxGeneratorComponent_RandomGroups_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable
struct UVehicleAndTreasureBoxGeneratorComponent_LoadVehicleGenerateTable_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory
struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoWithCategory_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             // (Parm, OutParm)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params
{
	TEnumAsByte<enum ESpotType>                        SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo
struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfo_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             // (Parm, OutParm)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo
struct UVehicleAndTreasureBoxGeneratorComponent_GetTreasureBoxSpotRandomInfo_Params
{
	struct FTreasureBoxSpotProperty                    SpotProperty;                                             // (Parm, OutParm)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass
struct UVehicleAndTreasureBoxGeneratorComponent_GetRandomVehicleClass_Params
{
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	struct FVehicleGenerateSpawnData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory
struct UVehicleAndTreasureBoxGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick
struct UVehicleAndTreasureBoxGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId
struct UVehicleAndTreasureBoxGeneratorComponent_DynamicSpawnVehicleBySpotId_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups
struct UVehicleAndTreasureBoxGeneratorComponent_DeleteGroups_Params
{
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle
struct UVehicleAndTreasureBoxGeneratorComponent_CanDynamicSpawnVehicle_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     TestLocationOffset;                                       // (Parm, IsPlainOldData)
	struct FVector                                     TestBoxSize;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount
struct UVehicleAndTreasureBoxGeneratorComponent_AddVehicleSpotCount_Params
{
	TEnumAsByte<enum ESpotType>                        SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount
struct UVehicleAndTreasureBoxGeneratorComponent_AddVehicleClassCount_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
struct UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
struct UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
struct UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
struct UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     // (Parm)
};

// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
struct UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
struct UVehicleGeneratorComponent_RandomSpotsByType_Params
{
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
	struct FVehicleSpotComponentArray                  Spots;                                                    // (Parm, OutParm)
};

// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
struct UVehicleGeneratorComponent_RandomSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
};

// Function Gameplay.VehicleGeneratorComponent.RandomGroups
struct UVehicleGeneratorComponent_RandomGroups_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
struct UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
struct UVehicleGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params
{
	TEnumAsByte<enum ESpotType>                        SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo
struct UVehicleGeneratorComponent_GetVehicleSpotRandomInfo_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             // (Parm, OutParm)
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
struct UVehicleGeneratorComponent_GetRandomVehicleClass_Params
{
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	struct FVehicleGenerateSpawnData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleGeneratorComponent.GetRandomCategory
struct UVehicleGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
struct UVehicleGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
struct UVehicleGeneratorComponent_DeleteGroups_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
struct UVehicleGeneratorComponent_AddVehicleSpotCount_Params
{
	TEnumAsByte<enum ESpotType>                        SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
struct UVehicleGeneratorComponent_AddVehicleClassCount_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo
struct UVehicleSpotSceneComponent_SetSpotRandomInfo_Params
{
	struct FVehicleGenerateRandomInfo                  RandomInfo;                                               // (Parm, OutParm)
};

// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
struct UVehicleSpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.WeatherConfigComponent.UnloadStreamLevel
struct UWeatherConfigComponent_UnloadStreamLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo
struct UWeatherConfigComponent_SyncWeatherLevelInfo_Params
{
};

// Function Gameplay.WeatherConfigComponent.OnWeatherLevelChanged
struct UWeatherConfigComponent_OnWeatherLevelChanged_Params
{
};

// Function Gameplay.WeatherConfigComponent.OnUnLoadStreamLevelCompleted
struct UWeatherConfigComponent_OnUnLoadStreamLevelCompleted_Params
{
};

// Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount
struct UWeatherConfigComponent_OnRep_WeatherSyncCount_Params
{
};

// Function Gameplay.WeatherConfigComponent.OnLoadStreamLevelCompleted
struct UWeatherConfigComponent_OnLoadStreamLevelCompleted_Params
{
};

// Function Gameplay.WeatherConfigComponent.LoadWeatherLevel
struct UWeatherConfigComponent_LoadWeatherLevel_Params
{
};

// Function Gameplay.WeatherConfigComponent.LoadStreamLevel
struct UWeatherConfigComponent_LoadStreamLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	int                                                WeatherID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.WeatherConfigComponent.LoadDefaultWeatherLevel
struct UWeatherConfigComponent_LoadDefaultWeatherLevel_Params
{
};

// Function Gameplay.WeatherConfigComponent.Init
struct UWeatherConfigComponent_Init_Params
{
};

}

