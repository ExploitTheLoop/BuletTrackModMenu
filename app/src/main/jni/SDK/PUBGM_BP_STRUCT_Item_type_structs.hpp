#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_Item_type.BP_STRUCT_Item_type
// 0x0148
struct FBP_STRUCT_Item_type
{
	struct FString                                     ItemBigIcon_0_733663734EEB8DD5D7FF41A6E96480D4;           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxCount_1_D5BF33434E37E75739D213989C4FA372;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BPID_2_F73A5EF243D620CE49BBCAA8832C6AF9;                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemType_3_4CBCE77A4D2A20BEBD861AADEF3B616B;              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoEquipAndDrop_4_144B885646B92B9836CE33923842AB1E;      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ItemID_5_29F7B64741688A0A853FD281FAE4E28D;                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Consumable_7_B08070BD407AD029B7CDA7BDB341A342;            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FString                                     ItemDesc_8_8ED919494479E8A62F11DBB9C7AD0F9A;              // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemSmallIcon_9_B13D206C4A153C963FCE478A1B39C15F;         // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemName_10_B257B36A422BB69651454E90EBC1323B;             // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WardrobeTab_11_6562B47746AECB0B5C84BC9C96EACD9D;          // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemSubType_12_087F026E41DAB82F567758A4F56D72CF;          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Equippable_13_BB222DC04DCB195FCB3F29B89EA210CA;           // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              UnitWeight_f_14_725EBB604F31443B93AF3597580ECAE4;         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemWhiteIcon_15_AA35FD8045790AA9F73F58829F202B94;        // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemQuality_16_3EF7461D45D14FC186EB3DBB70D01484;          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     KillWhiteIcon_27_16289384496FF361F9005580DEF9CAD1;        // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NeedShare_73_D9C0818D40A3C6AB07231BABA5477060;            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeightforOrder_29_4373EFCD4D78E7DF4067FF9D3E213664;       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Preview_32_1997D4634D3D3F8CC7360283D2AF4E6C;              // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ExTime_33_8299B7454C71BC6A899937AF00BFF0C5;               // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PickupDesc_36_D5D621864C55ED8C6ABE728B6F002D4E;           // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WardrobeMainTab_38_D234FCBE4A19AAF3066394AD7C7D98DF;      // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Durability_39_7B54DEB94CD411488438539500D225E1;           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBatchUse_40_88AB90DA48C707B0FE6DB18185C6253A;           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                AIFullVaule_43_6A3A6FC023E58D4B4FDDDF270E81E075;          // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LongDescID_44_4E8350406652C05F7794F90804562904;           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSmallIcon2_46_6ED99A00141F4C900B45252101330012;       // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemBigIcon2_47_2C0E40404ED554873AD82D3A053DBC62;         // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BackpackSimple_48_26F807C06BB149650FE17C280F83D985;       // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemRegion_49_3899A60047215AA47D8652720D715E6E;           // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ShowSexInMall_56_0C9F0CC01B8DDF89290B2B7F0D9E026C;        // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvatarID_68_319E644077E02FFF04B5C19B04157FD4;             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpecialIcon_72_55E01BC05ADCEE1500E06C0F01021C3E;          // 0x00F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ValidRegionCodes_74_2EA4F9C02DC66B4573D87CB8064AB793;     // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ValidTimes_75_5BC6A5C03028B6616FF746180062B373;           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RateType_77_176334C00292E359401D0B6600355865;             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     QualityRate_78_5F4A46807D1C4B2C0A08E8F50F3EB745;          // 0x0114(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                character_param_81_2F2A70804AD88C7E6E8F5B83071E93DD;      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                JKBPID_82_1FF3B64037160BBF09A6FDF60967EB24;               // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemSoundID_83_7010328028DE3D6841FCD9F407C46B04;          // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResSeprateType_84_5349D1400501D3B166D23C1D0CBC9FE5;       // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CanIntoBag_85_416CF6C01FD7CDED0F5E477601A418C7;           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Electricity_86_19A7E9806DE4A79A2FAD5505041B42E9;          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPickupRule_87_49300E005A58193E16239C7A00F80F05;       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpecialIconSize_89_4BBF62802BA083E043328BD00C42A315;      // 0x013C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

