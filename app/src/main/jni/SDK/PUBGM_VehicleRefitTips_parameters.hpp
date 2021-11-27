#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleRefitTips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleRefitTips.VehicleRefitTips_C.UpdateTipImage
struct AVehicleRefitTips_C_UpdateTipImage_Params
{
	struct FString                                     imgPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function VehicleRefitTips.VehicleRefitTips_C.AttachToRefitSocket
struct AVehicleRefitTips_C_AttachToRefitSocket_Params
{
	class ALobbyModelShowActorBP_C*                    ShowActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleRefitTips.VehicleRefitTips_C.SetRefitSlot
struct AVehicleRefitTips_C_SetRefitSlot_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleRefitTips.VehicleRefitTips_C.UserConstructionScript
struct AVehicleRefitTips_C_UserConstructionScript_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.HideOutTipFrom1To0
struct AVehicleRefitTips_C_HideOutTipFrom1To0_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.HideTip
struct AVehicleRefitTips_C_HideTip_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.FadeInToTransparent
struct AVehicleRefitTips_C_FadeInToTransparent_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.ReceiveBeginPlay
struct AVehicleRefitTips_C_ReceiveBeginPlay_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.FadeOut
struct AVehicleRefitTips_C_FadeOut_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.FadeIn
struct AVehicleRefitTips_C_FadeIn_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.HideoutTipFromTransparentTo0
struct AVehicleRefitTips_C_HideoutTipFromTransparentTo0_Params
{
};

// Function VehicleRefitTips.VehicleRefitTips_C.ExecuteUbergraph_VehicleRefitTips
struct AVehicleRefitTips_C_ExecuteUbergraph_VehicleRefitTips_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

