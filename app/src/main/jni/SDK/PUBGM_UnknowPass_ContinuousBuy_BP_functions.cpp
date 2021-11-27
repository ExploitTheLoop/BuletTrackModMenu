// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UnknowPass_ContinuousBuy_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.HideFX
// (Public, BlueprintCallable, BlueprintEvent)

void UUnknowPass_ContinuousBuy_BP_C::HideFX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.HideFX");

	UUnknowPass_ContinuousBuy_BP_C_HideFX_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetEliteImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isElite                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnknowPass_ContinuousBuy_BP_C::SetEliteImage(int SeasonID, int Level, int Value, bool isElite)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetEliteImage");

	UUnknowPass_ContinuousBuy_BP_C_SetEliteImage_Params params;
	params.SeasonID = SeasonID;
	params.Level = Level;
	params.Value = Value;
	params.isElite = isElite;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isElite                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Online                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnknowPass_ContinuousBuy_BP_C::SetData(int SeasonID, int Level, bool isElite, int Online, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetData");

	UUnknowPass_ContinuousBuy_BP_C_SetData_Params params;
	params.SeasonID = SeasonID;
	params.Level = Level;
	params.isElite = isElite;
	params.Online = Online;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUnknowPass_ContinuousBuy_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.Construct");

	UUnknowPass_ContinuousBuy_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.ExecuteUbergraph_UnknowPass_ContinuousBuy_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnknowPass_ContinuousBuy_BP_C::ExecuteUbergraph_UnknowPass_ContinuousBuy_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.ExecuteUbergraph_UnknowPass_ContinuousBuy_BP");

	UUnknowPass_ContinuousBuy_BP_C_ExecuteUbergraph_UnknowPass_ContinuousBuy_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

