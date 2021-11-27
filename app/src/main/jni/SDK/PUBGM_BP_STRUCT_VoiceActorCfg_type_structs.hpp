#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_VoiceActorCfg_type.BP_STRUCT_VoiceActorCfg_type
// 0x0058
struct FBP_STRUCT_VoiceActorCfg_type
{
	int                                                ActorItemID_1_7EA64A805D4CF7C83F9ED7C20956DD34;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActorID_2_66EEA6C00EC097255E83F50D0C7CE884;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActorName_5_084563C0289004B337AECB5D0CE91C45;             // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IsShow_4_5FD5FC807DD5DDEA1A7B8E0106B58787;                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsShowJP_7_264263001934747024EBA4C105878D40;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsShowKR_8_554943C0790E5DDB24EBA4E605878EB2;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SortKey_9_023E1980778A370A5BD689D703B81F89;               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsShowOther_10_07A39D0000338BAE43AF48D808EDF6B2;          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsUnLock_11_5BD327406959D86F0700649705BBD32B;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayInGlobal_12_14DF9BC04FFBCB15583BB67E0769332C;       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowOnlyUnlocked_13_57763240781486F56DF002AB0BE738F4;   // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               notShowInOtherRegion_14_25A049000CE0A9141E395268023C6F2E; // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FString                                     OpenTime_15_14046D8013EB228646C4CC690BBB4AE5;             // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BankDepend_16_1453384006553C13591DBA5107495114;           // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BankName_17_72DF248073CEC0563E7F45210B58A305;             // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IsShowIN_18_773B8240395A8B0524EBA52005878D6E;             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

