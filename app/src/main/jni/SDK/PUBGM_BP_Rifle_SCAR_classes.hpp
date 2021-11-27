#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR.BP_Rifle_SCAR_C
// 0x0008 (0x0DC9 - 0x0DC1)
class ABP_Rifle_SCAR_C : public ABP_ShootWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DC1(0x0003) MISSED OFFSET
	class UWeaponAnimList_Rifle_SCAR_C*                WeaponAnimList_Rifle_SCAR;                                // 0x0DC4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim_1;                                           // 0x0DC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR.BP_Rifle_SCAR_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

