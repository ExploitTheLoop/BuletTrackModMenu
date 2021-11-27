#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_BTMode_type.BP_STRUCT_BTMode_type
// 0x0092
struct FBP_STRUCT_BTMode_type
{
	bool                                               ReplenishMember_0_56C8BE01491A3980077266B5765FBB7E;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MaxTime_1_7232641F4B0A92ACB0F846B21C9F5399;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResId_2_5E45EAAC460670A83C4720B781616C8C;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxMember_3_A42196714762C028A8C5A3ABD14F0CB4;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTeamMember_4_5D4F9D62477EF4C88F5413AA30877780;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BTMode_5_77E060BC473F3E6D0910319C6BE861F7;                // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GameModeName_6_A6B631D345B9E565C6C3CDBB3C52A6DD;          // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ModeName_7_9EA67950438327CE228344AACFA0D20F;              // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MapShowId_8_4B52A74022232EBB4EC8398C0B4410F4;             // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MapID_9_528FF7006DCEED66745B6B750D7B0A04;                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     NumberShowId_10_72897A006C2DA3E63FE3A520004BBEE4;         // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsFpp_11_28EBE4C07A2817A57B12AE730D78F3A0;                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                AirlineCoefficient_14_44EF75002DA1A0AA4D16A02B0F6BE0A4;   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usedSimulation_15_252541C01A1F24B71316F8F10B7CE55E;       // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableVehileInReady_16_003D404008320EB32528116E084F1AE9;  // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasFlyState_17_7E891E403FF0F7954D4AD70E0E8CA185;          // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	struct FString                                     SubMod_18_5850BEC038E53B7F3DDA5A5007239F84;               // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SubModeImagePath_19_29169400797E41525A15F52D0857D508;     // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ModeFightType_20_09D132801A35CAA60236FD43012E01E5;        // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModType_22_01121CC03C8DF8C917FB0E7C0CD77D15;              // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               EnableParachutingVehicle_24_63B58B80279318843DBABCF40F500D85;// 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableVehicleInBornIsland_25_31C916C0568A4D431872FDEC049D0734;// 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	int                                                SpWordsToShowID_26_379A3D006790C40466944BDF002CA154;      // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkipRankingSettlement_27_06AC4DC03D97876F5B69CD0109E3B154;// 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCarryBack_28_495ADA805298D3DA13323D9700F27ADB;      // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

