#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarCustomPattern_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarCustomPattern_BP.AvatarCustomPattern_BP_C
// 0x0000 (0x0040 - 0x0040)
class UAvatarCustomPattern_BP_C : public UAvatarCustomPattern
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarCustomPattern_BP.AvatarCustomPattern_BP_C");
		return pStaticClass;
	}

};


}

