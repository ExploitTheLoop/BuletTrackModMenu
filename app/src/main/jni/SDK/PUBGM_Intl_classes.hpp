#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Intl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Intl.StatManager
// 0x00AC (0x00C8 - 0x001C)
class UStatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x001C(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Intl.StatManager");
		return pStaticClass;
	}


	void ReportEventWithString(EStatEventType EventType, const struct FString& _eventBody, bool isRealTime);
	void ReportEventWithParam(EStatEventType EventType, TMap<struct FString, struct FString> _params, bool isRealTime);
	void ReportEventWithNoParam(EStatEventType EventType, bool isRealTime);
	static class UStatManager* GetInstance();
};


}

