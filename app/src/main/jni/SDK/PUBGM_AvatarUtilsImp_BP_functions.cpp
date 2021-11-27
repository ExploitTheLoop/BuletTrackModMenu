// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarUtilsImp_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetAdjustWeaponBPID_Lobby(int* WeaponId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby");

	UAvatarUtilsImp_BP_C_GetAdjustWeaponBPID_Lobby_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarSuits
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    OutClothSuits                  (Parm, OutParm, ZeroConstructor)

void UAvatarUtilsImp_BP_C::GetClothAvatarSuits(int* gender, struct FItemDefineID* ItemDefineID, TArray<int>* OutClothSuits)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarSuits");

	UAvatarUtilsImp_BP_C_GetClothAvatarSuits_Params params;
	params.gender = gender;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;
	if (OutClothSuits != nullptr)
		*OutClothSuits = params.OutClothSuits;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleAvatarTemplateID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetVehicleAvatarTemplateID(struct FItemDefineID* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleAvatarTemplateID");

	UAvatarUtilsImp_BP_C_GetVehicleAvatarTemplateID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarTemplateID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetClothAvatarTemplateID(struct FItemDefineID* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarTemplateID");

	UAvatarUtilsImp_BP_C_GetClothAvatarTemplateID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPIDByResID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetBPIDByResID(int* resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPIDByResID");

	UAvatarUtilsImp_BP_C_GetBPIDByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutStyleIDList                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAvatarUtilsImp_BP_C::GetVehicleDefaultStyleID(int* InVehicleSkinID, TArray<int>* OutStyleIDList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID");

	UAvatarUtilsImp_BP_C_GetVehicleDefaultStyleID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutStyleIDList != nullptr)
		*OutStyleIDList = params.OutStyleIDList;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarUtilsImp_BP_C::GetVehicleBPPathBySkinID(int* InVehicleSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID");

	UAvatarUtilsImp_BP_C_GetVehicleBPPathBySkinID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetVehicleShapeBySkinID(int* InVehicleSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID");

	UAvatarUtilsImp_BP_C_GetVehicleShapeBySkinID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TypeSpecificID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BPTableName                    (Parm, OutParm, ZeroConstructor)
// int                            SpecificID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAvatarUtilsImp_BP_C::GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName, int* SpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName");

	UAvatarUtilsImp_BP_C_GetBPTableName_Params params;
	params.Type = Type;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPTableName != nullptr)
		*BPTableName = params.BPTableName;
	if (SpecificID != nullptr)
		*SpecificID = params.SpecificID;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.ConstructAvatarDataFromTable
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           itemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TemplateID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAvatarTableData        OutAvatarTableData             (Parm, OutParm)

void UAvatarUtilsImp_BP_C::ConstructAvatarDataFromTable(int* itemType, int* TemplateID, struct FAvatarTableData* OutAvatarTableData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.ConstructAvatarDataFromTable");

	UAvatarUtilsImp_BP_C_ConstructAvatarDataFromTable_Params params;
	params.itemType = itemType;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAvatarTableData != nullptr)
		*OutAvatarTableData = params.OutAvatarTableData;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UAvatarUtilsImp_BP_C::CreateAvatarHandle(struct FItemDefineID* DefineID, class UObject** Outer, bool* bLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle");

	UAvatarUtilsImp_BP_C_CreateAvatarHandle_Params params;
	params.DefineID = DefineID;
	params.Outer = Outer;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarUtilsImp_BP_C::GetAvatarHandlePath(struct FItemDefineID* DefineID, bool* bLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath");

	UAvatarUtilsImp_BP_C_GetAvatarHandlePath_Params params;
	params.DefineID = DefineID;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

