#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_RankSmall_Integral_Name_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankText
struct URankSmall_Integral_Name_UIBP_C_SetRankText_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 ShadowColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                              FontInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.SetRankIntegral
struct URankSmall_Integral_Name_UIBP_C_SetRankIntegral_Params
{
	struct FBP_STRUCT_RankIntegralLevel_type           RankIntegralLevel_Info;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RankSmall_Integral_Name_UIBP.RankSmall_Integral_Name_UIBP_C.ExecuteUbergraph_RankSmall_Integral_Name_UIBP
struct URankSmall_Integral_Name_UIBP_C_ExecuteUbergraph_RankSmall_Integral_Name_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

