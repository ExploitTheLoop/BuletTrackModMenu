#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UnknowPass_ContinuousBuy_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.HideFX
struct UUnknowPass_ContinuousBuy_BP_C_HideFX_Params
{
};

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetEliteImage
struct UUnknowPass_ContinuousBuy_BP_C_SetEliteImage_Params
{
	int                                                SeasonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isElite;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetData
struct UUnknowPass_ContinuousBuy_BP_C_SetData_Params
{
	int                                                SeasonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isElite;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Online;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.Construct
struct UUnknowPass_ContinuousBuy_BP_C_Construct_Params
{
};

// Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.ExecuteUbergraph_UnknowPass_ContinuousBuy_BP
struct UUnknowPass_ContinuousBuy_BP_C_ExecuteUbergraph_UnknowPass_ContinuousBuy_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

