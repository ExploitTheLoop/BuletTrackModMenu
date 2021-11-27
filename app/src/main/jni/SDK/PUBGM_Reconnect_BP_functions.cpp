// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Reconnect_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Reconnect_BP.Reconnect_BP_C.UIHideAnimFromLua
// (Public, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIHideAnimFromLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIHideAnimFromLua");

	UReconnect_BP_C_UIHideAnimFromLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.UIShowAnimFromLua
// (Public, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIShowAnimFromLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIShowAnimFromLua");

	UReconnect_BP_C_UIShowAnimFromLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.UIHideAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIHideAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIHideAnim");

	UReconnect_BP_C_UIHideAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.UIShowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIShowAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIShowAnim");

	UReconnect_BP_C_UIShowAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIHide");

	UReconnect_BP_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.UIShow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReconnect_BP_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.UIShow");

	UReconnect_BP_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReconnect_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.Construct");

	UReconnect_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReconnect_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.Tick");

	UReconnect_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReconnect_BP_C::ExecuteUbergraph_Reconnect_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP");

	UReconnect_BP_C_ExecuteUbergraph_Reconnect_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

