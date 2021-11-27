// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GrenadeAvatarComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetDefaultAvatarID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InAvatarID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGrenadeAvatarComponent_BP_C::GetDefaultAvatarID(int* InAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetDefaultAvatarID");

	UGrenadeAvatarComponent_BP_C_GetDefaultAvatarID_Params params;
	params.InAvatarID = InAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandlePath
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGrenadeAvatarComponent_BP_C::GetItemAvatarHandlePath(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandlePath");

	UGrenadeAvatarComponent_BP_C_GetItemAvatarHandlePath_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackCommonAvatarHandle* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackCommonAvatarHandle* UGrenadeAvatarComponent_BP_C::GetItemAvatarHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GetItemAvatarHandle");

	UGrenadeAvatarComponent_BP_C_GetItemAvatarHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeAvatarEquiped
// (BlueprintCallable, BlueprintEvent)

void UGrenadeAvatarComponent_BP_C::GrenadeAvatarEquiped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeAvatarEquiped");

	UGrenadeAvatarComponent_BP_C_GrenadeAvatarEquiped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UGrenadeAvatarComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ReceiveBeginPlay");

	UGrenadeAvatarComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExecuteUbergraph_GrenadeAvatarComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeAvatarComponent_BP_C::ExecuteUbergraph_GrenadeAvatarComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExecuteUbergraph_GrenadeAvatarComponent_BP");

	UGrenadeAvatarComponent_BP_C_ExecuteUbergraph_GrenadeAvatarComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

