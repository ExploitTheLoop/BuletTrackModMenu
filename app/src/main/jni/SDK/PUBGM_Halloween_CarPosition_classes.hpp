#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Halloween_CarPosition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Halloween_CarPosition.Halloween_CarPosition_C
// 0x0008 (0x02E8 - 0x02E0)
class AHalloween_CarPosition_C : public AActor
{
public:
	class UArrowComponent*                             Arrow;                                                    // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Halloween_CarPosition.Halloween_CarPosition_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

