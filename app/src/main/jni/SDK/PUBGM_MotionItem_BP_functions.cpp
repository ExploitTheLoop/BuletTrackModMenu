// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MotionItem_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MotionItem_BP.MotionItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMotionItem_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MotionItem_BP.MotionItem_BP_C.Construct");

	UMotionItem_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MotionItem_BP.MotionItem_BP_C.ExecuteUbergraph_MotionItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMotionItem_BP_C::ExecuteUbergraph_MotionItem_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MotionItem_BP.MotionItem_BP_C.ExecuteUbergraph_MotionItem_BP");

	UMotionItem_BP_C_ExecuteUbergraph_MotionItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

