// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_RankIntegralActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankIntegralActor.RankIntegralActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARankIntegralActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function RankIntegralActor.RankIntegralActor_C.UserConstructionScript");

	ARankIntegralActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

