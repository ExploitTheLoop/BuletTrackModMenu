#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_RankSmall_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RankSmall_Interface.RankSmall_Interface_C.SetRankText
struct URankSmall_Interface_C_SetRankText_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 ShadowColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                              FontInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RankSmall_Interface.RankSmall_Interface_C.SetRankIntegral
struct URankSmall_Interface_C_SetRankIntegral_Params
{
	struct FBP_STRUCT_RankIntegralLevel_type           RankIntegralLevel_Info;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

