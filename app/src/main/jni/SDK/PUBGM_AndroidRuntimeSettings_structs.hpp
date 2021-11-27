#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AndroidRuntimeSettings.EAndroidGraphicsDebugger
enum class EAndroidGraphicsDebugger : uint8_t
{
	EAndroidGraphicsDebugger__None = 0,
	EAndroidGraphicsDebugger__Mali = 1,
	EAndroidGraphicsDebugger__Adreno = 2,
	EAndroidGraphicsDebugger__RenderDoc = 3,
	EAndroidGraphicsDebugger__EAndroidGraphicsDebugger_MAX = 4
};


// Enum AndroidRuntimeSettings.EGoogleVRCaps
enum class EGoogleVRCaps : uint8_t
{
	EGoogleVRCaps__Cardboard       = 0,
	EGoogleVRCaps__Daydream33      = 1,
	EGoogleVRCaps__Daydream63      = 2,
	EGoogleVRCaps__EGoogleVRCaps_MAX = 3
};


// Enum AndroidRuntimeSettings.EGoogleVRMode
enum class EGoogleVRMode : uint8_t
{
	EGoogleVRMode__Cardboard       = 0,
	EGoogleVRMode__Daydream        = 1,
	EGoogleVRMode__DaydreamAndCardboard = 2,
	EGoogleVRMode__EGoogleVRMode_MAX = 3
};


// Enum AndroidRuntimeSettings.EAndroidAudio
enum class EAndroidAudio : uint8_t
{
	EAndroidAudio__Default         = 0,
	EAndroidAudio__OGG             = 1,
	EAndroidAudio__ADPCM           = 2,
	EAndroidAudio__EAndroidAudio_MAX = 3
};


// Enum AndroidRuntimeSettings.EAndroidInstallLocation
enum class EAndroidInstallLocation : uint8_t
{
	EAndroidInstallLocation__InternalOnly = 0,
	EAndroidInstallLocation__PreferExternal = 1,
	EAndroidInstallLocation__Auto  = 2,
	EAndroidInstallLocation__EAndroidInstallLocation_MAX = 3
};


// Enum AndroidRuntimeSettings.EAndroidDepthBufferPreference
enum class EAndroidDepthBufferPreference : uint8_t
{
	EAndroidDepthBufferPreference__Default = 0,
	EAndroidDepthBufferPreference__Bits16 = 1,
	EAndroidDepthBufferPreference__Bits24 = 2,
	EAndroidDepthBufferPreference__Bits32 = 3,
	EAndroidDepthBufferPreference__EAndroidDepthBufferPreference_MAX = 4
};


// Enum AndroidRuntimeSettings.EAndroidScreenOrientation
enum class EAndroidScreenOrientation : uint8_t
{
	EAndroidScreenOrientation__Portrait = 0,
	EAndroidScreenOrientation__ReversePortrait = 1,
	EAndroidScreenOrientation__SensorPortrait = 2,
	EAndroidScreenOrientation__Landscape = 3,
	EAndroidScreenOrientation__ReverseLandscape = 4,
	EAndroidScreenOrientation__SensorLandscape = 5,
	EAndroidScreenOrientation__Sensor = 6,
	EAndroidScreenOrientation__FullSensor = 7,
	EAndroidScreenOrientation__EAndroidScreenOrientation_MAX = 8
};


// Enum AndroidRuntimeSettings.EAndroidAntVerbosity
enum class EAndroidAntVerbosity : uint8_t
{
	EAndroidAntVerbosity__Quiet    = 0,
	EAndroidAntVerbosity__Normal   = 1,
	EAndroidAntVerbosity__Verbose  = 2,
	EAndroidAntVerbosity__EAndroidAntVerbosity_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AndroidRuntimeSettings.GooglePlayAchievementMapping
// 0x0018
struct FGooglePlayAchievementMapping
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     AchievementID;                                            // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct AndroidRuntimeSettings.GooglePlayLeaderboardMapping
// 0x0018
struct FGooglePlayLeaderboardMapping
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     LeaderboardID;                                            // 0x000C(0x000C) (Edit, ZeroConstructor)
};

}

