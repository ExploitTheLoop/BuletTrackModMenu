#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerRifleBulletImpact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerRifleBulletImpact.BP_PlayerRifleBulletImpact_C
// 0x0010 (0x08C0 - 0x08B0)
class ABP_PlayerRifleBulletImpact_C : public ASTEShootWeaponBulletImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          CrossHairRefTexture;                                      // 0x08B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleBulletImpact.BP_PlayerRifleBulletImpact_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

