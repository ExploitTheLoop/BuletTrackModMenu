// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_DropDownWeaponMag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetPendingDestroyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPendingDestroy               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::SetPendingDestroyState(bool isPendingDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.SetPendingDestroyState");

	ADropDownWeaponMag_C_SetPendingDestroyState_Params params;
	params.isPendingDestroy = isPendingDestroy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetCollisionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::SetCollisionEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.SetCollisionEnable");

	ADropDownWeaponMag_C_SetCollisionEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::SetVisible(bool Visible, class APawn* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.SetVisible");

	ADropDownWeaponMag_C_SetVisible_Params params;
	params.Visible = Visible;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::SetSimulatePhysics(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.SetSimulatePhysics");

	ADropDownWeaponMag_C_SetSimulatePhysics_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetMagMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::SetMagMesh(class UStaticMesh* Mesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.SetMagMesh");

	ADropDownWeaponMag_C_SetMagMesh_Params params;
	params.Mesh = Mesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADropDownWeaponMag_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.UserConstructionScript");

	ADropDownWeaponMag_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.WaitforDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          leftTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::WaitforDestroy(float leftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.WaitforDestroy");

	ADropDownWeaponMag_C_WaitforDestroy_Params params;
	params.leftTime = leftTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function DropDownWeaponMag.DropDownWeaponMag_C.ExecuteUbergraph_DropDownWeaponMag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropDownWeaponMag_C::ExecuteUbergraph_DropDownWeaponMag(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function DropDownWeaponMag.DropDownWeaponMag_C.ExecuteUbergraph_DropDownWeaponMag");

	ADropDownWeaponMag_C_ExecuteUbergraph_DropDownWeaponMag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

