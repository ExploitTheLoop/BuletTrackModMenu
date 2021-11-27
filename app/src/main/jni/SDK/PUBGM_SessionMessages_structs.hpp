#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0008(0x000C) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceID;                                               // 0x0014(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0074
struct FSessionServicePong
{
	bool                                               Authorized;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     BuildDate;                                                // 0x0004(0x000C) (Edit, ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0010(0x000C) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceID;                                               // 0x001C(0x0010) (Edit, IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x002C(0x000C) (Edit, ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FString                                     PlatformName;                                             // 0x003C(0x000C) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0048(0x0010) (Edit, IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0058(0x000C) (Edit, ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0064(0x000C) (Edit, ZeroConstructor)
	bool                                               Standalone;                                               // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x000C
struct FSessionServicePing
{
	struct FString                                     UserName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor)
};

}

