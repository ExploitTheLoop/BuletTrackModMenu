#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_ActivityBtnDisplay.BP_STRUCT_ActivityBtnDisplay
// 0x0084
struct FBP_STRUCT_ActivityBtnDisplay
{
	int                                                Priority_0_46159A294AD8CE52B8706D9F5544BD82;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActivityName_1_BDDD54604B8656536C99C0A3F5074B3F;          // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IconPath_2_C79C7E02493AE6F3925939B80B14DE6D;              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JumpUrl_3_883F04534B750337906ECABA456B4935;               // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ActivityType_4_7B7F6AC01B53CA476EC6B45A012F6925;          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     StartTime_5_0DE1164068816D5B70CB6F1A0F06AC25;             // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndTime_6_3CF0D880683B9FF41A4A6FDC06FE3125;               // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StartTimeUTC_7_3FB0314032DCC95F676A48D10AC25AE3;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTimeUTC_8_7BB893801BAE54260B5CEF1D0312C563;            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowCountDownIcon_9_6D7870C063D0BBF506ED453F0E94291E;   // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                ID_10_2D1D924048CB30255B81D0290B79F134;                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNew_11_7B6DC8806D46DD1850C8F9260F2ED357;                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                Weight_12_22892900165223A8223D6BCE00308404;               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     blueprintPath_13_462107802B97827E233DEB9C09D53018;        // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DependItems_14_629A43800E6BDF380FC988F50BA4DB73;          // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Type_28_F48C26234BFB2785226A46AD4DE39B4A;                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActId_24_88F8EDE14F623CA79EB4B98348D756DA;                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CreatedUtc_25_20BA60F147D962530E97FE9C28E33A82;           // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CreatedProcess_31_B59A26594774D053E758AB8F7F56B648;       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

