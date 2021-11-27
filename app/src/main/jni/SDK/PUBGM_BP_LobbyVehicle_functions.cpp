// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetHighLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FreExp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyVehicle_C::SetHighLight(float invincible, float FreExp, float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetHighLight");

	ABP_LobbyVehicle_C_SetHighLight_Params params;
	params.invincible = invincible;
	params.FreExp = FreExp;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetDefaultAvatarID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InAvatarID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_LobbyVehicle_C::GetDefaultAvatarID(int* InAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetDefaultAvatarID");

	ABP_LobbyVehicle_C_GetDefaultAvatarID_Params params;
	params.InAvatarID = InAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetDMIParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyVehicle_C::SetDMIParam(class UMaterialInstanceDynamic* Target, const struct FName& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetDMIParam");

	ABP_LobbyVehicle_C_SetDMIParam_Params params;
	params.Target = Target;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetVehicleMasterPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            VehicleSkinID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MeshBasePath                   (Parm, OutParm, ZeroConstructor)

void ABP_LobbyVehicle_C::GetVehicleMasterPath(int VehicleSkinID, struct FString* MeshBasePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetVehicleMasterPath");

	ABP_LobbyVehicle_C_GetVehicleMasterPath_Params params;
	params.VehicleSkinID = VehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MeshBasePath != nullptr)
		*MeshBasePath = params.MeshBasePath;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleItems
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::ClearAllVehicleItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleItems");

	ABP_LobbyVehicle_C_ClearAllVehicleItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar_Old
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InAvatarID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InAdvanceAvatarID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PreChangeVehicleAvatar_Old(int* InAvatarID, int* InAdvanceAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar_Old");

	ABP_LobbyVehicle_C_PreChangeVehicleAvatar_Old_Params params;
	params.InAvatarID = InAvatarID;
	params.InAdvanceAvatarID = InAdvanceAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleSlot
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVehicleSlotType*              InSlotType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PutOffVehicleSlot(EVehicleSlotType* InSlotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleSlot");

	ABP_LobbyVehicle_C_PutOffVehicleSlot_Params params;
	params.InSlotType = InSlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InModelID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PutOffVehicleItem(int* InModelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleItem");

	ABP_LobbyVehicle_C_PutOffVehicleItem_Params params;
	params.InModelID = InModelID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InModelID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ColorID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PatternID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PutOnVehicleItem(int* InModelID, int* ColorID, int* PatternID, int* ParticleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleItem");

	ABP_LobbyVehicle_C_PutOnVehicleItem_Params params;
	params.InModelID = InModelID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;
	params.ParticleID = ParticleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehicleMasterAnimBPPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InSkinID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AnimBpPath                     (Parm, OutParm, ZeroConstructor)

void ABP_LobbyVehicle_C::GetNewVehicleMasterAnimBPPath(int InSkinID, struct FString* AnimBpPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehicleMasterAnimBPPath");

	ABP_LobbyVehicle_C_GetNewVehicleMasterAnimBPPath_Params params;
	params.InSkinID = InSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimBpPath != nullptr)
		*AnimBpPath = params.AnimBpPath;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehilceMasterPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            VehicleSkinID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MeshBasePath                   (Parm, OutParm, ZeroConstructor)

void ABP_LobbyVehicle_C::GetNewVehilceMasterPath(int VehicleSkinID, struct FString* MeshBasePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehilceMasterPath");

	ABP_LobbyVehicle_C_GetNewVehilceMasterPath_Params params;
	params.VehicleSkinID = VehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MeshBasePath != nullptr)
		*MeshBasePath = params.MeshBasePath;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InAvatarID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InAdvanceAvatarID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PreChangeVehicleAvatar(int* InAvatarID, int* InAdvanceAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar");

	ABP_LobbyVehicle_C_PreChangeVehicleAvatar_Params params;
	params.InAvatarID = InAvatarID;
	params.InAdvanceAvatarID = InAdvanceAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleStyleID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::ClearAllVehicleStyleID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleStyleID");

	ABP_LobbyVehicle_C_ClearAllVehicleStyleID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleStyleID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InStyleID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PutOffVehicleStyleID(int* InStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleStyleID");

	ABP_LobbyVehicle_C_PutOffVehicleStyleID_Params params;
	params.InStyleID = InStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleStyleID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InStyleID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LobbyVehicle_C::PutOnVehicleStyleID(int* InStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleStyleID");

	ABP_LobbyVehicle_C_PutOnVehicleStyleID_Params params;
	params.InStyleID = InStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyVehicle_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.UserConstructionScript");

	ABP_LobbyVehicle_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.TrySetHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Freq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyVehicle_C::TrySetHighlight(float invincible, float Freq, float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.TrySetHighlight");

	ABP_LobbyVehicle_C_TrySetHighlight_Params params;
	params.invincible = invincible;
	params.Freq = Freq;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ExecuteUbergraph_BP_LobbyVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyVehicle_C::ExecuteUbergraph_BP_LobbyVehicle(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyVehicle.BP_LobbyVehicle_C.ExecuteUbergraph_BP_LobbyVehicle");

	ABP_LobbyVehicle_C_ExecuteUbergraph_BP_LobbyVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

