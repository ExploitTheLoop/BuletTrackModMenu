#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_PakInfoTable_type.BP_STRUCT_PakInfoTable_type
// 0x0048
struct FBP_STRUCT_PakInfoTable_type
{
	struct FString                                     PakDesc_0_6E91B0407A6E420F2F3B970B0B197D03;               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PakID_1_2787F3C01109F2833D0E5F01019B1904;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PakName_2_2871B0C036D9F5B52F2039E30B1A97A5;               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RewardDesc_4_599F8280689362F004DC89FD0591F623;            // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IconPath_5_4AA40F004CDDD4F255A82072004E7098;              // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HaveReward_6_2F7F23C05893D46B3BEC13810794E624;            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsShow_7_72DD80C02601BBC33710FE7109DEF477;                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Videos_9_2559C4007F047F7C51C1B5670919C773;                // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

