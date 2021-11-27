// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Pickup_Jacket_745_int_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pickup_Jacket_745_int.Pickup_Jacket_745_int_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickup_Jacket_745_int_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Pickup_Jacket_745_int.Pickup_Jacket_745_int_C.UserConstructionScript");

	APickup_Jacket_745_int_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

