// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Intl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Intl.StatManager.ReportEventWithString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EStatEventType                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 _eventBody                     (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithString(EStatEventType EventType, const struct FString& _eventBody, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithString");

	UStatManager_ReportEventWithString_Params params;
	params.EventType = EventType;
	params._eventBody = _eventBody;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Intl.StatManager.ReportEventWithParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EStatEventType                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> _params                        (Parm, ZeroConstructor)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithParam(EStatEventType EventType, TMap<struct FString, struct FString> _params, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithParam");

	UStatManager_ReportEventWithParam_Params params;
	params.EventType = EventType;
	params._params = _params;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Intl.StatManager.ReportEventWithNoParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EStatEventType                 EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatManager::ReportEventWithNoParam(EStatEventType EventType, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithNoParam");

	UStatManager_ReportEventWithNoParam_Params params;
	params.EventType = EventType;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Intl.StatManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStatManager*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStatManager* UStatManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Intl.StatManager.GetInstance");

	UStatManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

