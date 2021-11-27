#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyModelCommonActorBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyModelCommonActorBP.LobbyModelCommonActorBP_C
// 0x0008 (0x03C0 - 0x03B8)
class ALobbyModelCommonActorBP_C : public ALobbyModelCommonActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                commonActorResId;                                         // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyModelCommonActorBP.LobbyModelCommonActorBP_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

