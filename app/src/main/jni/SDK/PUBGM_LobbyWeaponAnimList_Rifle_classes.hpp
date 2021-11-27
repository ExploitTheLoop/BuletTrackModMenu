#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimList_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyWeaponAnimList_Rifle.LobbyWeaponAnimList_Rifle_C
// 0x0000 (0x01D0 - 0x01D0)
class ULobbyWeaponAnimList_Rifle_C : public UAELobbyCharAnimListComp
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyWeaponAnimList_Rifle.LobbyWeaponAnimList_Rifle_C");
		return pStaticClass;
	}

};


}

