// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_QuantumDevKit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EQuantumFirebaseRemoteConfigStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQuantumFirebaseRemoteConfigStatus UQuantumFirebaseRemoteConfig::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus");

	UQuantumFirebaseRemoteConfig_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ConfigNameToQuery              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UQuantumFirebaseRemoteConfig::GetRemoteConfig(const struct FString& ConfigNameToQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig");

	UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params params;
	params.ConfigNameToQuery = ConfigNameToQuery;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UQuantumFirebaseRemoteConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuantumFirebaseRemoteConfig* UQuantumFirebaseRemoteConfig::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance");

	UQuantumFirebaseRemoteConfig_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

