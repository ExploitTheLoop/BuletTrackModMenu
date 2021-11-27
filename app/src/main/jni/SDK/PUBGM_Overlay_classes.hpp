#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Overlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Overlay.Overlays
// 0x0004 (0x0020 - 0x001C)
class UOverlays : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Overlay.Overlays");
		return pStaticClass;
	}

};


// Class Overlay.BasicOverlays
// 0x0008 (0x0028 - 0x0020)
class UBasicOverlays : public UOverlays
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Overlay.BasicOverlays");
		return pStaticClass;
	}

};


// Class Overlay.LocalizedOverlays
// 0x0040 (0x0060 - 0x0020)
class ULocalizedOverlays : public UOverlays
{
public:
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                      // 0x0020(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return pStaticClass;
	}

};


}

