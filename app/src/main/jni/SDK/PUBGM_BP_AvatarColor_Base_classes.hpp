#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarColor_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarColor_Base.BP_AvatarColor_Base_C
// 0x0010 (0x0040 - 0x0030)
class UBP_AvatarColor_Base_C : public UBackpackAvatarItemColor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0004) (Transient, DuplicateTransient)
	TArray<struct FName>                               MaskColorNames;                                           // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarColor_Base.BP_AvatarColor_Base_C");
		return pStaticClass;
	}


	void SetCustomColorDeffered(class UMaterialInterface** InMaterial, struct FSlotToMatColor* InMatColor);
	void ExecuteUbergraph_BP_AvatarColor_Base(int EntryPoint);
};


}

