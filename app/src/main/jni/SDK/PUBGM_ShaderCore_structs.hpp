#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShaderCore.ShaderGroupDesc
// 0x0028
struct FShaderGroupDesc
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             Exclude;                                                  // 0x0010(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             Include;                                                  // 0x001C(0x000C) (ZeroConstructor, Config)
};

}

