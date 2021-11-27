#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_WeaponAvatarComp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAvatarComp_BP.WeaponAvatarComp_BP_C
// 0x0000 (0x05D0 - 0x05D0)
class UWeaponAvatarComp_BP_C : public UWeaponAvatarComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAvatarComp_BP.WeaponAvatarComp_BP_C");
		return pStaticClass;
	}

};


}

