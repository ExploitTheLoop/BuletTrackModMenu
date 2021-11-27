#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarPattern_Free_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarPattern_Free.BP_AvatarPattern_Free_C
// 0x0000 (0x006C - 0x006C)
class UBP_AvatarPattern_Free_C : public UBP_AvatarPattern_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarPattern_Free.BP_AvatarPattern_Free_C");
		return pStaticClass;
	}

};


}

