#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AndroidRuntimeSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidRuntimeSettings.AndroidRuntimeSettings
// 0x01AC (0x01C8 - 0x001C)
class UAndroidRuntimeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	int                                                StoreVersion;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FString                                     ApplicationDisplayName;                                   // 0x002C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     VersionDisplayName;                                       // 0x0038(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                MinSDKVersion;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TargetSDKVersion;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum EAndroidInstallLocation>          InstallLocation;                                          // 0x004C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableGradle;                                            // 0x004D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPackageDataInsideApk;                                    // 0x004E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCreateAllPlatformsInstall;                               // 0x004F(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDisableVerifyOBBOnStartUp;                               // 0x0050(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseExternalFilesDir;                                     // 0x0051(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum EAndroidScreenOrientation>        Orientation;                                              // 0x0052(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	float                                              MaxAspectRatio;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum EAndroidAntVerbosity>             AntVerbosity;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bFullScreen;                                              // 0x0059(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableNewKeyboard;                                       // 0x005A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum EAndroidDepthBufferPreference>    DepthBufferPreference;                                    // 0x005B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FString>                             ExtraManifestNodeTags;                                    // 0x005C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraApplicationNodeTags;                                 // 0x0068(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExtraApplicationSettings;                                 // 0x0074(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraActivityNodeTags;                                    // 0x0080(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExtraActivitySettings;                                    // 0x008C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraPermissions;                                         // 0x0098(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bAndroidVoiceEnabled;                                     // 0x00A4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPackageForGearVR;                                        // 0x00A5(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveOSIG;                                              // 0x00A6(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	TArray<TEnumAsByte<enum EGoogleVRCaps>>            GoogleVRCaps;                                             // 0x00A8(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bGoogleVRSustainedPerformance;                            // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FString                                     KeyStore;                                                 // 0x00B8(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyAlias;                                                 // 0x00C4(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyStorePassword;                                         // 0x00D0(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyPassword;                                              // 0x00DC(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bBuildForArmV7;                                           // 0x00E8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForArm64;                                           // 0x00E9(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForX86;                                             // 0x00EA(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForX8664;                                           // 0x00EB(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForES2;                                             // 0x00EC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForES31;                                            // 0x00ED(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSupportsVulkan;                                          // 0x00EE(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildWithHiddenSymbolVisibility;                         // 0x00EF(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableGooglePlaySupport;                                 // 0x00F0(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseGetAccounts;                                          // 0x00F1(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	struct FString                                     GamesAppID;                                               // 0x00F4(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FGooglePlayAchievementMapping>       AchievementMap;                                           // 0x0100(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FGooglePlayLeaderboardMapping>       LeaderboardMap;                                           // 0x010C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bSupportAdMob;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FString                                     AdMobAdUnitID;                                            // 0x011C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             AdMobAdUnitIDs;                                           // 0x0128(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     GooglePlayLicenseKey;                                     // 0x0134(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     GCMClientSenderID;                                        // 0x0140(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bShowLaunchImage;                                         // 0x014C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum EAndroidAudio>                    AndroidAudio;                                             // 0x014D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x014E(0x0002) MISSED OFFSET
	int                                                AudioSampleRate;                                          // 0x0150(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioCallbackBufferFrameSize;                             // 0x0154(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumBuffersToEnqueue;                                 // 0x0158(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioMaxChannels;                                         // 0x015C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumSourceWorkers;                                    // 0x0160(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     SpatializationPlugin;                                     // 0x0164(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ReverbPlugin;                                             // 0x0170(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     OcclusionPlugin;                                          // 0x017C(0x000C) (Edit, ZeroConstructor, Config)
	TEnumAsByte<enum EAndroidGraphicsDebugger>         AndroidGraphicsDebugger;                                  // 0x0188(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	struct FDirectoryPath                              MaliGraphicsDebuggerPath;                                 // 0x018C(0x000C) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              RenderDocPath;                                            // 0x0198(0x000C) (Edit, Config, GlobalConfig)
	bool                                               bMultiTargetFormat_ETC1;                                  // 0x01A4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ETC2;                                  // 0x01A5(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_DXT;                                   // 0x01A6(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_PVRTC;                                 // 0x01A7(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ATC;                                   // 0x01A8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ASTC;                                  // 0x01A9(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	float                                              TextureFormatPriority_ETC1;                               // 0x01AC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ETC2;                               // 0x01B0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_DXT;                                // 0x01B4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_PVRTC;                              // 0x01B8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ATC;                                // 0x01BC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ASTC;                               // 0x01C0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidRuntimeSettings.AndroidRuntimeSettings");
		return pStaticClass;
	}

};


}

