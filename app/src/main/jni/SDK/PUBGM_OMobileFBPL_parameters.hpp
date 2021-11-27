#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_OMobileFBPL_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OMobileFBPL.OMobileFBPL.IsRunningOnBattery
struct UOMobileFBPL_IsRunningOnBattery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetVolumeState
struct UOMobileFBPL_GetVolumeState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetDeviceName
struct UOMobileFBPL_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature
struct UOMobileFBPL_GetBatteryTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryLevel
struct UOMobileFBPL_GetBatteryLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn
struct UOMobileFBPL_AreHeadphonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

