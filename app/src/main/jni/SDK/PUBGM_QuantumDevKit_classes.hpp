#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_QuantumDevKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QuantumDevKit.QuantumFirebaseRemoteConfig
// 0x004C (0x0068 - 0x001C)
class UQuantumFirebaseRemoteConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             QueryConfigNamesArray;                                    // 0x0020(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x002C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class QuantumDevKit.QuantumFirebaseRemoteConfig");
		return pStaticClass;
	}


	EQuantumFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	static class UQuantumFirebaseRemoteConfig* GetInstance();
};


}

