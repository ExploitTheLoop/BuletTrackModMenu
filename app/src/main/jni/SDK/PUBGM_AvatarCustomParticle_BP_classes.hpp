#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarCustomParticle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarCustomParticle_BP.AvatarCustomParticle_BP_C
// 0x0000 (0x0070 - 0x0070)
class UAvatarCustomParticle_BP_C : public UAvatarCustomParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarCustomParticle_BP.AvatarCustomParticle_BP_C");
		return pStaticClass;
	}

};


}

