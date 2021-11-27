// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlaneAvatarComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.CreateItemAvatarHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UPlaneAvatarComponent_BP_C::CreateItemAvatarHandle(int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.CreateItemAvatarHandle");

	UPlaneAvatarComponent_BP_C_CreateItemAvatarHandle_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_SetMatDissolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlaneAvatarComponent_BP_C::BP_SetMatDissolve(float NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_SetMatDissolve");

	UPlaneAvatarComponent_BP_C_BP_SetMatDissolve_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_OnPlaneAvatarChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UPlaneAvatarComponent_BP_C::BP_OnPlaneAvatarChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_OnPlaneAvatarChanged");

	UPlaneAvatarComponent_BP_C_BP_OnPlaneAvatarChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.GetPlaneAvatarHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackPlaneAvatarHandle* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackPlaneAvatarHandle* UPlaneAvatarComponent_BP_C::GetPlaneAvatarHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.GetPlaneAvatarHandle");

	UPlaneAvatarComponent_BP_C_GetPlaneAvatarHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UPlaneAvatarComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveBeginPlay");

	UPlaneAvatarComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlaneAvatarComponent_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveTick");

	UPlaneAvatarComponent_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.PlaneAvatarChanged
// (BlueprintCallable, BlueprintEvent)

void UPlaneAvatarComponent_BP_C::PlaneAvatarChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.PlaneAvatarChanged");

	UPlaneAvatarComponent_BP_C_PlaneAvatarChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ExecuteUbergraph_PlaneAvatarComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlaneAvatarComponent_BP_C::ExecuteUbergraph_PlaneAvatarComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ExecuteUbergraph_PlaneAvatarComponent_BP");

	UPlaneAvatarComponent_BP_C_ExecuteUbergraph_PlaneAvatarComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

