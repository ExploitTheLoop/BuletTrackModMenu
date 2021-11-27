#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             TimeSeconds;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x000C
struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0018
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0018
struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     UserToGrant;                                              // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0018
struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     UserToDeny;                                               // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0044
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                             // 0x0000(0x000C) (Edit, ZeroConstructor)
	int                                                EngineVersion;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       InstanceID;                                               // 0x0014(0x0010) (Edit, IsPlainOldData)
	struct FString                                     InstanceType;                                             // 0x0024(0x000C) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0030(0x0010) (Edit, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

