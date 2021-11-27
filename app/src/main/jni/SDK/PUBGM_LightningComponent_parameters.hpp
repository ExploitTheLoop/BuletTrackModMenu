#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LightningComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightningComponent.LightningComponent.SetWidthDecay
struct ULightningComponent_SetWidthDecay_Params
{
	float                                              InDecay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetShrinkWidth
struct ULightningComponent_SetShrinkWidth_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetPatternMask
struct ULightningComponent_SetPatternMask_Params
{
	int                                                InPatternMask;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetMaxFractalTime
struct ULightningComponent_SetMaxFractalTime_Params
{
	int                                                InMaxFractalTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetLightningWidth
struct ULightningComponent_SetLightningWidth_Params
{
	float                                              InWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetBrightnessDecay
struct ULightningComponent_SetBrightnessDecay_Params
{
	float                                              InDecay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.SetAtlasNum
struct ULightningComponent_SetAtlasNum_Params
{
	int                                                InVal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.RefreshLightningMesh
struct ULightningComponent_RefreshLightningMesh_Params
{
};

// Function LightningComponent.LightningComponent.IsShrinkWidth
struct ULightningComponent_IsShrinkWidth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetWidthDecay
struct ULightningComponent_GetWidthDecay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetPatternMask
struct ULightningComponent_GetPatternMask_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetMaxFractalTime
struct ULightningComponent_GetMaxFractalTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetLightningWidth
struct ULightningComponent_GetLightningWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetBrightnessDecay
struct ULightningComponent_GetBrightnessDecay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightningComponent.LightningComponent.GetAtlasNum
struct ULightningComponent_GetAtlasNum_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

