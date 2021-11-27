#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AIModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIModule.AIController
// 0x0060 (0x0388 - 0x0328)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0328(0x0020) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x0348(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag : 1;                                             // 0x0348(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x0348(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0348(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x0348(0x0001)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x0348(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x034C(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x0350(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x0354(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x0358(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x035C(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x0360(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x0368(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0374(0x0001) MISSED OFFSET
	bool                                               UseGameplayTasksComponent;                                // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShareNavigationSystem;                                   // 0x0376(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0377(0x0001) MISSED OFFSET
	struct FVector                                     ShareNavSysOffset;                                        // 0x0378(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0384(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIController");
		return pStaticClass;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<enum EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<enum EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<enum EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.BTNode
// 0x0024 (0x0040 - 0x001C)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0020(0x000C) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTNode");
		return pStaticClass;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0000 (0x0040 - 0x0040)
class UBTAuxiliaryNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator : public UBTAuxiliaryNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0020 (0x0060 - 0x0040)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTService
// 0x0008 (0x0048 - 0x0040)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              RandomDeviation;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0044(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0044(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTService");
		return pStaticClass;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0020 (0x0068 - 0x0048)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0048(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x0070 - 0x0068)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return pStaticClass;
	}

};


// Class AIModule.BTTaskNode
// 0x0010 (0x0050 - 0x0040)
class UBTTaskNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTaskNode");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0058 - 0x0050)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              RandomDeviation;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_Wait");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0020 (0x0070 - 0x0050)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0050(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0010 (0x0080 - 0x0070)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x007C(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x007C(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x007C(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x007C(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x007C(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        // 0x007C(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         // 0x007C(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x007C(0x0001) (Edit, DisableEditOnTemplate, EditConst)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            // 0x007D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0000 (0x0080 - 0x0080)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardComponent
// 0x00B8 (0x0180 - 0x00C8)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x00C8(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x00CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x00E8(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8C];                                      // 0x00F4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardComponent");
		return pStaticClass;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.PathFollowingComponent
// 0x0188 (0x0250 - 0x00C8)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00C8(0x0034) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x00FC(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0108(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x144];                                     // 0x010C(0x0144) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return pStaticClass;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<enum EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AISense
// 0x003C (0x0058 - 0x001C)
class UAISense : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	EAISenseNotifyType                                 NotifyType;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig
// 0x001C (0x0038 - 0x001C)
class UAISenseConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              MaxAge;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0025(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent
// 0x0004 (0x0020 - 0x001C)
class UAISenseEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent");
		return pStaticClass;
	}

};


// Class AIModule.CrowdFollowingComponent
// 0x0040 (0x0290 - 0x0250)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x0250(0x000C) (IsPlainOldData)
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x025C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0260(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0264(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0268(0x0004) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x026C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return pStaticClass;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0034 (0x0050 - 0x001C)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return pStaticClass;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<enum EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0020 - 0x0020)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return pStaticClass;
	}


	static void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	static class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	static void SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	static void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static bool IsValidAIRotation(const struct FRotator& Rotation);
	static bool IsValidAILocation(const struct FVector& Location);
	static bool IsValidAIDirection(const struct FVector& DirectionVector);
	static class UNavigationPath* GetCurrentPath(class AController* Controller);
	static class UBlackboardComponent* GetBlackboard(class AActor* Target);
	static class AAIController* GetAIController(class AActor* ControlledActor);
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AIDataProvider
// 0x0004 (0x0020 - 0x001C)
class UAIDataProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider");
		return pStaticClass;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0038 - 0x0020)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return pStaticClass;
	}

};


// Class AIModule.AIDataProvider_Random
// 0x0008 (0x0040 - 0x0038)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Max;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return pStaticClass;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0004 (0x0020 - 0x001C)
class UAIHotSpotManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return pStaticClass;
	}

};


// Class AIModule.AIPerceptionComponent
// 0x00A0 (0x0168 - 0x00C8)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x00C8(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x00E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x00EC(0x005C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x0148(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x0154(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return pStaticClass;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<enum EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0020 - 0x0020)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return pStaticClass;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x00CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return pStaticClass;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIPerceptionSystem
// 0x00CC (0x00E8 - 0x001C)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x001C(0x0040) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x005C(0x000C) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7C];                                      // 0x006C(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return pStaticClass;
	}


	static void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	static bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<enum EEndPlayReason> EndPlayReason);
	static class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0020 - 0x0020)
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIResourceInterface");
		return pStaticClass;
	}

};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0028 - 0x0028)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIResource_Movement");
		return pStaticClass;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0028 - 0x0028)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AIResource_Logic");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0020 (0x0078 - 0x0058)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x005C(0x000C) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0068(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return pStaticClass;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0068 - 0x0058)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0058(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Damage");
		return pStaticClass;
	}


	static void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0050 (0x00A8 - 0x0058)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0058(0x000C) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0064(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Hearing");
		return pStaticClass;
	}


	static void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0068 - 0x0058)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0058(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Prediction");
		return pStaticClass;
	}


	static void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	static void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00B0 (0x0108 - 0x0058)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0058(0x0084) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x00E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	double                                             MaxTimeSlicePerTick;                                      // 0x00E8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x00F0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x00FC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Sight");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0068 - 0x0058)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0058(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Team");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0068 - 0x0058)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0058(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISense_Touch");
		return pStaticClass;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x0078 - 0x0078)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0000 (0x0038 - 0x0038)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0000 (0x0038 - 0x0038)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0010 (0x0048 - 0x0038)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	float                                              HearingRange;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0040(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0038 - 0x0038)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0018 (0x0050 - 0x0038)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	float                                              SightRadius;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0038 - 0x0038)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0038 - 0x0038)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0020 (0x0040 - 0x0020)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0050 - 0x0020)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0020(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return pStaticClass;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0020 - 0x0020)
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return pStaticClass;
	}

};


// Class AIModule.AISystem
// 0x00A8 (0x00F0 - 0x0048)
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0048(0x0018) (Edit, Config, GlobalConfig)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0060(0x0018) (Edit, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x007C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0084(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0085(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0086(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0087(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0088(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0089(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<enum ECollisionChannel>                DefaultSightCollisionChannel;                             // 0x008A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x008C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x0090(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x0098(0x000C) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x00AC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AISystem");
		return pStaticClass;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0050 - 0x0048)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AITask");
		return pStaticClass;
	}

};


// Class AIModule.AITask_LockLogic
// 0x0000 (0x0050 - 0x0050)
class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return pStaticClass;
	}

};


// Class AIModule.AITask_MoveTo
// 0x0070 (0x00C0 - 0x0050)
class UAITask_MoveTo : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0064(0x0028)
	unsigned char                                      UnknownData01[0x34];                                      // 0x008C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return pStaticClass;
	}


	static class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<enum EAIOptionFlag> StopOnOverlap, TEnumAsByte<enum EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};


// Class AIModule.AITask_RunEQS
// 0x0050 (0x00A0 - 0x0050)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return pStaticClass;
	}


	static class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};


// Class AIModule.BehaviorTree
// 0x0024 (0x0040 - 0x001C)
class UBehaviorTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0024(0x000C) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0030(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BehaviorTree");
		return pStaticClass;
	}

};


// Class AIModule.BrainComponent
// 0x0040 (0x0108 - 0x00C8)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x00CC(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x00D4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BrainComponent");
		return pStaticClass;
	}


	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x00E0 (0x01E8 - 0x0108)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0108(0x0014) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x011C(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0128(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return pStaticClass;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BehaviorTreeManager
// 0x001C (0x0038 - 0x001C)
class UBehaviorTreeManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0020(0x000C) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x002C(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return pStaticClass;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0004 (0x0020 - 0x001C)
class UBehaviorTreeTypes : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardData
// 0x0018 (0x0038 - 0x0020)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0024(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardData");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0004 (0x0020 - 0x001C)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0028 - 0x0020)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0018 (0x0038 - 0x0020)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EnumName;                                                 // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0030(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0010 (0x0030 - 0x0020)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0028 - 0x0020)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0030 - 0x0020)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0020 - 0x0020)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return pStaticClass;
	}

};


// Class AIModule.BTCompositeNode
// 0x0020 (0x0060 - 0x0040)
class UBTCompositeNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<class UBTService*>                          Services;                                                 // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTCompositeNode");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0060 - 0x0060)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x0060 - 0x0060)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (0x0060 - 0x0060)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x0028 (0x0088 - 0x0060)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0068(0x000C) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x0074(0x000C) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBTBlackboardRestart>             NotifyObserver;                                           // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0028 (0x0068 - 0x0040)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0060(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0060(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<enum EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<enum EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0048 (0x0088 - 0x0040)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0040(0x0020) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0064(0x0018) (Edit)
	struct FString                                     CachedDescription;                                        // 0x007C(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0040 (0x0080 - 0x0040)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0040(0x0020) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0060(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x0088 - 0x0088)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0070 (0x00B0 - 0x0040)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0048(0x0020) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0068(0x0020) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0088(0x0020) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0048 (0x0088 - 0x0040)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0040(0x0020) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0060(0x0020) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x0080(0x0001)
	TEnumAsByte<enum EPathExistanceQueryType>          PathQueryType;                                            // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0030 (0x0090 - 0x0060)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0068(0x0020) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x0089(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x0089(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x0089(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0050 (0x0090 - 0x0040)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0048(0x0020) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0068(0x0020) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x0088(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x0088(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0040(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0040(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return pStaticClass;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return pStaticClass;
	}


	static void StopUsingExternalEvent(class UBTNode* NodeOwner);
	static void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	static void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	static void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	static void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	static void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	static void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	static void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	static void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	static void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	static void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	static void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	static struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static int GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};


// Class AIModule.BTService_BlueprintBase
// 0x0018 (0x0060 - 0x0048)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0050(0x000C) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x005C(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x005C(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTService_RunEQS
// 0x0040 (0x00A8 - 0x0068)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0068(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0018 (0x0068 - 0x0050)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AActor*                                      ActorOwner;                                               // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0054(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0064(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return pStaticClass;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0000 (0x0050 - 0x0050)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x0000 (0x0050 - 0x0050)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0050 - 0x0050)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0020 (0x0070 - 0x0050)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	unsigned char                                      bLooping : 1;                                             // 0x0050(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0054(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0058(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0000 (0x0050 - 0x0050)
class UBTTask_PlaySound : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0000 (0x0050 - 0x0050)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0000 (0x0050 - 0x0050)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0010 (0x0060 - 0x0050)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0050(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x0088 (0x00F8 - 0x0070)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0074(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0080(0x000C) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<enum EEnvQueryRunMode>                 RunMode;                                                  // 0x008C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x0090(0x0020) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00B8(0x0038) (Edit)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0060 - 0x0050)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0050(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0020 (0x0078 - 0x0058)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0058(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return pStaticClass;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0020 - 0x0020)
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return pStaticClass;
	}

};


// Class AIModule.CrowdManager
// 0x0098 (0x00B8 - 0x0020)
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0024(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOffsetRadiusMultiplier;                               // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 4;                                        // 0x005C(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x005C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x5B];                                      // 0x005D(0x005B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.CrowdManager");
		return pStaticClass;
	}

};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0388 - 0x0388)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return pStaticClass;
	}

};


// Class AIModule.EnvQuery
// 0x0018 (0x0038 - 0x0020)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0028(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQuery");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext
// 0x0004 (0x0020 - 0x001C)
class UEnvQueryContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return pStaticClass;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0004 (0x0020 - 0x001C)
class UEnvQueryDebugHelpers : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryNode
// 0x0004 (0x0020 - 0x001C)
class UEnvQueryNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryNode");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0018 (0x0038 - 0x0020)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      itemType;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0048 (0x0080 - 0x0038)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0018 (0x0050 - 0x0038)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return pStaticClass;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0010 (0x0048 - 0x0038)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	unsigned char                                      bAllowDifferentItemTypes : 1;                             // 0x0040(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasMatchingItemType : 1;                                 // 0x0040(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	class UClass*                                      ForcedItemType;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0028 (0x0060 - 0x0038)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0x0088 (0x00E8 - 0x0060)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x00E4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x00C0 (0x0120 - 0x0060)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x00E0(0x0010) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x00F0(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x0118(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x00F8 (0x0158 - 0x0060)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x00C4(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x00D8(0x0020) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CircleCenter;                                             // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0108(0x0020) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x0128(0x0028) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0048 (0x00A8 - 0x0060)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0048 (0x00F0 - 0x00A8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00A8(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x00D0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0034 (0x0050 - 0x001C)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0024(0x0014) MISSED OFFSET
	class UClass*                                      itemType;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return pStaticClass;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<enum EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType
// 0x0004 (0x0020 - 0x001C)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0020 - 0x0020)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryManager
// 0x00CC (0x00E8 - 0x001C)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x001C(0x0054) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x0070(0x000C) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x007C(0x000C) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x0088(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0094(0x0040) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x00D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x00D8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x00DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x00E0(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryManager");
		return pStaticClass;
	}


	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<enum EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryOption
// 0x0014 (0x0030 - 0x001C)
class UEnvQueryOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryOption");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest
// 0x0110 (0x0130 - 0x0020)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EEnvTestPurpose>                  TestPurpose;                                              // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<enum EEnvTestFilterOperator>           MultipleContextFilterOp;                                  // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EEnvTestScoreOperator>            MultipleContextScoreOp;                                   // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EEnvTestFilterType>               FilterType;                                               // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0098(0x0001) MISSED OFFSET
	TEnumAsByte<enum EEnvTestScoreEquation>            ScoringEquation;                                          // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EEnvQueryTestClamping>            ClampMinType;                                             // 0x009A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EEnvQueryTestClamping>            ClampMaxType;                                             // 0x009B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x009C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x00E0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0100(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x0128(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0000 (0x0130 - 0x0130)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0020 (0x0150 - 0x0130)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0130(0x000C) MISSED OFFSET
	struct FEnvDirection                               LineB;                                                    // 0x013C(0x0010) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x014C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x014D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x014E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0050 (0x0180 - 0x0130)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET
	bool                                               bUpdatedToUseQuery;                                       // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0161(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0162(0x0002) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0164(0x0018)
	unsigned char                                      UnknownData02[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0x0018 (0x0148 - 0x0130)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x0048 (0x0178 - 0x0130)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x0130(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0020 (0x0198 - 0x0178)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0178(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0x0028 (0x0158 - 0x0130)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x0130 - 0x0130)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x0090 (0x01C0 - 0x0130)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x0158(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0178(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0198(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0004 (0x0020 - 0x001C)
class UEnvQueryTypes : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return pStaticClass;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0020 - 0x0020)
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return pStaticClass;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0020 (0x05D0 - 0x05B0)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return pStaticClass;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0040 (0x0630 - 0x05F0)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x05F0(0x0004) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x05F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x05F8(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0604(0x000C) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x0614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x0618(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawLabels : 1;                                          // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x0619(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x0619(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0619(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x0619(0x0001) (Edit)
	TEnumAsByte<enum EEnvQueryRunMode>                 QueryingMode;                                             // 0x061A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x061B(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return pStaticClass;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0020 - 0x0020)
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return pStaticClass;
	}

};


// Class AIModule.GridPathAIController
// 0x0000 (0x0388 - 0x0388)
class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.GridPathAIController");
		return pStaticClass;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x0020 (0x0270 - 0x0250)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return pStaticClass;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0038 - 0x0038)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return pStaticClass;
	}

};


// Class AIModule.NavLocalGridManager
// 0x002C (0x0048 - 0x001C)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x001C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return pStaticClass;
	}


	static bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	static void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	static bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	static int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.PawnAction
// 0x004C (0x0068 - 0x001C)
class UPawnAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPawnAction*                                 ParentAction;                                             // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0024(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x002C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x0050(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x0050(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x0050(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0051(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction");
		return pStaticClass;
	}


	TEnumAsByte<enum EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<enum EPawnActionResult> WithResult);
	static class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x0068 - 0x0068)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return pStaticClass;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<enum EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0038 (0x00A0 - 0x0068)
class UPawnAction_Move : public UPawnAction
{
public:
	struct FVector                                     GoalLocation;                                             // 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x007C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x007C(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x007C(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x007C(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x007C(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x007C(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x007C(0x0001)
	unsigned char                                      UnknownData00[0x23];                                      // 0x007D(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Move");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0010 (0x0078 - 0x0068)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 RecentActionCopy;                                         // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<enum EPawnActionFailHandling>          ChildFailureHandlingMode;                                 // 0x006C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x006D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0018 (0x0080 - 0x0068)
class UPawnAction_Sequence : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	TEnumAsByte<enum EPawnActionFailHandling>          ChildFailureHandlingMode;                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x0078 - 0x0068)
class UPawnAction_Wait : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return pStaticClass;
	}

};


// Class AIModule.PawnActionsComponent
// 0x0028 (0x00F0 - 0x00C8)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x00CC(0x000C) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x00D8(0x000C) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return pStaticClass;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<enum EAIRequestPriority> Priority, class UObject* Instigator);
	static bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<enum EAIRequestPriority> Priority);
	TEnumAsByte<enum EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<enum EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0040 (0x0108 - 0x00C8)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x00DC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00DD(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x00E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x00F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return pStaticClass;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0004 (0x0020 - 0x001C)
class UVisualLoggerExtension : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return pStaticClass;
	}

};


}

