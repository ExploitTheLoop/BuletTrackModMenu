#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleAvatarHandleBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAvatarHandleBase_BP.VehicleAvatarHandleBase_BP_C
// 0x0000 (0x0370 - 0x0370)
class UVehicleAvatarHandleBase_BP_C : public UBackpackVehicleAvatarHandle
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAvatarHandleBase_BP.VehicleAvatarHandleBase_BP_C");
		return pStaticClass;
	}

};


}

