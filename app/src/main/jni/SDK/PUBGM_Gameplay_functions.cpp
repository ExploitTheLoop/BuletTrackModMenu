// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Gameplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gameplay.UAECharacter.SendLuaDSToClient
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAECharacter::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SendLuaDSToClient");

	AUAECharacter_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.RPC_LuaDSToClient
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAECharacter::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.RPC_LuaDSToClient");

	AUAECharacter_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.OnRep_UseWholeModel
// (Final, Native, Public)

void AUAECharacter::OnRep_UseWholeModel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_UseWholeModel");

	AUAECharacter_OnRep_UseWholeModel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.OnRep_TeamID
// (Final, Native, Public)

void AUAECharacter::OnRep_TeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_TeamID");

	AUAECharacter_OnRep_TeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.OnRep_PlayerUID
// (Final, Native, Public)

void AUAECharacter::OnRep_PlayerUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerUID");

	AUAECharacter_OnRep_PlayerUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.OnRep_PlayerKey
// (Native, Public)

void AUAECharacter::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerKey");

	AUAECharacter_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.OnRep_CampID
// (Final, Native, Public)

void AUAECharacter::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_CampID");

	AUAECharacter_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacter.IsDefaultCharType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAECharacter::IsDefaultCharType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.IsDefaultCharType");

	AUAECharacter_IsDefaultCharType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetTeamId
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAECharacter::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetTeamId");

	AUAECharacter_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetPlayerKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAECharacter::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetPlayerKey");

	AUAECharacter_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_OnFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting");

	AUAECharacter_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_NonTeammates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates");

	AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetNonSimulatedComponents
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents");

	AUAECharacter_GetNonSimulatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetNonDedicatedComponents
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonDedicatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonDedicatedComponents");

	AUAECharacter_GetNonDedicatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.GetCampId
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAECharacter::GetCampId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetCampId");

	AUAECharacter_GetCampId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAECharacter::ClientAcknowledgeReconnection_3(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3");

	AUAECharacter_ClientAcknowledgeReconnection_3_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.WriteStatistics
// (Final, Exec, Native, Public)

void AUAEGameMode::WriteStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.WriteStatistics");

	AUAEGameMode_WriteStatistics_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SyncPlayerNames
// (Native, Public)

void AUAEGameMode::SyncPlayerNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncPlayerNames");

	AUAEGameMode_SyncPlayerNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SyncNewCorpsData
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FDSCorpsInfo>    OutCorpsData                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEGameMode::SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncNewCorpsData");

	AUAEGameMode_SyncNewCorpsData_Params params;
	params.OutCorpsData = OutCorpsData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SpawnUAEPawnFor
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Trans                          (Parm, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AUAEGameMode::SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SpawnUAEPawnFor");

	AUAEGameMode_SpawnUAEPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.Trans = Trans;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.SetVehicleReportEntry
// (Final, Native, Public)
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleReportEntry     InEntry                        (Parm)

void AUAEGameMode::SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetVehicleReportEntry");

	AUAEGameMode_SetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;
	params.InEntry = InEntry;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SetPlayerOpenId
// (Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPlayerOpenID                 (Parm, ZeroConstructor)

void AUAEGameMode::SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetPlayerOpenId");

	AUAEGameMode_SetPlayerOpenId_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerOpenID = InPlayerOpenID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SetMaxWeaponReportNum
// (Final, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::SetMaxWeaponReportNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetMaxWeaponReportNum");

	AUAEGameMode_SetMaxWeaponReportNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.SetGameEndReportData
// (Native, Public)

void AUAEGameMode::SetGameEndReportData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetGameEndReportData");

	AUAEGameMode_SetGameEndReportData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData
// (Native, Public)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameModeTeamBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeTeamBattleResultData AUAEGameMode::RetrieveTeamBattleResultData(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData");

	AUAEGameMode_RetrieveTeamBattleResultData_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.RetrieveBattleData
// (Native, Public, HasOutParms)
// Parameters:
// struct FBattleData             OutBattleData                  (Parm, OutParm)

void AUAEGameMode::RetrieveBattleData(struct FBattleData* OutBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveBattleData");

	AUAEGameMode_RetrieveBattleData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBattleData != nullptr)
		*OutBattleData = params.OutBattleData;
}

// Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartSpot                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart");

	AUAEGameMode_RestartPlayerAtPlayerStart_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode
// (Native, Public)

void AUAEGameMode::ResetGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode");

	AUAEGameMode_ResetGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.Rescue
// (Native, Public)
// Parameters:
// class APawn*                   RescueWho                      (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Hero                           (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::Rescue(class APawn* RescueWho, class APawn* Hero)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Rescue");

	AUAEGameMode_Rescue_Params params;
	params.RescueWho = RescueWho;
	params.Hero = Hero;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayerValidation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CollectReportedEventDataCallback (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventDataWithPlayerValidation(class AUAEPlayerController* UAEPlayerController, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayerValidation");

	AUAEGameMode_ReportCollectedEventDataWithPlayerValidation_Params params;
	params.UAEPlayerController = UAEPlayerController;
	params.EventId = EventId;
	params.CollectReportedEventDataCallback = CollectReportedEventDataCallback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayersValidation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CollectReportedEventDataCallback (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventDataWithPlayersValidation(class UWorld* World, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayersValidation");

	AUAEGameMode_ReportCollectedEventDataWithPlayersValidation_Params params;
	params.World = World;
	params.EventId = EventId;
	params.CollectReportedEventDataCallback = CollectReportedEventDataCallback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.ReportCollectedEventData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 UId                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FCollectedEventData     Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventData(const struct FString& UId, unsigned char EventId, const struct FCollectedEventData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventData");

	AUAEGameMode_ReportCollectedEventData_Params params;
	params.UId = UId;
	params.EventId = EventId;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag
// (Native, Public)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUAEGameMode::RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag");

	AUAEGameMode_RegisterItemGroupSpotsByTag_Params params;
	params.Tag = Tag;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RegisterItemGroupSpots
// (Native, Public)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUAEGameMode::RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpots");

	AUAEGameMode_RegisterItemGroupSpots_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RefreshWorldActiveRange
// (Native, Public)

void AUAEGameMode::RefreshWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWorldActiveRange");

	AUAEGameMode_RefreshWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RefreshWatchTeammates
// (Native, Public)
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTeamID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWatchTeammates");

	AUAEGameMode_RefreshWatchTeammates_Params params;
	params.InController = InController;
	params.InTeamID = InTeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RefreshPlayerNames
// (Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPlayerName                   (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLogin                        (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            IdxInTeam                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UId, int IdxInTeam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshPlayerNames");

	AUAEGameMode_RefreshPlayerNames_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerName = InPlayerName;
	params.TeamID = TeamID;
	params.IsLogin = IsLogin;
	params.UId = UId;
	params.IdxInTeam = IdxInTeam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.RecoardAlivePlayerNum
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::RecoardAlivePlayerNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RecoardAlivePlayerNum");

	AUAEGameMode_RecoardAlivePlayerNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.PreCreatePlayerController
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AUAEGameMode::PreCreatePlayerController(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.PreCreatePlayerController");

	AUAEGameMode_PreCreatePlayerController_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.OnStandAloneGameEnd
// (Native, Public)

void AUAEGameMode::OnStandAloneGameEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnStandAloneGameEnd");

	AUAEGameMode_OnStandAloneGameEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnReportNetworkData
// (Native, Public)

void AUAEGameMode::OnReportNetworkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnReportNetworkData");

	AUAEGameMode_OnReportNetworkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnPlayerFiring
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnPlayerFiring(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerFiring");

	AUAEGameMode_OnPlayerFiring_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnPlayerControlDestroyEnd(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd");

	AUAEGameMode_OnPlayerControlDestroyEnd_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnObserverLogout
// (Final, Native, Protected)
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnObserverLogout(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogout");

	AUAEGameMode_OnObserverLogout_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnObserverLogin
// (Final, Native, Protected)
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnObserverLogin(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogin");

	AUAEGameMode_OnObserverLogin_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnMsg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void AUAEGameMode::OnMsg(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnMsg");

	AUAEGameMode_OnMsg_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxLanded(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxLanded");

	AUAEGameMode_OnAirDropBoxLanded_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
// (Native, Public)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxEmpty(int boxId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxEmpty");

	AUAEGameMode_OnAirDropBoxEmpty_Params params;
	params.boxId = boxId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void AUAEGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted");

	AUAEGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyPlayerExit
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyPlayerController       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSendFailure                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailureMessage                 (Parm, ZeroConstructor)

void AUAEGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExit");

	AUAEGameMode_NotifyPlayerExit_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.bDestroyPlayerController = bDestroyPlayerController;
	params.bDestroyCharacter = bDestroyCharacter;
	params.bSendFailure = bSendFailure;
	params.FailureMessage = FailureMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely");

	AUAEGameMode_NotifyPlayerAbleToExitSafely_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameModeParams         GameModeParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged");

	AUAEGameMode_NotifyGameModeParamsChanged_Params params;
	params.GameModeParams = GameModeParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyGameModeLuckmate
// (Native, Public)
// Parameters:
// int64_t                        MyUID                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        LuckmateUID                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeLuckmate");

	AUAEGameMode_NotifyGameModeLuckmate_Params params;
	params.MyUID = MyUID;
	params.LuckmateUID = LuckmateUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyGameModeInit
// (Native, Public)

void AUAEGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeInit");

	AUAEGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyExistPlayerReEnter(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter");

	AUAEGameMode_NotifyExistPlayerReEnter_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyAIPlayerEnter
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyAIPlayerEnter(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIPlayerEnter");

	AUAEGameMode_NotifyAIPlayerEnter_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.NotifyAIDropInfo
// (Native, Public, HasOutParms)
// Parameters:
// int                            NewAI                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDSAIDropInfo           Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIDropInfo");

	AUAEGameMode_NotifyAIDropInfo_Params params;
	params.NewAI = NewAI;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.ModifyVehicleDamage
// (Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEGameMode::ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyVehicleDamage");

	AUAEGameMode_ModifyVehicleDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimVehicle = VictimVehicle;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.ModifyDamage
// (Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEGameMode::ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyDamage");

	AUAEGameMode_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimController = VictimController;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.Killed
// (Native, Public, HasOutParms)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::Killed(class AController* Killer, class AController* VictimPlayer, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Killed");

	AUAEGameMode_Killed_Params params;
	params.Killer = Killer;
	params.VictimPlayer = VictimPlayer;
	params.VictimPawn = VictimPawn;
	params.DamageEvent = DamageEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsSatisfyGeneratorArea(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea");

	AUAEGameMode_IsSatisfyGeneratorArea_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.IsPlayerCollectedEventDataReportingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsPlayerCollectedEventDataReportingEnabled(class AUAEPlayerController* UAEPlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsPlayerCollectedEventDataReportingEnabled");

	AUAEGameMode_IsPlayerCollectedEventDataReportingEnabled_Params params;
	params.UAEPlayerController = UAEPlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.IsCollectedEventEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsCollectedEventEnabled(unsigned char EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsCollectedEventEnabled");

	AUAEGameMode_IsCollectedEventEnabled_Params params;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.InitWorldActiveRange
// (Native, Public)

void AUAEGameMode::InitWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitWorldActiveRange");

	AUAEGameMode_InitWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitSeasonStatue
// (Native, Public)

void AUAEGameMode::InitSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitSeasonStatue");

	AUAEGameMode_InitSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitMissionBoard
// (Native, Public)

void AUAEGameMode::InitMissionBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitMissionBoard");

	AUAEGameMode_InitMissionBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitGenerator
// (Native, Public)

void AUAEGameMode::InitGenerator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGenerator");

	AUAEGameMode_InitGenerator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitGameParamsFromGameMode
// (Native, Public)

void AUAEGameMode::InitGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGameParamsFromGameMode");

	AUAEGameMode_InitGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitDynamicTriggers
// (Native, Public)

void AUAEGameMode::InitDynamicTriggers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicTriggers");

	AUAEGameMode_InitDynamicTriggers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitDynamicBuildingGroups
// (Native, Public)

void AUAEGameMode::InitDynamicBuildingGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicBuildingGroups");

	AUAEGameMode_InitDynamicBuildingGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitBornWithApple
// (Native, Public)

void AUAEGameMode::InitBornWithApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitBornWithApple");

	AUAEGameMode_InitBornWithApple_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.InitAdvertisement
// (Native, Public)

void AUAEGameMode::InitAdvertisement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitAdvertisement");

	AUAEGameMode_InitAdvertisement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.Heartbeat
// (Final, Native, Public)

void AUAEGameMode::Heartbeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Heartbeat");

	AUAEGameMode_Heartbeat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.HasVehicleReportEntry
// (Final, Native, Public)
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::HasVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasVehicleReportEntry");

	AUAEGameMode_HasVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.HasDynamicBuildingGroup
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::HasDynamicBuildingGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasDynamicBuildingGroup");

	AUAEGameMode_HasDynamicBuildingGroup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse");

	AUAEGameMode_HandlePlayerPaintDecalResponse_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Result = Result;
	params.DecalId = DecalId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.GotoNearDeath
// (Native, Public)
// Parameters:
// class AController*             DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GotoNearDeath");

	AUAEGameMode_GotoNearDeath_Params params;
	params.DamageInstigator = DamageInstigator;
	params.VictimPawn = VictimPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.GetVehicleReportEntry
// (Final, Native, Public)
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleReportEntry     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleReportEntry AUAEGameMode::GetVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetVehicleReportEntry");

	AUAEGameMode_GetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetSurvivingTeamCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetSurvivingTeamCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingTeamCount");

	AUAEGameMode_GetSurvivingTeamCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetSurvivingCharacterCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetSurvivingCharacterCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingCharacterCount");

	AUAEGameMode_GetSurvivingCharacterCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
// (Final, Native, Public, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerState*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerState*> AUAEGameMode::GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID");

	AUAEGameMode_GetPlayerStateListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetPlayerControllerWithUID
// (Final, Native, Public, Const)
// Parameters:
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerController* AUAEGameMode::GetPlayerControllerWithUID(uint64_t UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerWithUID");

	AUAEGameMode_GetPlayerControllerWithUID_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
// (Final, Native, Public, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerController*> AUAEGameMode::GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID");

	AUAEGameMode_GetPlayerControllerListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum
// (Native, Public, HasOutParms)
// Parameters:
// struct FHeartBeatData          Data                           (Parm, OutParm)

void AUAEGameMode::GetPlayerAndRealAiNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum");

	AUAEGameMode_GetPlayerAndRealAiNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}

// Function Gameplay.UAEGameMode.GetObserverControllerList
// (Final, Native, Public)
// Parameters:
// TArray<class AUAEPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerController*> AUAEGameMode::GetObserverControllerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetObserverControllerList");

	AUAEGameMode_GetObserverControllerList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetMonsterNum
// (Native, Public, HasOutParms)
// Parameters:
// struct FHeartBeatData          Data                           (Parm, OutParm)

void AUAEGameMode::GetMonsterNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMonsterNum");

	AUAEGameMode_GetMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}

// Function Gameplay.UAEGameMode.GetMaxWeaponReportNum
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetMaxWeaponReportNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMaxWeaponReportNum");

	AUAEGameMode_GetMaxWeaponReportNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.GetClassicPlaneDirection
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AUAEGameMode::GetClassicPlaneDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetClassicPlaneDirection");

	AUAEGameMode_GetClassicPlaneDirection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerState* AUAEGameMode::FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey");

	AUAEGameMode_FindPlayerStateWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerController* AUAEGameMode::FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey");

	AUAEGameMode_FindPlayerControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.FindPlayerControllerByUId
// (Native, Public, Const)
// Parameters:
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AUAEGameMode::FindPlayerControllerByUId(uint64_t UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerByUId");

	AUAEGameMode_FindPlayerControllerByUId_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DestroyNoActiveWorldActor(struct FVector* Location, float* Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor");

	AUAEGameMode_DestroyNoActiveWorldActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Radius != nullptr)
		*Radius = params.Radius;
}

// Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController
// (Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DestroyCharacterForPlayerController(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController");

	AUAEGameMode_DestroyCharacterForPlayerController_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.DestroyAllPickUpObjs
// (Final, Native, Public)

void AUAEGameMode::DestroyAllPickUpObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyAllPickUpObjs");

	AUAEGameMode_DestroyAllPickUpObjs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.DeleteSeasonStatue
// (Native, Public)

void AUAEGameMode::DeleteSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteSeasonStatue");

	AUAEGameMode_DeleteSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.DeleteDynamicLoadItem
// (Native, Public)

void AUAEGameMode::DeleteDynamicLoadItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteDynamicLoadItem");

	AUAEGameMode_DeleteDynamicLoadItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.DebugEnterFriendObserver
// (Native, Public)
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DebugEnterFriendObserver(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DebugEnterFriendObserver");

	AUAEGameMode_DebugEnterFriendObserver_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Offset                         (Parm, IsPlainOldData)

void AUAEGameMode::CreateDynamicBuildingGroups(const struct FVector& Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups");

	AUAEGameMode_CreateDynamicBuildingGroups_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// DelegateFunction Gameplay.UAEGameMode.CollectReportedEventDataCallback__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AUAEGameMode*            UAEGameMode                    (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FCollectedEventData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCollectedEventData AUAEGameMode::CollectReportedEventDataCallback__DelegateSignature(class AUAEGameMode* UAEGameMode, class AUAEPlayerController* UAEPlayerController, unsigned char EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("DelegateFunction Gameplay.UAEGameMode.CollectReportedEventDataCallback__DelegateSignature");

	AUAEGameMode_CollectReportedEventDataCallback__DelegateSignature_Params params;
	params.UAEGameMode = UAEGameMode;
	params.UAEPlayerController = UAEPlayerController;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameMode.CollectAllPlayerInfo
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::CollectAllPlayerInfo(float DeltaSeconds, bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.CollectAllPlayerInfo");

	AUAEGameMode_CollectAllPlayerInfo_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.ChangeName
// (Native, Public)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewName                        (Parm, ZeroConstructor)
// bool                           bNameChange                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ChangeName");

	AUAEGameMode_ChangeName_Params params;
	params.Controller = Controller;
	params.NewName = NewName;
	params.bNameChange = bNameChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameMode.AddAirDropBox
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::AddAirDropBox(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.AddAirDropBox");

	AUAEGameMode_AddAirDropBox_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameState.SendLuaDSToClient
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEGameState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.SendLuaDSToClient");

	AUAEGameState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameState.RPC_LuaDSToClient
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEGameState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.RPC_LuaDSToClient");

	AUAEGameState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameState.GetWeaponAttrReloadTableRow
// (Final, Native, Static, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponAttrReloadTableStruct ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWeaponAttrReloadTableStruct AUAEGameState::GetWeaponAttrReloadTableRow(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.GetWeaponAttrReloadTableRow");

	AUAEGameState_GetWeaponAttrReloadTableRow_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameState.GetVehicleAttrReloadTableRow
// (Final, Native, Static, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleAttrReloadTableStruct ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleAttrReloadTableStruct AUAEGameState::GetVehicleAttrReloadTableRow(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.GetVehicleAttrReloadTableRow");

	AUAEGameState_GetVehicleAttrReloadTableRow_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameState.GetGameBridge
// (Final, Native, Public)
// Parameters:
// class UUAEGameSubsystem*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEGameSubsystem* AUAEGameState::GetGameBridge()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.GetGameBridge");

	AUAEGameState_GetGameBridge_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEGameState.CheckDSSwitchOpen
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SwitchId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameState::CheckDSSwitchOpen(int SwitchId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.CheckDSSwitchOpen");

	AUAEGameState_CheckDSSwitchOpen_Params params;
	params.SwitchId = SwitchId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberIDServerCall(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall");

	AUAEPlayerState_SetGVMemberIDServerCall_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.SetGVMemberID
// (Final, Native, Public)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberID");

	AUAEPlayerState_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.SetDeliveryResult
// (Final, Native, Public)
// Parameters:
// uint32_t                       InDeliverPlayerKey             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSuccess                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetDeliveryResult");

	AUAEPlayerState_SetDeliveryResult_Params params;
	params.InDeliverPlayerKey = InDeliverPlayerKey;
	params.bInSuccess = bInSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.SendLuaDSToClient
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SendLuaDSToClient");

	AUAEPlayerState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.RPC_LuaDSToClient
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_LuaDSToClient");

	AUAEPlayerState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportTaskExtInfo
// (Final, Native, Public)
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtInfo                        (Parm, ZeroConstructor)

void AUAEPlayerState::ReportTaskExtInfo(int TaskId, const struct FString& ExtInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskExtInfo");

	AUAEPlayerState_ReportTaskExtInfo_Params params;
	params.TaskId = TaskId;
	params.ExtInfo = ExtInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportTaskData
// (Final, Native, Public)
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            process                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportTaskData(int TaskId, int process)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskData");

	AUAEPlayerState_ReportTaskData_Params params;
	params.TaskId = TaskId;
	params.process = process;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportSpecialCollection
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportSpecialCollection(int ItemId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSpecialCollection");

	AUAEPlayerState_ReportSpecialCollection_Params params;
	params.ItemId = ItemId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportSecretAreaID
// (Final, Native, Public)
// Parameters:
// int                            SecretAreaID                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportSecretAreaID(int SecretAreaID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSecretAreaID");

	AUAEPlayerState_ReportSecretAreaID_Params params;
	params.SecretAreaID = SecretAreaID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLikeTeammate
// (Final, Native, Public)
// Parameters:
// int64_t                        BeLikeUID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LikeType                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeTeammate(int64_t BeLikeUID, int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeTeammate");

	AUAEPlayerState_ReportLikeTeammate_Params params;
	params.BeLikeUID = BeLikeUID;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLikeSwitch
// (Final, Native, Public)
// Parameters:
// int                            SwitchSetting                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeSwitch(int SwitchSetting)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSwitch");

	AUAEPlayerState_ReportLikeSwitch_Params params;
	params.SwitchSetting = SwitchSetting;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLikeSelf
// (Final, Native, Public)
// Parameters:
// int                            LikeType                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeSelf(int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSelf");

	AUAEPlayerState_ReportLikeSelf_Params params;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLandLocType
// (Final, Native, Public)
// Parameters:
// int                            TouchDownLocType               (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLandLocType(int TouchDownLocType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandLocType");

	AUAEPlayerState_ReportLandLocType_Params params;
	params.TouchDownLocType = TouchDownLocType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLandAreaList
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<int>                    TouchDownAreaIDs               (Parm, OutParm, ZeroConstructor)

void AUAEPlayerState::ReportLandAreaList(TArray<int>* TouchDownAreaIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandAreaList");

	AUAEPlayerState_ReportLandAreaList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchDownAreaIDs != nullptr)
		*TouchDownAreaIDs = params.TouchDownAreaIDs;
}

// Function Gameplay.UAEPlayerState.ReportLandArea
// (Final, Native, Public)
// Parameters:
// int                            TouchDownArea                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLandArea(int TouchDownArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandArea");

	AUAEPlayerState_ReportLandArea_Params params;
	params.TouchDownArea = TouchDownArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ReportLabelCheck
// (Final, Native, Public)
// Parameters:
// int                            TeammateUID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLabelCheck(int TeammateUID, int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLabelCheck");

	AUAEPlayerState_ReportLabelCheck_Params params;
	params.TeammateUID = TeammateUID;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.RecordUseHelicoper
// (Final, Native, Public)
// Parameters:
// uint32_t                       UseHelicoperId                 (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::RecordUseHelicoper(uint32_t UseHelicoperId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RecordUseHelicoper");

	AUAEPlayerState_RecordUseHelicoper_Params params;
	params.UseHelicoperId = UseHelicoperId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRepCampIDBP
// (Event, Public, BlueprintEvent)

void AUAEPlayerState::OnRepCampIDBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRepCampIDBP");

	AUAEPlayerState_OnRepCampIDBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex
// (Final, Native, Public)

void AUAEPlayerState::OnRep_VeteranRecruitIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex");

	AUAEPlayerState_OnRep_VeteranRecruitIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum
// (Native, Public)

void AUAEPlayerState::OnRep_UpdateKillMonsterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum");

	AUAEPlayerState_OnRep_UpdateKillMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_UID
// (Final, Native, Public)

void AUAEPlayerState::OnRep_UID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UID");

	AUAEPlayerState_OnRep_UID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
// (Native, Public)

void AUAEPlayerState::OnRep_PlayerKillsChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange");

	AUAEPlayerState_OnRep_PlayerKillsChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_MatchLabel
// (Final, Native, Public)

void AUAEPlayerState::OnRep_MatchLabel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_MatchLabel");

	AUAEPlayerState_OnRep_MatchLabel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord
// (Final, Native, Public)

void AUAEPlayerState::OnRep_CollectItemRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord");

	AUAEPlayerState_OnRep_CollectItemRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_CampID
// (Final, Native, Public)

void AUAEPlayerState::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CampID");

	AUAEPlayerState_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnRep_AliasInfo
// (Final, Native, Public)

void AUAEPlayerState::OnRep_AliasInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_AliasInfo");

	AUAEPlayerState_OnRep_AliasInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated
// (Native, Public)

void AUAEPlayerState::OnClientVeteranRecruitIndexUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated");

	AUAEPlayerState_OnClientVeteranRecruitIndexUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsSpecialPickItemCollectionCompleted(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted");

	AUAEPlayerState_IsSpecialPickItemCollectionCompleted_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.IsSpecialPickItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsSpecialPickItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItem");

	AUAEPlayerState_IsSpecialPickItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.IsItemForbidMerge
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemResId                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsItemForbidMerge(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsItemForbidMerge");

	AUAEPlayerState_IsItemForbidMerge_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsDeathDamageInfoValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid");

	AUAEPlayerState_IsDeathDamageInfoValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetWeaponRecordData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FOnePlayerWeapon        OutWeaponInfo                  (Parm, OutParm)

void AUAEPlayerState::GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetWeaponRecordData");

	AUAEPlayerState_GetWeaponRecordData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutWeaponInfo != nullptr)
		*OutWeaponInfo = params.OutWeaponInfo;
}

// Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerState::GetVeteranPlayerLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel");

	AUAEPlayerState_GetVeteranPlayerLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
// (Native, Public)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerState::GetUserIDByMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUserIDByMemberID");

	AUAEPlayerState_GetUserIDByMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetUIDString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAEPlayerState::GetUIDString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUIDString");

	AUAEPlayerState_GetUIDString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameModeTeammateBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeTeammateBattleResultData AUAEPlayerState::GetTeammateBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeammateBattleResultData");

	AUAEPlayerState_GetTeammateBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetPlayerKey
// (Final, Native, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerState::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerKey");

	AUAEPlayerState_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold
// (Native, Public, Const)
// Parameters:
// struct FGameModePlayerBattleResultData_SuperCold ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModePlayerBattleResultData_SuperCold AUAEPlayerState::GetPlayerBattleResultData_SuperCold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold");

	AUAEPlayerState_GetPlayerBattleResultData_SuperCold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
// (Native, Public, Const)
// Parameters:
// struct FGameModePlayerBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModePlayerBattleResultData AUAEPlayerState::GetPlayerBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData");

	AUAEPlayerState_GetPlayerBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetMentorPlayerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMentorPlayerType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMentorPlayerType AUAEPlayerState::GetMentorPlayerType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetMentorPlayerType");

	AUAEPlayerState_GetMentorPlayerType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.GetDeathDamageInfo
// (Final, Native, Public)
// Parameters:
// struct FDamageInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDamageInfo AUAEPlayerState::GetDeathDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetDeathDamageInfo");

	AUAEPlayerState_GetDeathDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList
// (Native, Public)

void AUAEPlayerState::ForceUpdateCampCharacterList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList");

	AUAEPlayerState_ForceUpdateCampCharacterList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ClearTlogData
// (Native, Public)

void AUAEPlayerState::ClearTlogData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ClearTlogData");

	AUAEPlayerState_ClearTlogData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.ChangeCollectItemRecord
// (Final, Native, Public)
// Parameters:
// int                            InItemID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNewState                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ChangeCollectItemRecord(int InItemID, bool InNewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ChangeCollectItemRecord");

	AUAEPlayerState_ChangeCollectItemRecord_Params params;
	params.InItemID = InItemID;
	params.InNewState = InNewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.AddGeneralCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::AddGeneralCount(int ID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddGeneralCount");

	AUAEPlayerState_AddGeneralCount_Params params;
	params.ID = ID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerState.AddEventCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::AddEventCount(unsigned char EventId, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddEventCount");

	AUAEPlayerState_AddEventCount_Params params;
	params.EventId = EventId;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController
// (Native, Public, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* AUAEBuffApplierActor::GetTheInstigatorController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController");

	AUAEBuffApplierActor_GetTheInstigatorController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEHouseActor.ProcessWindowCreateList
// (Final, Native, Static, Public)

void AUAEHouseActor::ProcessWindowCreateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.ProcessWindowCreateList");

	AUAEHouseActor_ProcessWindowCreateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEHouseActor.OnRep_WindowList
// (Final, Native, Private)

void AUAEHouseActor::OnRep_WindowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.OnRep_WindowList");

	AUAEHouseActor_OnRep_WindowList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FUAEWindowRepData       InRepData                      (Parm)

void AUAEHouseActor::BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated");

	AUAEHouseActor_BroadcastWindowRepDataUpdated_Params params;
	params.InRepData = InRepData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.UseingWeaponScheme
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::UseingWeaponScheme()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.UseingWeaponScheme");

	AUAEPlayerController_UseingWeaponScheme_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation
// (Final, Exec, Native, Public)

void AUAEPlayerController::TestShowLongTimeNoOperation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation");

	AUAEPlayerController_TestShowLongTimeNoOperation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.TestShowConfirmDialogOfMisKill
// (Final, Exec, Native, Public)

void AUAEPlayerController::TestShowConfirmDialogOfMisKill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestShowConfirmDialogOfMisKill");

	AUAEPlayerController_TestShowConfirmDialogOfMisKill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.TestRespawn
// (Final, Exec, Native, Public)

void AUAEPlayerController::TestRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestRespawn");

	AUAEPlayerController_TestRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.TestLogout
// (Final, Exec, Native, Public)

void AUAEPlayerController::TestLogout()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestLogout");

	AUAEPlayerController_TestLogout_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            TestID                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara");

	AUAEPlayerController_TestCastUIMsgWithPara_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TestID = TestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo
// (Final, Native, Public)
// Parameters:
// TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList          (Parm, ZeroConstructor)

void AUAEPlayerController::SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo");

	AUAEPlayerController_SyncDailyTaskStoreInfo_Params params;
	params.NewDailyTaskStoreList = NewDailyTaskStoreList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SetUsedSimulationCVar
// (Final, Native, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::SetUsedSimulationCVar(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetUsedSimulationCVar");

	AUAEPlayerController_SetUsedSimulationCVar_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate
// (Final, Native, Static, Public)
// Parameters:
// class UGameInstance*           InGameInstance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate");

	AUAEPlayerController_SetTargetMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SetPanels
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUAEUserWidget*>  panels                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SetPanels(TArray<class UUAEUserWidget*> panels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetPanels");

	AUAEPlayerController_SetPanels_Params params;
	params.panels = panels;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate
// (Final, Native, Static, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate");

	AUAEPlayerController_SetDSMsgReceiveDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate
// (Final, Native, Static, Public)
// Parameters:
// class UGameInstance*           InGameInstance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate");

	AUAEPlayerController_SetClientMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerTestLogout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AUAEPlayerController::ServerTestLogout()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerTestLogout");

	AUAEPlayerController_ServerTestLogout_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerSetVoiceId
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            VoiceID                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerSetVoiceId(int VoiceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerSetVoiceId");

	AUAEPlayerController_ServerSetVoiceId_Params params;
	params.VoiceID = VoiceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerKickSelf
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AUAEPlayerController::ServerKickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerKickSelf");

	AUAEPlayerController_ServerKickSelf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerGotoSpectating
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APawn*                   ViewTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerGotoSpectating(class APawn* ViewTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerGotoSpectating");

	AUAEPlayerController_ServerGotoSpectating_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerExitGame
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AUAEPlayerController::ServerExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerExitGame");

	AUAEPlayerController_ServerExitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerAcknowledgeReconnection_2(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2");

	AUAEPlayerController_ServerAcknowledgeReconnection_2_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SendLuaDSToClient
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaDSToClient");

	AUAEPlayerController_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.SendLuaClientToDS
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SendLuaClientToDS(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaClientToDS");

	AUAEPlayerController_SendLuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            InLoss                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLoss                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InNetworkType                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo");

	AUAEPlayerController_RPC_Server_SyncClientNetInfo_Params params;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;
	params.InNetworkType = InNetworkType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            AvgPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LostPackRate                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvgNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StdNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InLoss                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLoss                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo");

	AUAEPlayerController_RPC_Server_ReportClientNetInfo_Params params;
	params.AvgPing = AvgPing;
	params.MaxPing = MaxPing;
	params.MinPing = MinPing;
	params.LostPackRate = LostPackRate;
	params.AvgNoOutlier = AvgNoOutlier;
	params.StdNoOutlier = StdNoOutlier;
	params.NumNoOutlier = NumNoOutlier;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.RPC_LuaDSToClient
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaDSToClient");

	AUAEPlayerController_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.RPC_LuaClientToDS
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::RPC_LuaClientToDS(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaClientToDS");

	AUAEPlayerController_RPC_LuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.Respawn
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::Respawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.Respawn");

	AUAEPlayerController_Respawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar
// (Final, Native, Public)

void AUAEPlayerController::ResetUsedSimulationCVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar");

	AUAEPlayerController_ResetUsedSimulationCVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ReleaseInGameUI
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::ReleaseInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReleaseInGameUI");

	AUAEPlayerController_ReleaseInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ReceivePostLoginInit
// (Event, Public, BlueprintEvent)

void AUAEPlayerController::ReceivePostLoginInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReceivePostLoginInit");

	AUAEPlayerController_ReceivePostLoginInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.PrintStatistics
// (Final, Exec, Native, Public)

void AUAEPlayerController::PrintStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PrintStatistics");

	AUAEPlayerController_PrintStatistics_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
// (Final, Native, Protected)

void AUAEPlayerController::PlayerStartIDReceived()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PlayerStartIDReceived");

	AUAEPlayerController_PlayerStartIDReceived_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList
// (Native, Public)

void AUAEPlayerController::OnRep_WeaponAvatarDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList");

	AUAEPlayerController_OnRep_WeaponAvatarDataList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_WatchPlayerKey
// (Native, Public)

void AUAEPlayerController::OnRep_WatchPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_WatchPlayerKey");

	AUAEPlayerController_OnRep_WatchPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_UsedSimulation
// (Native, Public)

void AUAEPlayerController::OnRep_UsedSimulation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsedSimulation");

	AUAEPlayerController_OnRep_UsedSimulation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_PveLevel
// (Native, Public)

void AUAEPlayerController::OnRep_PveLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PveLevel");

	AUAEPlayerController_OnRep_PveLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList
// (Final, Native, Public)

void AUAEPlayerController::OnRep_PlayerOBInfoList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList");

	AUAEPlayerController_OnRep_PlayerOBInfoList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime
// (Native, Public)

void AUAEPlayerController::OnRep_LastGameResultTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime");

	AUAEPlayerController_OnRep_LastGameResultTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy
// (Native, Protected)

void AUAEPlayerController::OnRep_IsSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy");

	AUAEPlayerController_OnRep_IsSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
// (Native, Public)

void AUAEPlayerController::OnRep_IsSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectating");

	AUAEPlayerController_OnRep_IsSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_IsObserver
// (Native, Public)

void AUAEPlayerController::OnRep_IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsObserver");

	AUAEPlayerController_OnRep_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo
// (Final, Native, Public)

void AUAEPlayerController::OnRep_InitialWeaponSchemeInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo");

	AUAEPlayerController_OnRep_InitialWeaponSchemeInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar
// (Native, Public)

void AUAEPlayerController::OnRep_InitialEquipmentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar");

	AUAEPlayerController_OnRep_InitialEquipmentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar
// (Native, Public)

void AUAEPlayerController::OnRep_InitialConsumableAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar");

	AUAEPlayerController_OnRep_InitialConsumableAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_FriendObservers
// (Native, Public)

void AUAEPlayerController::OnRep_FriendObservers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_FriendObservers");

	AUAEPlayerController_OnRep_FriendObservers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex
// (Final, Native, Public)

void AUAEPlayerController::OnRep_CurWeaponSchemeIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex");

	AUAEPlayerController_OnRep_CurWeaponSchemeIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.OnRep_bRoomOwner
// (Native, Public)

void AUAEPlayerController::OnRep_bRoomOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_bRoomOwner");

	AUAEPlayerController_OnRep_bRoomOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.NotifyEnterBattle
// (Final, Native, Public)

void AUAEPlayerController::NotifyEnterBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.NotifyEnterBattle");

	AUAEPlayerController_NotifyEnterBattle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.LuaDoString
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 LuaString                      (Parm, ZeroConstructor)

void AUAEPlayerController::LuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.LuaDoString");

	AUAEPlayerController_LuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.KickSelf
// (Final, Exec, Native, Public)

void AUAEPlayerController::KickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.KickSelf");

	AUAEPlayerController_KickSelf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.IsSpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectator");

	AUAEPlayerController_IsSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsRoomMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsRoomMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsRoomMode");

	AUAEPlayerController_IsRoomMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsPureSpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsPureSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsPureSpectator");

	AUAEPlayerController_IsPureSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsObserver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsObserver");

	AUAEPlayerController_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsInSpectatingEnemy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectatingEnemy");

	AUAEPlayerController_IsInSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsInSpectating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectating");

	AUAEPlayerController_IsInSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsFriendOrEnemySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator");

	AUAEPlayerController_IsFriendOrEnemySpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsFriendObserver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsFriendObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendObserver");

	AUAEPlayerController_IsFriendObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsExited
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsExited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsExited");

	AUAEPlayerController_IsExited_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsDemoRecSpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoRecSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoRecSpectator");

	AUAEPlayerController_IsDemoRecSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsDemoPlaySpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoPlaySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlaySpectator");

	AUAEPlayerController_IsDemoPlaySpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoPlayGlobalObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver");

	AUAEPlayerController_IsDemoPlayGlobalObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.InitWithPlayerParams
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModePlayerParams   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEPlayerController::InitWithPlayerParams(const struct FGameModePlayerParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWithPlayerParams");

	AUAEPlayerController_InitWithPlayerParams_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitWeaponAvatarItems
// (Native, Public)

void AUAEPlayerController::InitWeaponAvatarItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWeaponAvatarItems");

	AUAEPlayerController_InitWeaponAvatarItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitVehicleMusicList
// (Native, Public)

void AUAEPlayerController::InitVehicleMusicList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleMusicList");

	AUAEPlayerController_InitVehicleMusicList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitVehicleAvatarList
// (Native, Public)

void AUAEPlayerController::InitVehicleAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAvatarList");

	AUAEPlayerController_InitVehicleAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList
// (Native, Public)

void AUAEPlayerController::InitVehicleAdvanceAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList");

	AUAEPlayerController_InitVehicleAdvanceAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitIngameUI
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::InitIngameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitIngameUI");

	AUAEPlayerController_InitIngameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.InitGrenadeAvatarList
// (Native, Public)
// Parameters:
// bool                           ReInitial                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::InitGrenadeAvatarList(bool ReInitial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitGrenadeAvatarList");

	AUAEPlayerController_InitGrenadeAvatarList_Params params;
	params.ReInitial = ReInitial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.GotoSpectating
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GotoSpectating(int PlayerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GotoSpectating");

	AUAEPlayerController_GotoSpectating_Params params;
	params.PlayerID = PlayerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetWeaponPandentReflect
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            wraponID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            pendantID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::GetWeaponPandentReflect(int wraponID, int* pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponPandentReflect");

	AUAEPlayerController_GetWeaponPandentReflect_Params params;
	params.wraponID = wraponID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pendantID != nullptr)
		*pendantID = params.pendantID;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetWeaponAvatarItemId(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId");

	AUAEPlayerController_GetWeaponAvatarItemId_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         VisibleLevels                  (Parm, OutParm, ZeroConstructor)

void AUAEPlayerController::GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName");

	AUAEPlayerController_GetVisibleLevelsLoadedName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (VisibleLevels != nullptr)
		*VisibleLevels = params.VisibleLevels;
}

// Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId
// (Final, Native, Public)
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDailyTaskStoreInfo     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDailyTaskStoreInfo AUAEPlayerController::GetDailyTaskStoreInfoByTaskId(int TaskId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId");

	AUAEPlayerController_GetDailyTaskStoreInfoByTaskId_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetCurrentWeaponSchemeMainSlotItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId");

	AUAEPlayerController_GetCurrentWeaponSchemeMainSlotItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey
// (Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerController::GetCurrentOBPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey");

	AUAEPlayerController_GetCurrentOBPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetCurrentOBPlayerInfoIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex");

	AUAEPlayerController_GetCurrentOBPlayerInfoIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.ForceNetReady
// (Final, Exec, Native, Public)

void AUAEPlayerController::ForceNetReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ForceNetReady");

	AUAEPlayerController_ForceNetReady_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ExitGame
// (Final, Native, Public, BlueprintCallable)

void AUAEPlayerController::ExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExitGame");

	AUAEPlayerController_ExitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ExhaustCPU
// (Final, Exec, Native, Public)

void AUAEPlayerController::ExhaustCPU()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExhaustCPU");

	AUAEPlayerController_ExhaustCPU_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ExecDSCommand
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 DSCommand                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::ExecDSCommand(const struct FString& DSCommand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExecDSCommand");

	AUAEPlayerController_ExecDSCommand_Params params;
	params.DSCommand = DSCommand;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ExcuteIntRecord
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntRecord");

	AUAEPlayerController_ExcuteIntRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntCounterRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord");

	AUAEPlayerController_ExcuteIntCounterRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.EnableInGameUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::EnableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.EnableInGameUI");

	AUAEPlayerController_EnableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpUAENetActors
// (Final, Exec, Native, Public, BlueprintCallable)

void AUAEPlayerController::DumpUAENetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpUAENetActors");

	AUAEPlayerController_DumpUAENetActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpRegions
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpRegions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpRegions");

	AUAEPlayerController_DumpRegions_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpNetActors
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpNetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpNetActors");

	AUAEPlayerController_DumpNetActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpCharacters
// (Final, Exec, Native, Public, BlueprintCallable)

void AUAEPlayerController::DumpCharacters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpCharacters");

	AUAEPlayerController_DumpCharacters_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpAllUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllUI");

	AUAEPlayerController_DumpAllUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpAllObjects
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllObjects");

	AUAEPlayerController_DumpAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DumpAllActors
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllActors");

	AUAEPlayerController_DumpAllActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DoLuaFile
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void AUAEPlayerController::DoLuaFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DoLuaFile");

	AUAEPlayerController_DoLuaFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DoCrash
// (Final, Exec, Native, Public)

void AUAEPlayerController::DoCrash()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DoCrash");

	AUAEPlayerController_DoCrash_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DisableInGameUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::DisableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DisableInGameUI");

	AUAEPlayerController_DisableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.DealWithPickUpFailed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void AUAEPlayerController::DealWithPickUpFailed(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DealWithPickUpFailed");

	AUAEPlayerController_DealWithPickUpFailed_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientShowTeammateEscapeNotice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice");

	AUAEPlayerController_ClientShowTeammateEscapeNotice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            TipsID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 param1                         (Parm, ZeroConstructor)
// struct FString                 param2                         (Parm, ZeroConstructor)

void AUAEPlayerController::ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& param1, const struct FString& param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings");

	AUAEPlayerController_ClientRPC_CastUIMsgWithStrings_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TipsID = TipsID;
	params.param1 = param1;
	params.param2 = param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams");

	AUAEPlayerController_ClientRPC_CastUIMsgParams_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void AUAEPlayerController::ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg");

	AUAEPlayerController_ClientRPC_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientInitPlayerOBInfoButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton");

	AUAEPlayerController_ClientInitPlayerOBInfoButton_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientBroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete");

	AUAEPlayerController_ClientBroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientBroadcastReconnectionSuccessful()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful");

	AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ClientAcknowledgeReconnection_4(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4");

	AUAEPlayerController_ClientAcknowledgeReconnection_4_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit
// (Native, Public)

void AUAEPlayerController::CheckPlayerOBInfoButtonInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit");

	AUAEPlayerController_CheckPlayerOBInfoButtonInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::CheckAcknowledgedPawn(class APawn* InPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn");

	AUAEPlayerController_CheckAcknowledgedPawn_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.CastUIMsg
// (Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void AUAEPlayerController::CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CastUIMsg");

	AUAEPlayerController_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.CanPickUpItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EPickUpCheckResult             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPickUpCheckResult AUAEPlayerController::CanPickUpItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CanPickUpItem");

	AUAEPlayerController_CanPickUpItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEPlayerController.CallLuaTableFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void AUAEPlayerController::CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CallLuaTableFunction");

	AUAEPlayerController_CallLuaTableFunction_Params params;
	params.tableName = tableName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.CallLuaGlobalFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void AUAEPlayerController::CallLuaGlobalFunction(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CallLuaGlobalFunction");

	AUAEPlayerController_CallLuaGlobalFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEPlayerController.BroadcastRespawnComplete
// (Final, Native, Public)

void AUAEPlayerController::BroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.BroadcastRespawnComplete");

	AUAEPlayerController_BroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent");

	AUAEProjectile_WorkAsBuffApplierEvent_Params params;
	params.BuffName = BuffName;
	params.BuffTarget = BuffTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable, NetValidate)

void AUAEProjectile::TimeoutExplodeMulticast_CPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP");

	AUAEProjectile_TimeoutExplodeMulticast_CPP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent
// (Native, Event, Public, BlueprintEvent)

void AUAEProjectile::TimeoutExplodeMulticast_BPEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent");

	AUAEProjectile_TimeoutExplodeMulticast_BPEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.StartFlyMulticast_CPP
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 Vel                            (Parm, IsPlainOldData)
// bool                           isHighMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::StartFlyMulticast_CPP(const struct FVector& Vel, bool isHighMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.StartFlyMulticast_CPP");

	AUAEProjectile_StartFlyMulticast_CPP_Params params;
	params.Vel = Vel;
	params.isHighMode = isHighMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.StartFlyMulticast_BPEvent
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Vel                            (Parm, IsPlainOldData)
// bool                           isHighMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::StartFlyMulticast_BPEvent(const struct FVector& Vel, bool isHighMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.StartFlyMulticast_BPEvent");

	AUAEProjectile_StartFlyMulticast_BPEvent_Params params;
	params.Vel = Vel;
	params.isHighMode = isHighMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Offset                         (Parm, IsPlainOldData)
// struct FVector                 StandOffset                    (Parm, IsPlainOldData)
// struct FVector                 CrouchOffset                   (Parm, IsPlainOldData)
// struct FVector                 ProneOffset                    (Parm, IsPlainOldData)
// TEnumAsByte<enum ECharacterPoseType> PrevoisOwnerPose               (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<enum ECharacterPoseType> PrevoisOwnerPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset");

	AUAEProjectile_SetActorInitialRelativeOffset_Params params;
	params.Offset = Offset;
	params.StandOffset = StandOffset;
	params.CrouchOffset = CrouchOffset;
	params.ProneOffset = ProneOffset;
	params.PrevoisOwnerPose = PrevoisOwnerPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient
// (Event, Public, BlueprintEvent)

void AUAEProjectile::ServerNotifyGroundEventOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient");

	AUAEProjectile_ServerNotifyGroundEventOnClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
// (Final, Native, Public)

void AUAEProjectile::OnRep_IsServerAlreadyExplodedCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp");

	AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp
// (Final, Native, Public)

void AUAEProjectile::OnRep_IsGroundedOnServerCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp");

	AUAEProjectile_OnRep_IsGroundedOnServerCpp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.OnProjectileStopOnServer
// (Final, Native, Public, BlueprintCallable)

void AUAEProjectile::OnProjectileStopOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnServer");

	AUAEProjectile_OnProjectileStopOnServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.OnProjectileStopOnClient
// (Final, Native, Public, BlueprintCallable)

void AUAEProjectile::OnProjectileStopOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnClient");

	AUAEProjectile_OnProjectileStopOnClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
// (Native, Event, Public, BlueprintEvent)

void AUAEProjectile::IsServerAlreadyExplodedCppNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify");

	AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.IsOwnerAutomous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEProjectile::IsOwnerAutomous()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsOwnerAutomous");

	AUAEProjectile_IsOwnerAutomous_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEProjectile.GlassDetect
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEProjectile::GlassDetect(const struct FVector& Start, const struct FVector& End)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GlassDetect");

	AUAEProjectile_GlassDetect_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.GetRemainingEffectTime
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEProjectile::GetRemainingEffectTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GetRemainingEffectTime");

	AUAEProjectile_GetRemainingEffectTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEProjectile.CallExplode
// (Native, Event, Public, BlueprintEvent)

void AUAEProjectile::CallExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.CallExplode");

	AUAEProjectile_CallExplode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEProjectile.BroadcastClientExplode
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable, NetValidate)

void AUAEProjectile::BroadcastClientExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.BroadcastClientExplode");

	AUAEProjectile_BroadcastClientExplode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.UseItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UseItem");

	UBackpackComponent_UseItem_Params params;
	params.DefineID = DefineID;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.UpdateCapacity
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::UpdateCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateCapacity");

	UBackpackComponent_UpdateCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive
// (Final, Native, Public)

void UBackpackComponent::UnlockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive");

	UBackpackComponent_UnlockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.UnequipItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::UnequipItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UnequipItem");

	UBackpackComponent_UnequipItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.TryMergeItemHandles
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TryMergeItemHandles");

	UBackpackComponent_TryMergeItemHandles_Params params;
	params.DefineID = DefineID;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.TakeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandleDrop                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TakeItem");

	UBackpackComponent_TakeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandleDrop = bCallHandleDrop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.SwapItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID1                      (Parm)
// struct FItemDefineID           DefineID2                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SwapItem");

	UBackpackComponent_SwapItem_Params params;
	params.DefineID1 = DefineID1;
	params.DefineID2 = DefineID2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ServerSetShowBounty
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bInShowBounty                  (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerSetShowBounty(bool bInShowBounty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetShowBounty");

	UBackpackComponent_ServerSetShowBounty_Params params;
	params.bInShowBounty = bInShowBounty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ServerSetCustomAccessories
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            WeaponItemID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerSetCustomAccessories(int WeaponItemID, int Index, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetCustomAccessories");

	UBackpackComponent_ServerSetCustomAccessories_Params params;
	params.WeaponItemID = WeaponItemID;
	params.Index = Index;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ServerEnableItem
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           bUse                           (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerEnableItem");

	UBackpackComponent_ServerEnableItem_Params params;
	params.DefineID = DefineID;
	params.bUse = bUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ReturnItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandlePickup              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReturnItem");

	UBackpackComponent_ReturnItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandlePickup = bCallHandlePickup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.RemoveItemHandle
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::RemoveItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.RemoveItemHandle");

	UBackpackComponent_RemoveItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ReceiveItemList
// (Native, Event, Protected, BlueprintEvent)

void UBackpackComponent::ReceiveItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveItemList");

	UBackpackComponent_ReceiveItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ReceiveCapacity
// (Native, Event, Protected, BlueprintEvent)

void UBackpackComponent::ReceiveCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveCapacity");

	UBackpackComponent_ReceiveCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail");

	UBackpackComponent_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.PickUpItem_Default
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickUpItem_Default");

	UBackpackComponent_PickUpItem_Default_Params params;
	params.DefineID = DefineID;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.PickupItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItem");

	UBackpackComponent_PickupItem_Params params;
	params.DefineID = DefineID;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.PickupBattleItemOnPlane
// (Final, Native, Public, BlueprintCallable)

void UBackpackComponent::PickupBattleItemOnPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupBattleItemOnPlane");

	UBackpackComponent_PickupBattleItemOnPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox");

	UBackpackComponent_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.PickItem_IntoBackpack
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoBackpack");

	UBackpackComponent_PickItem_IntoBackpack_Params params;
	params.DefineID = DefineID;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.OnRep_specialCountLimit
// (Final, Native, Public)

void UBackpackComponent::OnRep_specialCountLimit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_specialCountLimit");

	UBackpackComponent_OnRep_specialCountLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.OnRep_ItemListNet
// (Final, Native, Protected)

void UBackpackComponent::OnRep_ItemListNet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_ItemListNet");

	UBackpackComponent_OnRep_ItemListNet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.OnRep_ItemList
// (Final, Native, Protected)

void UBackpackComponent::OnRep_ItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_ItemList");

	UBackpackComponent_OnRep_ItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.OnRep_Capacity
// (Final, Native, Protected)

void UBackpackComponent::OnRep_Capacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_Capacity");

	UBackpackComponent_OnRep_Capacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.NotifyItemUpdated
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemUpdated");

	UBackpackComponent_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.NotifyItemRemoved
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemRemoved");

	UBackpackComponent_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.NotifyItemListUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponent::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemListUpdated");

	UBackpackComponent_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponent::NotifyCapacityUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyCapacityUpdated");

	UBackpackComponent_NotifyCapacityUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.NewItemHandle
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::NewItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemHandle");

	UBackpackComponent_NewItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipping                     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState");

	UBackpackComponent_ModifyItemHandleEquippingState_Params params;
	params.ItemHandle = ItemHandle;
	params.bEquipping = bEquipping;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ModifyItemHandleCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleCount");

	UBackpackComponent_ModifyItemHandleCount_Params params;
	params.ItemHandle = ItemHandle;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ModifyAutoPickClipType
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            InAutoPickClipType             (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyAutoPickClipType(int InAutoPickClipType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAutoPickClipType");

	UBackpackComponent_ModifyAutoPickClipType_Params params;
	params.InAutoPickClipType = InAutoPickClipType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ModifyAimNotAutoUse
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyAimNotAutoUse(bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAimNotAutoUse");

	UBackpackComponent_ModifyAimNotAutoUse_Params params;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.LockUpdateItemListReceive
// (Final, Native, Public)

void UBackpackComponent::LockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.LockUpdateItemListReceive");

	UBackpackComponent_LockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ItemNet2Data
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FNetArrayUnit           netItem                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::ItemNet2Data(const struct FNetArrayUnit& netItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ItemNet2Data");

	UBackpackComponent_ItemNet2Data_Params params;
	params.netItem = netItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsNeedToShowInBackpack
// (Final, Native, Public)
// Parameters:
// int                            TypeDefineID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsNeedToShowInBackpack(int TypeDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsNeedToShowInBackpack");

	UBackpackComponent_IsNeedToShowInBackpack_Params params;
	params.TypeDefineID = TypeDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsItemExist
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemExist(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemExist");

	UBackpackComponent_IsItemExist_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsEnableWeaponAttachmentBindToWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon");

	UBackpackComponent_IsEnableWeaponAttachmentBindToWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsCustomIgnoreAccessories(int WeaponId, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories");

	UBackpackComponent_IsCustomIgnoreAccessories_Params params;
	params.WeaponId = WeaponId;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsCustomAccessories
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsCustomAccessories(int WeaponId, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomAccessories");

	UBackpackComponent_IsCustomAccessories_Params params;
	params.WeaponId = WeaponId;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.IsAutoUse
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsAutoUse(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsAutoUse");

	UBackpackComponent_IsAutoUse_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange
// (Final, Native, Public, Const)
// Parameters:
// int                            LowValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            HighValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasUnEquipItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange");

	UBackpackComponent_HasUnEquipItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HasTagSub
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasTagSub(int ItemId, const struct FName& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasTagSub");

	UBackpackComponent_HasTagSub_Params params;
	params.ItemId = ItemId;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HasItemBySubType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SubType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemBySubType");

	UBackpackComponent_HasItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HasItemByDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefineID");

	UBackpackComponent_HasItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HasItemByDefindIdRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            LowValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            HighValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefindIdRange");

	UBackpackComponent_HasItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.HandleDropInDisuse
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UBattleItemHandleBase*   ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OccupiedCapacityBeforeDisuse   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HandleDropInDisuse");

	UBackpackComponent_HandleDropInDisuse_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;
	params.Reason = Reason;
	params.OccupiedCapacityBeforeDisuse = OccupiedCapacityBeforeDisuse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.GetWorld_BP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBackpackComponent::GetWorld_BP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetWorld_BP");

	UBackpackComponent_GetWorld_BP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId
// (Final, Native, Public, Const)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetUnEquipItemNumByItemId(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId");

	UBackpackComponent_GetUnEquipItemNumByItemId_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetSpecialItemNow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FSpecialPickInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialPickInfo UBackpackComponent::GetSpecialItemNow(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemNow");

	UBackpackComponent_GetSpecialItemNow_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetSpecialItemBefore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemResId                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpecialPickInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialPickInfo UBackpackComponent::GetSpecialItemBefore(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemBefore");

	UBackpackComponent_GetSpecialItemBefore_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FString                 AdditionalDataName             (Parm, ZeroConstructor)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, const struct FString& AdditionalDataName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData");

	UBackpackComponent_GetLeastElectrictyBattleItemData_Params params;
	params.DefineID = DefineID;
	params.AdditionalDataName = AdditionalDataName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemSubType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemSubType(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemSubType");

	UBackpackComponent_GetItemSubType_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemListByDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetItemListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemListByDefineID");

	UBackpackComponent_GetItemListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemHandleMap
// (Native, Protected, BlueprintCallable)
// Parameters:
// TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FItemDefineID, class UItemHandleBase*> UBackpackComponent::GetItemHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleMap");

	UBackpackComponent_GetItemHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemHandleList
// (Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UBackpackComponent::GetItemHandleList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleList");

	UBackpackComponent_GetItemHandleList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemCountByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InItemType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemCountByType(int InItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByType");

	UBackpackComponent_GetItemCountByType_Params params;
	params.InItemType = InItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InItemSpecialID                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemCountByItemSpecialID(int InItemSpecialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID");

	UBackpackComponent_GetItemCountByItemSpecialID_Params params;
	params.InItemSpecialID = InItemSpecialID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemByDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemByDefineID");

	UBackpackComponent_GetItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetItemAssociateWeights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FBattleItemData         InItemData                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::GetItemAssociateWeights(const struct FBattleItemData& InItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemAssociateWeights");

	UBackpackComponent_GetItemAssociateWeights_Params params;
	params.InItemData = InItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetFirstItemBySubType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SubType                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetFirstItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemBySubType");

	UBackpackComponent_GetFirstItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance");

	UBackpackComponent_GetFirstItemByDefineIDIgnoreInstance_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackComponent::GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID");

	UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetAllItemList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetAllItemList(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAllItemList");

	UBackpackComponent_GetAllItemList_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.GetAIPickupType
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBattleItemClientPickupType UBackpackComponent::GetAIPickupType(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAIPickupType");

	UBackpackComponent_GetAIPickupType_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ForceNetUpdate
// (Native, Public, BlueprintCallable)

void UBackpackComponent::ForceNetUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ForceNetUpdate");

	UBackpackComponent_ForceNetUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.EquipItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::EquipItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.EquipItem");

	UBackpackComponent_EquipItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.DropItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DropItem");

	UBackpackComponent_DropItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.DisuseItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DisuseItem");

	UBackpackComponent_DisuseItem_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CreateItemHandleInternal
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::CreateItemHandleInternal(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandleInternal");

	UBackpackComponent_CreateItemHandleInternal_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CreateItemHandle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UBackpackComponent::CreateItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandle");

	UBackpackComponent_CreateItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ConsumeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ConsumeItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ConsumeItem");

	UBackpackComponent_ConsumeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ClientUpdateSingleItem
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, ReferenceParm)

void UBackpackComponent::ClientUpdateSingleItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientUpdateSingleItem");

	UBackpackComponent_ClientUpdateSingleItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ClientUpdateItemData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FBattleItemData         InItemData                     (ConstParm, Parm, ReferenceParm)

void UBackpackComponent::ClientUpdateItemData(const struct FBattleItemData& InItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientUpdateItemData");

	UBackpackComponent_ClientUpdateItemData_Params params;
	params.InItemData = InItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ClientRemoveItemData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FBattleItemData         InItemData                     (ConstParm, Parm, ReferenceParm)

void UBackpackComponent::ClientRemoveItemData(const struct FBattleItemData& InItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientRemoveItemData");

	UBackpackComponent_ClientRemoveItemData_Params params;
	params.InItemData = InItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate");

	UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate");

	UBackpackComponent_ClientBroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem");

	UBackpackComponent_CheckSpecialMaxCountForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBackpackComponent*      BackpackComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup");

	UBackpackComponent_CheckSkillPropItemCanBePickup_Params params;
	params.BackpackComp = BackpackComp;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CheckCapacityForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckCapacityForItem");

	UBackpackComponent_CheckCapacityForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.ChangeItemStoreArea
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ChangeItemStoreArea");

	UBackpackComponent_ChangeItemStoreArea_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CanDisuseToBackpack
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CanDisuseToBackpack(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CanDisuseToBackpack");

	UBackpackComponent_CanDisuseToBackpack_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse");

	UBackpackComponent_CacheItemAssociationBeforeDisuse_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate");

	UBackpackComponent_BroadcastItemOperCountDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemOperationInfo      ItemOperationInfo              (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponent::BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate");

	UBackpackComponent_BroadcastItemOperationInfoDelegate_Params params;
	params.ItemOperationInfo = ItemOperationInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate");

	UBackpackComponent_BroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate");

	UBackpackComponent_BroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BackpackComponent.AddItemHandle
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddItemHandle");

	UBackpackComponent_AddItemHandle_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm, OutParm)
// struct FBattleItemPickupInfo   pickupInfo                     (Parm, OutParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* pickupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane");

	UBackpackComponent_AddBattleItemPickupOnPlane_Params params;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;
	if (pickupInfo != nullptr)
		*pickupInfo = params.pickupInfo;
}

// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
// (Native, Public)
// Parameters:
// class USpotSceneComponent*     Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterWorldTileSpot(class USpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot");

	UBaseGeneratorComponent_RegisterWorldTileSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
// (Native, Public, BlueprintCallable)
// Parameters:
// class USpotSceneComponent*     SpotComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick");

	UBaseGeneratorComponent_RegisterSpotComponentToTick_Params params;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent");

	UBaseGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BaseGeneratorComponent.GetRandomCategory
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBaseGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GetRandomCategory");

	UBaseGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FWorldTileSpotArray     SpotArray                      (Parm, OutParm)

void UBaseGeneratorComponent::GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots");

	UBaseGeneratorComponent_GeneratorWorldTileSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotArray != nullptr)
		*SpotArray = params.SpotArray;
}

// Function Gameplay.BaseGeneratorComponent.GenerateSpots
// (Native, Public)

void UBaseGeneratorComponent::GenerateSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpots");

	UBaseGeneratorComponent_GenerateSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick");

	UBaseGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.BaseGeneratorComponent.GeneratePickupActor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotator                   (Parm, OutParm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemGenerateSpawnClass ItemData                       (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBaseGeneratorComponent::GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratePickupActor");

	UBaseGeneratorComponent_GeneratePickupActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}

// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
// (Final, Native, Protected)

void UBaseGeneratorComponent::CheckTileLevelsVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible");

	UBaseGeneratorComponent_CheckTileLevelsVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 BuildingLoc                    (Parm, IsPlainOldData)
// struct FVector                 SpotLoc                        (Parm, IsPlainOldData)
// class AActor*                  PickUpActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorAIInterface::RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint");

	UGeneratorActorAIInterface_RegisterAIPickupPoint_Params params;
	params.BuildingLoc = BuildingLoc;
	params.SpotLoc = SpotLoc;
	params.PickUpActor = PickUpActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorInterface.SetExtendData
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::SetExtendData(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetExtendData");

	UGeneratorActorInterface_SetExtendData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorInterface.SetAttachedActor
// (Native, Public)
// Parameters:
// class AActor*                  AttachedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::SetAttachedActor(class AActor* AttachedActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetAttachedActor");

	UGeneratorActorInterface_SetAttachedActor_Params params;
	params.AttachedActor = AttachedActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorInterface.InitDataNew
// (Native, Public)
// Parameters:
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpotDataIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitDataNew");

	UGeneratorActorInterface_InitDataNew_Params params;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotDataIndex = SpotDataIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorInterface.InitData
// (Native, Public)
// Parameters:
// class UItemSpotSceneComponent* ItemSpotSceneComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitData");

	UGeneratorActorInterface_InitData_Params params;
	params.ItemSpotSceneComponent = ItemSpotSceneComponent;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorActorInterface.GetItemId
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGeneratorActorInterface::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.GetItemId");

	UGeneratorActorInterface_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn
// (Native, Public)
// Parameters:
// bool                           ab_IsSafeSpawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::SetSafeSpawn(bool ab_IsSafeSpawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn");

	UGeneratorVehicleInterface_SetSafeSpawn_Params params;
	params.ab_IsSafeSpawn = ab_IsSafeSpawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorVehicleInterface.InitVehicle
// (Native, Public)
// Parameters:
// int                            FuelPercent                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEngineOn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHouse                       (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.InitVehicle");

	UGeneratorVehicleInterface_InitVehicle_Params params;
	params.FuelPercent = FuelPercent;
	params.bEngineOn = bEngineOn;
	params.bInHouse = bInHouse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// float                          MaxSpawnDistance               (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation");

	UGeneratorVehicleInterface_CheckSpawnLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.MaxSpawnDistance = MaxSpawnDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GlobalConfigActor.Init
// (Native, Public, BlueprintCallable)

void AGlobalConfigActor::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GlobalConfigActor.Init");

	AGlobalConfigActor_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
// (Native, Public)
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void UGroupSpotSceneComponent::SetGroupValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.SetGroupValid");

	UGroupSpotSceneComponent_SetGroupValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGroupSpotSceneComponent::IsValidGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.IsValidGroup");

	UGroupSpotSceneComponent_IsValidGroup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGroupSpotSceneComponent::FindWorldCompositionID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID");

	UGroupSpotSceneComponent_FindWorldCompositionID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.GroupSpotSceneComponent.DoPickUp
// (Final, Native, Public)

void UGroupSpotSceneComponent::DoPickUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.DoPickUp");

	UGroupSpotSceneComponent_DoPickUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ImplItemRegionInterface.GetRegion
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 Tag                            (Parm, ZeroConstructor)
// struct FItemRegionCircle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemRegionCircle UImplItemRegionInterface::GetRegion(const struct FString& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ImplItemRegionInterface.GetRegion");

	UImplItemRegionInterface_GetRegion_Params params;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.SpotSceneComponent.SetSpotValid
// (Native, Public)
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void USpotSceneComponent::SetSpotValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.SetSpotValid");

	USpotSceneComponent_SetSpotValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.SpotSceneComponent.LineTraceSingle
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.LineTraceSingle");

	USpotSceneComponent_LineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}

// Function Gameplay.SpotSceneComponent.IsSpotValid
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::IsSpotValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.IsSpotValid");

	USpotSceneComponent_IsSpotValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.SpotSceneComponent.GetRandomCategory
// (Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USpotSceneComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GetRandomCategory");

	USpotSceneComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.SpotSceneComponent.GenerateSpot
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateSpot");

	USpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.SpotSceneComponent.GenerateActor
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotator                   (Parm, OutParm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpotSceneComponent::GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateActor");

	USpotSceneComponent_GenerateActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}

// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         GroupSceneComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemConfigActorComponent::RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent");

	UItemConfigActorComponent_RegisterGroupSceneComponent_Params params;
	params.GroupType = GroupType;
	params.GroupSceneComponent = GroupSceneComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemValue                      (Parm, ZeroConstructor)
// struct FString                 ItemCategory                   (Parm, ZeroConstructor)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass");

	UItemConfigActorComponent_RandomItemSpawnClass_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Persent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USceneComponent*> UItemConfigActorComponent::RandomGroupSceneComponents(int GroupType, int Persent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents");

	UItemConfigActorComponent_RandomGroupSceneComponents_Params params;
	params.GroupType = GroupType;
	params.Persent = Persent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
// (Final, Native, Public)
// Parameters:
// TArray<class USceneComponent*> AllGroups                      (Parm, ZeroConstructor)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UItemConfigActorComponent::RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent");

	UItemConfigActorComponent_RandomGroupSceneComponent_Params params;
	params.AllGroups = AllGroups;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemConfigActorComponent.LoadActorClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UItemConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.LoadActorClass");

	UItemConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
// (Final, Native, Public)
// Parameters:
// struct FItemSpawnData          Data                           (Parm)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::GetItemSpawnClass(const struct FItemSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass");

	UItemConfigActorComponent_GetItemSpawnClass_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemCountArea.IsInArea
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AItemCountArea::IsInArea(struct FVector* Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemCountArea.IsInArea");

	AItemCountArea_IsInArea_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteItemSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas");

	UItemGeneratorComponent_WriteItemSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15
// (Final, Native, Public)

void UItemGeneratorComponent::WriteItemClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteItemClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteGroupStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas");

	UItemGeneratorComponent_WriteGroupStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteBuildingStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas");

	UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteAreaItemStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas");

	UItemGeneratorComponent_WriteAreaItemStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::WriteAllStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog");

	UItemGeneratorComponent_WriteAllStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
// (Native, Public, BlueprintCallable)

void UItemGeneratorComponent::WriteAllStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas");

	UItemGeneratorComponent_WriteAllStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.SetCatetoryRate
// (Final, Native, Public)
// Parameters:
// TMap<struct FString, float>    Rates                          (Parm, ZeroConstructor)

void UItemGeneratorComponent::SetCatetoryRate(TMap<struct FString, float> Rates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.SetCatetoryRate");

	UItemGeneratorComponent_SetCatetoryRate_Params params;
	params.Rates = Rates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemGenerateSpawnData  Data                           (Parm)

void UItemGeneratorComponent::RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData");

	UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
// (Native, Public)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::RegisterBornIslandItem(class AActor* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem");

	UItemGeneratorComponent_RegisterBornIslandItem_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TablePath                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UItemGeneratorComponent::ReadItemGenerateTable(const struct FString& TablePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable");

	UItemGeneratorComponent_ReadItemGenerateTable_Params params;
	params.TablePath = TablePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UGroupSpotSceneComponent*> Groups                         (Parm, OutParm, ZeroConstructor)
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemGroupSpotSceneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UItemGroupSpotSceneComponent* UItemGeneratorComponent::RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomSingleGroup");

	UItemGeneratorComponent_RandomSingleGroup_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FItemGenerateSpawnData> Items                          (Parm, OutParm, ZeroConstructor)
// struct FItemGenerateSpawnData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemGenerateSpawnData UItemGeneratorComponent::RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* Items)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData");

	UItemGeneratorComponent_RandomItemGenerateSpawnData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGeneratorComponent::RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroupsByType");

	UItemGeneratorComponent_RandomGroupsByType_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.RandomGroups
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroups");

	UItemGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::RandomBornIslandGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups");

	UItemGeneratorComponent_RandomBornIslandGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish
// (Final, Native, Public)
// Parameters:
// struct FItemGenerateSpawnClass SpawnClass                     (Parm)

void UItemGeneratorComponent::OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish");

	UItemGeneratorComponent_OnAsyncLoadItemClassFinish_Params params;
	params.SpawnClass = SpawnClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
// (Native, Event, Public, BlueprintEvent)

void UItemGeneratorComponent::LoadItemGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable");

	UItemGeneratorComponent_LoadItemGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::IsCatetoryEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled");

	UItemGeneratorComponent_IsCatetoryEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.InitCatetorys
// (Final, Native, Protected)

void UItemGeneratorComponent::InitCatetorys()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCatetorys");

	UItemGeneratorComponent_InitCatetorys_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.InitCategoryEx
// (Final, Native, Protected)

void UItemGeneratorComponent::InitCategoryEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCategoryEx");

	UItemGeneratorComponent_InitCategoryEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<enum ESpotGroupType> SpotGroupType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpotGroupProperty      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpotGroupProperty UItemGeneratorComponent::GetSpotGroupPropertyByGroupType(TEnumAsByte<enum ESpotGroupType> SpotGroupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType");

	UItemGeneratorComponent_GetSpotGroupPropertyByGroupType_Params params;
	params.SpotGroupType = SpotGroupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor)
// struct FString                 Category                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FItemGenerateSpawnClass> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)
// class UItemSpotSceneComponent* SpotComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray");

	UItemGeneratorComponent_GetRandomItemClassArray_Params params;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Category != nullptr)
		*Category = params.Category;
	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.GetItemDefineID
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  PickUpClass                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemGeneratorComponent::GetItemDefineID(class UClass* PickUpClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetItemDefineID");

	UItemGeneratorComponent_GetItemDefineID_Params params;
	params.PickUpClass = PickUpClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.GetCatetoryRate
// (Final, Native, Protected)
// Parameters:
// struct FString                 Catetory                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemGeneratorComponent::GetCatetoryRate(const struct FString& Catetory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetCatetoryRate");

	UItemGeneratorComponent_GetCatetoryRate_Params params;
	params.Catetory = Catetory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick");

	UItemGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.FindASpawnLoc
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UItemGeneratorComponent::FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.FindASpawnLoc");

	UItemGeneratorComponent_FindASpawnLoc_Params params;
	params.InWorld = InWorld;
	params.TraceStart = TraceStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.DeleteValidGroups
// (Final, Native, Public, BlueprintCallable)

void UItemGeneratorComponent::DeleteValidGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteValidGroups");

	UItemGeneratorComponent_DeleteValidGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
// (Final, Native, Public, BlueprintCallable)

void UItemGeneratorComponent::DeleteBornIslandItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems");

	UItemGeneratorComponent_DeleteBornIslandItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::CheckShouldGenerateItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem");

	UItemGeneratorComponent_CheckShouldGenerateItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGeneratorComponent.CheckRecoverItems
// (Final, Native, Public)

void UItemGeneratorComponent::CheckRecoverItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckRecoverItems");

	UItemGeneratorComponent_CheckRecoverItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         IgnoreItemClassList            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemGeneratorComponent::AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath");

	UItemGeneratorComponent_AddIgnoreItemClassPath_Params params;
	params.IgnoreItemClassList = IgnoreItemClassList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupRepeatSpotComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UItemGroupRepeatSpotComponent::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.Stop");

	UItemGroupRepeatSpotComponent_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll
// (Final, Native, Public)

void UItemGroupRepeatSpotComponent::SetPropertySpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll");

	UItemGroupRepeatSpotComponent_SetPropertySpotAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUAEGameMode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEGameMode* UItemGroupRepeatSpotComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode");

	UItemGroupRepeatSpotComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll
// (Final, Native, Public, BlueprintCallable)

void UItemGroupRepeatSpotComponent::GenerateSpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll");

	UItemGroupRepeatSpotComponent_GenerateSpotAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems
// (Final, Native, Public)

void UItemGroupRepeatSpotComponent::ClearAllSpotItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems");

	UItemGroupRepeatSpotComponent_ClearAllSpotItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UItemGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSpotGroupProperty      Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty");

	UItemGroupSpotSceneComponent_SetGroupProperty_Params params;
	params.Generator = Generator;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots
// (Final, Native, Protected)

void UItemGroupSpotSceneComponent::RepeatSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots");

	UItemGroupSpotSceneComponent_RepeatSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot
// (Final, Native, Protected)
// Parameters:
// class UItemSpotSceneComponent* Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemGroupSpotSceneComponent::RepeatSingleSpot(class UItemSpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot");

	UItemGroupSpotSceneComponent_RepeatSingleSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TEnumAsByte<enum ESpotType>    SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSpotByType(TEnumAsByte<enum ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType");

	UItemGroupSpotSceneComponent_RandomSpotByType_Params params;
	params.SpotType = SpotType;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
}

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UItemSpotSceneComponent*> Spots                          (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot");

	UItemGroupSpotSceneComponent_RandomSingleSpot_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Spots != nullptr)
		*Spots = params.Spots;
}

// Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemGroupSpotSceneComponent::RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD");

	UItemGroupSpotSceneComponent_RandomRepeatGenerateItemCD_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            CompositionID                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum ESpotGroupType> GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UItemGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UGroupSpotSceneComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)

void UItemSpotSceneComponent::SetSpotProperty(int CompositionID, TEnumAsByte<enum ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.SetSpotProperty");

	UItemSpotSceneComponent_SetSpotProperty_Params params;
	params.CompositionID = CompositionID;
	params.GroupType = GroupType;
	params.Generator = Generator;
	params.Property = Property;
	params.Component = Component;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemSpotSceneComponent::RepeatSpotProperty(const struct FSpotTypeProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty");

	UItemSpotSceneComponent_RepeatSpotProperty_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateSpot");

	UItemSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemSpotSceneComponent.GenerateItems
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FItemGenerateSpawnClass> AllItemClass                   (Parm, OutParm, ZeroConstructor)

void UItemSpotSceneComponent::GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateItems");

	UItemSpotSceneComponent_GenerateItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllItemClass != nullptr)
		*AllItemClass = params.AllItemClass;
}

// Function Gameplay.ItemSpotSceneComponent.DoPickUp
// (Final, Native, Public)
// Parameters:
// struct FString                 ItemValue                      (Parm, ZeroConstructor)
// struct FString                 ItemCategory                   (Parm, ZeroConstructor)

void UItemSpotSceneComponent::DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.DoPickUp");

	UItemSpotSceneComponent_DoPickUp_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemSpotSceneComponent::CountCacheItemValeCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory");

	UItemSpotSceneComponent_CountCacheItemValeCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.ItemSpotSceneComponent.ClearCacheItems
// (Final, Native, Public)

void UItemSpotSceneComponent::ClearCacheItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.ClearCacheItems");

	UItemSpotSceneComponent_ClearCacheItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId");

	ULuaBTTaskBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessage");

	ULuaBTTaskBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTickAI");

	ULuaBTTaskBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTick");

	ULuaBTTaskBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI");

	ULuaBTTaskBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecute");

	ULuaBTTaskBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbortAI");

	ULuaBTTaskBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbort");

	ULuaBTTaskBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaBTTaskBase::IsTaskExecuting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskExecuting");

	ULuaBTTaskBase_IsTaskExecuting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.LuaBTTaskBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaBTTaskBase::IsTaskAborting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskAborting");

	ULuaBTTaskBase_IsTaskAborting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.LuaBTTaskBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::FinishExecute(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishExecute");

	ULuaBTTaskBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.LuaBTTaskBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)

void ULuaBTTaskBase::FinishAbort()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishAbort");

	ULuaBTTaskBase_FinishAbort_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.MissionBoardComponent.OnRep_Config
// (Final, Native, Public)

void UMissionBoardComponent::OnRep_Config()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.OnRep_Config");

	UMissionBoardComponent_OnRep_Config_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionBoardComponent::GetUtcLeftSecondsByConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig");

	UMissionBoardComponent_GetUtcLeftSecondsByConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess
// (Final, Native, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RequestedURL                   (Parm, ZeroConstructor)

void AUAEAdvertisementActor::OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess");

	AUAEAdvertisementActor_OnRequestImgSuccess_Params params;
	params.Texture = Texture;
	params.RequestedURL = RequestedURL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEAdvertisementActor.OnRep_PicURL
// (Final, Native, Public)

void AUAEAdvertisementActor::OnRep_PicURL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_PicURL");

	AUAEAdvertisementActor_OnRep_PicURL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath
// (Final, Native, Public)

void AUAEAdvertisementActor::OnRep_MeshPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath");

	AUAEAdvertisementActor_OnRep_MeshPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEAdvertisementActor.OnRep_Id
// (Final, Native, Public)

void AUAEAdvertisementActor::OnRep_Id()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_Id");

	AUAEAdvertisementActor_OnRep_Id_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets
// (Final, Native, Public)

void UUAEChaParachuteAnimListComponent::ReleaseParachuteAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets");

	UUAEChaParachuteAnimListComponent_ReleaseParachuteAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FString                 AnimLoaded                     (Parm, ZeroConstructor)

void UUAEChaParachuteAnimListComponent::OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnParachuteAnimAsyncLoadingFinished_Params params;
	params.AnimLoaded = AnimLoaded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished
// (Final, Native, Public)

void UUAEChaParachuteAnimListComponent::OnAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEChaParachuteAnimListComponent::HasAnimAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_HasAnimAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent
// (Final, Native, Public)

void UUAEChaParachuteAnimListComponent::HandleAsyncLoadingFinishedEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent");

	UUAEChaParachuteAnimListComponent_HandleAsyncLoadingFinishedEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEChaParachuteAnimListComponent::GetOwnerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName");

	UUAEChaParachuteAnimListComponent_GetOwnerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<enum ECharacterParachuteAnimType> AnimType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAEChaParachuteAnimListComponent::GetCharacterParachuteAnim(TEnumAsByte<enum ECharacterParachuteAnimType> AnimType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim");

	UUAEChaParachuteAnimListComponent_GetCharacterParachuteAnim_Params params;
	params.AnimType = AnimType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAECharacterAnimListComponent::OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished");

	UUAECharacterAnimListComponent_OnPreLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UUAECharacterAnimListComponent::OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UUAECharacterAnimListComponent::OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FPlayerAnimData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterShovelAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim");

	UUAECharacterAnimListComponent_GetCharacterShovelAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<enum ECharacterJumpType> JumpType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerAnimData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterJumpAnim(TEnumAsByte<enum ECharacterJumpType> JumpType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim");

	UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params params;
	params.JumpType = JumpType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset
// (Final, Native, Private)
// Parameters:
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAECharacterAnimListComponent::GetAnimationAsset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset");

	UUAECharacterAnimListComponent_GetAnimationAsset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished
// (Final, Native, Public)

void UUAEChaVehAnimListComponent::OnIdleAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnIdleAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadCharVehAnimParams LoadingParam                   (Parm)

void UUAEChaVehAnimListComponent::OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVehCharAnimData> InAnimData                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAEChaVehAnimListComponent::ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData");

	UUAEChaVehAnimListComponent_ChangeAnimData_Params params;
	params.InAnimData = InAnimData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEGameplayStatics.GetGameBridge
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEGameSubsystem*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEGameSubsystem* UUAEGameplayStatics::GetGameBridge(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEGameplayStatics.GetGameBridge");

	UUAEGameplayStatics_GetGameBridge_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAELevelSequenceActor.UpdateSequence
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelSequencePath              (Parm, ZeroConstructor)

void AUAELevelSequenceActor::UpdateSequence(const struct FString& LevelSequencePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateSequence");

	AUAELevelSequenceActor_UpdateSequence_Params params;
	params.LevelSequencePath = LevelSequencePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAELevelSequenceActor.UpdatePlayback
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableMovementInput          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableLookAtInput            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHidePlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdatePlayback");

	AUAELevelSequenceActor_UpdatePlayback_Params params;
	params.bRestoreState = bRestoreState;
	params.bDisableMovementInput = bDisableMovementInput;
	params.bDisableLookAtInput = bDisableLookAtInput;
	params.bHidePlayer = bHidePlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAELevelSequenceActor.UpdateInstanceData
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OffsetVector                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                OffsetRotation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAELevelSequenceActor::UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateInstanceData");

	AUAELevelSequenceActor_UpdateInstanceData_Params params;
	params.OffsetVector = OffsetVector;
	params.OffsetRotation = OffsetRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          InLevelSequence                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class AUAELevelSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* AUAELevelSequenceActor::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer");

	AUAELevelSequenceActor_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLevelSequence = InLevelSequence;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}

// Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FLobbyAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UAELobbyCharAnimListComp::OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished");

	UAELobbyCharAnimListComp_OnAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.AELobbyCharAnimListComp.InitPendingList
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FLobbyCharacterWeaponAnimData> animEditList                   (Parm, OutParm, ZeroConstructor)
// TArray<struct FSoftObjectPath> PendingList                    (Parm, OutParm, ZeroConstructor)

void UAELobbyCharAnimListComp::InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.InitPendingList");

	UAELobbyCharAnimListComp_InitPendingList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (animEditList != nullptr)
		*animEditList = params.animEditList;
	if (PendingList != nullptr)
		*PendingList = params.PendingList;
}

// Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<enum ELobbyCharacterPosIndex> PosIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum ELobbyCharacterAnimType> GenderType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAnimType                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum ECharacterShowSceneType> sceneType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UAELobbyCharAnimListComp::GetCharacterAnim(TEnumAsByte<enum ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<enum ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<enum ECharacterShowSceneType> sceneType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim");

	UAELobbyCharAnimListComp_GetCharacterAnim_Params params;
	params.PosIdx = PosIdx;
	params.GenderType = GenderType;
	params.WeaponAnimType = WeaponAnimType;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FLobbyCharacterWeaponAnimData> AnimList                       (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<enum ECharacterShowSceneType> sceneType                      (Parm, ZeroConstructor, IsPlainOldData)

void UAELobbyCharAnimListComp::BuildAnimMap(TEnumAsByte<enum ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap");

	UAELobbyCharAnimListComp_BuildAnimMap_Params params;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimList != nullptr)
		*AnimList = params.AnimList;
}

// Function Gameplay.UAESpawnActorComponent.UAESpawnActor
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUAESpawnActorParam     Param                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAESpawnActorComponent::UAESpawnActor(const struct FUAESpawnActorParam& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.UAESpawnActor");

	UUAESpawnActorComponent_UAESpawnActor_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAESpawnActorComponent.PrepareSpawnData
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            TemplateID                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAESpawnActorComponent::PrepareSpawnData(int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.PrepareSpawnData");

	UUAESpawnActorComponent_PrepareSpawnData_Params params;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.UAESpawnActorComponent.InitializeActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TemplateID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAESpawnActorComponent::InitializeActor(class AActor* InActor, int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.InitializeActor");

	UUAESpawnActorComponent_InitializeActor_Params params;
	params.InActor = InActor;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.NotifyServerBroken
// (Event, Protected, BlueprintEvent)

void UUAEWindowComponent::NotifyServerBroken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyServerBroken");

	UUAEWindowComponent_NotifyServerBroken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
// (Final, Native, Protected)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::NotifyRepDataUpdated(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated");

	UUAEWindowComponent_NotifyRepDataUpdated_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBrokenBP(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP");

	UUAEWindowComponent_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBroken(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken");

	UUAEWindowComponent_LocalHandleWindowBroken_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.HandleBroken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::HandleBroken(class APlayerController* Instigator, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.HandleBroken");

	UUAEWindowComponent_HandleBroken_Params params;
	params.Instigator = Instigator;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.UAEWindowComponent.GetRepData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUAEWindowRepData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUAEWindowRepData UUAEWindowComponent::GetRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.GetRepData");

	UUAEWindowComponent_GetRepData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleConfigActorComponent.LoadActorClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UVehicleConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleConfigActorComponent.LoadActorClass");

	UVehicleConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15
// (Final, Native, Public)

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas
// (Final, Native, Protected)

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15
// (Final, Native, Public)

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas
// (Final, Native, Protected)

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog
// (Final, Native, Protected, BlueprintCallable)

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15
// (Final, Native, Public, BlueprintCallable)

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas
// (Final, Native, Protected, BlueprintCallable)

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (Parm)

void UVehicleAndTreasureBoxGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FTreasureBoxSpotProperty Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FTreasureBoxSpotProperty Property                       (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups
// (Native, Public, BlueprintCallable)

void UVehicleAndTreasureBoxGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups");

	UVehicleAndTreasureBoxGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable
// (Event, Public, BlueprintEvent)

void UVehicleAndTreasureBoxGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleAndTreasureBoxGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (Parm, OutParm)
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoWithCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<enum ESpotType>    SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<enum ESpotType> SpotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (Parm, OutParm)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FTreasureBoxSpotProperty SpotProperty                   (Parm, OutParm)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetTreasureBoxSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass
// (Final, Native, Public)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateSpawnData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateSpawnData UVehicleAndTreasureBoxGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory
// (Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVehicleAndTreasureBoxGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick
// (Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick");

	UVehicleAndTreasureBoxGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAndTreasureBoxGeneratorComponent::DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId");

	UVehicleAndTreasureBoxGeneratorComponent_DynamicSpawnVehicleBySpotId_Params params;
	params.ID = ID;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups
// (Final, Native, Protected)

void UVehicleAndTreasureBoxGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups");

	UVehicleAndTreasureBoxGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// struct FVector                 TestLocationOffset             (Parm, IsPlainOldData)
// struct FVector                 TestBoxSize                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAndTreasureBoxGeneratorComponent::CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle");

	UVehicleAndTreasureBoxGeneratorComponent_CanDynamicSpawnVehicle_Params params;
	params.SpawnLocation = SpawnLocation;
	params.TestLocationOffset = TestLocationOffset;
	params.TestBoxSize = TestBoxSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<enum ESpotType>    SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          LocationX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<enum ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
// (Final, Native, Protected)

void UVehicleGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
// (Final, Native, Protected)

void UVehicleGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
// (Final, Native, Protected, BlueprintCallable)

void UVehicleGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (Parm)

void UVehicleGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType");

	UVehicleGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}

// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots");

	UVehicleGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}

// Function Gameplay.VehicleGeneratorComponent.RandomGroups
// (Native, Public, BlueprintCallable)

void UVehicleGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomGroups");

	UVehicleGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
// (Native, Event, Public, BlueprintEvent)

void UVehicleGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<enum ESpotType>    SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<enum ESpotType> SpotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (Parm, OutParm)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}

// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
// (Final, Native, Public)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateSpawnData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateSpawnData UVehicleGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass");

	UVehicleGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleGeneratorComponent.GetRandomCategory
// (Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVehicleGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomCategory");

	UVehicleGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
// (Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick");

	UVehicleGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
// (Final, Native, Protected)

void UVehicleGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.DeleteGroups");

	UVehicleGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<enum ESpotType>    SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          LocationX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<enum ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount");

	UVehicleGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount");

	UVehicleGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleGenerateRandomInfo RandomInfo                     (Parm, OutParm)

void UVehicleSpotSceneComponent::SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo");

	UVehicleSpotSceneComponent_SetSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RandomInfo != nullptr)
		*RandomInfo = params.RandomInfo;
}

// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.GenerateSpot");

	UVehicleSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Gameplay.WeatherConfigComponent.UnloadStreamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)

void UWeatherConfigComponent::UnloadStreamLevel(const struct FString& LevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.UnloadStreamLevel");

	UWeatherConfigComponent_UnloadStreamLevel_Params params;
	params.LevelName = LevelName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo
// (Final, Native, Protected, BlueprintCallable)

void UWeatherConfigComponent::SyncWeatherLevelInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo");

	UWeatherConfigComponent_SyncWeatherLevelInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.OnWeatherLevelChanged
// (Event, Public, BlueprintEvent)

void UWeatherConfigComponent::OnWeatherLevelChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnWeatherLevelChanged");

	UWeatherConfigComponent_OnWeatherLevelChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.OnUnLoadStreamLevelCompleted
// (Final, Native, Public, BlueprintCallable)

void UWeatherConfigComponent::OnUnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnUnLoadStreamLevelCompleted");

	UWeatherConfigComponent_OnUnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount
// (Final, Native, Public)

void UWeatherConfigComponent::OnRep_WeatherSyncCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount");

	UWeatherConfigComponent_OnRep_WeatherSyncCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.OnLoadStreamLevelCompleted
// (Final, Native, Public, BlueprintCallable)

void UWeatherConfigComponent::OnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnLoadStreamLevelCompleted");

	UWeatherConfigComponent_OnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.LoadWeatherLevel
// (Final, Native, Public)

void UWeatherConfigComponent::LoadWeatherLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadWeatherLevel");

	UWeatherConfigComponent_LoadWeatherLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.LoadStreamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)
// int                            WeatherID                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeatherConfigComponent::LoadStreamLevel(const struct FString& LevelName, int WeatherID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadStreamLevel");

	UWeatherConfigComponent_LoadStreamLevel_Params params;
	params.LevelName = LevelName;
	params.WeatherID = WeatherID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.LoadDefaultWeatherLevel
// (Final, Native, Public)

void UWeatherConfigComponent::LoadDefaultWeatherLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadDefaultWeatherLevel");

	UWeatherConfigComponent_LoadDefaultWeatherLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Gameplay.WeatherConfigComponent.Init
// (Native, Public, BlueprintCallable)

void UWeatherConfigComponent::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.Init");

	UWeatherConfigComponent_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

