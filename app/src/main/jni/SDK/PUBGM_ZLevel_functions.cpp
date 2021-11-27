// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ZLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
// (Final, Native, Public)

void AZLevelData::ReBindLevelDataComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.ReBindLevelDataComponent");

	AZLevelData_ReBindLevelDataComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
// (Final, Native, Public)
// Parameters:
// class UZMonsterSpot*           MonsterSpot                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UZMonsterSpotGroup*      SpotGroup                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AZLevelData::CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand");

	AZLevelData_CheckMonsterSpotIsOnLand_Params params;
	params.MonsterSpot = MonsterSpot;
	params.SpotGroup = SpotGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

