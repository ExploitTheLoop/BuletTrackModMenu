// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyMallAttachPoint_Vehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyMallAttachPoint_Vehicle.LobbyMallAttachPoint_Vehicle_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyMallAttachPoint_Vehicle_C::NewFunction_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyMallAttachPoint_Vehicle.LobbyMallAttachPoint_Vehicle_C.NewFunction_1");

	ULobbyMallAttachPoint_Vehicle_C_NewFunction_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

