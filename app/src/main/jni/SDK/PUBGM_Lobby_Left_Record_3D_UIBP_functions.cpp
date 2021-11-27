// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Record_3D_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobby_Left_Record_3D_UIBP_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.UserConstructionScript");

	ALobby_Left_Record_3D_UIBP_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ALobby_Left_Record_3D_UIBP_C::Timeline_0__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.Timeline_0__FinishedFunc");

	ALobby_Left_Record_3D_UIBP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ALobby_Left_Record_3D_UIBP_C::Timeline_0__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.Timeline_0__UpdateFunc");

	ALobby_Left_Record_3D_UIBP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.EventScrollSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isScorllLeft                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Left_Record_3D_UIBP_C::EventScrollSlot(bool isScorllLeft)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.EventScrollSlot");

	ALobby_Left_Record_3D_UIBP_C_EventScrollSlot_Params params;
	params.isScorllLeft = isScorllLeft;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.EventStopScroll
// (BlueprintCallable, BlueprintEvent)

void ALobby_Left_Record_3D_UIBP_C::EventStopScroll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.EventStopScroll");

	ALobby_Left_Record_3D_UIBP_C_EventStopScroll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.ExecuteUbergraph_Lobby_Left_Record_3D_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Left_Record_3D_UIBP_C::ExecuteUbergraph_Lobby_Left_Record_3D_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C.ExecuteUbergraph_Lobby_Left_Record_3D_UIBP");

	ALobby_Left_Record_3D_UIBP_C_ExecuteUbergraph_Lobby_Left_Record_3D_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

