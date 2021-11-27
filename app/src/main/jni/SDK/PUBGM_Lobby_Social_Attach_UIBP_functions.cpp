// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Social_Attach_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Social_Attach_UIBP.Lobby_Social_Attach_UIBP_C.ExecuteUbergraph_Lobby_Social_Attach_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Social_Attach_UIBP_C::ExecuteUbergraph_Lobby_Social_Attach_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Social_Attach_UIBP.Lobby_Social_Attach_UIBP_C.ExecuteUbergraph_Lobby_Social_Attach_UIBP");

	ULobby_Social_Attach_UIBP_C_ExecuteUbergraph_Lobby_Social_Attach_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

