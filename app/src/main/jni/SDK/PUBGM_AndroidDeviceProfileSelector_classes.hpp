#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AndroidDeviceProfileSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore
// 0x001C (0x0038 - 0x001C)
class UAndroidCommonDeviceProfileGradeScore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGradeScoreProfileName>              GradeScoreProfileName;                                    // 0x0020(0x000C) (Edit, ZeroConstructor, Config)
	TArray<float>                                      GradeScoreTypePercentage;                                 // 0x002C(0x000C) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileVulkanList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices
// 0x000C (0x0028 - 0x001C)
class UAndroidJavaSurfaceViewDevices : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidProjectDeviceProfileWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.VulkanBlackListMatchingRules
// 0x000C (0x0028 - 0x001C)
class UVulkanBlackListMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.VulkanBlackListMatchingRules");
		return pStaticClass;
	}

};


}

