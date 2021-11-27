#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_VirtualItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C
// 0x0000 (0x00F0 - 0x00F0)
class UBattleItemHandle_VirtualItem_C : public UBattleItemHandleBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C");
		return pStaticClass;
	}

};


}

