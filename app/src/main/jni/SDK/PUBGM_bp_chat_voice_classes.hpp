#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_chat_voice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00A8 (0x03B8 - 0x0310)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x0338(0x0030) (Edit, BlueprintVisible)
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x039A(0x0002) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventCheckOpenMicFail_NoFetch();
	void EventCheckOpenMicFail();
	void EventChatRequestPrivacyPre_NoFetch();
	void EventChatRequestPrivacyPre();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventChatRequestPrivacy_NoFetch();
	void EventChatRequestPrivacy();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventMicClickCD_NoFetch();
	void EventMicClickCD();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventChatVoiceSetInfo_Push_NoFetch();
	void EventChatVoiceSetInfo_Push();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventCheckOpenMicSuc_NoFetch();
	void EventCheckOpenMicSuc();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventChatVoiceFetchInfo_NoFetch();
	void EventChatVoiceFetchInfo();
	void UserConstructionScript();
};


}

