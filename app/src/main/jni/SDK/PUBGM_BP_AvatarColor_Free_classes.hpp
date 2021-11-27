#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarColor_Free_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarColor_Free.BP_AvatarColor_Free_C
// 0x0000 (0x0040 - 0x0040)
class UBP_AvatarColor_Free_C : public UBP_AvatarColor_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarColor_Free.BP_AvatarColor_Free_C");
		return pStaticClass;
	}

};


}

