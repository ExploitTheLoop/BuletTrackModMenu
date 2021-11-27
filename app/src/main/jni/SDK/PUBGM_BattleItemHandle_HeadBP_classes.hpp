#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_HeadBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C
// 0x000E (0x0AD8 - 0x0ACA)
class UBattleItemHandle_HeadBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0ACA(0x0002) MISSED OFFSET
	TArray<int>                                        BodyResIDList;                                            // 0x0ACC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C");
		return pStaticClass;
	}

};


}

