#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClothAvatarUtilsImp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClothAvatarUtilsImp_BP.ClothAvatarUtilsImp_BP_C.GetDefaultReplaceMeshPack
struct UClothAvatarUtilsImp_BP_C_GetDefaultReplaceMeshPack_Params
{
	class UBackpackAvatarHandle**                      InAvatarHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshPackage                                OutMeshPack;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

