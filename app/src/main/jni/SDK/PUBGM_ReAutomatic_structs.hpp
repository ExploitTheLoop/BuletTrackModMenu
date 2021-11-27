#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ReAutomatic.EUIType
enum class EUIType : uint8_t
{
	EUIType__Any                   = 0,
	EUIType__Clickable             = 1,
	EUIType__TextInput             = 2,
	EUIType__Scrollable            = 3,
	EUIType__Text                  = 4,
	EUIType__Checkable             = 5,
	EUIType__EUIType_MAX           = 6
};


// Enum ReAutomatic.ERouteProtoID
enum class ERouteProtoID : uint8_t
{
	ERouteProtoID__Regist          = 0,
	ERouteProtoID__NormalMessage   = 1,
	ERouteProtoID__Close           = 2,
	ERouteProtoID__HeartBeat       = 3,
	ERouteProtoID__Log             = 4,
	ERouteProtoID__ListDevice      = 5,
	ERouteProtoID__Max             = 6
};


// Enum ReAutomatic.ERouteType
enum class ERouteType : uint8_t
{
	ERouteType__RouteServer        = 0,
	ERouteType__LocalController    = 1,
	ERouteType__MobileDevice       = 2,
	ERouteType__UnrealEngine       = 3,
	ERouteType__WebService         = 4,
	ERouteType__Max                = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReAutomatic.FindUICondition
// 0x001C
struct FFindUICondition
{
	EUIType                                            UIType;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     UINameRegex;                                              // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     ContainTextRegex;                                         // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct ReAutomatic.LuaScriptMessage
// 0x0010
struct FLuaScriptMessage
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaScript;                                                // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct ReAutomatic.CmdTypes
// 0x0001
struct FCmdTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RemoteControllerInfo
// 0x0010
struct FRemoteControllerInfo
{
	struct FString                                     ControllerName;                                           // 0x0000(0x000C) (ZeroConstructor)
	ERouteType                                         ControllerType;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteSendMessage
// 0x0034
struct FRouteSendMessage
{
	ERouteType                                         FromRouteType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     FromRouteName;                                            // 0x0004(0x000C) (ZeroConstructor)
	ERouteType                                         TargetRouteType;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FString                                     TargetRouteName;                                          // 0x0014(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0020(0x0014) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RawCommandMessage
// 0x0014
struct FRawCommandMessage
{
	struct FString                                     CmdId;                                                    // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteCloseMessage
// 0x0010
struct FRouteCloseMessage
{
	struct FString                                     RegistName;                                               // 0x0000(0x000C) (ZeroConstructor)
	ERouteType                                         RegistType;                                               // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteRegistMessage
// 0x0010
struct FRouteRegistMessage
{
	struct FString                                     RegistName;                                               // 0x0000(0x000C) (ZeroConstructor)
	ERouteType                                         RegistType;                                               // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

}

