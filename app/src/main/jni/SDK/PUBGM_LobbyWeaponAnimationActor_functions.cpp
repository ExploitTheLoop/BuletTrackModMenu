// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.PlayLobbyAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyWeaponAnimationActor_C::PlayLobbyAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.PlayLobbyAnimation");

	ALobbyWeaponAnimationActor_C_PlayLobbyAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyWeaponAnimationActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.UserConstructionScript");

	ALobbyWeaponAnimationActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyWeaponAnimationActor_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ReceiveBeginPlay");

	ALobbyWeaponAnimationActor_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.OnAnimEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyWeaponAnimationActor_C::OnAnimEnd(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.OnAnimEnd");

	ALobbyWeaponAnimationActor_C_OnAnimEnd_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.SetAnimTimeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyWeaponAnimationActor_C::SetAnimTimeInfo(int DelayTime, int TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.SetAnimTimeInfo");

	ALobbyWeaponAnimationActor_C_SetAnimTimeInfo_Params params;
	params.DelayTime = DelayTime;
	params.TotalTime = TotalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ExecuteUbergraph_LobbyWeaponAnimationActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyWeaponAnimationActor_C::ExecuteUbergraph_LobbyWeaponAnimationActor(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C.ExecuteUbergraph_LobbyWeaponAnimationActor");

	ALobbyWeaponAnimationActor_C_ExecuteUbergraph_LobbyWeaponAnimationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

