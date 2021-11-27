#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_UMG_classes.hpp"
#include "PUBGM_ProceduralMeshComponent_classes.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_SlateCore_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpinePlugin.SpineAnimationStateMixData
// 0x001C
struct FSpineAnimationStateMixData
{
	struct FString                                     from;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     to;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Mix;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpinePlugin.SpineEvent
// 0x0024
struct FSpineEvent
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StringValue;                                              // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                IntValue;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

