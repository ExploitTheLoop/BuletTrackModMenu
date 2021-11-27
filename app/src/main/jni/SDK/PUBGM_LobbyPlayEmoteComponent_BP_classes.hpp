#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyPlayEmoteComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C
// 0x004C (0x036C - 0x0320)
class ULobbyPlayEmoteComponent_BP_C : public ULobbyPlayEmoteComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0004) (Transient, DuplicateTransient)
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_LevelSequenceCameraMask_C*               levelSequenceMask;                                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0330(0x003C) UNKNOWN PROPERTY: SetProperty LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.stopEmoteArray

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C");
		return pStaticClass;
	}


	void OnEquipmentChange();
	void OnStartLevelSequence();
	void GetLobbyCamera(class ACameraActor** CameraActor);
	void OnStopLevelSequence();
	void ChangetoLevelSequenceCamera();
	void OnTrackEvent(const struct FString& EventData);
	void PlayCameraEmoteAnim(class ULevelSequence** CurrentCameraEmoteAnim);
	void StopCameraEmoteAnim();
	void ShowAvatarForEmote(bool* Show, bool* force);
	void ExecuteUbergraph_LobbyPlayEmoteComponent_BP(int EntryPoint);
};


}

