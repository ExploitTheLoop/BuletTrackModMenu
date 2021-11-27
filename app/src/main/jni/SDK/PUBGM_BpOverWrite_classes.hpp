#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BpOverWrite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BpOverWrite.BpOverWrite_C
// 0x0000 (0x0128 - 0x0128)
class UBpOverWrite_C : public UBPClassManager
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BpOverWrite.BpOverWrite_C");
		return pStaticClass;
	}

};


}

