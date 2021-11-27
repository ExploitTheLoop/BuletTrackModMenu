#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerRifleCameraShakeNear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerRifleCameraShakeNear.BP_PlayerRifleCameraShakeNear_C
// 0x0000 (0x0140 - 0x0140)
class UBP_PlayerRifleCameraShakeNear_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleCameraShakeNear.BP_PlayerRifleCameraShakeNear_C");
		return pStaticClass;
	}

};


}

