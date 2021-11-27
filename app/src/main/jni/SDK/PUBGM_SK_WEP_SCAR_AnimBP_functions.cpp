// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SK_WEP_SCAR_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.HandleWeaponStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_SCAR_AnimBP_C::HandleWeaponStateChanged(TEnumAsByte<enum EFreshWeaponStateType> Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.HandleWeaponStateChanged");

	USK_WEP_SCAR_AnimBP_C_HandleWeaponStateChanged_Params params;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861
// (BlueprintEvent)

void USK_WEP_SCAR_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861");

	USK_WEP_SCAR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnWeaponChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType> CurState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_SCAR_AnimBP_C::OnWeaponChangeState(TEnumAsByte<enum EFreshWeaponStateType> CurState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnWeaponChangeState");

	USK_WEP_SCAR_AnimBP_C_OnWeaponChangeState_Params params;
	params.CurState = CurState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSocketType    AttachmentSocketTypeD          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_SCAR_AnimBP_C::OnScopeEquip(EWeaponAttachmentSocketType AttachmentSocketTypeD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeEquip");

	USK_WEP_SCAR_AnimBP_C_OnScopeEquip_Params params;
	params.AttachmentSocketTypeD = AttachmentSocketTypeD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeUnequip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSocketType    AttachmentSocketType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_SCAR_AnimBP_C::OnScopeUnequip(EWeaponAttachmentSocketType AttachmentSocketType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeUnequip");

	USK_WEP_SCAR_AnimBP_C_OnScopeUnequip_Params params;
	params.AttachmentSocketType = AttachmentSocketType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USK_WEP_SCAR_AnimBP_C::BlueprintInitializeAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.BlueprintInitializeAnimation");

	USK_WEP_SCAR_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.ExecuteUbergraph_SK_WEP_SCAR_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_SCAR_AnimBP_C::ExecuteUbergraph_SK_WEP_SCAR_AnimBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.ExecuteUbergraph_SK_WEP_SCAR_AnimBP");

	USK_WEP_SCAR_AnimBP_C_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

