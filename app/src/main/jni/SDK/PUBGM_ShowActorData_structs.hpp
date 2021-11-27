#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ShowActorData.ShowActorData
// 0x0038
struct FShowActorData
{
	float                                              XOffset_15_335B6FB64E64691029499DB91D53AA1B;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     XRotateLimit_16_7DCE96BC4B110EFA0168E382CB6609C3;         // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     YRotateLimit_17_0404EC6E4BADBFF829934994775B2098;         // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedResetRotation_7_684BD15842498260989021B083E180BD;     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FRotator                                    Rotator_10_F22B16E84D6EB79AB51C6C9294C0A08E;              // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    InitRotate_12_2D3D2DC74733E25DF25F1E8EA6AD9A16;           // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

