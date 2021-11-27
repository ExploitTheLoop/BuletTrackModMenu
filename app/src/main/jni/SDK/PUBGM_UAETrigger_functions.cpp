// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAETrigger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UAETrigger.UAELevelDirector.StartLevelDirector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::StartLevelDirector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.StartLevelDirector");

	AUAELevelDirector_StartLevelDirector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.SetTriggerRunType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// EUAETriggerRunType             RunType                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.SetTriggerRunType");

	AUAELevelDirector_SetTriggerRunType_Params params;
	params.TriggerName = TriggerName;
	params.RunType = RunType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.SetEnable
// (Final, Native, Public)
// Parameters:
// bool                           Enab                           (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::SetEnable(bool Enab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.SetEnable");

	AUAELevelDirector_SetEnable_Params params;
	params.Enab = Enab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.S2Sim_CallExcuteAction
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AUAELevelDirector::S2Sim_CallExcuteAction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.S2Sim_CallExcuteAction");

	AUAELevelDirector_S2Sim_CallExcuteAction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UUAETriggerObject*       CompleteTrigger                (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.RequestTriggerComplete");

	AUAELevelDirector_RequestTriggerComplete_Params params;
	params.CompleteTrigger = CompleteTrigger;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
// (Final, Native, Private)

void AUAELevelDirector::OnRep_LevelDirectorData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData");

	AUAELevelDirector_OnRep_LevelDirectorData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.InitialLevelDirector
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::InitialLevelDirector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.InitialLevelDirector");

	AUAELevelDirector_InitialLevelDirector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.GetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UUAETriggerObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETriggerObject* AUAELevelDirector::GetTrigger(const struct FString& NodeName, const struct FString& TriggerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetTrigger");

	AUAELevelDirector_GetTrigger_Params params;
	params.NodeName = NodeName;
	params.TriggerName = TriggerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.GetHasBeenInit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::GetHasBeenInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetHasBeenInit");

	AUAELevelDirector_GetHasBeenInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.GetDataSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVariableSet*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariableSet* AUAELevelDirector::GetDataSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetDataSet");

	AUAELevelDirector_GetDataSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.GetCurTaskID
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAELevelDirector::GetCurTaskID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetCurTaskID");

	AUAELevelDirector_GetCurTaskID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.ForceExecuteTrigger
// (Final, Native, Public)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)

void AUAELevelDirector::ForceExecuteTrigger(const struct FString& TriggerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.ForceExecuteTrigger");

	AUAELevelDirector_ForceExecuteTrigger_Params params;
	params.TriggerName = TriggerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.FlowControllSubControll
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, OutParm, ZeroConstructor)
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllSubControll(const struct FString& NodeName, TArray<struct FString>* TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllSubControll");

	AUAELevelDirector_FlowControllSubControll_Params params;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerNames != nullptr)
		*TriggerNames = params.TriggerNames;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.FlowControllOr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, OutParm, ZeroConstructor)
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOr(const struct FString& NodeName, TArray<struct FString>* TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOr");

	AUAELevelDirector_FlowControllOr_Params params;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerNames != nullptr)
		*TriggerNames = params.TriggerNames;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOneSequence(const struct FString& TriggerName, const struct FString& NodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOneSequence");

	AUAELevelDirector_FlowControllOneSequence_Params params;
	params.TriggerName = TriggerName;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, OutParm, ZeroConstructor)
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllMultiSequence(const struct FString& NodeName, TArray<struct FString>* TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllMultiSequence");

	AUAELevelDirector_FlowControllMultiSequence_Params params;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerNames != nullptr)
		*TriggerNames = params.TriggerNames;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.FlowControllAnd
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, OutParm, ZeroConstructor)
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// bool                           DefaultActive                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllAnd(const struct FString& NodeName, bool DefaultActive, TArray<struct FString>* TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllAnd");

	AUAELevelDirector_FlowControllAnd_Params params;
	params.NodeName = NodeName;
	params.DefaultActive = DefaultActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerNames != nullptr)
		*TriggerNames = params.TriggerNames;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.DeactiveTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// struct FString                 TriggerName                    (Parm, ZeroConstructor)

void AUAELevelDirector::DeactiveTrigger(const struct FString& NodeName, const struct FString& TriggerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.DeactiveTrigger");

	AUAELevelDirector_DeactiveTrigger_Params params;
	params.NodeName = NodeName;
	params.TriggerName = TriggerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.DeactiveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NodeName                       (Parm, ZeroConstructor)

void AUAELevelDirector::DeactiveNode(const struct FString& NodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.DeactiveNode");

	AUAELevelDirector_DeactiveNode_Params params;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.ClientExecuteAction
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FString                 ActionClassName                (Parm, ZeroConstructor)
// int64_t                        UId                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTriggerParamRepData> RepParams                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// bool                           IsKeep                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRevert                       (Parm, ZeroConstructor, IsPlainOldData)
// class AUAELevelDirector_PlayerRepInfo* InLevelDirector_PlayerRepInfo  (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::ClientExecuteAction(const struct FString& ActionClassName, int64_t UId, TArray<struct FTriggerParamRepData> RepParams, bool IsKeep, bool IsRevert, class AUAELevelDirector_PlayerRepInfo* InLevelDirector_PlayerRepInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.ClientExecuteAction");

	AUAELevelDirector_ClientExecuteAction_Params params;
	params.ActionClassName = ActionClassName;
	params.UId = UId;
	params.RepParams = RepParams;
	params.IsKeep = IsKeep;
	params.IsRevert = IsRevert;
	params.InLevelDirector_PlayerRepInfo = InLevelDirector_PlayerRepInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.AddEventToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Event                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::AddEventToTrigger(const struct FString& TriggerName, class UClass* Event)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddEventToTrigger");

	AUAELevelDirector_AddEventToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Event = Event;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerCondition*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerCondition* AUAELevelDirector::AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddConditionToTrigger");

	AUAELevelDirector_AddConditionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.AddActionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerAction*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerAction* AUAELevelDirector::AddActionToTrigger(const struct FString& TriggerName, class UClass* Action)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddActionToTrigger");

	AUAELevelDirector_AddActionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Action = Action;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.UAELevelDirector.ActiveTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NodeName                       (Parm, ZeroConstructor)
// struct FString                 TriggerName                    (Parm, ZeroConstructor)

void AUAELevelDirector::ActiveTrigger(const struct FString& NodeName, const struct FString& TriggerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.ActiveTrigger");

	AUAELevelDirector_ActiveTrigger_Params params;
	params.NodeName = NodeName;
	params.TriggerName = TriggerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector.ActiveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NodeName                       (Parm, ZeroConstructor)

void AUAELevelDirector::ActiveNode(const struct FString& NodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.ActiveNode");

	AUAELevelDirector_ActiveNode_Params params;
	params.NodeName = NodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.TriggerCondition.AddChildCondition
// (Final, Native, Public)
// Parameters:
// class UTriggerCondition*       NewChildCond                   (Parm, ZeroConstructor, IsPlainOldData)

void UTriggerCondition::AddChildCondition(class UTriggerCondition* NewChildCond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.TriggerCondition.AddChildCondition");

	UTriggerCondition_AddChildCondition_Params params;
	params.NewChildCond = NewChildCond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAETriggerArea.OnTriggerExit
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AUAETriggerArea::OnTriggerExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAETriggerArea.OnTriggerExit");

	AUAETriggerArea_OnTriggerExit_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAETriggerArea.OnTriggerEnter
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAETriggerArea::OnTriggerEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAETriggerArea.OnTriggerEnter");

	AUAETriggerArea_OnTriggerEnter_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAETriggerFuncLib.GetLastIteratorActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAETriggerFuncLib::GetLastIteratorActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAETriggerFuncLib.GetLastIteratorActor");

	UUAETriggerFuncLib_GetLastIteratorActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEventWithTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventFuncName                  (Parm, ZeroConstructor)
// class AActor*                  PlayerActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tag                            (Parm, ZeroConstructor)

void ULevelEventCenterFunctionLibrary::QuickFireLevelEventWithTag(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEventWithTag");

	ULevelEventCenterFunctionLibrary_QuickFireLevelEventWithTag_Params params;
	params.EventFuncName = EventFuncName;
	params.PlayerActor = PlayerActor;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventFuncName                  (Parm, ZeroConstructor)
// class AActor*                  PlayerActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerKey                      (Parm, ZeroConstructor)
// struct FString                 EventTag                       (Parm, ZeroConstructor)

void ULevelEventCenterFunctionLibrary::QuickFireLevelEvent(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& PlayerKey, const struct FString& EventTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.LevelEventCenterFunctionLibrary.QuickFireLevelEvent");

	ULevelEventCenterFunctionLibrary_QuickFireLevelEvent_Params params;
	params.EventFuncName = EventFuncName;
	params.PlayerActor = PlayerActor;
	params.PlayerKey = PlayerKey;
	params.EventTag = EventTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_LevelDirector
// (Final, Native, Private)

void AUAELevelDirector_PlayerRepInfo::OnRep_LevelDirector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_LevelDirector");

	AUAELevelDirector_PlayerRepInfo_OnRep_LevelDirector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_ActionRepDatas
// (Final, Native, Private)

void AUAELevelDirector_PlayerRepInfo::OnRep_ActionRepDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector_PlayerRepInfo.OnRep_ActionRepDatas");

	AUAELevelDirector_PlayerRepInfo_OnRep_ActionRepDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UAETrigger.UAELevelDirector_PlayerRepInfo.ClientExecuteAction
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FTriggerActionRepData   InActionRepData                (ConstParm, Parm, ReferenceParm)

void AUAELevelDirector_PlayerRepInfo::ClientExecuteAction(const struct FTriggerActionRepData& InActionRepData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector_PlayerRepInfo.ClientExecuteAction");

	AUAELevelDirector_PlayerRepInfo_ClientExecuteAction_Params params;
	params.InActionRepData = InActionRepData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

