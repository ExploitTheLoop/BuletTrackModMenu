// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Mid_Banner_Dot_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelect                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_Banner_Dot_Item_C::SetData(bool bSelect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C.SetData");

	ULobby_Mid_Banner_Dot_Item_C_SetData_Params params;
	params.bSelect = bSelect;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

