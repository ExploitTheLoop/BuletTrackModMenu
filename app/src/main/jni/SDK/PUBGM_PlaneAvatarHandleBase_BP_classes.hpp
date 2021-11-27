#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlaneAvatarHandleBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlaneAvatarHandleBase_BP.PlaneAvatarHandleBase_BP_C
// 0x0004 (0x016C - 0x0168)
class UPlaneAvatarHandleBase_BP_C : public UBackpackPlaneAvatarHandle
{
public:
	class UClass*                                      PlaneActorClass;                                          // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlaneAvatarHandleBase_BP.PlaneAvatarHandleBase_BP_C");
		return pStaticClass;
	}

};


}

