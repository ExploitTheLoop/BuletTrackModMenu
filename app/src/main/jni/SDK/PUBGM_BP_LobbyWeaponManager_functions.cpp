// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LobbyWeaponManager_C::UnEquipAllWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllWeapon");

	UBP_LobbyWeaponManager_C_UnEquipAllWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllExtraWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LobbyWeaponManager_C::UnEquipAllExtraWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipAllExtraWeapon");

	UBP_LobbyWeaponManager_C_UnEquipAllExtraWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAllAssetsLoadFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LobbyWeapon_C*       BPLobbyWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::AsyncWeaponAllAssetsLoadFinish(class ABP_LobbyWeapon_C* BPLobbyWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAllAssetsLoadFinish");

	UBP_LobbyWeaponManager_C_AsyncWeaponAllAssetsLoadFinish_Params params;
	params.BPLobbyWeapon = BPLobbyWeapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponMeshLoadFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAvatarDIYComponent*     AvatarDIYComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::AsyncWeaponMeshLoadFinish(class UAvatarDIYComponent* AvatarDIYComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponMeshLoadFinish");

	UBP_LobbyWeaponManager_C_AsyncWeaponMeshLoadFinish_Params params;
	params.AvatarDIYComponent = AvatarDIYComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAnimLoadFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraLobbyWeapon*     LobbyWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::AsyncWeaponAnimLoadFinish(class ASTExtraLobbyWeapon* LobbyWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.AsyncWeaponAnimLoadFinish");

	UBP_LobbyWeaponManager_C_AsyncWeaponAnimLoadFinish_Params params;
	params.LobbyWeapon = LobbyWeapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckWeaponNeedLODOptimize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AvatarLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsNeedLodOptimize             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::CheckWeaponNeedLODOptimize(int AvatarLevel, bool* bIsNeedLodOptimize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckWeaponNeedLODOptimize");

	UBP_LobbyWeaponManager_C_CheckWeaponNeedLODOptimize_Params params;
	params.AvatarLevel = AvatarLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsNeedLodOptimize != nullptr)
		*bIsNeedLodOptimize = params.bIsNeedLodOptimize;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckCanEquipWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canEquip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::CheckCanEquipWeapon(int resID, bool* canEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CheckCanEquipWeapon");

	UBP_LobbyWeaponManager_C_CheckCanEquipWeapon_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (canEquip != nullptr)
		*canEquip = params.canEquip;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.EquipWeaponByResId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::EquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.EquipWeaponByResId");

	UBP_LobbyWeaponManager_C_EquipWeaponByResId_Params params;
	params.resID = resID;
	params.bUse = bUse;
	params.bAsync = bAsync;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipWeaponByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::UnEquipWeaponByResId(const struct FName& SocketName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.UnEquipWeaponByResId");

	UBP_LobbyWeaponManager_C_UnEquipWeaponByResId_Params params;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetWeaponSocketNameByResId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::GetWeaponSocketNameByResId(int resID, struct FName* SocketName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetWeaponSocketNameByResId");

	UBP_LobbyWeaponManager_C_GetWeaponSocketNameByResId_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::SetWeaponVisibility(bool bHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility");

	UBP_LobbyWeaponManager_C_SetWeaponVisibility_Params params;
	params.bHide = bHide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   Handle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::CreateWeapon(int inInt, class ASTExtraWeapon** Weapon, class UBattleItemHandleBase** Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon");

	UBP_LobbyWeaponManager_C_CreateWeapon_Params params;
	params.inInt = inInt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
	if (Handle != nullptr)
		*Handle = params.Handle;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InWeaponAvatarID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBP_LobbyWeaponManager_C::GetLobbyWeaponClass(int InWeaponAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass");

	UBP_LobbyWeaponManager_C_GetLobbyWeaponClass_Params params;
	params.InWeaponAvatarID = InWeaponAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponSkinID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSync                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraWeapon* UBP_LobbyWeaponManager_C::CreateWeaponAndChangeSkin(int* WeaponSkinID, bool* bUse, bool* bSync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin");

	UBP_LobbyWeaponManager_C_CreateWeaponAndChangeSkin_Params params;
	params.WeaponSkinID = WeaponSkinID;
	params.bUse = bUse;
	params.bSync = bSync;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_LobbyWeaponManager_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ReceiveBeginPlay");

	UBP_LobbyWeaponManager_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ExecuteUbergraph_BP_LobbyWeaponManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::ExecuteUbergraph_BP_LobbyWeaponManager(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.ExecuteUbergraph_BP_LobbyWeaponManager");

	UBP_LobbyWeaponManager_C_ExecuteUbergraph_BP_LobbyWeaponManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

