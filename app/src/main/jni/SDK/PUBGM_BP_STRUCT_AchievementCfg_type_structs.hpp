#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_AchievementCfg_type.BP_STRUCT_AchievementCfg_type
// 0x00F0
struct FBP_STRUCT_AchievementCfg_type
{
	int                                                GroupID_0_4F922A4044C2DC6979A00278059C47F4;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID_1_7351E7006854F6DA5A56C5E300A83264;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score_2_031022C01413878178E803610332AC05;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Conditions_3_7947CA4006B92CDF326163050338D4B3;            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PreID_4_036B90C03CD25507215EAE0A033C8354;                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name_6_648064002AD77CC64EDFFC050833F895;                  // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ShareFlag_7_0188BF0072A7DCF82A7E2432020B0097;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc_8_2AA0638048DCB1804EDA334B08321C33;                  // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ImgUrl_9_23FCB7C0657CBE9F0E739322025364BC;                // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BigImgUrl_10_35D63C4057FBCD336D04AF7B0180EF7C;            // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ShowType_11_2B7F348001E5E2DC6F13FEDF0FC49345;             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardNum_12_2C130B8036D732E27947FE4B0D20C78D;             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardID_13_34E0A2C07EF201FD123719F003D20BF4;              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MultiLvGroupID_14_4AFB3D8046E4BA8E3A0AF81A02243484;       // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardNum2_15_7C7758002CAD6D841E16376F020C79D2;            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardID2_16_696D4F40693FEE0579461D5E0D20BF42;             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     MultiLvGroupTitle_17_530A7AC0068E99D523CA185503602965;    // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MultiLvGroupNum_18_090C464078CE785775EB2BD10243509D;      // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               JPKREnable_20_6646E3403A54C9FF30EA4A060E963E85;           // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GlobalEnable_21_16CA69C03694BEC51276707E02D78975;         // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FString                                     Version_22_3FF35D403CA2850151A0EFEE07C31D6E;              // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Material_23_00A62F8053E43A522E177BC60804BCFC;             // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Model_24_54FC000058126054216CA3260339503C;                // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Texture_25_1BF120003C34427E418AE1AE01C53FB5;              // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AchType_26_22A8CF40410AEDA15F1880130C974345;              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutPrintTime_29_1DCA58C060D6909161CFFCE90D859185;         // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JumpUrl_30_080B978006594FD81A19FB130ACEDFBC;              // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndUrlTime_32_70AD5A0059F3BEF4434F742304C3BC05;           // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StartUrlTime_33_141837C07450722D0642A49B0FAB8F95;         // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BLUEHOLEEnable_34_22746980289BA7E876B9748608967BC5;       // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FString                                     ClientShowTime_35_6E0BA7800F1D5C482C85DDAD0D38C595;       // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

