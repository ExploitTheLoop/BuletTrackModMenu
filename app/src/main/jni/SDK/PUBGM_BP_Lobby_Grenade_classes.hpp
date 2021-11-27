#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Lobby_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lobby_Grenade.BP_Lobby_Grenade_C
// 0x0010 (0x02F0 - 0x02E0)
class ABP_Lobby_Grenade_C : public AActor
{
public:
	class UGrenadeAvatarComponent_BP_C*                GrenadeAvatarComponent_BP;                                // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvatarReady;                                            // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	int                                                grenadeResId;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_Grenade.BP_Lobby_Grenade_C");
		return pStaticClass;
	}


	void SetAvatarReady();
	void UserConstructionScript();
};


}

