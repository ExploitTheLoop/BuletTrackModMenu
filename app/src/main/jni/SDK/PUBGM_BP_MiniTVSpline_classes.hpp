#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_MiniTVSpline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C
// 0x0005 (0x02E5 - 0x02E0)
class ABP_MiniTVSpline_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveActor;                                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

