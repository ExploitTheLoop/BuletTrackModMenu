#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_uielem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C
// 0x0040 (0x0350 - 0x0310)
class Abp_setting_uielem_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Setting_SelectFireMode;                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_SelectLayoutFileName;                          // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Setting_IsSelectFPP;                                   // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	int                                                BP_Setting_SelectGameModeIndex;                           // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingSerachResult_PreviewOwnerName;                  // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectLayoutIndex;                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_SelectLayoutName;                              // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SettingSerachResult_IsPreviewTPP;                      // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C");
		return pStaticClass;
	}


	void EventExitPreview_NoFetch();
	void EventExitPreview();
	void EventUploadSaveData_NoFetch();
	void EventUploadSaveData();
	void EventBigHandOperateRedPointChanged_NoFetch();
	void EventBigHandOperateRedPointChanged();
	void EventShowExitMsgBox_NoFetch();
	void EventShowExitMsgBox();
	void EventShowChangeModeMsgBox_NoFetch();
	void EventShowChangeModeMsgBox();
	void EventShowModeCopyMsgBox_NoFetch();
	void EventShowModeCopyMsgBox();
	void EventShowSightCopyMsgBox_NoFetch();
	void EventShowSightCopyMsgBox();
	void EventShowSelectPanel_NoFetch();
	void EventShowSelectPanel();
	void EventShowResetMsgBox_NoFetch();
	void EventShowResetMsgBox();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTPPFPPPreviewPopupTips_NoFetch();
	void EventTPPFPPPreviewPopupTips();
	void EventShowLayoutChangeExistMsgBox_NoFetch();
	void EventShowLayoutChangeExistMsgBox();
	void EventTryDownloadSaveData_NoFetch();
	void EventTryDownloadSaveData();
	void EventOnClickQuitButton_NoFetch();
	void EventOnClickQuitButton();
	void EventRefreshLoadUIElemFileName_NoFetch();
	void EventRefreshLoadUIElemFileName();
	void EventLRSwitcherChanged_NoFetch();
	void EventLRSwitcherChanged();
	void EventShowPreviewConfirmUI_NoFetch();
	void EventShowPreviewConfirmUI();
	void EventAntiCopyRedPointChanged_NoFetch();
	void EventAntiCopyRedPointChanged();
	void UserConstructionScript();
};


}

