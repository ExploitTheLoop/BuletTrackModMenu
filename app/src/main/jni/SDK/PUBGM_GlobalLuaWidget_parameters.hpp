#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalLuaWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
struct UGlobalLuaWidget_C_GetNewLevelTaskData_Params
{
	struct FString                                     TaskId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NewLevelTask_type                BP_STRUCT_NewLevelTask_type;                              // (Parm, OutParm)
};

}

