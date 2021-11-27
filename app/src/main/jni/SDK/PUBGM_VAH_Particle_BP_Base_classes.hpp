#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VAH_Particle_BP_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VAH_Particle_BP_Base.VAH_Particle_BP_Base_C
// 0x0000 (0x0070 - 0x0070)
class UVAH_Particle_BP_Base_C : public UAvatarCustomParticle_BP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VAH_Particle_BP_Base.VAH_Particle_BP_Base_C");
		return pStaticClass;
	}

};


}

