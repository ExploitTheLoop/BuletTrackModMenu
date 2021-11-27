#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Global_Voice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Global_Voice.Global_Voice_C.OnChatPrivacyAcceptedPre
struct UGlobal_Voice_C_OnChatPrivacyAcceptedPre_Params
{
};

// Function Global_Voice.Global_Voice_C.OnChatPrivacyAccepted
struct UGlobal_Voice_C_OnChatPrivacyAccepted_Params
{
};

// Function Global_Voice.Global_Voice_C.Transitions_Enter
struct UGlobal_Voice_C_Transitions_Enter_Params
{
};

// Function Global_Voice.Global_Voice_C.SyncPushOneData
struct UGlobal_Voice_C_SyncPushOneData_Params
{
	struct FString                                     prop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Global_Voice.Global_Voice_C.SyncOneData
struct UGlobal_Voice_C_SyncOneData_Params
{
	struct FString                                     prop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Global_Voice.Global_Voice_C.ChangeSpeakerFlag
struct UGlobal_Voice_C_ChangeSpeakerFlag_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.ChangeMicphoneFlag
struct UGlobal_Voice_C_ChangeMicphoneFlag_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.OnTryCloseSpeaker
struct UGlobal_Voice_C_OnTryCloseSpeaker_Params
{
};

// Function Global_Voice.Global_Voice_C.TickVoiceRoom
struct UGlobal_Voice_C_TickVoiceRoom_Params
{
};

// Function Global_Voice.Global_Voice_C.UIHide
struct UGlobal_Voice_C_UIHide_Params
{
};

// Function Global_Voice.Global_Voice_C.UIShow
struct UGlobal_Voice_C_UIShow_Params
{
};

// Function Global_Voice.Global_Voice_C.OnUploadRecordFailed
struct UGlobal_Voice_C_OnUploadRecordFailed_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryCloseMic
struct UGlobal_Voice_C_OnTryCloseMic_Params
{
};

// Function Global_Voice.Global_Voice_C.StopPlayRecordFileAndRecoverBGM
struct UGlobal_Voice_C_StopPlayRecordFileAndRecoverBGM_Params
{
};

// Function Global_Voice.Global_Voice_C.FadeOutBGM
struct UGlobal_Voice_C_FadeOutBGM_Params
{
};

// Function Global_Voice.Global_Voice_C.FadeInBGM
struct UGlobal_Voice_C_FadeInBGM_Params
{
};

// Function Global_Voice.Global_Voice_C.CheckVoiceMessageInited
struct UGlobal_Voice_C_CheckVoiceMessageInited_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.OnClickSpeakerOff
struct UGlobal_Voice_C_OnClickSpeakerOff_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClickSpeakerOn
struct UGlobal_Voice_C_OnClickSpeakerOn_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClickMicOff
struct UGlobal_Voice_C_OnClickMicOff_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClickMicOn
struct UGlobal_Voice_C_OnClickMicOn_Params
{
};

// Function Global_Voice.Global_Voice_C.ClearAllTimers
struct UGlobal_Voice_C_ClearAllTimers_Params
{
};

// Function Global_Voice.Global_Voice_C.RefreshSpeakerUI
struct UGlobal_Voice_C_RefreshSpeakerUI_Params
{
};

// Function Global_Voice.Global_Voice_C.RefreshMicUI
struct UGlobal_Voice_C_RefreshMicUI_Params
{
};

// Function Global_Voice.Global_Voice_C.SyncTeamupState
struct UGlobal_Voice_C_SyncTeamupState_Params
{
};

// Function Global_Voice.Global_Voice_C.RefreshTeamUI
struct UGlobal_Voice_C_RefreshTeamUI_Params
{
};

// Function Global_Voice.Global_Voice_C.ChangeSpeakerState
struct UGlobal_Voice_C_ChangeSpeakerState_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.ChangeMicState
struct UGlobal_Voice_C_ChangeMicState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.RefreshLobbyUI
struct UGlobal_Voice_C_RefreshLobbyUI_Params
{
};

// Function Global_Voice.Global_Voice_C.RefreshStageUI
struct UGlobal_Voice_C_RefreshStageUI_Params
{
};

// Function Global_Voice.Global_Voice_C.StopRecordVoice
struct UGlobal_Voice_C_StopRecordVoice_Params
{
	bool                                               cancel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.StartRecordVoice
struct UGlobal_Voice_C_StartRecordVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.StopPlayRecordFile
struct UGlobal_Voice_C_StopPlayRecordFile_Params
{
};

// Function Global_Voice.Global_Voice_C.PlayDownloadFile
struct UGlobal_Voice_C_PlayDownloadFile_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceDownload
struct UGlobal_Voice_C_RequireGVoiceDownload_Params
{
};

// Function Global_Voice.Global_Voice_C.RecoverGVoiceRealtime
struct UGlobal_Voice_C_RecoverGVoiceRealtime_Params
{
};

// Function Global_Voice.Global_Voice_C.LeaveGVoiceOffline
struct UGlobal_Voice_C_LeaveGVoiceOffline_Params
{
};

// Function Global_Voice.Global_Voice_C.RetrieveGVoiceOffline
struct UGlobal_Voice_C_RetrieveGVoiceOffline_Params
{
};

// Function Global_Voice.Global_Voice_C.GetProcedureTimer
struct UGlobal_Voice_C_GetProcedureTimer_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               stopTimer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                Output;                                                   // (Parm, OutParm)
};

// Function Global_Voice.Global_Voice_C.AddProcedureTimer
struct UGlobal_Voice_C_AddProcedureTimer_Params
{
	struct FTimerHandle                                Handle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                resendType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isStop;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.ClearGVoiceSpeechToTextResendEntry
struct UGlobal_Voice_C_ClearGVoiceSpeechToTextResendEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.ClearGVoiceUploadResendEntry
struct UGlobal_Voice_C_ClearGVoiceUploadResendEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.ClearGVoiceAuthResendEntry
struct UGlobal_Voice_C_ClearGVoiceAuthResendEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.ProcessVoiceProcedure
struct UGlobal_Voice_C_ProcessVoiceProcedure_Params
{
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.ClearResendProcedure
struct UGlobal_Voice_C_ClearResendProcedure_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToText
struct UGlobal_Voice_C_RequireGVoiceSpeechToText_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceUpload
struct UGlobal_Voice_C_RequireGVoiceUpload_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceAuth
struct UGlobal_Voice_C_RequireGVoiceAuth_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceSpeechToTextEntry
struct UGlobal_Voice_C_RequireGVoiceSpeechToTextEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceUploadEntry
struct UGlobal_Voice_C_RequireGVoiceUploadEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.RequireGVoiceAuthEntry
struct UGlobal_Voice_C_RequireGVoiceAuthEntry_Params
{
};

// Function Global_Voice.Global_Voice_C.ResetGVoiceMode
struct UGlobal_Voice_C_ResetGVoiceMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Voice.Global_Voice_C.ResetTeamVoice
struct UGlobal_Voice_C_ResetTeamVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.SyncPushLuaData
struct UGlobal_Voice_C_SyncPushLuaData_Params
{
};

// Function Global_Voice.Global_Voice_C.SyncLuaData
struct UGlobal_Voice_C_SyncLuaData_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTeamVoiceRoomChanged
struct UGlobal_Voice_C_OnTeamVoiceRoomChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.OnVoiceModeChanged
struct UGlobal_Voice_C_OnVoiceModeChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.OnResetRoleInfo
struct UGlobal_Voice_C_OnResetRoleInfo_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClearRoleInfo
struct UGlobal_Voice_C_OnClearRoleInfo_Params
{
};

// Function Global_Voice.Global_Voice_C.OnGVoiceInited
struct UGlobal_Voice_C_OnGVoiceInited_Params
{
};

// Function Global_Voice.Global_Voice_C.OnAfterRequireAuth
struct UGlobal_Voice_C_OnAfterRequireAuth_Params
{
};

// Function Global_Voice.Global_Voice_C.OnRequireAuthResend
struct UGlobal_Voice_C_OnRequireAuthResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClearAuthResend
struct UGlobal_Voice_C_OnClearAuthResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnAfterRequireUpload
struct UGlobal_Voice_C_OnAfterRequireUpload_Params
{
};

// Function Global_Voice.Global_Voice_C.OnRequireUploadResend
struct UGlobal_Voice_C_OnRequireUploadResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClearUploadResend
struct UGlobal_Voice_C_OnClearUploadResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnAfterRequireSpeechToText
struct UGlobal_Voice_C_OnAfterRequireSpeechToText_Params
{
};

// Function Global_Voice.Global_Voice_C.OnRequireSpeechToTextResend
struct UGlobal_Voice_C_OnRequireSpeechToTextResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClearSpeechToTextResend
struct UGlobal_Voice_C_OnClearSpeechToTextResend_Params
{
};

// Function Global_Voice.Global_Voice_C.OnJoinVoiceRoomSuccess
struct UGlobal_Voice_C_OnJoinVoiceRoomSuccess_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryDownloadVoiceRecord
struct UGlobal_Voice_C_OnTryDownloadVoiceRecord_Params
{
};

// Function Global_Voice.Global_Voice_C.OnClearDownloadFailedNotify
struct UGlobal_Voice_C_OnClearDownloadFailedNotify_Params
{
};

// Function Global_Voice.Global_Voice_C.OnDownloadFileComplete
struct UGlobal_Voice_C_OnDownloadFileComplete_Params
{
};

// Function Global_Voice.Global_Voice_C.OnApplyMessageKeyComplete
struct UGlobal_Voice_C_OnApplyMessageKeyComplete_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryStartRecordVoice
struct UGlobal_Voice_C_OnTryStartRecordVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryStopRecordVoice
struct UGlobal_Voice_C_OnTryStopRecordVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryCancelRecordVoice
struct UGlobal_Voice_C_OnTryCancelRecordVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.OnUploadRecordFileComplete
struct UGlobal_Voice_C_OnUploadRecordFileComplete_Params
{
};

// Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextComplete
struct UGlobal_Voice_C_OnUploadSpeechToTextComplete_Params
{
};

// Function Global_Voice.Global_Voice_C.OnGameStageChanged
struct UGlobal_Voice_C_OnGameStageChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UGlobal_Voice_C_BndEvt__btn_voice_on_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Global_Voice.Global_Voice_C.BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UGlobal_Voice_C_BndEvt__btn_voice_off_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
struct UGlobal_Voice_C_BndEvt__btn_mic_on_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Global_Voice.Global_Voice_C.OnVoiceMicOpenChanged
struct UGlobal_Voice_C_OnVoiceMicOpenChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.OnVoiceSpeakerOpenChanged
struct UGlobal_Voice_C_OnVoiceSpeakerOpenChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature
struct UGlobal_Voice_C_BndEvt__btn_mic_off_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTeamStateChanged
struct UGlobal_Voice_C_OnTeamStateChanged_Params
{
};

// Function Global_Voice.Global_Voice_C.OnTryStopPlayRecordVoice
struct UGlobal_Voice_C_OnTryStopPlayRecordVoice_Params
{
};

// Function Global_Voice.Global_Voice_C.OnApplicationDeactivated
struct UGlobal_Voice_C_OnApplicationDeactivated_Params
{
};

// Function Global_Voice.Global_Voice_C.OnQuitVoiceRoomSuccess
struct UGlobal_Voice_C_OnQuitVoiceRoomSuccess_Params
{
};

// Function Global_Voice.Global_Voice_C.OnUploadRecordFileFailed
struct UGlobal_Voice_C_OnUploadRecordFileFailed_Params
{
};

// Function Global_Voice.Global_Voice_C.OnUploadSpeechToTextFailed
struct UGlobal_Voice_C_OnUploadSpeechToTextFailed_Params
{
};

// Function Global_Voice.Global_Voice_C.Construct
struct UGlobal_Voice_C_Construct_Params
{
};

// Function Global_Voice.Global_Voice_C.OnFinishMicCD
struct UGlobal_Voice_C_OnFinishMicCD_Params
{
};

// Function Global_Voice.Global_Voice_C.RecruitOpenMic
struct UGlobal_Voice_C_RecruitOpenMic_Params
{
};

// Function Global_Voice.Global_Voice_C.BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UGlobal_Voice_C_BndEvt__BtnSendGifts_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Global_Voice.Global_Voice_C.ExecuteUbergraph_Global_Voice
struct UGlobal_Voice_C_ExecuteUbergraph_Global_Voice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

