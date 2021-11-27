#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarAssetUtilsImp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarAssetUtilsImp_BP.AvatarAssetUtilsImp_BP_C
// 0x0000 (0x0130 - 0x0130)
class UAvatarAssetUtilsImp_BP_C : public UAvatarAssetBPUtils
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarAssetUtilsImp_BP.AvatarAssetUtilsImp_BP_C");
		return pStaticClass;
	}

};


}

