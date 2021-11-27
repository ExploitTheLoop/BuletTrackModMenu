#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Global_Bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x00CC (0x03D4 - 0x0308)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0004) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            corpsIconTextureMap;                                      // 0x0310(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Abp_global_C*                                bp_global;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            rankTextureMap;                                           // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UUserWidget*>                      dragDropItemMap;                                          // 0x038C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isPostProcessVolumeInit;                                  // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void LoadSettingConfigFromSlot();
	void UpdateBigHandOperateRedPoint();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void DestroyLobbyCameras();
	void GetShadowDistanceScale();
	void SetShadowDistanceScale();
	void ShowItemPreviewPress();
	void ShowItemPreviewClick(int ItemId);
	void HideLobbyCamera();
	void ShowLobbyCamera();
	void TryLoadAdvertise();
	void SaveAnniversaryNeedShow();
	void GetAnniversaryNeedShow();
	void SaveResidentEvilNeedShow();
	void GetResidentEvilNeedShow();
	void SaveLobbySkinID();
	void SaveChristmasNeedShow();
	void GetChristmasNeedShow();
	void SaveRechargePayPos();
	void GetRechargePayPos();
	void SaveMallShow10Animation();
	void GetMallShow10Animation();
	void GetLocalizeStringWithNum();
	void GetLobbySkinIDAndBgmID();
	void SwitchLobbyMeshBg();
	void SwitchWarzoneCamera();
	void LoadAdvertise();
	void PlayAdvertise();
	void SetGlobalConfigData();
	void GetGlobalConfigData();
	void SwitchSceneCameraByIndexLua();
	void SwitchCameraFarImmediate();
	void SwitchWarzoneBG();
	void GetDragDropWidget(int dragDropType);
	void GetRankTexture(int rankIntegral, class UTexture2D** Output);
	void SetCorpsShopRedPoint();
	void GetCorpsIconTexture(int IconID, class UTexture2D** Value);
	void GetFrameTexture(int frameLevel, class UTexture2D** Output);
	void EnterCreateRoleDelay();
	void EnterCreateRole();
	void EnterFightStopMusic();
	void EventAndroidQuitGame();
	void QuitGame();
	void EnterLobby();
	void EnterLogin();
	void Construct();
	void LockLobbyMaxFps();
	void RecoverMaxFps();
	void SwitchLobbySkin();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

