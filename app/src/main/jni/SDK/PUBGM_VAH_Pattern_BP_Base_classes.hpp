#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VAH_Pattern_BP_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VAH_Pattern_BP_Base.VAH_Pattern_BP_Base_C
// 0x0000 (0x0040 - 0x0040)
class UVAH_Pattern_BP_Base_C : public UAvatarCustomPattern_BP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VAH_Pattern_BP_Base.VAH_Pattern_BP_Base_C");
		return pStaticClass;
	}

};


}

