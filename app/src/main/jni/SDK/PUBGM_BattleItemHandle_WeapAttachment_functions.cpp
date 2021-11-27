// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_WeapAttachment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReAutoEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   ACharacter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleWeaponBase_Handle_C* Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::ReAutoEquip(class ASTExtraBaseCharacter* ACharacter, class UBattleItemHandleWeaponBase_Handle_C* Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReAutoEquip");

	UBattleItemHandle_WeapAttachment_C_ReAutoEquip_Params params;
	params.ACharacter = ACharacter;
	params.Weapon = Weapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.RemoveParentAdditionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_WeapAttachment_C::RemoveParentAdditionData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.RemoveParentAdditionData");

	UBattleItemHandle_WeapAttachment_C_RemoveParentAdditionData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanDisuseToBackpackWithoutSelf
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bCanDisuse                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::CanDisuseToBackpackWithoutSelf(const struct FItemDefineID& DefineID, bool* bCanDisuse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanDisuseToBackpackWithoutSelf");

	UBattleItemHandle_WeapAttachment_C_CanDisuseToBackpackWithoutSelf_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanDisuse != nullptr)
		*bCanDisuse = params.bCanDisuse;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUseWithPackage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanUse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::CheckCanUseWithPackage(bool* bCanUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUseWithPackage");

	UBattleItemHandle_WeapAttachment_C_CheckCanUseWithPackage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanUse != nullptr)
		*bCanUse = params.bCanUse;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetCanEquipWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanSwap                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   ACharater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm, OutParm)
// bool                           HasTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeapon_C* TargetWeaponHandle             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          WeaponActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::GetCanEquipWeapon(bool bCanSwap, class ASTExtraBaseCharacter* ACharater, bool bReplace, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetCanEquipWeapon");

	UBattleItemHandle_WeapAttachment_C_GetCanEquipWeapon_Params params;
	params.bCanSwap = bCanSwap;
	params.ACharater = ACharater;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;
	if (TargetWeaponHandle != nullptr)
		*TargetWeaponHandle = params.TargetWeaponHandle;
	if (WeaponActor != nullptr)
		*WeaponActor = params.WeaponActor;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetItemBaseBySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESurviveWeaponPropSlot> Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   ACharacter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemHandleBase*         NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::GetItemBaseBySlot(TEnumAsByte<enum ESurviveWeaponPropSlot> Slot, class ASTExtraBaseCharacter* ACharacter, class UItemHandleBase** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetItemBaseBySlot");

	UBattleItemHandle_WeapAttachment_C_GetItemBaseBySlot_Params params;
	params.Slot = Slot;
	params.ACharacter = ACharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckTargetValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemHandleBase*         ItemHandleBase                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm, OutParm)
// bool                           HasTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeapon_C* TargetWeaponHandle             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          WeaponActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::CheckTargetValid(class UItemHandleBase* ItemHandleBase, bool CanSwap, bool bReplace, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckTargetValid");

	UBattleItemHandle_WeapAttachment_C_CheckTargetValid_Params params;
	params.ItemHandleBase = ItemHandleBase;
	params.CanSwap = CanSwap;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;
	if (TargetWeaponHandle != nullptr)
		*TargetWeaponHandle = params.TargetWeaponHandle;
	if (WeaponActor != nullptr)
		*WeaponActor = params.WeaponActor;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachment_C::CheckCanUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CheckCanUse");

	UBattleItemHandle_WeapAttachment_C_CheckCanUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReplaceAttach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandle_MainWeapon_C* TWeaponItemHandle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::ReplaceAttach(class UBattleItemHandle_MainWeapon_C* TWeaponItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReplaceAttach");

	UBattleItemHandle_WeapAttachment_C_ReplaceAttach_Params params;
	params.TWeaponItemHandle = TWeaponItemHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanSwap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackWeaponAttachHandle* SpecificID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::CanSwap(class UBackpackWeaponAttachHandle* SpecificID, bool* Can)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CanSwap");

	UBattleItemHandle_WeapAttachment_C_CanSwap_Params params;
	params.SpecificID = SpecificID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.FilterWeaponItemHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandleBase*   InputItemHandle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPickupDirectlyEquip          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm, OutParm)
// bool                           HasTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeapon_C* TargetWeaponHandle             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          WeaponActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::FilterWeaponItemHandle(class UBattleItemHandleBase* InputItemHandle, bool IsPickupDirectlyEquip, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeapon_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.FilterWeaponItemHandle");

	UBattleItemHandle_WeapAttachment_C_FilterWeaponItemHandle_Params params;
	params.InputItemHandle = InputItemHandle;
	params.IsPickupDirectlyEquip = IsPickupDirectlyEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;
	if (TargetWeaponHandle != nullptr)
		*TargetWeaponHandle = params.TargetWeaponHandle;
	if (WeaponActor != nullptr)
		*WeaponActor = params.WeaponActor;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExtractItemData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandle_WeapAttachment_C::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExtractItemData");

	UBattleItemHandle_WeapAttachment_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetWorldInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandle_WeapAttachment_C::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.GetWorldInternal");

	UBattleItemHandle_WeapAttachment_C_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::CreateWrapperOnGround(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.CreateWrapperOnGround");

	UBattleItemHandle_WeapAttachment_C_CreateWrapperOnGround_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDrop
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachment_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDrop");

	UBattleItemHandle_WeapAttachment_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandlePickup
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  pickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachment_C::HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandlePickup");

	UBattleItemHandle_WeapAttachment_C_HandlePickup_Params params;
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

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDisuse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachment_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleDisuse");

	UBattleItemHandle_WeapAttachment_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachment_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.HandleUse");

	UBattleItemHandle_WeapAttachment_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReturnWeaponAdditionalBulletsToBackpack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon**    Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BulletNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::ReturnWeaponAdditionalBulletsToBackpack(class ASTExtraShootWeapon** Weapon, int* BulletNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ReturnWeaponAdditionalBulletsToBackpack");

	UBattleItemHandle_WeapAttachment_C_ReturnWeaponAdditionalBulletsToBackpack_Params params;
	params.Weapon = Weapon;
	params.BulletNum = BulletNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExecuteUbergraph_BattleItemHandle_WeapAttachment
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachment_C::ExecuteUbergraph_BattleItemHandle_WeapAttachment(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachment.BattleItemHandle_WeapAttachment_C.ExecuteUbergraph_BattleItemHandle_WeapAttachment");

	UBattleItemHandle_WeapAttachment_C_ExecuteUbergraph_BattleItemHandle_WeapAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

