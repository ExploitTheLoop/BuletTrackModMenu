// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Right_Content_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.SetScrollBack
// (Public, BlueprintCallable, BlueprintEvent)

void ULobby_Right_Content_UIBP_C::SetScrollBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.SetScrollBack");

	ULobby_Right_Content_UIBP_C_SetScrollBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.DelayStartAutoScroll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Right_Content_UIBP_C::DelayStartAutoScroll(float DelayTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.DelayStartAutoScroll");

	ULobby_Right_Content_UIBP_C_DelayStartAutoScroll_Params params;
	params.DelayTime = DelayTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.StartAutoScroll
// (Public, BlueprintCallable, BlueprintEvent)

void ULobby_Right_Content_UIBP_C::StartAutoScroll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.StartAutoScroll");

	ULobby_Right_Content_UIBP_C_StartAutoScroll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.AutoScrollWhenUnTouched
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Right_Content_UIBP_C::AutoScrollWhenUnTouched(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.AutoScrollWhenUnTouched");

	ULobby_Right_Content_UIBP_C_AutoScrollWhenUnTouched_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Right_Content_UIBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.Tick");

	ULobby_Right_Content_UIBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Right_Content_UIBP_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	ULobby_Right_Content_UIBP_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.ExecuteUbergraph_Lobby_Right_Content_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Right_Content_UIBP_C::ExecuteUbergraph_Lobby_Right_Content_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Right_Content_UIBP.Lobby_Right_Content_UIBP_C.ExecuteUbergraph_Lobby_Right_Content_UIBP");

	ULobby_Right_Content_UIBP_C_ExecuteUbergraph_Lobby_Right_Content_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

