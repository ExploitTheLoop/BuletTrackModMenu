// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalUIEventDispatcher_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PutonID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIEventDispatcher_BP_C::WardrobePutDownEvent__DelegateSignature(int PutonID, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature");

	UGlobalUIEventDispatcher_BP_C_WardrobePutDownEvent__DelegateSignature_Params params;
	params.PutonID = PutonID;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

