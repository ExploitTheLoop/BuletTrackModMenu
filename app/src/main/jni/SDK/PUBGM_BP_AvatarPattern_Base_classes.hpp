#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarPattern_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarPattern_Base.BP_AvatarPattern_Base_C
// 0x0004 (0x006C - 0x0068)
class UBP_AvatarPattern_Base_C : public UBackpackAvatarItemPattern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarPattern_Base.BP_AvatarPattern_Base_C");
		return pStaticClass;
	}


	void GetPatternNumTexturePath(int* InNumID, struct FSoftObjectPath* OutTexture1, struct FSoftObjectPath* OutTexture2);
	void SetCustomPattern_Implementation(class UMaterialInterface* InMaterial, const struct FSlotToMatPattern& InMatPattern);
	void SetCustomPatternNum_Implementation(class UMaterialInterface* InMaterial, const struct FSlotToMatPattern& InMatPattern);
	void SetCustomPatternDeffered(class UMaterialInterface** InMaterial, struct FSlotToMatPattern* InMatPattern);
	void ExecuteUbergraph_BP_AvatarPattern_Base(int EntryPoint);
};


}

