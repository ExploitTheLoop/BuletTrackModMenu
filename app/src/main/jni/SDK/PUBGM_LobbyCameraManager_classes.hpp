#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyCameraManager.LobbyCameraManager_C
// 0x0020 (0x0328 - 0x0308)
class ULobbyCameraManager_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0004) (Transient, DuplicateTransient)
	class Abp_camera_manager_C*                        bp_camera_manager;                                        // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CloseupCameraActor;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        PlayingLevelSequence;                                     // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         PlayingLevelSequenceActor;                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_LevelSequenceCameraMask_C*               LevelSequenceCameraMask;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CameraAdapt;                                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CloseupCameraForWeapon;                                   // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyCameraManager.LobbyCameraManager_C");
		return pStaticClass;
	}


	void GetCaptureCameraForLevelSeq(class UClass* ActorClass, class UObject* ContextObject, class AActor** Output);
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class ULevelSequence* LevelSequence, class ALevelSequenceActor** OutActor);
	void JumpToPosition(float NewPlaybackPosition);
	void PauseLevelSequence();
	void SwitchBackToLobbyCamera();
	void ChangeCloseupCameraPosWithBlend(const struct FVector& Location);
	void SwitchToCloseupCamera();
	void BeginLevelSequeceWithWeapon(bool InputPin, int inInt);
	void WithdrawEnlargeLens();
	void EnlargeLens(float X, float Y, float Z, int CameraID, const struct FString& FOV, int blendTime);
	void OnTrackEvent(const struct FString& EventData);
	void Wpos2Spos(const struct FVector& Wpos, struct FVector2D* Spos);
	void AttachToCamera(class AActor* Target, const struct FVector& RelatePosition);
	void CameraToWorldPosition(const struct FVector& RelatePosition, const struct FVector& CameraPosition, const struct FVector& CameraRotation, struct FVector* WorldPosition);
	void ToCameraSpacePosition(const struct FVector& WorldPosition, const struct FVector& CameraPosition, const struct FVector& CameraRotation, struct FVector* CameraSpacePosition);
	void ChangetoTargetCamera(class AActor* TargetActor, float Duration);
	void OnStopLevelSequence();
	void StopLevelSequence();
	void ChangetoLobbyCamera();
	void ChangetoLevelSequenceCamera();
	void BeginLevelSequenceCloseup(int ID, bool NeedFreezeEndFrame);
	void GetExtraData(struct FString* Result);
	void DestroyCloseupViewActor();
	void LeaveCloseupView();
	void GetCurrentCamera(class ACameraActor** Result);
	void FetchCameraAdapt();
	void SwitchCamera();
	void MallFullScreen();
	void UIHide();
	void UIShow();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_LobbyCameraManager(int EntryPoint);
};


}

