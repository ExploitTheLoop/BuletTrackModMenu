#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_SettingSensitivity.BP_STRUCT_SettingSensitivity
// 0x00B8
struct FBP_STRUCT_SettingSensitivity
{
	int                                                CameraLensSensibility_0_36C85A005CA596B440FD202308BD0B29; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamFpFreeEye_f_1_49570BC038F48CE9347B15EE0F96E526;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen2XSniper_f_2_602EA1C04764904D75773FCD0AB24DA6;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen3XSniper_f_3_5992820076729B3604E1C8EE0AB2BDA6;  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen4XSniper_f_4_52F662402580A61F312096200AB2ADA6;  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen6XSniper_f_5_45BE22C0039CBBF12F14B27F0AB28DA6;  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen8XSniper_f_6_3885E34061B8D1C30BCFA0AF0AB2EDA6;  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenNoneSniper_f_7_0184A34004D519BF5C6969000DC2F166;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenNoneSniperFp_f_8_1A5A90C054E0E7452E8BA2F002F1E996;// 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenRedDotSniper_f_9_54D3AFC0256F00AD139702910AFE19A6;// 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FireCameraLensSensibility_10_2B0D3B80556217E47A516FCD0288BBD9;// 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen2XSniper_f_11_7C2C434062238F1D3E6D52C2091182B6;// 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen3XSniper_f_12_7590238046673EA67B3BAC59091172B6;// 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen4XSniper_f_13_6EF403C02AAAEE2F6FF1584B091162B6;// 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen6XSniper_f_14_61BBC44073324D4179E8A6F2091142B6;// 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen8XSniper_f_15_548384C03BB9AC5351FD6A0C091122B6;// 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenNoneSniper_f_16_1E70C4C010178F2F310186BA0289C2C6;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenNoneSniperFp_f_17_39B532405BB552552B73F5C709C048D6;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenRedDotSniper_f_18_742E514021F3365D5020756505C1BC66;// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen2XSniper_f_19_2C3D27C0018833BB19119D800D8C49F6;// 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen3XSniper_f_20_25A1080018AA60740E58553D0D8CB9F6;// 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen4XSniper_f_21_1F04E8402FCC8D2D668D66C00D8CA9F6;// 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen6XSniper_f_22_11CCA8C05E10E69F61B6BBB50D8C89F6;// 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen8XSniper_f_23_049469400C55401134839A660D8CE9F6;// 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenNoneSniper_f_24_394D294070B72D4104C28CE30FCE8676;// 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenNoneSniperFp_f_25_43DD16C06309A9737AD996C80E84FB96;// 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenRedDotSniper_f_26_7E5635C07A94D3AB54BB7EF60E8527A6;// 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GyroscopeSensibility_27_19A6B2007E3381543308D12E0D88BED9; // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteEye_f_29_39EC20C0688801597AE2C6FB060C3896;       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleEye_f_30_7B5E898021FBF6E80696214700330386;         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenShoulderFPP_f_31_0D7B4E00654BDD722F7404380AFA2D96;// 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenShoulderTPP_f_32_4BA251807648AE60290D799A0AE82D96;// 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenShoulderFPP_f_33_736EAF80532C52A2630C5AE90609D7A6;// 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenShoulderTPP_f_34_3195B300067916904AC65304061BD7A6;// 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenShoulderFPP_f_35_5D60D400592D8EE0635C48B70ABD2076;// 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenShoulderTPP_f_36_1B87D7801C00694E188ADFAC0AAF2076;// 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSen2XSniper_f_37_492949400C53222B3A83EFCC00CF20C6;// 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSen3XSniper_f_38_428D298007A505843279725E00CFF0C6;// 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSen4XSniper_f_39_3BF109C002F6E8DD0AA5924100D000C6;// 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSen6XSniper_f_40_2EB8CA40799AAF8F5B88563D00CFE0C6;// 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSen8XSniper_f_41_21808AC0703E76411A310C2500CFC0C6;// 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSenNoneSniper_f_42_58A7CAC00C80CA9109E9C49A00F76726;// 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSenNoneSniperFp_f_43_672638404723C52356BE5D220767A6A6;// 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSenRedDotSniper_f_44_219F57403109BBFB3FD8387B0B646696;// 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSenShoulderFPP_f_45_7682B5801EB55FF05AEBDE5C0FA34C46;// 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireGyroscopeSenShoulderTPP_f_46_34A9B9002BF7ED5E59957A8F0FB14C46;// 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

