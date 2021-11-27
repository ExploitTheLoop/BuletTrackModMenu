#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_basic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_basic.bp_setting_basic_C
// 0x000C (0x031C - 0x0310)
class Abp_setting_basic_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_BasicSettingCanShowHistory;                            // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_basic.bp_setting_basic_C");
		return pStaticClass;
	}


	void EventSettingHistory_NoFetch();
	void EventSettingHistory();
	void EventHideSettingBindMore_NoFetch();
	void EventHideSettingBindMore();
	void EventShowSettingBindMore_NoFetch();
	void EventShowSettingBindMore();
	void UserConstructionScript();
};


}

