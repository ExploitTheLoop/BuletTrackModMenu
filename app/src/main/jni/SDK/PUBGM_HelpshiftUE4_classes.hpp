#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_HelpshiftUE4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HelpshiftUE4.HelpshiftUE4Settings
// 0x0034 (0x0050 - 0x001C)
class UHelpshiftUE4Settings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     DomainName;                                               // 0x0028(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_iOS;                                                // 0x0034(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_Android;                                            // 0x0040(0x000C) (Edit, ZeroConstructor, Config)
	bool                                               FirebaseIntegration;                                      // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class HelpshiftUE4.HelpshiftUE4Settings");
		return pStaticClass;
	}

};


}

