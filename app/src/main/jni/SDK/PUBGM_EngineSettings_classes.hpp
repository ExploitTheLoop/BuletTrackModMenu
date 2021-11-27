#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_EngineSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x003C (0x0058 - 0x001C)
class UConsoleSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0020(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x002C(0x000C) (Edit, ZeroConstructor, Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOrderTopToBottom;                                        // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FColor                                      InputColor;                                               // 0x0040(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x0044(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0048(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x004C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0050(0x0004) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x00DC (0x00F8 - 0x001C)
class UGameMapsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             EditorStartupMap;                                         // 0x0020(0x0018) (Edit, Config)
	struct FString                                     LocalMapOptions;                                          // 0x0038(0x000C) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             TransitionMap;                                            // 0x0048(0x0018) (Edit, Config)
	bool                                               bUseSplitscreen;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<enum ETwoPlayerSplitScreenType>        TwoPlayerSplitscreenLayout;                               // 0x0061(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<enum EThreePlayerSplitScreenType>      ThreePlayerSplitscreenLayout;                             // 0x0062(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOffsetPlayerGamepadIds;                                  // 0x0063(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FSoftClassPath                              GameInstanceClass;                                        // 0x0068(0x0018) (Edit, Config, NoClear)
	struct FSoftObjectPath                             GameDefaultMap;                                           // 0x0080(0x0018) (Edit, Config)
	struct FSoftObjectPath                             ServerDefaultMap;                                         // 0x0098(0x0018) (Edit, Config)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                    // 0x00B0(0x0018) (Edit, Config, NoClear)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                              // 0x00C8(0x0018) (Edit, Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00E0(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00EC(0x000C) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x002C (0x0048 - 0x001C)
class UGameNetworkManagerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxDynamicBandwidth;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x002C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x000C (0x0028 - 0x001C)
class UGameSessionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxPlayers;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0024(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0004 (0x0020 - 0x001C)
class UGeneralEngineSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00AC (0x00C8 - 0x001C)
class UGeneralProjectSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     CompanyDistinguishedName;                                 // 0x0028(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CopyrightNotice;                                          // 0x0034(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     Description;                                              // 0x0040(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     Homepage;                                                 // 0x004C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LicensingTerms;                                           // 0x0058(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     PrivacyPolicy;                                            // 0x0064(0x000C) (Edit, ZeroConstructor, Config)
	struct FGuid                                       ProjectID;                                                // 0x0070(0x0010) (Edit, Config, IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x0080(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ProjectVersion;                                           // 0x008C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SupportContact;                                           // 0x0098(0x000C) (Edit, ZeroConstructor, Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00A4(0x000C) (Edit, Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x00B0(0x000C) (Edit, Config)
	bool                                               bShouldWindowPreserveAspectRatio;                         // 0x00BC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseBorderlessWindow;                                     // 0x00BD(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartInVR;                                               // 0x00BE(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartInAR;                                               // 0x00BF(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowWindowResize;                                       // 0x00C0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowClose;                                              // 0x00C1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMaximize;                                           // 0x00C2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMinimize;                                           // 0x00C3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return pStaticClass;
	}

};


// Class EngineSettings.HudSettings
// 0x0014 (0x0030 - 0x001C)
class UHudSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0020(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class EngineSettings.HudSettings");
		return pStaticClass;
	}

};


}

