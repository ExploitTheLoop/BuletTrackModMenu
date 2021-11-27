#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TApm.TApmSceneInfo
// 0x0020
struct FTApmSceneInfo
{
	int                                                PerfPriority;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReportPriority;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFinished;                                               // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x000D(0x0013) MISSED OFFSET
};

}

