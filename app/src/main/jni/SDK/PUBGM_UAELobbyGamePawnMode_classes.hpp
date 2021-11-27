#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAELobbyGamePawnMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C
// 0x0004 (0x036C - 0x0368)
class AUAELobbyGamePawnMode_C : public AUAELobbyGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass UAELobbyGamePawnMode.UAELobbyGamePawnMode_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

