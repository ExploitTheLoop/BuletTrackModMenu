// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LightningComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningComponent.LightningComponent.SetWidthDecay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDecay                        (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetWidthDecay(float InDecay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetWidthDecay");

	ULightningComponent_SetWidthDecay_Params params;
	params.InDecay = InDecay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetShrinkWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InBool                         (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetShrinkWidth(bool InBool)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetShrinkWidth");

	ULightningComponent_SetShrinkWidth_Params params;
	params.InBool = InBool;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetPatternMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPatternMask                  (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetPatternMask(int InPatternMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetPatternMask");

	ULightningComponent_SetPatternMask_Params params;
	params.InPatternMask = InPatternMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetMaxFractalTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxFractalTime               (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetMaxFractalTime(int InMaxFractalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetMaxFractalTime");

	ULightningComponent_SetMaxFractalTime_Params params;
	params.InMaxFractalTime = InMaxFractalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetLightningWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWidth                        (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetLightningWidth(float InWidth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetLightningWidth");

	ULightningComponent_SetLightningWidth_Params params;
	params.InWidth = InWidth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetBrightnessDecay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDecay                        (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetBrightnessDecay(float InDecay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetBrightnessDecay");

	ULightningComponent_SetBrightnessDecay_Params params;
	params.InDecay = InDecay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.SetAtlasNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InVal                          (Parm, ZeroConstructor, IsPlainOldData)

void ULightningComponent::SetAtlasNum(int InVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.SetAtlasNum");

	ULightningComponent_SetAtlasNum_Params params;
	params.InVal = InVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.RefreshLightningMesh
// (Final, Native, Public, BlueprintCallable)

void ULightningComponent::RefreshLightningMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.RefreshLightningMesh");

	ULightningComponent_RefreshLightningMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LightningComponent.LightningComponent.IsShrinkWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightningComponent::IsShrinkWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.IsShrinkWidth");

	ULightningComponent_IsShrinkWidth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetWidthDecay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightningComponent::GetWidthDecay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetWidthDecay");

	ULightningComponent_GetWidthDecay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetPatternMask
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULightningComponent::GetPatternMask()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetPatternMask");

	ULightningComponent_GetPatternMask_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetMaxFractalTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULightningComponent::GetMaxFractalTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetMaxFractalTime");

	ULightningComponent_GetMaxFractalTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetLightningWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightningComponent::GetLightningWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetLightningWidth");

	ULightningComponent_GetLightningWidth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetBrightnessDecay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightningComponent::GetBrightnessDecay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetBrightnessDecay");

	ULightningComponent_GetBrightnessDecay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LightningComponent.LightningComponent.GetAtlasNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightningComponent::GetAtlasNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LightningComponent.LightningComponent.GetAtlasNum");

	ULightningComponent_GetAtlasNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

