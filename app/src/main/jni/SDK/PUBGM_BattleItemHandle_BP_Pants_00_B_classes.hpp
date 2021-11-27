#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_BP_Pants_00_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_BP_Pants_00_B.BattleItemHandle_BP_Pants_00_B_C
// 0x0000 (0x0ACA - 0x0ACA)
class UBattleItemHandle_BP_Pants_00_B_C : public UBattleItemHandle_AvatarBP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_BP_Pants_00_B.BattleItemHandle_BP_Pants_00_B_C");
		return pStaticClass;
	}

};


}

