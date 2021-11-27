#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAEStateMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAEStateMachine.UAEStateMachineComponent
// 0x0088 (0x0150 - 0x00C8)
class UUAEStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeforeTransientEvent;                                   // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    // 0x00D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     Tag;                                                      // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUAEState*>                           States;                                                   // 0x00EC(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              // 0x00F8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUAETransitionState                         StartState;                                               // 0x0134(0x000C) (Edit, DisableEditOnInstance)
	struct FUAETransitionState                         EndState;                                                 // 0x0140(0x000C) (Edit, DisableEditOnInstance)
	class UUAEState*                                   CurrentState;                                             // 0x014C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return pStaticClass;
	}


	void Start();
	void SetTag(const struct FString& InTag);
	void OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState);
	bool IsInState(const struct FString& StateName);
	class UUAEState* GetCurrentState();
	void ForceDoEvent(const struct FString& EventName);
	void Finish();
	void DoEvent(const struct FString& EventName);
	bool CanDoEvent(const struct FString& EventName);
};


// Class UAEStateMachine.UAEState
// 0x0004 (0x0020 - 0x001C)
class UUAEState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEState");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


// Class UAEStateMachine.TestStatemachine
// 0x0000 (0x02E0 - 0x02E0)
class ATestStatemachine : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return pStaticClass;
	}

};


}

