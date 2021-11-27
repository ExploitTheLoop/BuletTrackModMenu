// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Global_Voice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Global_Voice.Global_Voice_C.OnChatPrivacyAcceptedPre
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnChatPrivacyAcceptedPre()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnChatPrivacyAcceptedPre");

	UGlobal_Voice_C_OnChatPrivacyAcceptedPre_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnChatPrivacyAccepted
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnChatPrivacyAccepted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnChatPrivacyAccepted");

	UGlobal_Voice_C_OnChatPrivacyAccepted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.Transitions_Enter
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::Transitions_Enter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.Transitions_Enter");

	UGlobal_Voice_C_Transitions_Enter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.SyncPushOneData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 prop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGlobal_Voice_C::SyncPushOneData(const struct FString& prop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.SyncPushOneData");

	UGlobal_Voice_C_SyncPushOneData_Params params;
	params.prop = prop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.SyncOneData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 prop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGlobal_Voice_C::SyncOneData(const struct FString& prop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.SyncOneData");

	UGlobal_Voice_C_SyncOneData_Params params;
	params.prop = prop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ChangeSpeakerFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ChangeSpeakerFlag(bool Open)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ChangeSpeakerFlag");

	UGlobal_Voice_C_ChangeSpeakerFlag_Params params;
	params.Open = Open;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ChangeMicphoneFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ChangeMicphoneFlag(bool Open)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ChangeMicphoneFlag");

	UGlobal_Voice_C_ChangeMicphoneFlag_Params params;
	params.Open = Open;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryCloseSpeaker
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryCloseSpeaker()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryCloseSpeaker");

	UGlobal_Voice_C_OnTryCloseSpeaker_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.TickVoiceRoom
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::TickVoiceRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.TickVoiceRoom");

	UGlobal_Voice_C_TickVoiceRoom_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.UIHide");

	UGlobal_Voice_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.UIShow
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.UIShow");

	UGlobal_Voice_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnUploadRecordFailed
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnUploadRecordFailed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnUploadRecordFailed");

	UGlobal_Voice_C_OnUploadRecordFailed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryCloseMic
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryCloseMic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryCloseMic");

	UGlobal_Voice_C_OnTryCloseMic_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.StopPlayRecordFileAndRecoverBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::StopPlayRecordFileAndRecoverBGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.StopPlayRecordFileAndRecoverBGM");

	UGlobal_Voice_C_StopPlayRecordFileAndRecoverBGM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.FadeOutBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::FadeOutBGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.FadeOutBGM");

	UGlobal_Voice_C_FadeOutBGM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.FadeInBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::FadeInBGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.FadeInBGM");

	UGlobal_Voice_C_FadeInBGM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.CheckVoiceMessageInited
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::CheckVoiceMessageInited(bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.CheckVoiceMessageInited");

	UGlobal_Voice_C_CheckVoiceMessageInited_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function Global_Voice.Global_Voice_C.OnClickSpeakerOff
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClickSpeakerOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClickSpeakerOff");

	UGlobal_Voice_C_OnClickSpeakerOff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClickSpeakerOn
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClickSpeakerOn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClickSpeakerOn");

	UGlobal_Voice_C_OnClickSpeakerOn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClickMicOff
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClickMicOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClickMicOff");

	UGlobal_Voice_C_OnClickMicOff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClickMicOn
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClickMicOn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClickMicOn");

	UGlobal_Voice_C_OnClickMicOn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ClearAllTimers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ClearAllTimers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ClearAllTimers");

	UGlobal_Voice_C_ClearAllTimers_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RefreshSpeakerUI
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RefreshSpeakerUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RefreshSpeakerUI");

	UGlobal_Voice_C_RefreshSpeakerUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RefreshMicUI
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RefreshMicUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RefreshMicUI");

	UGlobal_Voice_C_RefreshMicUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.SyncTeamupState
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::SyncTeamupState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.SyncTeamupState");

	UGlobal_Voice_C_SyncTeamupState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RefreshTeamUI
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RefreshTeamUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RefreshTeamUI");

	UGlobal_Voice_C_RefreshTeamUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ChangeSpeakerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ChangeSpeakerState(bool Open)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ChangeSpeakerState");

	UGlobal_Voice_C_ChangeSpeakerState_Params params;
	params.Open = Open;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ChangeMicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ChangeMicState(bool State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ChangeMicState");

	UGlobal_Voice_C_ChangeMicState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RefreshLobbyUI
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RefreshLobbyUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RefreshLobbyUI");

	UGlobal_Voice_C_RefreshLobbyUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RefreshStageUI
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RefreshStageUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RefreshStageUI");

	UGlobal_Voice_C_RefreshStageUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.StopRecordVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cancel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::StopRecordVoice(bool cancel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.StopRecordVoice");

	UGlobal_Voice_C_StopRecordVoice_Params params;
	params.cancel = cancel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.StartRecordVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::StartRecordVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.StartRecordVoice");

	UGlobal_Voice_C_StartRecordVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.StopPlayRecordFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::StopPlayRecordFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.StopPlayRecordFile");

	UGlobal_Voice_C_StopPlayRecordFile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.PlayDownloadFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::PlayDownloadFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.PlayDownloadFile");

	UGlobal_Voice_C_PlayDownloadFile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceDownload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceDownload");

	UGlobal_Voice_C_RequireGVoiceDownload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RecoverGVoiceRealtime
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RecoverGVoiceRealtime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RecoverGVoiceRealtime");

	UGlobal_Voice_C_RecoverGVoiceRealtime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.LeaveGVoiceOffline
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::LeaveGVoiceOffline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.LeaveGVoiceOffline");

	UGlobal_Voice_C_LeaveGVoiceOffline_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RetrieveGVoiceOffline
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RetrieveGVoiceOffline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RetrieveGVoiceOffline");

	UGlobal_Voice_C_RetrieveGVoiceOffline_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.GetProcedureTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           stopTimer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimerHandle            Output                         (Parm, OutParm)

void UGlobal_Voice_C::GetProcedureTimer(int Type, bool stopTimer, struct FTimerHandle* Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.GetProcedureTimer");

	UGlobal_Voice_C_GetProcedureTimer_Params params;
	params.Type = Type;
	params.stopTimer = stopTimer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function Global_Voice.Global_Voice_C.AddProcedureTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            Handle                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            resendType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isStop                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::AddProcedureTimer(const struct FTimerHandle& Handle, int resendType, bool isStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.AddProcedureTimer");

	UGlobal_Voice_C_AddProcedureTimer_Params params;
	params.Handle = Handle;
	params.resendType = resendType;
	params.isStop = isStop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ClearGVoiceSpeechToTextResendEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ClearGVoiceSpeechToTextResendEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ClearGVoiceSpeechToTextResendEntry");

	UGlobal_Voice_C_ClearGVoiceSpeechToTextResendEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ClearGVoiceUploadResendEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ClearGVoiceUploadResendEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ClearGVoiceUploadResendEntry");

	UGlobal_Voice_C_ClearGVoiceUploadResendEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ClearGVoiceAuthResendEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ClearGVoiceAuthResendEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ClearGVoiceAuthResendEntry");

	UGlobal_Voice_C_ClearGVoiceAuthResendEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ProcessVoiceProcedure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ProcessVoiceProcedure(bool* Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ProcessVoiceProcedure");

	UGlobal_Voice_C_ProcessVoiceProcedure_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function Global_Voice.Global_Voice_C.ClearResendProcedure
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ClearResendProcedure()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ClearResendProcedure");

	UGlobal_Voice_C_ClearResendProcedure_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToText
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceSpeechToText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToText");

	UGlobal_Voice_C_RequireGVoiceSpeechToText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceUpload
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceUpload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceUpload");

	UGlobal_Voice_C_RequireGVoiceUpload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceAuth
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceAuth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceAuth");

	UGlobal_Voice_C_RequireGVoiceAuth_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToTextEntry
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceSpeechToTextEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToTextEntry");

	UGlobal_Voice_C_RequireGVoiceSpeechToTextEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceUploadEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceUploadEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceUploadEntry");

	UGlobal_Voice_C_RequireGVoiceUploadEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RequireGVoiceAuthEntry
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RequireGVoiceAuthEntry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RequireGVoiceAuthEntry");

	UGlobal_Voice_C_RequireGVoiceAuthEntry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ResetGVoiceMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ResetGVoiceMode(int Mode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ResetGVoiceMode");

	UGlobal_Voice_C_ResetGVoiceMode_Params params;
	params.Mode = Mode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ResetTeamVoice
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::ResetTeamVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ResetTeamVoice");

	UGlobal_Voice_C_ResetTeamVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.SyncPushLuaData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::SyncPushLuaData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.SyncPushLuaData");

	UGlobal_Voice_C_SyncPushLuaData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.SyncLuaData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::SyncLuaData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.SyncLuaData");

	UGlobal_Voice_C_SyncLuaData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTeamVoiceRoomChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTeamVoiceRoomChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTeamVoiceRoomChanged");

	UGlobal_Voice_C_OnTeamVoiceRoomChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnVoiceModeChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnVoiceModeChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnVoiceModeChanged");

	UGlobal_Voice_C_OnVoiceModeChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnResetRoleInfo
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnResetRoleInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnResetRoleInfo");

	UGlobal_Voice_C_OnResetRoleInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClearRoleInfo
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClearRoleInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClearRoleInfo");

	UGlobal_Voice_C_OnClearRoleInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnGVoiceInited
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnGVoiceInited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnGVoiceInited");

	UGlobal_Voice_C_OnGVoiceInited_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnAfterRequireAuth
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnAfterRequireAuth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnAfterRequireAuth");

	UGlobal_Voice_C_OnAfterRequireAuth_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnRequireAuthResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnRequireAuthResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnRequireAuthResend");

	UGlobal_Voice_C_OnRequireAuthResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClearAuthResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClearAuthResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClearAuthResend");

	UGlobal_Voice_C_OnClearAuthResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnAfterRequireUpload
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnAfterRequireUpload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnAfterRequireUpload");

	UGlobal_Voice_C_OnAfterRequireUpload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnRequireUploadResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnRequireUploadResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnRequireUploadResend");

	UGlobal_Voice_C_OnRequireUploadResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClearUploadResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClearUploadResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClearUploadResend");

	UGlobal_Voice_C_OnClearUploadResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnAfterRequireSpeechToText
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnAfterRequireSpeechToText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnAfterRequireSpeechToText");

	UGlobal_Voice_C_OnAfterRequireSpeechToText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnRequireSpeechToTextResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnRequireSpeechToTextResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnRequireSpeechToTextResend");

	UGlobal_Voice_C_OnRequireSpeechToTextResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClearSpeechToTextResend
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClearSpeechToTextResend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClearSpeechToTextResend");

	UGlobal_Voice_C_OnClearSpeechToTextResend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnJoinVoiceRoomSuccess
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnJoinVoiceRoomSuccess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnJoinVoiceRoomSuccess");

	UGlobal_Voice_C_OnJoinVoiceRoomSuccess_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryDownloadVoiceRecord
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryDownloadVoiceRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryDownloadVoiceRecord");

	UGlobal_Voice_C_OnTryDownloadVoiceRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnClearDownloadFailedNotify
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnClearDownloadFailedNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnClearDownloadFailedNotify");

	UGlobal_Voice_C_OnClearDownloadFailedNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnDownloadFileComplete
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnDownloadFileComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnDownloadFileComplete");

	UGlobal_Voice_C_OnDownloadFileComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnApplyMessageKeyComplete
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnApplyMessageKeyComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnApplyMessageKeyComplete");

	UGlobal_Voice_C_OnApplyMessageKeyComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryStartRecordVoice
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryStartRecordVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryStartRecordVoice");

	UGlobal_Voice_C_OnTryStartRecordVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryStopRecordVoice
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryStopRecordVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryStopRecordVoice");

	UGlobal_Voice_C_OnTryStopRecordVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryCancelRecordVoice
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryCancelRecordVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryCancelRecordVoice");

	UGlobal_Voice_C_OnTryCancelRecordVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnUploadRecordFileComplete
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnUploadRecordFileComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnUploadRecordFileComplete");

	UGlobal_Voice_C_OnUploadRecordFileComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextComplete
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnUploadSpeechToTextComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextComplete");

	UGlobal_Voice_C_OnUploadSpeechToTextComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnGameStageChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnGameStageChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnGameStageChanged");

	UGlobal_Voice_C_OnGameStageChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGlobal_Voice_C::BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UGlobal_Voice_C_BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGlobal_Voice_C::BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");

	UGlobal_Voice_C_BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGlobal_Voice_C::BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature");

	UGlobal_Voice_C_BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnVoiceMicOpenChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnVoiceMicOpenChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnVoiceMicOpenChanged");

	UGlobal_Voice_C_OnVoiceMicOpenChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnVoiceSpeakerOpenChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnVoiceSpeakerOpenChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnVoiceSpeakerOpenChanged");

	UGlobal_Voice_C_OnVoiceSpeakerOpenChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGlobal_Voice_C::BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature");

	UGlobal_Voice_C_BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTeamStateChanged
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTeamStateChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTeamStateChanged");

	UGlobal_Voice_C_OnTeamStateChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnTryStopPlayRecordVoice
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnTryStopPlayRecordVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnTryStopPlayRecordVoice");

	UGlobal_Voice_C_OnTryStopPlayRecordVoice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnApplicationDeactivated
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnApplicationDeactivated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnApplicationDeactivated");

	UGlobal_Voice_C_OnApplicationDeactivated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnQuitVoiceRoomSuccess
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnQuitVoiceRoomSuccess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnQuitVoiceRoomSuccess");

	UGlobal_Voice_C_OnQuitVoiceRoomSuccess_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnUploadRecordFileFailed
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnUploadRecordFileFailed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnUploadRecordFileFailed");

	UGlobal_Voice_C_OnUploadRecordFileFailed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextFailed
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnUploadSpeechToTextFailed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextFailed");

	UGlobal_Voice_C_OnUploadSpeechToTextFailed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGlobal_Voice_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.Construct");

	UGlobal_Voice_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.OnFinishMicCD
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::OnFinishMicCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.OnFinishMicCD");

	UGlobal_Voice_C_OnFinishMicCD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.RecruitOpenMic
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Voice_C::RecruitOpenMic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.RecruitOpenMic");

	UGlobal_Voice_C_RecruitOpenMic_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGlobal_Voice_C::BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UGlobal_Voice_C_BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Global_Voice.Global_Voice_C.ExecuteUbergraph_Global_Voice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Voice_C::ExecuteUbergraph_Global_Voice(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Global_Voice.Global_Voice_C.ExecuteUbergraph_Global_Voice");

	UGlobal_Voice_C_ExecuteUbergraph_Global_Voice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

