#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Mag_SCAR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mag_SCAR.BP_Mag_SCAR_C
// 0x0000 (0x0380 - 0x0380)
class UBP_Mag_SCAR_C : public UBattleItemHandle_WeapAttachment_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Mag_SCAR.BP_Mag_SCAR_C");
		return pStaticClass;
	}

};


}

