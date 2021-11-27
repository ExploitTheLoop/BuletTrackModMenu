#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_RankIntegralActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RankIntegralActor.RankIntegralActor_C
// 0x0018 (0x02F8 - 0x02E0)
class ARankIntegralActor_C : public AActor
{
public:
	class UStaticMeshComponent*                        SubMesh;                                                  // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BigMesh;                                                  // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass RankIntegralActor.RankIntegralActor_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

