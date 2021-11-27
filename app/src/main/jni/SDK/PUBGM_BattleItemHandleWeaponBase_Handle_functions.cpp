// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandleWeaponBase_Handle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetBulletNumSaveToWrapper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::GetBulletNumSaveToWrapper(int* Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetBulletNumSaveToWrapper");

	UBattleItemHandleWeaponBase_Handle_C_GetBulletNumSaveToWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FBattleItemAdditionalData> InAdditionalData               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBattleItemHandleWeaponBase_Handle_C::ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalData");

	UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAdditionalData != nullptr)
		*InAdditionalData = params.InAdditionalData;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalDataToWrapper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickUpWrapperActor*     PickUpWrapper                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalDataToWrapper");

	UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalDataToWrapper_Params params;
	params.PickUpWrapper = PickUpWrapper;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWeaponClassFromTable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WeaponClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::GetWeaponClassFromTable(bool* found, class UClass** WeaponClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWeaponClassFromTable");

	UBattleItemHandleWeaponBase_Handle_C_GetWeaponClassFromTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WeaponClass != nullptr)
		*WeaponClass = params.WeaponClass;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.EnableWeaponAttachmentBindDropToWeaponWrapper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.EnableWeaponAttachmentBindDropToWeaponWrapper");

	UBattleItemHandleWeaponBase_Handle_C_EnableWeaponAttachmentBindDropToWeaponWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ParseAdditionalData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemPickupInfo   pickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleItemHandleWeaponBase_Handle_C::ParseAdditionalData(const struct FBattleItemPickupInfo& pickupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ParseAdditionalData");

	UBattleItemHandleWeaponBase_Handle_C_ParseAdditionalData_Params params;
	params.pickupInfo = pickupInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetOwingtWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraWeapon*          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetOwingtWeapon");

	UBattleItemHandleWeaponBase_Handle_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.SpawnWrapperOnGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WrapperClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRandomLoc                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           InDefineID                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APickUpWrapperActor*     TargetWrapper                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleWeaponBase_Handle_C::SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.SpawnWrapperOnGround");

	UBattleItemHandleWeaponBase_Handle_C_SpawnWrapperOnGround_Params params;
	params.WrapperClass = WrapperClass;
	params.bUseRandomLoc = bUseRandomLoc;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TargetWrapper != nullptr)
		*TargetWrapper = params.TargetWrapper;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWorldInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleWeaponBase_Handle_C::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWorldInternal");

	UBattleItemHandleWeaponBase_Handle_C_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDisuse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleWeaponBase_Handle_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDisuse");

	UBattleItemHandleWeaponBase_Handle_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleWeaponBase_Handle_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleUse");

	UBattleItemHandleWeaponBase_Handle_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDrop
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleWeaponBase_Handle_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDrop");

	UBattleItemHandleWeaponBase_Handle_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandlePickup
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  pickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleWeaponBase_Handle_C::HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandlePickup");

	UBattleItemHandleWeaponBase_Handle_C_HandlePickup_Params params;
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

// Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ExtractItemData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleWeaponBase_Handle_C::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ExtractItemData");

	UBattleItemHandleWeaponBase_Handle_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

