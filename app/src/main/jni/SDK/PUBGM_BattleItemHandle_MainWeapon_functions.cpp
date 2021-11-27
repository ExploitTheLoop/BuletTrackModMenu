// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_MainWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachmentsInArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBattleItemHandleBase*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bReplaceUse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachmentsInArray");

	UBattleItemHandle_MainWeapon_C_AutoEquipAttachmentsInArray_Params params;
	params.bReplaceUse = bReplaceUse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnMultiBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WantReturnCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::ReturnMultiBullet(int WantReturnCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnMultiBullet");

	UBattleItemHandle_MainWeapon_C_ReturnMultiBullet_Params params;
	params.WantReturnCount = WantReturnCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWrapperClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WrapperClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetWrapperClass(bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWrapperClass");

	UBattleItemHandle_MainWeapon_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetBulletWrapperClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BulletID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WrapperClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetBulletWrapperClass");

	UBattleItemHandle_MainWeapon_C_GetBulletWrapperClass_Params params;
	params.BulletID = BulletID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWeaponClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WeaponClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetWeaponClass(bool* found, class UClass** WeaponClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWeaponClass");

	UBattleItemHandle_MainWeapon_C_GetWeaponClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WeaponClass != nullptr)
		*WeaponClass = params.WeaponClass;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateVirtualPendantItemHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBattleItemHandleBase*   ItemHandle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateVirtualPendantItemHandle");

	UBattleItemHandle_MainWeapon_C_CreateVirtualPendantItemHandle_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemHandle != nullptr)
		*ItemHandle = params.ItemHandle;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipPendant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_MainWeapon_C::AutoEquipPendant()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipPendant");

	UBattleItemHandle_MainWeapon_C_AutoEquipPendant_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.EquipPendant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pendantID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::EquipPendant(int pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.EquipPendant");

	UBattleItemHandle_MainWeapon_C_EquipPendant_Params params;
	params.pendantID = pendantID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CheckPendantCanAttach
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAttach                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::CheckPendantCanAttach(bool* CanAttach)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CheckPendantCanAttach");

	UBattleItemHandle_MainWeapon_C_CheckPendantCanAttach_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CanAttach != nullptr)
		*CanAttach = params.CanAttach;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetOwingtWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraWeapon*          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetOwingtWeapon");

	UBattleItemHandle_MainWeapon_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_MainWeapon_C::AutoEquipAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachments");

	UBattleItemHandle_MainWeapon_C_AutoEquipAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::ReturnBullets(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullets");

	UBattleItemHandle_MainWeapon_C_ReturnBullets_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.UpdateEquipedAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSocketType    WeapAttachSockType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.UpdateEquipedAttach");

	UBattleItemHandle_MainWeapon_C_UpdateEquipedAttach_Params params;
	params.WeapAttachSockType = WeapAttachSockType;
	params.WeapAttachItemHandle = WeapAttachItemHandle;
	params.IsEquip = IsEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalHandleDisuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::LocalHandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalHandleDisuse");

	UBattleItemHandle_MainWeapon_C_LocalHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_MainWeapon_C::CreateWrapperOnGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateWrapperOnGround");

	UBattleItemHandle_MainWeapon_C_CreateWrapperOnGround_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableTargetLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_MainWeapon_C_GetAvailableTargetLogicSocketName_Params params;
	params.TargetSocket = TargetSocket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableInstantLogicSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_MainWeapon_C_GetAvailableInstantLogicSocketName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.JudgeHasTargetAttachmentSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttachBPID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    AttachType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackWeaponAttachHandle* AttachHandle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AttachResID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canEquip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasOcupied                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanReplace                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* canEquip, bool* HasOcupied, bool* CanReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.JudgeHasTargetAttachmentSlot");

	UBattleItemHandle_MainWeapon_C_JudgeHasTargetAttachmentSlot_Params params;
	params.AttachBPID = AttachBPID;
	params.AttachType = AttachType;
	params.AttachHandle = AttachHandle;
	params.CanSwap = CanSwap;
	params.AttachResID = AttachResID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (canEquip != nullptr)
		*canEquip = params.canEquip;
	if (HasOcupied != nullptr)
		*HasOcupied = params.HasOcupied;
	if (CanReplace != nullptr)
		*CanReplace = params.CanReplace;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDisuse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeapon_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDisuse");

	UBattleItemHandle_MainWeapon_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeapon_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleUse");

	UBattleItemHandle_MainWeapon_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDrop
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeapon_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDrop");

	UBattleItemHandle_MainWeapon_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandlePickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  pickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeapon_C::HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandlePickup");

	UBattleItemHandle_MainWeapon_C_HandlePickup_Params params;
	params.pickupInfo = pickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnAllBullets
// (Event, Public, BlueprintEvent)

void UBattleItemHandle_MainWeapon_C::ReturnAllBullets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnAllBullets");

	UBattleItemHandle_MainWeapon_C_ReturnAllBullets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalAutoEquipAttachments
// (Event, Public, BlueprintEvent)

void UBattleItemHandle_MainWeapon_C::LocalAutoEquipAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalAutoEquipAttachments");

	UBattleItemHandle_MainWeapon_C_LocalAutoEquipAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ExecuteUbergraph_BattleItemHandle_MainWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeapon_C::ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ExecuteUbergraph_BattleItemHandle_MainWeapon");

	UBattleItemHandle_MainWeapon_C_ExecuteUbergraph_BattleItemHandle_MainWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

