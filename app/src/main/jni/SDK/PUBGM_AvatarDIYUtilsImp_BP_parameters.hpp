#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarDIYUtilsImp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponAttachmentDIYAvatarItem
struct UAvatarDIYUtilsImp_BP_C_IsWeaponAttachmentDIYAvatarItem_Params
{
	int*                                               InWeaponAttachmentID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.IsWeaponDIYAvatarItem
struct UAvatarDIYUtilsImp_BP_C_IsWeaponDIYAvatarItem_Params
{
	int*                                               InWeaponID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYMatParam
struct UAvatarDIYUtilsImp_BP_C_GetDIYMatParam_Params
{
	int*                                               TextureID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDIYMatParam                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBaseColorString
struct UAvatarDIYUtilsImp_BP_C_GetDIYBaseColorString_Params
{
	int*                                               ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C.GetDIYBasePatternPath
struct UAvatarDIYUtilsImp_BP_C_GetDIYBasePatternPath_Params
{
	int*                                               PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

