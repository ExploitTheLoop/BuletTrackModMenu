// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Gun_3D_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.GetInitLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ALobby_Left_Gun_3D_UIBP_C::GetInitLocation(struct FVector* Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.GetInitLocation");

	ALobby_Left_Gun_3D_UIBP_C_GetInitLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobby_Left_Gun_3D_UIBP_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.UserConstructionScript");

	ALobby_Left_Gun_3D_UIBP_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__FinishedFunc
// (BlueprintEvent)

void ALobby_Left_Gun_3D_UIBP_C::Timeline_GunSlotScrollAnimation__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__FinishedFunc");

	ALobby_Left_Gun_3D_UIBP_C_Timeline_GunSlotScrollAnimation__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__UpdateFunc
// (BlueprintEvent)

void ALobby_Left_Gun_3D_UIBP_C::Timeline_GunSlotScrollAnimation__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.Timeline_GunSlotScrollAnimation__UpdateFunc");

	ALobby_Left_Gun_3D_UIBP_C_Timeline_GunSlotScrollAnimation__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventScrollWeaponSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isScorllUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            scrollNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Left_Gun_3D_UIBP_C::EventScrollWeaponSlot(bool isScorllUp, int scrollNum, float ZOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventScrollWeaponSlot");

	ALobby_Left_Gun_3D_UIBP_C_EventScrollWeaponSlot_Params params;
	params.isScorllUp = isScorllUp;
	params.scrollNum = scrollNum;
	params.ZOffset = ZOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.CustomEventEventScrollWeaponSlot_Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            scrollNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Left_Gun_3D_UIBP_C::CustomEventEventScrollWeaponSlot_Test(int scrollNum, float ZOffset, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.CustomEventEventScrollWeaponSlot_Test");

	ALobby_Left_Gun_3D_UIBP_C_CustomEventEventScrollWeaponSlot_Test_Params params;
	params.scrollNum = scrollNum;
	params.ZOffset = ZOffset;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventStopScrollSlot
// (BlueprintCallable, BlueprintEvent)

void ALobby_Left_Gun_3D_UIBP_C::EventStopScrollSlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.EventStopScrollSlot");

	ALobby_Left_Gun_3D_UIBP_C_EventStopScrollSlot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Left_Gun_3D_UIBP_C::ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C.ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP");

	ALobby_Left_Gun_3D_UIBP_C_ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

