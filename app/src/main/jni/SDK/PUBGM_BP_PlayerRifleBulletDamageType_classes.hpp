#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerRifleBulletDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerRifleBulletDamageType.BP_PlayerRifleBulletDamageType_C
// 0x0000 (0x0030 - 0x0030)
class UBP_PlayerRifleBulletDamageType_C : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleBulletDamageType.BP_PlayerRifleBulletDamageType_C");
		return pStaticClass;
	}

};


}

