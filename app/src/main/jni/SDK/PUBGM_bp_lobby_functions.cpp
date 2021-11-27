// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_lobby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_lobby.bp_lobby_C.EventLobbyAndroidBack_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_C::EventLobbyAndroidBack_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_lobby.bp_lobby_C.EventLobbyAndroidBack_NoFetch");

	Abp_lobby_C_EventLobbyAndroidBack_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function bp_lobby.bp_lobby_C.EventLobbyAndroidBack
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_C::EventLobbyAndroidBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_lobby.bp_lobby_C.EventLobbyAndroidBack");

	Abp_lobby_C_EventLobbyAndroidBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function bp_lobby.bp_lobby_C.EventSwitchLobbyCameraByIndex_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_C::EventSwitchLobbyCameraByIndex_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_lobby.bp_lobby_C.EventSwitchLobbyCameraByIndex_NoFetch");

	Abp_lobby_C_EventSwitchLobbyCameraByIndex_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function bp_lobby.bp_lobby_C.EventSwitchLobbyCameraByIndex
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_C::EventSwitchLobbyCameraByIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_lobby.bp_lobby_C.EventSwitchLobbyCameraByIndex");

	Abp_lobby_C_EventSwitchLobbyCameraByIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function bp_lobby.bp_lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_lobby_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_lobby.bp_lobby_C.UserConstructionScript");

	Abp_lobby_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

