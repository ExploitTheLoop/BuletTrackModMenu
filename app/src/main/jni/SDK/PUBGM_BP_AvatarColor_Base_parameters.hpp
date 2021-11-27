#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarColor_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AvatarColor_Base.BP_AvatarColor_Base_C.SetCustomColorDeffered
struct UBP_AvatarColor_Base_C_SetCustomColorDeffered_Params
{
	class UMaterialInterface**                         InMaterial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotToMatColor*                            InMatColor;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AvatarColor_Base.BP_AvatarColor_Base_C.ExecuteUbergraph_BP_AvatarColor_Base
struct UBP_AvatarColor_Base_C_ExecuteUbergraph_BP_AvatarColor_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

