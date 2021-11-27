// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Plan_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Plan_UIBP.Lobby_Left_Plan_UIBP_C.BndEvt__Button_Bag_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobby_Left_Plan_UIBP_C::BndEvt__Button_Bag_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Plan_UIBP.Lobby_Left_Plan_UIBP_C.BndEvt__Button_Bag_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature");

	ULobby_Left_Plan_UIBP_C_BndEvt__Button_Bag_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Plan_UIBP.Lobby_Left_Plan_UIBP_C.ExecuteUbergraph_Lobby_Left_Plan_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Left_Plan_UIBP_C::ExecuteUbergraph_Lobby_Left_Plan_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Plan_UIBP.Lobby_Left_Plan_UIBP_C.ExecuteUbergraph_Lobby_Left_Plan_UIBP");

	ULobby_Left_Plan_UIBP_C_ExecuteUbergraph_Lobby_Left_Plan_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

