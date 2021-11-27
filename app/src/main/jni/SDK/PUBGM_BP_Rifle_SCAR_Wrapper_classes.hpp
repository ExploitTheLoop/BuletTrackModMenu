#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_Wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C
// 0x0008 (0x0678 - 0x0670)
class ABP_Rifle_SCAR_Wrapper_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Mag;                                                      // 0x0670(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SCAR_L;                                                // 0x0674(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

