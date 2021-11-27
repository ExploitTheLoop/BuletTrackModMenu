#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum QuantumDevKit.EQuantumFirebaseRemoteConfigStatus
enum class EQuantumFirebaseRemoteConfigStatus : uint8_t
{
	EQuantumFirebaseRemoteConfigStatus__kUnfetched = 0,
	EQuantumFirebaseRemoteConfigStatus__kFetchedSuccessfully = 1,
	EQuantumFirebaseRemoteConfigStatus__kFetchedFailed = 2,
	EQuantumFirebaseRemoteConfigStatus__EQuantumFirebaseRemoteConfigStatus_MAX = 3
};



}

