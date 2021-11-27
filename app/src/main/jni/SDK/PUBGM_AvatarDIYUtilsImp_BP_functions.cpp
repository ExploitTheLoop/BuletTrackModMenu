// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarDIYUtilsImp_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponAttachmentDIYAvatarItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InWeaponAttachmentID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAvatarDIYUtilsImp_BP_C::IsWeaponAttachmentDIYAvatarItem(int* InWeaponAttachmentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponAttachmentDIYAvatarItem");

	UAvatarDIYUtilsImp_BP_C_IsWeaponAttachmentDIYAvatarItem_Params params;
	params.InWeaponAttachmentID = InWeaponAttachmentID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponDIYAvatarItem
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InWeaponID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAvatarDIYUtilsImp_BP_C::IsWeaponDIYAvatarItem(int* InWeaponID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponDIYAvatarItem");

	UAvatarDIYUtilsImp_BP_C_IsWeaponDIYAvatarItem_Params params;
	params.InWeaponID = InWeaponID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYMatParam
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TextureID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDIYMatParam            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDIYMatParam UAvatarDIYUtilsImp_BP_C::GetDIYMatParam(int* TextureID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYMatParam");

	UAvatarDIYUtilsImp_BP_C_GetDIYMatParam_Params params;
	params.TextureID = TextureID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBaseColorString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ColorID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarDIYUtilsImp_BP_C::GetDIYBaseColorString(int* ColorID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBaseColorString");

	UAvatarDIYUtilsImp_BP_C_GetDIYBaseColorString_Params params;
	params.ColorID = ColorID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBasePatternPath
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PatternID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarDIYUtilsImp_BP_C::GetDIYBasePatternPath(int* PatternID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBasePatternPath");

	UAvatarDIYUtilsImp_BP_C_GetDIYBasePatternPath_Params params;
	params.PatternID = PatternID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

