// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Main_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.CheckAdaption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAdapt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Main_UIBP_C::CheckAdaption(bool* bAdapt, float* Width, float* Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.CheckAdaption");

	ULobby_Main_UIBP_C_CheckAdaption_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bAdapt != nullptr)
		*bAdapt = params.bAdapt;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.GetAdaptWidthHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          adaptWidth                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          adaptHeight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Main_UIBP_C::GetAdaptWidthHeight(float Width, float Height, float* adaptWidth, float* adaptHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.GetAdaptWidthHeight");

	ULobby_Main_UIBP_C_GetAdaptWidthHeight_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (adaptWidth != nullptr)
		*adaptWidth = params.adaptWidth;
	if (adaptHeight != nullptr)
		*adaptHeight = params.adaptHeight;
}

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Main_UIBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Tick");

	ULobby_Main_UIBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobby_Main_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.Construct");

	ULobby_Main_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.ExecuteUbergraph_Lobby_Main_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Main_UIBP_C::ExecuteUbergraph_Lobby_Main_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Main_UIBP.Lobby_Main_UIBP_C.ExecuteUbergraph_Lobby_Main_UIBP");

	ULobby_Main_UIBP_C_ExecuteUbergraph_Lobby_Main_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

