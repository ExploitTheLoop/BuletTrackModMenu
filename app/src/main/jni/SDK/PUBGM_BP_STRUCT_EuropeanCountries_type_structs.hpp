#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_EuropeanCountries_type.BP_STRUCT_EuropeanCountries_type
// 0x0024
struct FBP_STRUCT_EuropeanCountries_type
{
	int                                                CountryID_0_4F71D791430F593DC49F7C804FAC3346;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CountryName_1_547BDAD64F027372378DC289A6551233;           // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isEEU_2_7C32719E4567FA05D6B1F0ABF584AA20;                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FString                                     CountryCode_3_883C293646DF14E51A2D6C9FCB957783;           // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AreaCode_4_68FEE1401D27555105AC49450CE33C15;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

