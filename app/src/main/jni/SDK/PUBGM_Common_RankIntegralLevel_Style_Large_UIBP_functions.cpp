// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_RankIntegralLevel_Style_Large_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetRankInteralJaguar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Large_UIBP_C::SetRankInteralJaguar(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetRankInteralJaguar");

	UCommon_RankIntegralLevel_Style_Large_UIBP_C_SetRankInteralJaguar_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetArenaRankInteral
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Large_UIBP_C::SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetArenaRankInteral");

	UCommon_RankIntegralLevel_Style_Large_UIBP_C_SetArenaRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetRankInteral
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Large_UIBP_C::SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetRankInteral");

	UCommon_RankIntegralLevel_Style_Large_UIBP_C_SetRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

