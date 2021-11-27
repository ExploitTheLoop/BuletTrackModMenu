// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Edit_Car_Item_3D_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Left_Edit_Car_Item_3D.Lobby_Left_Edit_Car_Item_3D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobby_Left_Edit_Car_Item_3D_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Left_Edit_Car_Item_3D.Lobby_Left_Edit_Car_Item_3D_C.UserConstructionScript");

	ALobby_Left_Edit_Car_Item_3D_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

