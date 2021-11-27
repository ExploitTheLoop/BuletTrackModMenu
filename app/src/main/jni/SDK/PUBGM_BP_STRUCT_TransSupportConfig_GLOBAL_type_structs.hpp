#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_TransSupportConfig_GLOBAL_type.BP_STRUCT_TransSupportConfig_GLOBAL_type
// 0x002C
struct FBP_STRUCT_TransSupportConfig_GLOBAL_type
{
	int                                                languageID_0_1D9BF4801A0CAF180454007A0E59BFB4;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     displayName_1_7B233E0045C681C6393652C80C537045;           // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     abbreviation_2_7270DDC045E369B7531E4D2001C2187E;          // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isSupported_3_297FC8C037F3503F7D952DE609923274;           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FString                                     languageCode_4_0C60B000517E13D413D2E28809C00BF5;          // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

