// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_camera_manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_camera_manager.bp_camera_manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_camera_manager_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_camera_manager.bp_camera_manager_C.UserConstructionScript");

	Abp_camera_manager_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

