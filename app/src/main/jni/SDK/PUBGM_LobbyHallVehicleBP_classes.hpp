#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyHallVehicleBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyHallVehicleBP.LobbyHallVehicleBP_C
// 0x0000 (0x0554 - 0x0554)
class ALobbyHallVehicleBP_C : public ALobbyModelShowActorBP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyHallVehicleBP.LobbyHallVehicleBP_C");
		return pStaticClass;
	}

};


}

