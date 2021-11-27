#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_QuantumDevKit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
struct UQuantumFirebaseRemoteConfig_GetStatus_Params
{
	EQuantumFirebaseRemoteConfigStatus                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
struct UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
struct UQuantumFirebaseRemoteConfig_GetInstance_Params
{
	class UQuantumFirebaseRemoteConfig*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

