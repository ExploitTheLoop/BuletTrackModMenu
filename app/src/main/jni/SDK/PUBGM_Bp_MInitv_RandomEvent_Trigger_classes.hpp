#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Bp_MInitv_RandomEvent_Trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C
// 0x0010 (0x02F0 - 0x02E0)
class ABp_MInitv_RandomEvent_Trigger_C : public AActor
{
public:
	class UBoxComponent*                               Box;                                                      // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

