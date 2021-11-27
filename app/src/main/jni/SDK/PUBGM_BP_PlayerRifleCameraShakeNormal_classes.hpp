#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerRifleCameraShakeNormal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerRifleCameraShakeNormal.BP_PlayerRifleCameraShakeNormal_C
// 0x0000 (0x0140 - 0x0140)
class UBP_PlayerRifleCameraShakeNormal_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleCameraShakeNormal.BP_PlayerRifleCameraShakeNormal_C");
		return pStaticClass;
	}

};


}

