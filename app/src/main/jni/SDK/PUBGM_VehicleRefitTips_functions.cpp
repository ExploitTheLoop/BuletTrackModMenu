// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleRefitTips_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleRefitTips.VehicleRefitTips_C.UpdateTipImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 imgPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AVehicleRefitTips_C::UpdateTipImage(const struct FString& imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.UpdateTipImage");

	AVehicleRefitTips_C_UpdateTipImage_Params params;
	params.imgPath = imgPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.AttachToRefitSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALobbyModelShowActorBP_C* ShowActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleRefitTips_C::AttachToRefitSocket(class ALobbyModelShowActorBP_C* ShowActor, int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.AttachToRefitSocket");

	AVehicleRefitTips_C_AttachToRefitSocket_Params params;
	params.ShowActor = ShowActor;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.SetRefitSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleRefitTips_C::SetRefitSlot(int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.SetRefitSlot");

	AVehicleRefitTips_C_SetRefitSlot_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.UserConstructionScript");

	AVehicleRefitTips_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.HideOutTipFrom1To0
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::HideOutTipFrom1To0()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.HideOutTipFrom1To0");

	AVehicleRefitTips_C_HideOutTipFrom1To0_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.HideTip
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::HideTip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.HideTip");

	AVehicleRefitTips_C_HideTip_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.FadeInToTransparent
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::FadeInToTransparent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.FadeInToTransparent");

	AVehicleRefitTips_C_FadeInToTransparent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleRefitTips_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.ReceiveBeginPlay");

	AVehicleRefitTips_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::FadeOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.FadeOut");

	AVehicleRefitTips_C_FadeOut_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::FadeIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.FadeIn");

	AVehicleRefitTips_C_FadeIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.HideoutTipFromTransparentTo0
// (BlueprintCallable, BlueprintEvent)

void AVehicleRefitTips_C::HideoutTipFromTransparentTo0()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.HideoutTipFromTransparentTo0");

	AVehicleRefitTips_C_HideoutTipFromTransparentTo0_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function VehicleRefitTips.VehicleRefitTips_C.ExecuteUbergraph_VehicleRefitTips
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleRefitTips_C::ExecuteUbergraph_VehicleRefitTips(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function VehicleRefitTips.VehicleRefitTips_C.ExecuteUbergraph_VehicleRefitTips");

	AVehicleRefitTips_C_ExecuteUbergraph_VehicleRefitTips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

