#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Skill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Skill.UTSkillBaseWidget.SetValueAsWeakObject
struct UUTSkillBaseWidget_SetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsVector
struct UUTSkillBaseWidget_SetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsString
struct UUTSkillBaseWidget_SetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillBaseWidget.SetValueAsRotator
struct UUTSkillBaseWidget_SetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    RotatorValue;                                             // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsObject
struct UUTSkillBaseWidget_SetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsName
struct UUTSkillBaseWidget_SetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsInt
struct UUTSkillBaseWidget_SetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsFloat
struct UUTSkillBaseWidget_SetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsEnum
struct UUTSkillBaseWidget_SetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsClass
struct UUTSkillBaseWidget_SetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.SetValueAsBool
struct UUTSkillBaseWidget_SetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistWeakObject
struct UUTSkillBaseWidget_IsExistWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistVector
struct UUTSkillBaseWidget_IsExistVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistString
struct UUTSkillBaseWidget_IsExistString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistRotator
struct UUTSkillBaseWidget_IsExistRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistObject
struct UUTSkillBaseWidget_IsExistObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistName
struct UUTSkillBaseWidget_IsExistName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistInt
struct UUTSkillBaseWidget_IsExistInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistFloat
struct UUTSkillBaseWidget_IsExistFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistEnum
struct UUTSkillBaseWidget_IsExistEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistClass
struct UUTSkillBaseWidget_IsExistClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.IsExistBool
struct UUTSkillBaseWidget_IsExistBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsWeakObject
struct UUTSkillBaseWidget_GetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsWeakActor
struct UUTSkillBaseWidget_GetValueAsWeakActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsVector
struct UUTSkillBaseWidget_GetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsString
struct UUTSkillBaseWidget_GetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillBaseWidget.GetValueAsRotator
struct UUTSkillBaseWidget_GetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsObject
struct UUTSkillBaseWidget_GetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsName
struct UUTSkillBaseWidget_GetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsInt
struct UUTSkillBaseWidget_GetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsFloat
struct UUTSkillBaseWidget_GetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsEnum
struct UUTSkillBaseWidget_GetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsClass
struct UUTSkillBaseWidget_GetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsBool
struct UUTSkillBaseWidget_GetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetValueAsActor
struct UUTSkillBaseWidget_GetValueAsActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetUAEBlackboardBySkillComp
struct UUTSkillBaseWidget_GetUAEBlackboardBySkillComp_Params
{
	class UUTSkillManagerComponent*                    InOwnerSkillManager;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetUAEBlackboard
struct UUTSkillBaseWidget_GetUAEBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
struct UUTSkillBaseWidget_GetOwnerSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetOwnerPawn
struct UUTSkillBaseWidget_GetOwnerPawn_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetActorBlackboardBySkillComp
struct UUTSkillBaseWidget_GetActorBlackboardBySkillComp_Params
{
	class UUTSkillManagerComponent*                    InOwnerSkillManager;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillBaseWidget.GetActorBlackboard
struct UUTSkillBaseWidget_GetActorBlackboard_Params
{
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillCondition.IsTargetOK
struct UUTSkillCondition_IsTargetOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsOK_Internal
struct UUTSkillCondition_IsOK_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsOK
struct UUTSkillCondition_IsOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.GetOwnerSkill
struct UUTSkillCondition_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillEffect.UpdateAction
struct UUTSkillEffect_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.UndoAction
struct UUTSkillEffect_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PreCloseSkill
struct UUTSkillEffect_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PostInitSkill
struct UUTSkillEffect_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PostActiveSkill
struct UUTSkillEffect_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
struct UUTSkillEffect_OnAsyncLoadSoftPathDone_Params
{
};

// Function Skill.UTSkillEffect.GetOwnerSkill
struct UUTSkillEffect_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillEffect.DoHurtAppearance
struct UUTSkillEffect_DoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.DoAction
struct UUTSkillEffect_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.UpdateAction_Internal
struct UUTSkillAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.UpdateAction
struct UUTSkillAction_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.UndoAction_Internal
struct UUTSkillAction_UndoAction_Internal_Params
{
};

// Function Skill.UTSkillAction.UndoAction
struct UUTSkillAction_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.TimerRealDoAction
struct UUTSkillAction_TimerRealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.Reset_Internal
struct UUTSkillAction_Reset_Internal_Params
{
};

// Function Skill.UTSkillAction.Reset
struct UUTSkillAction_Reset_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoAction_Internal
struct UUTSkillAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoAction
struct UUTSkillAction_RealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.PreCloseSkill
struct UUTSkillAction_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.PostInitSkill
struct UUTSkillAction_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.PostActiveSkill
struct UUTSkillAction_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.OnAsyncLoadAssetDone
struct UUTSkillAction_OnAsyncLoadAssetDone_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.JudgeNeedPhaseWait
struct UUTSkillAction_JudgeNeedPhaseWait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.DoAction
struct UUTSkillAction_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.StopSkillCoolDown
struct AUTSkill_StopSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.SetSkillPhasePercentage
struct AUTSkill_SetSkillPhasePercentage_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.OnEvent
struct AUTSkill_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.IsEnableSkillCoolDown
struct AUTSkill_IsEnableSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.IsCDOK
struct AUTSkill_IsCDOK_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSpecificSkillManager
struct AUTSkill_GetSpecificSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.GetSpecificBlackboard
struct AUTSkill_GetSpecificBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhasePercentage
struct AUTSkill_GetSkillPhasePercentage_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhaseByName
struct AUTSkill_GetSkillPhaseByName_Params
{
	struct FString                                     PhaseName;                                                // (Parm, ZeroConstructor)
	class UUTSkillPhase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhase
struct AUTSkill_GetSkillPhase_Params
{
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillPhase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillEffectByPhaseName
struct AUTSkill_GetSkillEffectByPhaseName_Params
{
	struct FString                                     PhaseName;                                                // (Parm, ZeroConstructor)
	struct FString                                     EffectName;                                               // (Parm, ZeroConstructor)
	class UUTSkillBaseWidget*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillEffectByPhaseIndex
struct AUTSkill_GetSkillEffectByPhaseIndex_Params
{
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // (Parm, ZeroConstructor)
	class UUTSkillBaseWidget*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.DoSkillCoolDown
struct AUTSkill_DoSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.CanBePlayed
struct AUTSkill_CanBePlayed_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowErrorMsg;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
struct UUTSkillManagerComponent_UpdateSyncSkillCDData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState
struct UUTSkillManagerComponent_UpdateSyncSkillActiveState_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
struct UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
struct UUTSkillManagerComponent_TryDeleteOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsImmediately;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TryAddOneSkill
struct UUTSkillManagerComponent_TryAddOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerParamsEvent
struct UUTSkillManagerComponent_TriggerParamsEvent_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                InEventType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUTSkillClientData                          OperateData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.TriggerEvent_WithID
struct UUTSkillManagerComponent_TriggerEvent_WithID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                InEventType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerEvent
struct UUTSkillManagerComponent_TriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TraceTarget
struct UUTSkillManagerComponent_TraceTarget_Params
{
	struct FVector                                     StartTrace;                                               // (Parm, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (Parm, IsPlainOldData)
	EUTPickerTargetType                                TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SyncOneSkillState
struct UUTSkillManagerComponent_SyncOneSkillState_Params
{
	bool                                               RepSkillCD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RepSkillActiveState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkillWithSlot
struct UUTSkillManagerComponent_StopSkillWithSlot_Params
{
	int                                                SkillSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkillSpecific
struct UUTSkillManagerComponent_StopSkillSpecific_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkillAll
struct UUTSkillManagerComponent_StopSkillAll_Params
{
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkill_WithID
struct UUTSkillManagerComponent_StopSkill_WithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkill
struct UUTSkillManagerComponent_StopSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ShouldTriggerEvent
struct UUTSkillManagerComponent_ShouldTriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
struct UUTSkillManagerComponent_SetupOwnerAndSystem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillState
struct UUTSkillManagerComponent_SetSkillState_Params
{
	TArray<struct FUTSkillStateSyncData>               InSyncStateDatas;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.SetSkillOwner
struct UUTSkillManagerComponent_SetSkillOwner_Params
{
	class AActor*                                      tempActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillLevel
struct UUTSkillManagerComponent_SetSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillLastPhase
struct UUTSkillManagerComponent_SetSkillLastPhase_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillCurPhase
struct UUTSkillManagerComponent_SetSkillCurPhase_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillActive
struct UUTSkillManagerComponent_SetSkillActive_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetModSkillUIRoot
struct UUTSkillManagerComponent_SetModSkillUIRoot_Params
{
	class UUAEUserWidget*                              ModSkillUIRoot;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetCurSkill
struct UUTSkillManagerComponent_SetCurSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetAutoSkillID
struct UUTSkillManagerComponent_SetAutoSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerParamsEvent
struct UUTSkillManagerComponent_ServerTriggerParamsEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUTSkillClientData                          OperateData;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
struct UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
struct UUTSkillManagerComponent_ServerTriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerStartSkill
struct UUTSkillManagerComponent_ServerStartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
struct UUTSkillManagerComponent_ServerNotifyRandomSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ResetSkillCollDown
struct UUTSkillManagerComponent_ResetSkillCollDown_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ResetAllSkillCollDown
struct UUTSkillManagerComponent_ResetAllSkillCollDown_Params
{
};

// Function Skill.UTSkillManagerComponent.RequestSkillStates
struct UUTSkillManagerComponent_RequestSkillStates_Params
{
	bool                                               RepSkillCD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RepSkillActiveState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        RequestIDs;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
struct UUTSkillManagerComponent_RepSkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.RepOneSkillSynData
struct UUTSkillManagerComponent_RepOneSkillSynData_Params
{
	int                                                SkillSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLastSkillID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RepLastCastTime
struct UUTSkillManagerComponent_RepLastCastTime_Params
{
};

// Function Skill.UTSkillManagerComponent.ReplaceSkill
struct UUTSkillManagerComponent_ReplaceSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RemoveSkillUIWidget
struct UUTSkillManagerComponent_RemoveSkillUIWidget_Params
{
	struct FString                                     SkillClassName;                                           // (Parm, ZeroConstructor)
	struct FSoftObjectPath                             ObjPath;                                                  // (Parm)
};

// Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
struct UUTSkillManagerComponent_RemoveReplacedSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
struct UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params
{
};

// Function Skill.UTSkillManagerComponent.RegistSkillUIWidgetBP
struct UUTSkillManagerComponent_RegistSkillUIWidgetBP_Params
{
	struct FString                                     SkillClassName;                                           // (Parm, ZeroConstructor)
	struct FSoftObjectPath                             ObjPath;                                                  // (Parm)
};

// Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
struct UUTSkillManagerComponent_RegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              RegisterBlackboard;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RandRangeSyn
struct UUTSkillManagerComponent_RandRangeSyn_Params
{
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
struct UUTSkillManagerComponent_PlayHurtSkillEffect_Params
{
	struct FUTSkillHitInfo                             TheSkillHitInfo;                                          // (Parm)
};

// Function Skill.UTSkillManagerComponent.OnStopSkill
struct UUTSkillManagerComponent_OnStopSkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.OnSameTeam
struct UUTSkillManagerComponent_OnSameTeam_Params
{
	class AActor*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.OnRespawned
struct UUTSkillManagerComponent_OnRespawned_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillSynSinglePhaseData
struct UUTSkillManagerComponent_OnRep_SkillSynSinglePhaseData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillSynData
struct UUTSkillManagerComponent_OnRep_SkillSynData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
struct UUTSkillManagerComponent_OnRep_SkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
struct UUTSkillManagerComponent_OnRep_SkillCDDatas_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
struct UUTSkillManagerComponent_OnRep_SkillActiveState_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
struct UUTSkillManagerComponent_OnRep_ReplaceSkill_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
struct UUTSkillManagerComponent_OnRep_DynamicRepData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRecycled
struct UUTSkillManagerComponent_OnRecycled_Params
{
};

// Function Skill.UTSkillManagerComponent.OnInterruptSkill
struct UUTSkillManagerComponent_OnInterruptSkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsUsingSkill
struct UUTSkillManagerComponent_IsUsingSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsSkillCanUse
struct UUTSkillManagerComponent_IsSkillCanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsSkillActived
struct UUTSkillManagerComponent_IsSkillActived_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
struct UUTSkillManagerComponent_IsReadyToCastSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
struct UUTSkillManagerComponent_IsEnableSkillCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
struct UUTSkillManagerComponent_IsCurrentUseSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCastingSkillID
struct UUTSkillManagerComponent_IsCastingSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCastingSkill
struct UUTSkillManagerComponent_IsCastingSkill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
struct UUTSkillManagerComponent_HandleTriggerParamsEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUTSkillClientData                          OperateData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.HandleSkillStop
struct UUTSkillManagerComponent_HandleSkillStop_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleSkillStart
struct UUTSkillManagerComponent_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillId
struct UUTSkillManagerComponent_GetUAEBlackboardBySkillId_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetUAEBlackboard
struct UUTSkillManagerComponent_GetUAEBlackboard_Params
{
	class AUTSkill*                                    InSkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillWidget
struct UUTSkillManagerComponent_GetSkillWidget_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillState
struct UUTSkillManagerComponent_GetSkillState_Params
{
	TArray<struct FUTSkillStateSyncData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
struct UUTSkillManagerComponent_GetSkillSlotBySkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
struct UUTSkillManagerComponent_GetSkillSlotBySkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillsByGroup
struct UUTSkillManagerComponent_GetSkillsByGroup_Params
{
	struct FName                                       SkillGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUTSkill*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkillLevel
struct UUTSkillManagerComponent_GetSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillLastPhase
struct UUTSkillManagerComponent_GetSkillLastPhase_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillIDFromSkillIndex
struct UUTSkillManagerComponent_GetSkillIDFromSkillIndex_Params
{
	int                                                InSkillIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillIDByClass
struct UUTSkillManagerComponent_GetSkillIDByClass_Params
{
	class UClass*                                      SkillClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillCurPhase
struct UUTSkillManagerComponent_GetSkillCurPhase_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillByName
struct UUTSkillManagerComponent_GetSkillByName_Params
{
	struct FString                                     SkillName;                                                // (Parm, ZeroConstructor)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillByClassName
struct UUTSkillManagerComponent_GetSkillByClassName_Params
{
	struct FString                                     SkillClassName;                                           // (Parm, ZeroConstructor)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillBaseData
struct UUTSkillManagerComponent_GetSkillBaseData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUTSkillCreateData                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkill
struct UUTSkillManagerComponent_GetSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetReplacedSkill
struct UUTSkillManagerComponent_GetReplacedSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
struct UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<enum ENetRole>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetLastCastTime
struct UUTSkillManagerComponent_GetLastCastTime_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
struct UUTSkillManagerComponent_GetLastCastFinishTime_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurUsingSkillIDS
struct UUTSkillManagerComponent_GetCurUsingSkillIDS_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCurSkills
struct UUTSkillManagerComponent_GetCurSkills_Params
{
	TArray<class AUTSkill*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillPhases
struct UUTSkillManagerComponent_GetCurSkillPhases_Params
{
	TArray<class UUTSkillPhase*>                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
struct UUTSkillManagerComponent_GetCurSkillPhase_Params
{
	int                                                InSkillSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillPhase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillIDs
struct UUTSkillManagerComponent_GetCurSkillIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillID
struct UUTSkillManagerComponent_GetCurSkillID_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkill
struct UUTSkillManagerComponent_GetCurSkill_Params
{
	int                                                InSkillSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
struct UUTSkillManagerComponent_GetCurMonopolizeSkills_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.FindRelatedCurSkillID
struct UUTSkillManagerComponent_FindRelatedCurSkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutRelatedSkillSlot;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPeekSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
struct UUTSkillManagerComponent_DynamicRemoveSkill_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.DynamicAddSkill
struct UUTSkillManagerComponent_DynamicAddSkill_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClientStartSkill
struct UUTSkillManagerComponent_ClientStartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClearSkill
struct UUTSkillManagerComponent_ClearSkill_Params
{
};

// Function Skill.UTSkillManagerComponent.ClearRepParams
struct UUTSkillManagerComponent_ClearRepParams_Params
{
};

// Function Skill.UTSkillManagerComponent.ClearInitParams
struct UUTSkillManagerComponent_ClearInitParams_Params
{
};

// Function Skill.UTSkillInterface.TriggerEvent
struct UUTSkillInterface_TriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillStart
struct UUTSkillInterface_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillEnd
struct UUTSkillInterface_HandleSkillEnd_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillPhase.TryJumpToPhase
struct UUTSkillPhase_TryJumpToPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PhaseId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.StopPhase
struct UUTSkillPhase_StopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.StartPhase
struct UUTSkillPhase_StartPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.RepeatPhase
struct UUTSkillPhase_RepeatPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PlaySkillHurtEffect
struct UUTSkillPhase_PlaySkillHurtEffect_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
struct UUTSkillPhase_PlaySkillHurtAppearances_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PickTargets
struct UUTSkillPhase_PickTargets_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.OnEvent
struct UUTSkillPhase_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.OnCustomEvent
struct UUTSkillPhase_OnCustomEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<enum EUTSkillEventType>                TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.GetChargePhaseRate
struct UUTSkillPhase_GetChargePhaseRate_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ForceStopPhase
struct UUTSkillPhase_ForceStopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ClearAttachments
struct UUTSkillPhase_ClearAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.AfterStartPhase
struct UUTSkillPhase_AfterStartPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.AddSkillConditionLua
struct UUTSkillPhase_AddSkillConditionLua_Params
{
	class AUTSkill*                                    InSkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLuaPath;                                                // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillPhase.AddSkillActionLua
struct UUTSkillPhase_AddSkillActionLua_Params
{
	class AUTSkill*                                    InSkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLuaPath;                                                // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillPicker.PickTargetsInner
struct UUTSkillPicker_PickTargetsInner_Params
{
	struct FVector                                     OriginPoint;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPicker.PickTargets
struct UUTSkillPicker_PickTargets_Params
{
	struct FVector                                     OriginPoint;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPickerFilter.HandleFilterArray
struct UUTSkillPickerFilter_HandleFilterArray_Params
{
	TArray<struct FUTSkillPickedTarget>                inArray;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.TriggerPassiveEvent
struct UUTSkillWidget_TriggerPassiveEvent_Params
{
	TEnumAsByte<enum EUTSkillEventType>                SkillEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.TriggerEvent
struct UUTSkillWidget_TriggerEvent_Params
{
	TEnumAsByte<enum EUTSkillEventType>                SkillEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.SetSkillManager
struct UUTSkillWidget_SetSkillManager_Params
{
	class UUTSkillManagerComponent*                    manager;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillWidget.SetSkillID
struct UUTSkillWidget_SetSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.RemoveSkillUI
struct UUTSkillWidget_RemoveSkillUI_Params
{
};

// Function Skill.UTSkillWidget.OnSkillStopEvent
struct UUTSkillWidget_OnSkillStopEvent_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 InStopReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.OnSkillStartEvent
struct UUTSkillWidget_OnSkillStartEvent_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.IsTickFinish
struct UUTSkillWidget_IsTickFinish_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.IsCDReady
struct UUTSkillWidget_IsCDReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetSkillName
struct UUTSkillWidget_GetSkillName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillWidget.GetSkillManager
struct UUTSkillWidget_GetSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetSkillID
struct UUTSkillWidget_GetSkillID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetSkillCDProgess
struct UUTSkillWidget_GetSkillCDProgess_Params
{
	TArray<float>                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillWidget.GetSkillCDBases
struct UUTSkillWidget_GetSkillCDBases_Params
{
	TArray<class UUTSkillCDBase*>                      ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Skill.UTSkillWidget.GetSkill
struct UUTSkillWidget_GetSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetMaxEnergy
struct UUTSkillWidget_GetMaxEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetLocalPlayerController
struct UUTSkillWidget_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetEnergyValue
struct UUTSkillWidget_GetEnergyValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetEnergyThreshold
struct UUTSkillWidget_GetEnergyThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetDeltaEnergy
struct UUTSkillWidget_GetDeltaEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.DoRemove
struct UUTSkillWidget_DoRemove_Params
{
};

// Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates
struct UAddNewSkillToOwnerInterface_GetSkillTemplates_Params
{
	TArray<struct FItemSkillsConfig>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
struct UUTSkillBlackboardInterface_SetValueAsWeakObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsVector
struct UUTSkillBlackboardInterface_SetValueAsVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsString
struct UUTSkillBlackboardInterface_SetValueAsString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
struct UUTSkillBlackboardInterface_SetValueAsRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsObject
struct UUTSkillBlackboardInterface_SetValueAsObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsName
struct UUTSkillBlackboardInterface_SetValueAsName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsInt
struct UUTSkillBlackboardInterface_SetValueAsInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
struct UUTSkillBlackboardInterface_SetValueAsFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
struct UUTSkillBlackboardInterface_SetValueAsEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsClass
struct UUTSkillBlackboardInterface_SetValueAsClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsBool
struct UUTSkillBlackboardInterface_SetValueAsBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
struct UUTSkillBlackboardInterface_IsExistWeakObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistVector
struct UUTSkillBlackboardInterface_IsExistVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistString
struct UUTSkillBlackboardInterface_IsExistString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistRotator
struct UUTSkillBlackboardInterface_IsExistRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistObject
struct UUTSkillBlackboardInterface_IsExistObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistName
struct UUTSkillBlackboardInterface_IsExistName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistInt
struct UUTSkillBlackboardInterface_IsExistInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistFloat
struct UUTSkillBlackboardInterface_IsExistFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistEnum
struct UUTSkillBlackboardInterface_IsExistEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistClass
struct UUTSkillBlackboardInterface_IsExistClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistBool
struct UUTSkillBlackboardInterface_IsExistBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsVector
struct UUTSkillBlackboardInterface_GetValueAsVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsString
struct UUTSkillBlackboardInterface_GetValueAsString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
struct UUTSkillBlackboardInterface_GetValueAsRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsName
struct UUTSkillBlackboardInterface_GetValueAsName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsInt
struct UUTSkillBlackboardInterface_GetValueAsInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
struct UUTSkillBlackboardInterface_GetValueAsFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
struct UUTSkillBlackboardInterface_GetValueAsEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsClass
struct UUTSkillBlackboardInterface_GetValueAsClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsBool
struct UUTSkillBlackboardInterface_GetValueAsBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillId
struct UUTSkillBlackboardInterface_GetUAEBlackboardBySkillId_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.StopConsumCD
struct UUTSkillCDBase_StopConsumCD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.IsTickFinish
struct UUTSkillCDBase_IsTickFinish_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.IsCDReady
struct UUTSkillCDBase_IsCDReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.GetCurrentTime
struct UUTSkillCDBase_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.ForceConsumCD
struct UUTSkillCDBase_ForceConsumCD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.ConsumCD
struct UUTSkillCDBase_ConsumCD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCD_EnergyOfSkill.RefreshEnergy
struct UUTSkillCD_EnergyOfSkill_RefreshEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCD_EnergyOfSkill.GetDeltaEnergy
struct UUTSkillCD_EnergyOfSkill_GetDeltaEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentPercent
struct UUTSkillCD_EnergyOfSkill_GetCurrentPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentEnergy
struct UUTSkillCD_EnergyOfSkill_GetCurrentEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.UpdateAction_Internal
struct UUTSkillSpecificAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.UndoAction_Internal
struct UUTSkillSpecificAction_UndoAction_Internal_Params
{
};

// Function Skill.UTSkillSpecificAction.Reset_Internal
struct UUTSkillSpecificAction_Reset_Internal_Params
{
};

// Function Skill.UTSkillSpecificAction.RealDoAction_Internal
struct UUTSkillSpecificAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PreCloseSkill
struct UUTSkillSpecificAction_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PostInitSkill
struct UUTSkillSpecificAction_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PostActiveSkill
struct UUTSkillSpecificAction_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

