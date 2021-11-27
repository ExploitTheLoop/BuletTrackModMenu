#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_GlobalChatvoiceDownloadData.BP_STRUCT_GlobalChatvoiceDownloadData
// 0x0030
struct FBP_STRUCT_GlobalChatvoiceDownloadData
{
	struct FString                                     fileId_0_27A7E9814AFBC6BF898DD088626C4C44;                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                msgLength_1_AA0B7A75470EBDA4A1B263A9DF37786C;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     msgSenderGID_2_A17583F444CD82A19E60DBB86D8EBDD7;          // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     msgContextGID_3_4DC6B36A4ADBF5BA22228B9262D45E49;         // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                msgId_4_6367BF0A434687426F510F81D8518471;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgChannel_5_B110640C4860EF195694518E5BD4BA4E;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

