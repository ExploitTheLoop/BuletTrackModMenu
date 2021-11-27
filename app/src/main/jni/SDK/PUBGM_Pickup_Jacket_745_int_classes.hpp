#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Pickup_Jacket_745_int_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pickup_Jacket_745_int.Pickup_Jacket_745_int_C
// 0x0004 (0x0674 - 0x0670)
class APickup_Jacket_745_int_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Bag_03_icon;                                              // 0x0670(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Pickup_Jacket_745_int.Pickup_Jacket_745_int_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

