// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Title_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Title_UIBP.Title_UIBP_C.__SetLbsGlobalAliasInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RankID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_UIBP_C::__SetLbsGlobalAliasInfo(int RankID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.__SetLbsGlobalAliasInfo");

	UTitle_UIBP_C___SetLbsGlobalAliasInfo_Params params;
	params.RankID = RankID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.SetAliasInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Available_len                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RankID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_UIBP_C::SetAliasInfo(int ID, const struct FString& Title, const struct FString& Nation, float Available_len, int RankID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.SetAliasInfo");

	UTitle_UIBP_C_SetAliasInfo_Params params;
	params.ID = ID;
	params.Title = Title;
	params.Nation = Nation;
	params.Available_len = Available_len;
	params.RankID = RankID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.__SetImageWithsSpriteRes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_UIBP_C::__SetImageWithsSpriteRes(const struct FString& ResPath, class UImage* Image)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.__SetImageWithsSpriteRes");

	UTitle_UIBP_C___SetImageWithsSpriteRes_Params params;
	params.ResPath = ResPath;
	params.Image = Image;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.__GetNationInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UTitle_UIBP_C::__GetNationInfo(const struct FString& NationCode, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.__GetNationInfo");

	UTitle_UIBP_C___GetNationInfo_Params params;
	params.NationCode = NationCode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}

// Function Title_UIBP.Title_UIBP_C.SetAliasData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PathUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          availableLen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RankID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_UIBP_C::SetAliasData(const struct FString& Nation, int Quality, const struct FString& PathUrl, const struct FString& Title, float availableLen, int RankID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.SetAliasData");

	UTitle_UIBP_C_SetAliasData_Params params;
	params.Nation = Nation;
	params.Quality = Quality;
	params.PathUrl = PathUrl;
	params.Title = Title;
	params.availableLen = availableLen;
	params.RankID = RankID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.HideAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTitle_UIBP_C::HideAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.HideAll");

	UTitle_UIBP_C_HideAll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.DelayCheckAliasLength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AvaliableLen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTitle_UIBP_C::DelayCheckAliasLength(float AvaliableLen, const struct FString& Title)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.DelayCheckAliasLength");

	UTitle_UIBP_C_DelayCheckAliasLength_Params params;
	params.AvaliableLen = AvaliableLen;
	params.Title = Title;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Title_UIBP.Title_UIBP_C.ExecuteUbergraph_Title_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_UIBP_C::ExecuteUbergraph_Title_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Title_UIBP.Title_UIBP_C.ExecuteUbergraph_Title_UIBP");

	UTitle_UIBP_C_ExecuteUbergraph_Title_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

