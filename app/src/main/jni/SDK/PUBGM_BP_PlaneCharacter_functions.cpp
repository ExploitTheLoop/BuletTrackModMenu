// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlaneCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.AsyncChangePlaneAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaneCharacter_C::AsyncChangePlaneAvatar(int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.AsyncChangePlaneAvatar");

	ABP_PlaneCharacter_C_AsyncChangePlaneAvatar_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ChangePlaneAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaneCharacter_C::ChangePlaneAvatar(int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ChangePlaneAvatar");

	ABP_PlaneCharacter_C_ChangePlaneAvatar_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlaneCharacter_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript");

	ABP_PlaneCharacter_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlaneCharacter_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay");

	ABP_PlaneCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaneCharacter_C::ExecuteUbergraph_BP_PlaneCharacter(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter");

	ABP_PlaneCharacter_C_ExecuteUbergraph_BP_PlaneCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

