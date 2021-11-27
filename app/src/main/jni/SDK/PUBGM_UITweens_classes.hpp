#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UITweens_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UITweens.TweenManager
// 0x0024 (0x0040 - 0x001C)
class UTweenManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x001C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UITweens.TweenManager");
		return pStaticClass;
	}


	void TweenSize(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type);
	void TweenPosition(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type);
	void TweenAlpha(class UImage* Widget, float from, float to, float Timespan, int Type);
	void Tick(float DeltaTime);
};


}

