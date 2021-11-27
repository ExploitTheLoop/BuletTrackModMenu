#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAETrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAETrigger.LevelEventCenter
// 0x008C (0x00A8 - 0x001C)
class ULevelEventCenter : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<struct FString, class UTriggerEvent*>         TriggerEvents;                                            // 0x0028(0x0050) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<struct FString, struct FLevelEventListenerList> EventListeners;                                           // 0x0068(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventCenter");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelDirector
// 0x0140 (0x0420 - 0x02E0)
class AUAELevelDirector : public AActor
{
public:
	TArray<struct FLevelDirectorInstAction>            InstanceActions;                                          // 0x02E0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FString>                             ClassPaths;                                               // 0x02EC(0x000C) (Edit, ZeroConstructor)
	struct FString                                     ConfigFilePath;                                           // 0x02F8(0x000C) (Edit, ZeroConstructor)
	class UClass*                                      PlayerRepInfoClass;                                       // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClientConfigFilePath;                                     // 0x0308(0x000C) (Edit, ZeroConstructor)
	struct FUAELevelDirectorRepData                    LevelDirectorRepData;                                     // 0x0314(0x0010) (Net, Transient)
	TMap<uint32_t, class AUAELevelDirector_PlayerRepInfo*> AllPlayersRepInfo;                                        // 0x0324(0x0050) (ZeroConstructor, Transient)
	TArray<class UUAETriggerFuncLib*>                  FunctionLibList;                                          // 0x0360(0x000C) (ZeroConstructor)
	class UTriggersFlowBase*                           TriggersFlowTree;                                         // 0x036C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FString, class UUAETriggerObject*>     TriggerObjectMap;                                         // 0x0370(0x0050) (ZeroConstructor)
	class UVariableSet*                                AllVariableSet;                                           // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UUAETriggerParamFuncLib*                     TriggerParamFuncLib;                                      // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	class ULevelEventCenter*                           LevelEventCenter;                                         // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DescData;                                                 // 0x03B8(0x000C) (ZeroConstructor)
	class AUAELevelDirector_PlayerRepInfo*             CurLevelDirector_PlayerRepInfo;                           // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, class AUAELevelDirector_PlayerRepInfo*> HistoryLevelDirector_PlayerRepInfos;                      // 0x03C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0404(0x0008) MISSED OFFSET
	struct FTaskRepData                                TaskData;                                                 // 0x040C(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x041C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirector");
		return pStaticClass;
	}


	bool StartLevelDirector();
	void SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType);
	void SetEnable(bool Enab);
	void S2Sim_CallExcuteAction();
	void RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger);
	void OnRep_LevelDirectorData();
	bool InitialLevelDirector();
	class UUAETriggerObject* GetTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	bool GetHasBeenInit();
	class UVariableSet* GetDataSet();
	int GetCurTaskID();
	void ForceExecuteTrigger(const struct FString& TriggerName);
	bool FlowControllSubControll(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllOr(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllOneSequence(const struct FString& TriggerName, const struct FString& NodeName);
	bool FlowControllMultiSequence(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllAnd(const struct FString& NodeName, bool DefaultActive, TArray<struct FString>* TriggerNames);
	void DeactiveTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	void DeactiveNode(const struct FString& NodeName);
	void ClientExecuteAction(const struct FString& ActionClassName, int64_t UId, TArray<struct FTriggerParamRepData> RepParams, bool IsKeep, bool IsRevert, class AUAELevelDirector_PlayerRepInfo* InLevelDirector_PlayerRepInfo);
	void AddEventToTrigger(const struct FString& TriggerName, class UClass* Event);
	class UTriggerCondition* AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition);
	class UTriggerAction* AddActionToTrigger(const struct FString& TriggerName, class UClass* Action);
	void ActiveTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	void ActiveNode(const struct FString& NodeName);
};


// Class UAETrigger.TriggerAction
// 0x004C (0x0068 - 0x001C)
class UTriggerAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	bool                                               bEnableActionTick;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EUAETriggerActionExecPolicy                        ExecPolicy;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AUAELevelDirector*                           ActionOuterActor;                                         // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET
	bool                                               bSupportNetRep;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x0051(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition
// 0x0024 (0x0040 - 0x001C)
class UTriggerCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UTriggerCondition*>                   ChildConditions;                                          // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition");
		return pStaticClass;
	}


	void AddChildCondition(class UTriggerCondition* NewChildCond);
};


// Class UAETrigger.TriggerEvent
// 0x0064 (0x0080 - 0x001C)
class UTriggerEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UObject*                                     EventInstigator;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	TMap<struct FString, struct FTriggerEventListenerTrigger> RelevantListener;                                         // 0x0038(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0074(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea
// 0x0018 (0x02F8 - 0x02E0)
class AUAETriggerArea : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	TArray<struct FTriggerAreaEvent>                   Leave_EventsList;                                         // 0x02E8(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea");
		return pStaticClass;
	}


	void OnTriggerExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnTriggerEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class UAETrigger.UAETriggerFuncLib
// 0x0014 (0x0030 - 0x001C)
class UUAETriggerFuncLib : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UVariableSet*                                DataSet;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerFuncLib");
		return pStaticClass;
	}


	class AActor* GetLastIteratorActor();
};


// Class UAETrigger.UAETriggerParamFuncLib
// 0x0000 (0x0030 - 0x0030)
class UUAETriggerParamFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerParamFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerEventFuncLib
// 0x0000 (0x0030 - 0x0030)
class UUAETriggerEventFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerEventFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerObject
// 0x0134 (0x0150 - 0x001C)
class UUAETriggerObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                EventDelayTime;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ActionDelayTime;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     TriggerName;                                              // 0x0028(0x000C) (Edit, ZeroConstructor, EditConst)
	class AActor*                                      OuterActor;                                               // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              TriggerEventsClass;                                       // 0x0038(0x000C) (ZeroConstructor)
	TArray<class UTriggerAction*>                      TriggerActions;                                           // 0x0044(0x000C) (ZeroConstructor)
	TArray<class UTriggerCondition*>                   TriggerConditions;                                        // 0x0050(0x000C) (ZeroConstructor, Transient)
	class UFlowNodeBase*                               CarrierFlowNode;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0061(0x000F) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_EventDelay;                                   // 0x0070(0x0008)
	struct FTimerHandle                                TimerHandle_ActionDelay;                                  // 0x0078(0x0008)
	class UTriggerEvent*                               CurEvent;                                                 // 0x0080(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FString                                     DelayEventName;                                           // 0x0084(0x000C) (ZeroConstructor)
	struct FString                                     FiredEventName;                                           // 0x0090(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x009C(0x003C) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.TriggeredEvents
	unsigned char                                      UnknownData03[0x3C];                                      // 0x00D8(0x003C) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.CompleteActions
	bool                                               IsEnableCheckDo;                                          // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0118(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x011C(0x0018) MISSED OFFSET
	bool                                               bEnableTick;                                              // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldReplicateAction;                                   // 0x013C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCacheParamToTriggerObject;                               // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	TArray<class UProperty*>                           eventParams;                                              // 0x0140(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerObject");
		return pStaticClass;
	}

};


// Class UAETrigger.LevelEventListener
// 0x009C (0x00B8 - 0x001C)
class ULevelEventListener : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<struct FString, struct FName>                 RelevantListenerCallbacks;                                // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0064(0x003C) UNKNOWN PROPERTY: SetProperty UAETrigger.LevelEventListener.ObjectRelevantEvents
	class AActor*                                      ListenerEntity;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UProperty*>                           Params;                                                   // 0x00A4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventListener");
		return pStaticClass;
	}

};


// Class UAETrigger.ActorEventListener
// 0x0010 (0x00C8 - 0x00B8)
class UActorEventListener : public ULevelEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.ActorEventListener");
		return pStaticClass;
	}

};


// Class UAETrigger.FlowNodeBase
// 0x003C (0x0058 - 0x001C)
class UFlowNodeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FUFlowNodeRepData                           RepData;                                                  // 0x0020(0x0010)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	bool                                               IsActive;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DefaltActive;                                             // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	class UTriggersFlowBase*                           CarriedFlow;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	EFlowNodeType                                      NodeType;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	TArray<class UUAETriggerObject*>                   TriggerObjects;                                           // 0x004C(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.FlowNodeBase");
		return pStaticClass;
	}

};


// Class UAETrigger.AndFlowNode
// 0x0040 (0x0098 - 0x0058)
class UAndFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.AndFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.BranchFlowNode
// 0x0000 (0x0058 - 0x0058)
class UBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.BranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEventWrapperInterface
// 0x0000 (0x0020 - 0x0020)
class UTriggerEventWrapperInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEventWrapperInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.LevelEventCenterFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class ULevelEventCenterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventCenterFunctionLibrary");
		return pStaticClass;
	}


	static void QuickFireLevelEventWithTag(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& Tag);
	static void QuickFireLevelEvent(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& PlayerKey, const struct FString& EventTag);
};


// Class UAETrigger.OrFlowNode
// 0x0000 (0x0058 - 0x0058)
class UOrFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.OrFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SequenceFlowNode
// 0x0008 (0x0060 - 0x0058)
class USequenceFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.SequenceFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SubBranchFlowNode
// 0x0000 (0x0058 - 0x0058)
class USubBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.SubBranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerAction_CallFunction
// 0x0008 (0x0070 - 0x0068)
class UTriggerAction_CallFunction : public UTriggerAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction_CallFunction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition_Comparison
// 0x0000 (0x0040 - 0x0040)
class UTriggerCondition_Comparison : public UTriggerCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition_Comparison");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEvent_Implementable
// 0x0068 (0x00E8 - 0x0080)
class UTriggerEvent_Implementable : public UTriggerEvent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	TArray<class UProperty*>                           Params;                                                   // 0x0088(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0094(0x0010) MISSED OFFSET
	class UFunction*                                   CachedAreaEventFunc;                                      // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FEventFuncListenerTrigger> EventFuncListener;                                        // 0x00A8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent_Implementable");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEventBroadcastInterface
// 0x0000 (0x0020 - 0x0020)
class UTriggerEventBroadcastInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEventBroadcastInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowBase
// 0x004C (0x0068 - 0x001C)
class UTriggersFlowBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UFlowNodeBase*>         Nodes;                                                    // 0x0028(0x0050) (ZeroConstructor, Transient)
	bool                                               IsRun;                                                    // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowBase");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowMultiNodes
// 0x0000 (0x0068 - 0x0068)
class UTriggersFlowMultiNodes : public UTriggersFlowBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowMultiNodes");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowTree
// 0x0018 (0x0080 - 0x0068)
class UTriggersFlowTree : public UTriggersFlowBase
{
public:
	class UFlowNodeBase*                               RootNode;                                                 // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               TailNode;                                                 // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               CurrentNode;                                              // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               SubNode;                                                  // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowTree");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelDirector_PlayerRepInfo
// 0x0050 (0x0330 - 0x02E0)
class AUAELevelDirector_PlayerRepInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	uint32_t                                           UniqueId;                                                 // 0x02E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AUAELevelDirector*                           RelevantLevelDirector;                                    // 0x02EC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x02F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirector_PlayerRepInfo");
		return pStaticClass;
	}


	void OnRep_LevelDirector();
	void OnRep_ActionRepDatas();
	void ClientExecuteAction(const struct FTriggerActionRepData& InActionRepData);
};


// Class UAETrigger.UAELevelDirectorBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class UUAELevelDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirectorBlueprint");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelEventCenterInterface
// 0x0000 (0x0020 - 0x0020)
class UUAELevelEventCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelEventCenterInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea_Sphere
// 0x0000 (0x02F8 - 0x02F8)
class AUAETriggerArea_Sphere : public AUAETriggerArea
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea_Sphere");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea_Box
// 0x0000 (0x02F8 - 0x02F8)
class AUAETriggerArea_Box : public AUAETriggerArea
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea_Box");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent
// 0x0050 (0x0600 - 0x05B0)
class UUAETriggerAreaComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B0(0x0008) MISSED OFFSET
	float                                              EnterAreaColdTime;                                        // 0x05B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTriggerAreaEvent>                   Enter_EventsList;                                         // 0x05BC(0x000C) (Edit, ZeroConstructor)
	float                                              LeaveAreaColdTime;                                        // 0x05C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTriggerAreaEvent>                   Leave_EventsList;                                         // 0x05CC(0x000C) (Edit, ZeroConstructor)
	struct FColor                                      ShapeColor;                                               // 0x05D8(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x05DC(0x000C) MISSED OFFSET
	TArray<class AActor*>                              CachedEnterAreaActors;                                    // 0x05E8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x05F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent_Box
// 0x0020 (0x0620 - 0x0600)
class UUAETriggerAreaComponent_Box : public UUAETriggerAreaComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0600(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent_Box");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent_Sphere
// 0x0000 (0x0600 - 0x0600)
class UUAETriggerAreaComponent_Sphere : public UUAETriggerAreaComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent_Sphere");
		return pStaticClass;
	}

};


// Class UAETrigger.VariableSet
// 0x007C (0x0098 - 0x001C)
class UVariableSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
	struct FVariableSetCachedActors                    DataActors;                                               // 0x0058(0x0040) (Transient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.VariableSet");
		return pStaticClass;
	}

};


}

