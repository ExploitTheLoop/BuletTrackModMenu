// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAEStateMachine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UAEStateMachine.UAEStateMachineComponent.Start
// (Final, Native, Public, BlueprintCallable)

void UUAEStateMachineComponent::Start()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.Start");

	UUAEStateMachineComponent_Start_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEStateMachineComponent.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InTag                          (Parm, ZeroConstructor)

void UUAEStateMachineComponent::SetTag(const struct FString& InTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.SetTag");

	UUAEStateMachineComponent_SetTag_Params params;
	params.InTag = InTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// DelegateFunction UAEStateMachine.UAEStateMachineComponent.OnTransientEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 TransientEvent                 (Parm, ZeroConstructor)
// struct FString                 CurrentState                   (Parm, ZeroConstructor)
// struct FString                 TransientToState               (Parm, ZeroConstructor)

void UUAEStateMachineComponent::OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("DelegateFunction UAEStateMachine.UAEStateMachineComponent.OnTransientEvent__DelegateSignature");

	UUAEStateMachineComponent_OnTransientEvent__DelegateSignature_Params params;
	params.TransientEvent = TransientEvent;
	params.CurrentState = CurrentState;
	params.TransientToState = TransientToState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEStateMachineComponent.IsInState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StateName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEStateMachineComponent::IsInState(const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.IsInState");

	UUAEStateMachineComponent_IsInState_Params params;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAEStateMachine.UAEStateMachineComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEState*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEState* UUAEStateMachineComponent::GetCurrentState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.GetCurrentState");

	UUAEStateMachineComponent_GetCurrentState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAEStateMachine.UAEStateMachineComponent.ForceDoEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UUAEStateMachineComponent::ForceDoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.ForceDoEvent");

	UUAEStateMachineComponent_ForceDoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEStateMachineComponent.Finish
// (Final, Native, Public, BlueprintCallable)

void UUAEStateMachineComponent::Finish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.Finish");

	UUAEStateMachineComponent_Finish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEStateMachineComponent.DoEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UUAEStateMachineComponent::DoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.DoEvent");

	UUAEStateMachineComponent_DoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEStateMachineComponent.CanDoEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEStateMachineComponent::CanDoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.CanDoEvent");

	UUAEStateMachineComponent_CanDoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAEStateMachine.UAEState.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEState::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.Update");

	UUAEState_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEState.OnLeave
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUAEState*               TranitToState                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEState::OnLeave(class UUAEState* TranitToState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnLeave");

	UUAEState_OnLeave_Params params;
	params.TranitToState = TranitToState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAEStateMachine.UAEState.OnEnter
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUAEState*               PrevState                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEState::OnEnter(class UUAEState* PrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnEnter");

	UUAEState_OnEnter_Params params;
	params.PrevState = PrevState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

