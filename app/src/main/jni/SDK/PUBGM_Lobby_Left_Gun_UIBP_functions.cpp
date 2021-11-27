// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Gun_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Gun_UIBP.Lobby_Left_Gun_UIBP_C.OnWeaponAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULobby_Left_Gun_UIBP_C::OnWeaponAnimationFinished__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_UIBP.Lobby_Left_Gun_UIBP_C.OnWeaponAnimationFinished__DelegateSignature");

	ULobby_Left_Gun_UIBP_C_OnWeaponAnimationFinished__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

