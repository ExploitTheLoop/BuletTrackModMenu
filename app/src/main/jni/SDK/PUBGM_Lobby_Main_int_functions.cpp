// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Main_int_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Main_int.Lobby_Main_int_C.OnAndroidBack
// (Public, BlueprintCallable, BlueprintEvent)

void ALobby_Main_int_C::OnAndroidBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.OnAndroidBack");

	ALobby_Main_int_C_OnAndroidBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.RegistPersistLevelObjs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontendUtils*          Utils                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Main_int_C::RegistPersistLevelObjs(class UFrontendUtils* Utils)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.RegistPersistLevelObjs");

	ALobby_Main_int_C_RegistPersistLevelObjs_Params params;
	params.Utils = Utils;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobby_Main_int_C::InpActEvt_Android_Back_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_4");

	ALobby_Main_int_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.InpActEvt_B_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobby_Main_int_C::InpActEvt_B_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.InpActEvt_B_K2Node_InputKeyEvent_3");

	ALobby_Main_int_C_InpActEvt_B_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobby_Main_int_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.ReceiveBeginPlay");

	ALobby_Main_int_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.ExecuteUbergraph_Lobby_Main_int
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Main_int_C::ExecuteUbergraph_Lobby_Main_int(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.ExecuteUbergraph_Lobby_Main_int");

	ALobby_Main_int_C_ExecuteUbergraph_Lobby_Main_int_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_int.Lobby_Main_int_C.Dispatcher_OpenBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*      NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Main_int_C::Dispatcher_OpenBox__DelegateSignature(class ASkeletalMeshActor* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_int.Lobby_Main_int_C.Dispatcher_OpenBox__DelegateSignature");

	ALobby_Main_int_C_Dispatcher_OpenBox__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

