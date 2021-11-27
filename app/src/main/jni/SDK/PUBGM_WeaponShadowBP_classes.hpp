#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_WeaponShadowBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponShadowBP.WeaponShadowBP_C
// 0x0008 (0x02E8 - 0x02E0)
class AWeaponShadowBP_C : public AActor
{
public:
	class UStaticMeshComponent*                        Plane;                                                    // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponShadowBP.WeaponShadowBP_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

