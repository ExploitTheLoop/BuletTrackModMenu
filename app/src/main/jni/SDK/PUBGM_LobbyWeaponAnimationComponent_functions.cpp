// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SyncMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWeaponAnimationComponent_C::SyncMontage(float Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SyncMontage");

	ULobbyWeaponAnimationComponent_C_SyncMontage_Params params;
	params.Position = Position;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.StopLobbyWeaponAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyWeaponAnimationComponent_C::StopLobbyWeaponAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.StopLobbyWeaponAnimation");

	ULobbyWeaponAnimationComponent_C_StopLobbyWeaponAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayOnAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMVPMotion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWeaponAnimationComponent_C::PlayOnAction(int ActionID, bool isMVPMotion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayOnAction");

	ULobbyWeaponAnimationComponent_C_PlayOnAction_Params params;
	params.ActionID = ActionID;
	params.isMVPMotion = isMVPMotion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayLobbyWeaponAnimationByID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponAnimationID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMVPMotion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWeaponAnimationComponent_C::PlayLobbyWeaponAnimationByID(int WeaponAnimationID, bool isMVPMotion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.PlayLobbyWeaponAnimationByID");

	ULobbyWeaponAnimationComponent_C_PlayLobbyWeaponAnimationByID_Params params;
	params.WeaponAnimationID = WeaponAnimationID;
	params.isMVPMotion = isMVPMotion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyWeaponAnimationComponent_C::Destroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.Destroy");

	ULobbyWeaponAnimationComponent_C_Destroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SetLobbyPlayerObj
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerLobbyPawn_C*   LobbyPlayerObj                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWeaponAnimationComponent_C::SetLobbyPlayerObj(class ABP_PlayerLobbyPawn_C* LobbyPlayerObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C.SetLobbyPlayerObj");

	ULobbyWeaponAnimationComponent_C_SetLobbyPlayerObj_Params params;
	params.LobbyPlayerObj = LobbyPlayerObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

