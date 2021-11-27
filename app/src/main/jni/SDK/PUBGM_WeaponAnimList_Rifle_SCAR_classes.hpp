#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_WeaponAnimList_Rifle_SCAR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimList_Rifle_SCAR.WeaponAnimList_Rifle_SCAR_C
// 0x0000 (0x0208 - 0x0208)
class UWeaponAnimList_Rifle_SCAR_C : public UUAECharacterAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAnimList_Rifle_SCAR.WeaponAnimList_Rifle_SCAR_C");
		return pStaticClass;
	}

};


}

