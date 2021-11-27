#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CameraPostProcessActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript
struct ACameraPostProcessActor_C_UserConstructionScript_Params
{
};

// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc
struct ACameraPostProcessActor_C_Timeline_LerpPPSettings__FinishedFunc_Params
{
};

// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc
struct ACameraPostProcessActor_C_Timeline_LerpPPSettings__UpdateFunc_Params
{
};

// Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings
struct ACameraPostProcessActor_C_Event_LerpPostProcessSettings_Params
{
	class APostProcessVolume*                          currentPPVolumn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CameraPostProcessSettings_type   targetPPSettingsStruct;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isReverse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor
struct ACameraPostProcessActor_C_ExecuteUbergraph_CameraPostProcessActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

