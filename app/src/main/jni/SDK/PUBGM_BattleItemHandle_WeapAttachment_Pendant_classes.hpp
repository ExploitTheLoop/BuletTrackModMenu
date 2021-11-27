#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_WeapAttachment_Pendant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_WeapAttachment_Pendant.BattleItemHandle_WeapAttachment_Pendant_C
// 0x0000 (0x0380 - 0x0380)
class UBattleItemHandle_WeapAttachment_Pendant_C : public UBattleItemHandle_WeapAttachment_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_WeapAttachment_Pendant.BattleItemHandle_WeapAttachment_Pendant_C");
		return pStaticClass;
	}

};


}

