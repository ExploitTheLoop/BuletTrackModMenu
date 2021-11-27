#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClothAvatarUtilsImp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClothAvatarUtilsImp_BP.ClothAvatarUtilsImp_BP_C
// 0x003C (0x0094 - 0x0058)
class UClothAvatarUtilsImp_BP_C : public UClothAvatarBPUtils
{
public:
	TMap<int, struct FMeshPackage>                     OtherCutHairConfig;                                       // 0x0058(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass ClothAvatarUtilsImp_BP.ClothAvatarUtilsImp_BP_C");
		return pStaticClass;
	}


	bool GetDefaultReplaceMeshPack(class UBackpackAvatarHandle** InAvatarHandle, struct FMeshPackage* OutMeshPack);
};


}

