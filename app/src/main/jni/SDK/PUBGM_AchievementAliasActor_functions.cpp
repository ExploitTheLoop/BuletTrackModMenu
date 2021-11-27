// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AchievementAliasActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AchievementAliasActor.AchievementAliasActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAchievementAliasActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AchievementAliasActor.AchievementAliasActor_C.UserConstructionScript");

	AAchievementAliasActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

