// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Bp_MInitv_RandomEvent_Trigger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABp_MInitv_RandomEvent_Trigger_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C.UserConstructionScript");

	ABp_MInitv_RandomEvent_Trigger_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

