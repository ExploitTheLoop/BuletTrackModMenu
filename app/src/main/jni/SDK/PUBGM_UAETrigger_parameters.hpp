#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAETrigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UAETrigger.UAELevelDirector.StartLevelDirector
struct AUAELevelDirector_StartLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.SetTriggerRunType
struct AUAELevelDirector_SetTriggerRunType_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	EUAETriggerRunType                                 RunType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.SetEnable
struct AUAELevelDirector_SetEnable_Params
{
	bool                                               Enab;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.S2Sim_CallExcuteAction
struct AUAELevelDirector_S2Sim_CallExcuteAction_Params
{
};

// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
struct AUAELevelDirector_RequestTriggerComplete_Params
{
	class UUAETriggerObject*                           CompleteTrigger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
struct AUAELevelDirector_OnRep_LevelDirectorData_Params
{
};

// Function UAETrigger.UAELevelDirector.InitialLevelDirector
struct AUAELevelDirector_InitialLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetTrigger
struct AUAELevelDirector_GetTrigger_Params
{
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UUAETriggerObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetHasBeenInit
struct AUAELevelDirector_GetHasBeenInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetDataSet
struct AUAELevelDirector_GetDataSet_Params
{
	class UVariableSet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetCurTaskID
struct AUAELevelDirector_GetCurTaskID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.ForceExecuteTrigger
struct AUAELevelDirector_ForceExecuteTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
};

// Function UAETrigger.UAELevelDirector.FlowControllSubControll
struct AUAELevelDirector_FlowControllSubControll_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOr
struct AUAELevelDirector_FlowControllOr_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
struct AUAELevelDirector_FlowControllOneSequence_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
struct AUAELevelDirector_FlowControllMultiSequence_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllAnd
struct AUAELevelDirector_FlowControllAnd_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	bool                                               DefaultActive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.DeactiveTrigger
struct AUAELevelDirector_DeactiveTrigger_Params
{
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
};

// Function UAETrigger.UAELevelDirector.DeactiveNode
struct AUAELevelDirector_DeactiveNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
};

// Function UAETrigger.UAELevelDirector.ClientExecuteAction
struct AUAELevelDirector_ClientExecuteAction_Params
{
	struct FString                                     ActionClassName;                                          // (Parm, ZeroConstructor)
	int64_t                                            UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTriggerParamRepData>                RepParams;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               IsKeep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRevert;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAELevelDirector_PlayerRepInfo*             InLevelDirector_PlayerRepInfo;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddEventToTrigger
struct AUAELevelDirector_AddEventToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
struct AUAELevelDirector_AddConditionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerCondition*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddActionToTrigger
struct AUAELevelDirector_AddActionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerAction*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.ActiveTrigger
struct AUAELevelDirector_ActiveTrigger_Params
{
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
};

// Function UAETrigger.UAELevelDirector.ActiveNode
struct AUAELevelDirector_ActiveNode_Params
{
	struct FString                                     NodeName;                                                 // (Parm, ZeroConstructor)
};

// Function UAETrigger.TriggerCondition.AddChildCondition
struct UTriggerCondition_AddChildCondition_Params
{
	class UTriggerCondition*                           NewChildCond;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAETriggerArea.OnTriggerExit
struct AUAETriggerArea_OnTriggerExit_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAETriggerArea.OnTriggerEnter
struct AUAETriggerArea_OnTriggerEnter_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UAETrigger.UAETriggerFuncLib.GetLastIteratorActor
struct UUAETriggerFuncLib_GetLastIteratorActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEventWithTag
struct ULevelEventCenterFunctionLibrary_QuickFireLevelEventWithTag_Params
{
	struct FString                                     EventFuncName;                                            // (Parm, ZeroConstructor)
	class AActor*                                      PlayerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
};

// Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEvent
struct ULevelEventCenterFunctionLibrary_QuickFireLevelEvent_Params
{
	struct FString                                     EventFuncName;                                            // (Parm, ZeroConstructor)
	class AActor*                                      PlayerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerKey;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventTag;                                                 // (Parm, ZeroConstructor)
};

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_LevelDirector
struct AUAELevelDirector_PlayerRepInfo_OnRep_LevelDirector_Params
{
};

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_ActionRepDatas
struct AUAELevelDirector_PlayerRepInfo_OnRep_ActionRepDatas_Params
{
};

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.ClientExecuteAction
struct AUAELevelDirector_PlayerRepInfo_ClientExecuteAction_Params
{
	struct FTriggerActionRepData                       InActionRepData;                                          // (ConstParm, Parm, ReferenceParm)
};

}

