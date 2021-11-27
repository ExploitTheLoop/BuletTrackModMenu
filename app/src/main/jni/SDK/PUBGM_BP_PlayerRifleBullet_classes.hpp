#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerRifleBullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerRifleBullet.BP_PlayerRifleBullet_C
// 0x0004 (0x0564 - 0x0560)
class ABP_PlayerRifleBullet_C : public ASTExtraShootWeaponBulletBase
{
public:
	class UStaticMeshComponent*                        BulletMesh;                                               // 0x0560(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleBullet.BP_PlayerRifleBullet_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

