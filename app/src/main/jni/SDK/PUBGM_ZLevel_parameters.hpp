#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ZLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
struct AZLevelData_ReBindLevelDataComponent_Params
{
};

// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
struct AZLevelData_CheckMonsterSpotIsOnLand_Params
{
	class UZMonsterSpot*                               MonsterSpot;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UZMonsterSpotGroup*                          SpotGroup;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

