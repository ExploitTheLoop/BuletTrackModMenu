#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Skill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Skill.UTSkillBaseWidget
// 0x0028 (0x00F0 - 0x00C8)
class UUTSkillBaseWidget : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	bool                                               bWidgetEnabled;                                           // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FString                                     EffectName;                                               // 0x00D0(0x000C) (Edit, ZeroConstructor, EditConst)
	class AActor*                                      BuffTargetActor;                                          // 0x00DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             CurOwnerActorComponent;                                   // 0x00E8(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	class UUAEBlackboard* GetUAEBlackboard();
	class UUTSkillManagerComponent* GetOwnerSkillManager();
	class AActor* GetOwnerPawn();
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboard();
};


// Class Skill.UTSkillCondition
// 0x0000 (0x00F0 - 0x00F0)
class UUTSkillCondition : public UUTSkillBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition");
		return pStaticClass;
	}


	bool IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target);
	bool IsOK_Internal();
	bool IsOK(class UActorComponent* SkillManagerComponent);
	class AUTSkill* GetOwnerSkill();
};


// Class Skill.UTSkillEffect
// 0x0010 (0x0100 - 0x00F0)
class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	float                                              fAPScale;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             CacheSoftObject;                                          // 0x00F4(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEffect");
		return pStaticClass;
	}


	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadSoftPathDone();
	class AUTSkill* GetOwnerSkill();
	void DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkillAction
// 0x0018 (0x0118 - 0x0100)
class UUTSkillAction : public UUTSkillEffect
{
public:
	struct FUTSkillActionCreateData                    BaseData;                                                 // 0x0100(0x0004) (Edit)
	class UUTSkillAction*                              OwnerPeriodAction;                                        // 0x0104(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0108(0x0001) MISSED OFFSET
	bool                                               bClearTimerAfterReset;                                    // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	class UObject*                                     EventObj;                                                 // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction_Internal();
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void Reset_Internal();
	void Reset(class UActorComponent* SkillManagerComponent);
	bool RealDoAction_Internal();
	bool RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent);
	bool JudgeNeedPhaseWait();
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkill
// 0x0248 (0x0528 - 0x02E0)
class AUTSkill : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E0(0x0004) MISSED OFFSET
	bool                                               bNeedSync;                                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FString                                     SkillName;                                                // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FName                                       SkillGroup;                                               // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillCastType                                     SkillCastType;                                            // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldMonopolize;                                        // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMonopolizeSelf;                                          // 0x0303(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0304(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SkillDescription;                                         // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDetailDes;                                           // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeleeSkill;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckFirstPhaseConditions;                               // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAutonomousClientSimulate;                            // 0x0322(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepCastingWhenDisconnect;                               // 0x0323(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInputCache;                                         // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FUTSkillCreateData                          BaseData;                                                 // 0x0328(0x0130) (Edit, BlueprintVisible)
	int                                                SkillCategory;                                            // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewSkillCD;                                           // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             BlackboardParamList;                                      // 0x0460(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSetBlackboardDefaultData;                                // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGsListener;                                              // 0x046D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	struct FString                                     SkillTimeScaleAttrName;                                   // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x047C(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ParentFolderPath;                                         // 0x04BC(0x000C) (ZeroConstructor)
	int64_t                                            LastEditBluePrintTime;                                    // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurComponentNameIndex;                                    // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSkillEnabled;                                           // 0x04D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3F];                                      // 0x04D5(0x003F) MISSED OFFSET
	TWeakObjectPtr<class UUTSkillManagerComponent>     SpecificSkillCompRef;                                     // 0x0514(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UUAEBlackboard>               SpecificBlackBlackRef;                                    // 0x051C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0524(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkill");
		return pStaticClass;
	}


	void StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void SetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent, float Percentage);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType, int PhaseIndex);
	bool IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent);
	bool IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillManagerComponent* GetSpecificSkillManager();
	class UUAEBlackboard* GetSpecificBlackboard();
	float GetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillPhase* GetSkillPhaseByName(const struct FString& PhaseName);
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName);
	void DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	bool CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent, bool bShowErrorMsg);
};


// Class Skill.UTSkillManagerComponent
// 0x0490 (0x05E8 - 0x0158)
class UUTSkillManagerComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0158(0x0040) MISSED OFFSET
	class APawn*                                       OwnerPawn;                                                // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x019C(0x0010) MISSED OFFSET
	bool                                               bEnableSkillCoolDown;                                     // 0x01AC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x01B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroySkillsOnDie;                                       // 0x01B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	TMap<int, TWeakObjectPtr<class AUTSkill>>          SkillIDToSkills;                                          // 0x01B8(0x0050) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class UUAEUserWidget>>       AsyncLoadedSkillUI;                                       // 0x01F4(0x000C) (ExportObject, ZeroConstructor, Transient)
	class UUAEUserWidget*                              SkillUIRoot;                                              // 0x0200(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget*                                SkillUIRootPanel;                                         // 0x0204(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TWeakObjectPtr<class AUTSkill>, class UUAEBlackboard*> SkillsBlackboardMap;                                      // 0x0208(0x0050) (ZeroConstructor)
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ActorBlackboardMap;                                       // 0x0244(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    ChangeActorBlackboard;                                    // 0x0280(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      Target;                                                   // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FUTSkillCreateData>               SkillBaseDataMaps;                                        // 0x0290(0x0050) (ZeroConstructor)
	TArray<struct FUTSkillLastCastInfo>                LastCastArray;                                            // 0x02CC(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSkillHit;                                               // 0x02D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkillCast;                                              // 0x02E4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PhasePercentage;                                          // 0x02F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<int, int>                                     IDToSyncSkillActiveStateData;                             // 0x02F4(0x0050) (ZeroConstructor)
	TArray<struct FSkillActiveRepData>                 SyncSkillActiveStateDatas;                                // 0x0330(0x000C) (Net, ZeroConstructor)
	TMap<int, int>                                     IDToSyncSkillCDDatas;                                     // 0x033C(0x0050) (ZeroConstructor)
	struct FSkillDynamicRepData                        SyncDynamicRepData;                                       // 0x0378(0x000C) (Net)
	TArray<struct FSkillCDRepData>                     SyncSkillCDDatas;                                         // 0x0384(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0390(0x0004) MISSED OFFSET
	struct FUTSkillHitInfo                             SkillHitInfo;                                             // 0x0394(0x0028) (Net)
	struct FUTSkillHitEnvInfo                          SkillHitEnvInfo;                                          // 0x03BC(0x0028)
	TArray<struct FString>                             MutexMontageGroupBeenPlayed;                              // 0x03E4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03F0(0x0004) MISSED OFFSET
	struct FString                                     LastESkillTargetDesc;                                     // 0x03F4(0x000C) (ZeroConstructor)
	int                                                SkillSynRandomSeed;                                       // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               SkillSynRandStream;                                       // 0x0404(0x0008)
	int                                                SkillSynRandomSeedExpireCount;                            // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FTimerHandle>          SkillTimerMap;                                            // 0x0410(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0xC];                                       // 0x044C(0x000C) MISSED OFFSET
	float                                              ZombieModeUseSkillCD;                                     // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	int                                                ZombieModeMaxSkillPropLevel;                              // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0464(0x000C) MISSED OFFSET
	TArray<struct FSkillParamater>                     SkillParamaters;                                          // 0x0470(0x000C) (Net, ZeroConstructor)
	TArray<struct FUTMutilSkillSynData>                SkillSynData;                                             // 0x047C(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0488(0x000C) MISSED OFFSET
	TArray<struct FUTSkillSynSinglePhaseData>          SkillSynSinglePhaseData;                                  // 0x0494(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData10[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	TMap<class AUTSkill*, int>                         SkillCurPhaseIndexes;                                     // 0x04B0(0x0050) (ZeroConstructor)
	TMap<class AUTSkill*, int>                         LastPhaseIndexes;                                         // 0x04EC(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData11[0x48];                                      // 0x0528(0x0048) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkillInitSignature;                                     // 0x0570(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStartEvent;                                          // 0x057C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStopEvent;                                           // 0x0588(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        PendingRemoveSkillID;                                     // 0x0594(0x000C) (ZeroConstructor)
	TMap<int, unsigned char>                           CurSKillLevels;                                           // 0x05A0(0x0050) (ZeroConstructor, Transient)
	TArray<struct FUTReplaceSkillData>                 ReplacedSkillDatas;                                       // 0x05DC(0x000C) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return pStaticClass;
	}


	void UpdateSyncSkillCDData(int SkillID);
	void UpdateSyncSkillActiveState(int SkillID);
	void UnRegisterActorBlackBorad(class AActor* InActor);
	void TryDeleteOneSkill(int SkillID, bool IsImmediately);
	void TryAddOneSkill(int SkillID, bool bActive);
	void TriggerParamsEvent(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType, const struct FUTSkillClientData& OperateData);
	void TriggerEvent_WithID(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType);
	void TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor);
	void SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID);
	bool StopSkillWithSlot(int SkillSlot, EUTSkillStopReason StopReason);
	void StopSkillSpecific(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void StopSkillAll(EUTSkillStopReason StopReason);
	int StopSkill_WithID(int SkillID, EUTSkillStopReason StopReason);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	bool ShouldTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool SetupOwnerAndSystem();
	void SetSkillState(TArray<struct FUTSkillStateSyncData> InSyncStateDatas);
	void SetSkillOwner(class AActor* tempActor);
	void SetSkillLevel(int SkillID, int SkillLevel);
	void SetSkillLastPhase(class AUTSkill* Skill, int PhaseIndex);
	void SetSkillCurPhase(class AUTSkill* Skill, int PhaseIndex);
	bool SetSkillActive(int SkillID, bool bActive, bool bForceSet);
	void SetModSkillUIRoot(class UUAEUserWidget* ModSkillUIRoot);
	void SetCurSkill(int SkillID, int SkillSlot);
	void SetAutoSkillID(int InSkillID);
	void ServerTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData);
	void ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void ResetSkillCollDown(int SkillID);
	void ResetAllSkillCollDown();
	void RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState, TArray<int> RequestIDs);
	void RepSkillHitInfo();
	void RepOneSkillSynData(int SkillSlot, int InLastSkillID);
	void RepLastCastTime();
	void ReplaceSkill(int OldSkillID, int NewSkillID);
	void RemoveSkillUIWidget(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath);
	void RemoveReplacedSkill(int OldSkillID);
	void RemoveAllSkillUIWidget();
	void RegistSkillUIWidgetBP(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath);
	void RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard);
	int RandRangeSyn(int StartIndex, int EndIndex);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	void OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	static bool OnSameTeam(class AActor* A, class AActor* B);
	void OnRespawned();
	void OnRep_SkillSynSinglePhaseData();
	void OnRep_SkillSynData();
	void OnRep_SkillHitInfo();
	void OnRep_SkillCDDatas();
	void OnRep_SkillActiveState();
	void OnRep_ReplaceSkill();
	void OnRep_DynamicRepData();
	void OnRecycled();
	void OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	bool IsUsingSkill(int SkillID);
	bool IsSkillCanUse();
	bool IsSkillActived(int SkillID);
	bool IsReadyToCastSkill(int SkillID);
	bool IsEnableSkillCoolDown();
	bool IsCurrentUseSkillID(int InSkillID);
	bool IsCastingSkillID(int InSkillID);
	bool IsCastingSkill();
	void HandleTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData);
	void HandleSkillStop(int SkillID, EUTSkillStopReason StopReason);
	void HandleSkillStart(int SkillID);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
	class UUAEBlackboard* GetUAEBlackboard(class AUTSkill* InSkill);
	class UUTSkillWidget* GetSkillWidget(int SkillID);
	TArray<struct FUTSkillStateSyncData> GetSkillState();
	int GetSkillSlotBySkillID(int SkillID);
	int GetSkillSlotBySkill(class AUTSkill* Skill);
	TArray<class AUTSkill*> GetSkillsByGroup(const struct FName& SkillGroup);
	int GetSkillLevel(int SkillID);
	int GetSkillLastPhase(class AUTSkill* Skill);
	int GetSkillIDFromSkillIndex(int InSkillIndex);
	int GetSkillIDByClass(class UClass* SkillClass);
	int GetSkillCurPhase(class AUTSkill* Skill);
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkillByClassName(const struct FString& SkillClassName);
	struct FUTSkillCreateData GetSkillBaseData(int SkillID);
	class AUTSkill* GetSkill(int SkillID);
	int GetReplacedSkill(int OldSkillID);
	TEnumAsByte<enum ENetRole> GetRealOwnerRoleSafety();
	float GetLastCastTime(int SkillID);
	float GetLastCastFinishTime(int SkillID);
	TArray<int> GetCurUsingSkillIDS();
	TArray<class AUTSkill*> GetCurSkills();
	TArray<class UUTSkillPhase*> GetCurSkillPhases();
	class UUTSkillPhase* GetCurSkillPhase(int InSkillSlot);
	TArray<int> GetCurSkillIDs();
	int GetCurSkillID(class AUTSkill* Skill);
	class AUTSkill* GetCurSkill(int InSkillSlot);
	TArray<int> GetCurMonopolizeSkills();
	int FindRelatedCurSkillID(int SkillID, bool bPeekSlotIndex, int* OutRelatedSkillSlot);
	void DynamicRemoveSkill(int InSkillID);
	void DynamicAddSkill(int InSkillID);
	void ClientStartSkill(int SkillID, bool bAutoCast);
	void ClearSkill();
	void ClearRepParams();
	void ClearInitParams();
};


// Class Skill.UTSkillEventEffectMapForEditor
// 0x0038 (0x0128 - 0x00F0)
class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	TArray<struct FName>                               InterestedOwnerTags;                                      // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FName                                       PreEventActionTag;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillEffect*                              SkillEffect;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSkillConditionWarpper>              Conditions;                                               // 0x010C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         // 0x0118(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInterface
// 0x0000 (0x0020 - 0x0020)
class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInterface");
		return pStaticClass;
	}


	void TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	void HandleSkillStart(int SkillID);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
};


// Class Skill.UTSkillPhase
// 0x00B8 (0x0180 - 0x00C8)
class UUTSkillPhase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	struct FString                                     PhaseName;                                                // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PhaseDescription;                                         // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPhaseEnabled;                                            // 0x00E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PhaseIndex;                                               // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00F4(0x0018) MISSED OFFSET
	int                                                ActionsTopHalfCount;                                      // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUTSkillPhaseCreateData                     BaseData;                                                 // 0x0110(0x0068) (Edit)
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   // 0x0178(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPhase");
		return pStaticClass;
	}


	bool TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId);
	void StopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void StartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	void PickTargets(class UUTSkillManagerComponent* SkillManagerComponent);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType);
	bool OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType);
	float GetChargePhaseRate(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ClearAttachments();
	void AfterStartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void AddSkillConditionLua(class AUTSkill* InSkill, const struct FString& InLuaPath);
	void AddSkillActionLua(class AUTSkill* InSkill, const struct FString& InLuaPath);
};


// Class Skill.UTSkillPicker
// 0x0048 (0x0138 - 0x00F0)
class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	struct FUTSkillPickerCreateData                    BaseData;                                                 // 0x00F0(0x0020) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0110(0x000C) MISSED OFFSET
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      // 0x011C(0x000C) (ZeroConstructor, Transient)
	TArray<class UUTSkillPickerFilter*>                Filters;                                                  // 0x0128(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPicker");
		return pStaticClass;
	}


	bool PickTargetsInner(const struct FVector& OriginPoint);
	bool PickTargets(const struct FVector& OriginPoint);
};


// Class Skill.UTSkillPickerFilter
// 0x0004 (0x0020 - 0x001C)
class UUTSkillPickerFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPickerFilter");
		return pStaticClass;
	}


	void HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray);
};


// Class Skill.UTSkillWidget
// 0x0018 (0x0370 - 0x0358)
class UUTSkillWidget : public ULuaUAEUserWidget
{
public:
	class UUTSkillManagerComponent*                    SkillManager;                                             // 0x0358(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SkillID;                                                  // 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickInterval;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTick;                                              // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0365(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillWidget");
		return pStaticClass;
	}


	void TriggerPassiveEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent);
	void TriggerEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent);
	void SetSkillManager(class UUTSkillManagerComponent* manager);
	void SetSkillID(int InSkillID);
	void RemoveSkillUI();
	void OnSkillStopEvent(int InSkillID, EUTSkillStopReason InStopReason);
	void OnSkillStartEvent(int InSkillID);
	bool IsTickFinish();
	bool IsCDReady();
	struct FString GetSkillName();
	class UUTSkillManagerComponent* GetSkillManager();
	int GetSkillID();
	TArray<float> GetSkillCDProgess();
	TArray<class UUTSkillCDBase*> GetSkillCDBases();
	class AUTSkill* GetSkill();
	float GetMaxEnergy();
	class APlayerController* GetLocalPlayerController();
	float GetEnergyValue();
	float GetEnergyThreshold();
	float GetDeltaEnergy();
	void DoRemove();
};


// Class Skill.UTSkillLocationPicker
// 0x0000 (0x00F0 - 0x00F0)
class UUTSkillLocationPicker : public UUTSkillBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return pStaticClass;
	}

};


// Class Skill.AddNewSkillToOwnerInterface
// 0x0000 (0x0020 - 0x0020)
class UAddNewSkillToOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.AddNewSkillToOwnerInterface");
		return pStaticClass;
	}


	TArray<struct FItemSkillsConfig> GetSkillTemplates();
};


// Class Skill.SkillGlobalUIDDataAsset
// 0x0078 (0x0098 - 0x0020)
class USkillGlobalUIDDataAsset : public UDataAsset
{
public:
	TMap<struct FString, int>                          AllSkillUIDMap;                                           // 0x0020(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<int, struct FString>                          AllSkillPathMap;                                          // 0x005C(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.SkillGlobalUIDDataAsset");
		return pStaticClass;
	}

};


// Class Skill.UTSkillAction_Lua
// 0x0058 (0x0170 - 0x0118)
class UUTSkillAction_Lua : public UUTSkillAction
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET
	struct FString                                     ParameterFlag;                                            // 0x0158(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x0164(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillAction_Lua");
		return pStaticClass;
	}

};


// Class Skill.UTSkillBlackboardInterface
// 0x0000 (0x0020 - 0x0020)
class UUTSkillBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillBlackboardInterface");
		return pStaticClass;
	}


	void SetValueAsWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue);
	void SetValueAsObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
};


// Class Skill.UTSkillCDBase
// 0x0030 (0x00A0 - 0x0070)
class UUTSkillCDBase : public ULuaObject
{
public:
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	ECDType                                            cdType;                                                   // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FString                                     cdTypeStr;                                                // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UUTSkillManagerComponent*                    CurOwnerManager;                                          // 0x0090(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0094(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCDBase");
		return pStaticClass;
	}


	bool StopConsumCD();
	bool IsTickFinish();
	bool IsCDReady();
	float GetCurrentTime();
	bool ForceConsumCD();
	bool ConsumCD();
};


// Class Skill.UTSkillCD_CastEnergyByOwner
// 0x0008 (0x00A8 - 0x00A0)
class UUTSkillCD_CastEnergyByOwner : public UUTSkillCDBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastEnergyByOwner");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_EnergyOfSkill
// 0x0010 (0x00B0 - 0x00A0)
class UUTSkillCD_EnergyOfSkill : public UUTSkillCDBase
{
public:
	float                                              InitEnergy;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEnergy;                                                // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurEnergy;                                                // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaEnergy;                                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_EnergyOfSkill");
		return pStaticClass;
	}


	float RefreshEnergy();
	float GetDeltaEnergy();
	float GetCurrentPercent();
	float GetCurrentEnergy();
};


// Class Skill.UTSkillCD_CastEnergyBySkill
// 0x0010 (0x00C0 - 0x00B0)
class UUTSkillCD_CastEnergyBySkill : public UUTSkillCD_EnergyOfSkill
{
public:
	ECDCompare                                         thresCompare;                                             // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              castEnergy;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSkillEffectHoldTime;                                   // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastEnergyBySkill");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_CastTime
// 0x0008 (0x00A8 - 0x00A0)
class UUTSkillCD_CastTime : public UUTSkillCDBase
{
public:
	float                                              fromTime;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              toTime;                                                   // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastTime");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_TickEnergyBySkill
// 0x0018 (0x00C8 - 0x00B0)
class UUTSkillCD_TickEnergyBySkill : public UUTSkillCD_EnergyOfSkill
{
public:
	ECDCompare                                         thresCompare;                                             // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              castEnergyDelta;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CountTime;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_TickEnergyBySkill");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCondition_Lua
// 0x0050 (0x0140 - 0x00F0)
class UUTSkillCondition_Lua : public UUTSkillCondition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0130(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition_Lua");
		return pStaticClass;
	}

};


// Class Skill.UTSkillEvent
// 0x0004 (0x0020 - 0x001C)
class UUTSkillEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEvent");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeContainerInterface
// 0x0000 (0x0020 - 0x0020)
class UUTSkillInstancedNodeContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeContainerInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeInterface
// 0x0000 (0x0020 - 0x0020)
class UUTSkillInstancedNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillFunctionBase
// 0x0018 (0x0108 - 0x00F0)
class UUTSkillFunctionBase : public UUTSkillBaseWidget
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x0100(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillFunctionBase");
		return pStaticClass;
	}

};


// Class Skill.UTSkillSpecificAction
// 0x0010 (0x0128 - 0x0118)
class UUTSkillSpecificAction : public UUTSkillAction
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x0118(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x0120(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
};


// Class Skill.UTSkillSpecificCondition
// 0x0008 (0x00F8 - 0x00F0)
class UUTSkillSpecificCondition : public UUTSkillCondition
{
public:
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificCondition");
		return pStaticClass;
	}

};


// Class Skill.SkillUtil
// 0x0000 (0x0020 - 0x0020)
class USkillUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.SkillUtil");
		return pStaticClass;
	}

};


}

