// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.RequestWeaponDIYData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerUID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DIYPlanID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyWeapon_C::RequestWeaponDIYData(const struct FString& PlayerUID, int WeaponAvatarID, int DIYPlanID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.RequestWeaponDIYData");

	ABP_LobbyWeapon_C_RequestWeaponDIYData_Params params;
	params.PlayerUID = PlayerUID;
	params.WeaponAvatarID = WeaponAvatarID;
	params.DIYPlanID = DIYPlanID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.EquipWeaponPandentByPandentId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pendantID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponPendantSocketType       PendantSocketType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyWeapon_C::EquipWeaponPandentByPandentId(int pendantID, EWeaponPendantSocketType PendantSocketType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.EquipWeaponPandentByPandentId");

	ABP_LobbyWeapon_C_EquipWeaponPandentByPandentId_Params params;
	params.pendantID = pendantID;
	params.PendantSocketType = PendantSocketType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponAnimDone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyWeapon_C::OnAsyncLoadLobbyWeaponAnimDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponAnimDone");

	ABP_LobbyWeapon_C_OnAsyncLoadLobbyWeaponAnimDone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.CheckWeaponAssetsAllLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyWeapon_C::CheckWeaponAssetsAllLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.CheckWeaponAssetsAllLoaded");

	ABP_LobbyWeapon_C_CheckWeaponAssetsAllLoaded_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ResetWeaponLoadedStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyWeapon_C::ResetWeaponLoadedStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.ResetWeaponLoadedStatus");

	ABP_LobbyWeapon_C_ResetWeaponLoadedStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponMeshDone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyWeapon_C::OnAsyncLoadLobbyWeaponMeshDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnAsyncLoadLobbyWeaponMeshDone");

	ABP_LobbyWeapon_C_OnAsyncLoadLobbyWeaponMeshDone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SideType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_LobbyWeapon_C::GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby(int* Level, int* SideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby");

	ABP_LobbyWeapon_C_GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby_Params params;
	params.Level = Level;
	params.SideType = SideType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.InitMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandleBase*   Handle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyWeapon_C::InitMesh(class UBattleItemHandleBase* Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.InitMesh");

	ABP_LobbyWeapon_C_InitMesh_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyWeapon_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.UserConstructionScript");

	ABP_LobbyWeapon_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LobbyWeapon_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.ReceiveBeginPlay");

	ABP_LobbyWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.ExecuteUbergraph_BP_LobbyWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyWeapon_C::ExecuteUbergraph_BP_LobbyWeapon(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.ExecuteUbergraph_BP_LobbyWeapon");

	ABP_LobbyWeapon_C_ExecuteUbergraph_BP_LobbyWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnWeaponAllAssetsLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LobbyWeapon_C*       BPLobbyWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyWeapon_C::OnWeaponAllAssetsLoaded__DelegateSignature(class ABP_LobbyWeapon_C* BPLobbyWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeapon.BP_LobbyWeapon_C.OnWeaponAllAssetsLoaded__DelegateSignature");

	ABP_LobbyWeapon_C_OnWeaponAllAssetsLoaded__DelegateSignature_Params params;
	params.BPLobbyWeapon = BPLobbyWeapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

