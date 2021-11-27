// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Record_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Record_UIBP.Lobby_Left_Record_UIBP_C.OnAchiAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULobby_Left_Record_UIBP_C::OnAchiAnimationFinished__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_UIBP.Lobby_Left_Record_UIBP_C.OnAchiAnimationFinished__DelegateSignature");

	ULobby_Left_Record_UIBP_C_OnAchiAnimationFinished__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

