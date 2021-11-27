#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AchievementAliasActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AchievementAliasActor.AchievementAliasActor_C
// 0x000C (0x02EC - 0x02E0)
class AAchievementAliasActor_C : public AActor
{
public:
	class UStaticMeshComponent*                        BG;                                                       // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Model;                                                    // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AchievementAliasActor.AchievementAliasActor_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

