// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Skill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Skill.UTSkillBaseWidget.SetValueAsWeakObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsWeakObject");

	UUTSkillBaseWidget_SetValueAsWeakObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsVector");

	UUTSkillBaseWidget_SetValueAsVector_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillBaseWidget::SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsString");

	UUTSkillBaseWidget_SetValueAsString_Params params;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                RotatorValue                   (Parm, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsRotator");

	UUTSkillBaseWidget_SetValueAsRotator_Params params;
	params.Key = Key;
	params.RotatorValue = RotatorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsObject");

	UUTSkillBaseWidget_SetValueAsObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsName");

	UUTSkillBaseWidget_SetValueAsName_Params params;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsInt");

	UUTSkillBaseWidget_SetValueAsInt_Params params;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsFloat");

	UUTSkillBaseWidget_SetValueAsFloat_Params params;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsEnum");

	UUTSkillBaseWidget_SetValueAsEnum_Params params;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsClass");

	UUTSkillBaseWidget_SetValueAsClass_Params params;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.SetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBaseWidget::SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.SetValueAsBool");

	UUTSkillBaseWidget_SetValueAsBool_Params params;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBaseWidget.IsExistWeakObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistWeakObject");

	UUTSkillBaseWidget_IsExistWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistVector
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistVector");

	UUTSkillBaseWidget_IsExistVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistString");

	UUTSkillBaseWidget_IsExistString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistRotator
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistRotator");

	UUTSkillBaseWidget_IsExistRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistObject");

	UUTSkillBaseWidget_IsExistObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistName");

	UUTSkillBaseWidget_IsExistName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistInt");

	UUTSkillBaseWidget_IsExistInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistFloat");

	UUTSkillBaseWidget_IsExistFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistEnum");

	UUTSkillBaseWidget_IsExistEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistClass");

	UUTSkillBaseWidget_IsExistClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.IsExistBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::IsExistBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.IsExistBool");

	UUTSkillBaseWidget_IsExistBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsWeakObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBaseWidget::GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsWeakObject");

	UUTSkillBaseWidget_GetValueAsWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsWeakActor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBaseWidget::GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsWeakActor");

	UUTSkillBaseWidget_GetValueAsWeakActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillBaseWidget::GetValueAsVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsVector");

	UUTSkillBaseWidget_GetValueAsVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillBaseWidget::GetValueAsString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsString");

	UUTSkillBaseWidget_GetValueAsString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillBaseWidget::GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsRotator");

	UUTSkillBaseWidget_GetValueAsRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBaseWidget::GetValueAsObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsObject");

	UUTSkillBaseWidget_GetValueAsObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillBaseWidget::GetValueAsName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsName");

	UUTSkillBaseWidget_GetValueAsName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillBaseWidget::GetValueAsInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsInt");

	UUTSkillBaseWidget_GetValueAsInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillBaseWidget::GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsFloat");

	UUTSkillBaseWidget_GetValueAsFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillBaseWidget::GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsEnum");

	UUTSkillBaseWidget_GetValueAsEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillBaseWidget::GetValueAsClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsClass");

	UUTSkillBaseWidget_GetValueAsClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBaseWidget::GetValueAsBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsBool");

	UUTSkillBaseWidget_GetValueAsBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetValueAsActor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBaseWidget::GetValueAsActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetValueAsActor");

	UUTSkillBaseWidget_GetValueAsActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetUAEBlackboardBySkillComp
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUTSkillManagerComponent* InOwnerSkillManager            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBaseWidget::GetUAEBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetUAEBlackboardBySkillComp");

	UUTSkillBaseWidget_GetUAEBlackboardBySkillComp_Params params;
	params.InOwnerSkillManager = InOwnerSkillManager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetUAEBlackboard
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBaseWidget::GetUAEBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetUAEBlackboard");

	UUTSkillBaseWidget_GetUAEBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillBaseWidget::GetOwnerSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerSkillManager");

	UUTSkillBaseWidget_GetOwnerSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetOwnerPawn
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBaseWidget::GetOwnerPawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerPawn");

	UUTSkillBaseWidget_GetOwnerPawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetActorBlackboardBySkillComp
// (Final, Native, Private, Const)
// Parameters:
// class UUTSkillManagerComponent* InOwnerSkillManager            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> UUTSkillBaseWidget::GetActorBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetActorBlackboardBySkillComp");

	UUTSkillBaseWidget_GetActorBlackboardBySkillComp_Params params;
	params.InOwnerSkillManager = InOwnerSkillManager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBaseWidget.GetActorBlackboard
// (Final, Native, Private, Const)
// Parameters:
// TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> UUTSkillBaseWidget::GetActorBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetActorBlackboard");

	UUTSkillBaseWidget_GetActorBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCondition.IsTargetOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsTargetOK");

	UUTSkillCondition_IsTargetOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCondition.IsOK_Internal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK_Internal");

	UUTSkillCondition_IsOK_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCondition.IsOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK");

	UUTSkillCondition_IsOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCondition.GetOwnerSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillCondition::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.GetOwnerSkill");

	UUTSkillCondition_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillEffect.UpdateAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UpdateAction");

	UUTSkillEffect_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.UndoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillEffect::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UndoAction");

	UUTSkillEffect_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PreCloseSkill");

	UUTSkillEffect_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostInitSkill");

	UUTSkillEffect_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostActiveSkill");

	UUTSkillEffect_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
// (Final, Native, Public)

void UUTSkillEffect::OnAsyncLoadSoftPathDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone");

	UUTSkillEffect_OnAsyncLoadSoftPathDone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.GetOwnerSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillEffect::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.GetOwnerSkill");

	UUTSkillEffect_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillEffect.DoHurtAppearance
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoHurtAppearance");

	UUTSkillEffect_DoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillEffect.DoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillEffect::DoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoAction");

	UUTSkillEffect_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillAction.UpdateAction_Internal
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction_Internal");

	UUTSkillAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.UpdateAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction");

	UUTSkillAction_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.UndoAction_Internal
// (Native, Public)

void UUTSkillAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction_Internal");

	UUTSkillAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.UndoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction");

	UUTSkillAction_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.TimerRealDoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.TimerRealDoAction");

	UUTSkillAction_TimerRealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.Reset_Internal
// (Native, Public)

void UUTSkillAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset_Internal");

	UUTSkillAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.Reset
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::Reset(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset");

	UUTSkillAction_Reset_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction_Internal");

	UUTSkillAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillAction.RealDoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction");

	UUTSkillAction_RealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillAction.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.PreCloseSkill");

	UUTSkillAction_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.PostInitSkill");

	UUTSkillAction_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.PostActiveSkill");

	UUTSkillAction_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.OnAsyncLoadAssetDone
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.OnAsyncLoadAssetDone");

	UUTSkillAction_OnAsyncLoadAssetDone_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillAction.JudgeNeedPhaseWait
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::JudgeNeedPhaseWait()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.JudgeNeedPhaseWait");

	UUTSkillAction_JudgeNeedPhaseWait_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillAction.DoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::DoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoAction");

	UUTSkillAction_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.StopSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.StopSkillCoolDown");

	AUTSkill_StopSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkill.SetSkillPhasePercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::SetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent, float Percentage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.SetSkillPhasePercentage");

	AUTSkill_SetSkillPhasePercentage_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Percentage = Percentage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkill.OnEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType, int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.OnEvent");

	AUTSkill_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.IsEnableSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsEnableSkillCoolDown");

	AUTSkill_IsEnableSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.IsCDOK
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsCDOK");

	AUTSkill_IsCDOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSpecificSkillManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* AUTSkill::GetSpecificSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificSkillManager");

	AUTSkill_GetSpecificSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSpecificBlackboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* AUTSkill::GetSpecificBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificBlackboard");

	AUTSkill_GetSpecificBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSkillPhasePercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhasePercentage");

	AUTSkill_GetSkillPhasePercentage_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSkillPhaseByName
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// class UUTSkillPhase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhaseByName(const struct FString& PhaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhaseByName");

	AUTSkill_GetSkillPhaseByName_Params params;
	params.PhaseName = PhaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSkillPhase
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhase(int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhase");

	AUTSkill_GetSkillPhase_Params params;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSkillEffectByPhaseName
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseName");

	AUTSkill_GetSkillEffectByPhaseName_Params params;
	params.PhaseName = PhaseName;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.GetSkillEffectByPhaseIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseIndex");

	AUTSkill_GetSkillEffectByPhaseIndex_Params params;
	params.PhaseIndex = PhaseIndex;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkill.DoSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.DoSkillCoolDown");

	AUTSkill_DoSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkill.CanBePlayed
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bShowErrorMsg                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent, bool bShowErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkill.CanBePlayed");

	AUTSkill_CanBePlayed_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.bShowErrorMsg = bShowErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UpdateSyncSkillCDData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData");

	UUTSkillManagerComponent_UpdateSyncSkillCDData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UpdateSyncSkillActiveState(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState");

	UUTSkillManagerComponent_UpdateSyncSkillActiveState_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UnRegisterActorBlackBorad(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad");

	UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsImmediately                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryDeleteOneSkill(int SkillID, bool IsImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryDeleteOneSkill");

	UUTSkillManagerComponent_TryDeleteOneSkill_Params params;
	params.SkillID = SkillID;
	params.IsImmediately = IsImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TryAddOneSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryAddOneSkill(int SkillID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryAddOneSkill");

	UUTSkillManagerComponent_TryAddOneSkill_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TriggerParamsEvent
// (Native, Public, HasOutParms)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> InEventType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillClientData      OperateData                    (ConstParm, Parm, OutParm, ReferenceParm)

void UUTSkillManagerComponent::TriggerParamsEvent(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType, const struct FUTSkillClientData& OperateData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerParamsEvent");

	UUTSkillManagerComponent_TriggerParamsEvent_Params params;
	params.InSkillID = InSkillID;
	params.InEventType = InEventType;
	params.OperateData = OperateData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TriggerEvent_WithID
// (Native, Public)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> InEventType                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TriggerEvent_WithID(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEvent_WithID");

	UUTSkillManagerComponent_TriggerEvent_WithID_Params params;
	params.InSkillID = InSkillID;
	params.InEventType = InEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TriggerEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEvent");

	UUTSkillManagerComponent_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.TraceTarget
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 StartTrace                     (Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, IsPlainOldData)
// EUTPickerTargetType            TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TraceTarget");

	UUTSkillManagerComponent_TraceTarget_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.TargetType = TargetType;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.SyncOneSkillState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SyncOneSkillState");

	UUTSkillManagerComponent_SyncOneSkillState_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.StopSkillWithSlot
// (Native, Public)
// Parameters:
// int                            SkillSlot                      (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::StopSkillWithSlot(int SkillSlot, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillWithSlot");

	UUTSkillManagerComponent_StopSkillWithSlot_Params params;
	params.SkillSlot = SkillSlot;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.StopSkillSpecific
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkillSpecific(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillSpecific");

	UUTSkillManagerComponent_StopSkillSpecific_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.StopSkillAll
// (Native, Public, BlueprintCallable)
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkillAll(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillAll");

	UUTSkillManagerComponent_StopSkillAll_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.StopSkill_WithID
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::StopSkill_WithID(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill_WithID");

	UUTSkillManagerComponent_StopSkill_WithID_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.StopSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkill(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill");

	UUTSkillManagerComponent_StopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ShouldTriggerEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ShouldTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ShouldTriggerEvent");

	UUTSkillManagerComponent_ShouldTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetupOwnerAndSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem");

	UUTSkillManagerComponent_SetupOwnerAndSystem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.SetSkillState
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FUTSkillStateSyncData> InSyncStateDatas               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::SetSkillState(TArray<struct FUTSkillStateSyncData> InSyncStateDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillState");

	UUTSkillManagerComponent_SetSkillState_Params params;
	params.InSyncStateDatas = InSyncStateDatas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetSkillOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  tempActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillOwner(class AActor* tempActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillOwner");

	UUTSkillManagerComponent_SetSkillOwner_Params params;
	params.tempActor = tempActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetSkillLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillLevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillLevel(int SkillID, int SkillLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillLevel");

	UUTSkillManagerComponent_SetSkillLevel_Params params;
	params.SkillID = SkillID;
	params.SkillLevel = SkillLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetSkillLastPhase
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillLastPhase(class AUTSkill* Skill, int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillLastPhase");

	UUTSkillManagerComponent_SetSkillLastPhase_Params params;
	params.Skill = Skill;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetSkillCurPhase
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillCurPhase(class AUTSkill* Skill, int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillCurPhase");

	UUTSkillManagerComponent_SetSkillCurPhase_Params params;
	params.Skill = Skill;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetSkillActive
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceSet                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetSkillActive(int SkillID, bool bActive, bool bForceSet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillActive");

	UUTSkillManagerComponent_SetSkillActive_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.bForceSet = bForceSet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.SetModSkillUIRoot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          ModSkillUIRoot                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillManagerComponent::SetModSkillUIRoot(class UUAEUserWidget* ModSkillUIRoot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetModSkillUIRoot");

	UUTSkillManagerComponent_SetModSkillUIRoot_Params params;
	params.ModSkillUIRoot = ModSkillUIRoot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetCurSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillSlot                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetCurSkill(int SkillID, int SkillSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetCurSkill");

	UUTSkillManagerComponent_SetCurSkill_Params params;
	params.SkillID = SkillID;
	params.SkillSlot = SkillSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.SetAutoSkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetAutoSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetAutoSkillID");

	UUTSkillManagerComponent_SetAutoSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ServerTriggerParamsEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillClientData      OperateData                    (ConstParm, Parm, ReferenceParm)

void UUTSkillManagerComponent::ServerTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerParamsEvent");

	UUTSkillManagerComponent_ServerTriggerParamsEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.OperateData = OperateData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID");

	UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent");

	UUTSkillManagerComponent_ServerTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ServerStartSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ServerStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStartSkill");

	UUTSkillManagerComponent_ServerStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerNotifyRandomSeed(int Seed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed");

	UUTSkillManagerComponent_ServerNotifyRandomSeed_Params params;
	params.Seed = Seed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ResetSkillCollDown
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ResetSkillCollDown(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetSkillCollDown");

	UUTSkillManagerComponent_ResetSkillCollDown_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ResetAllSkillCollDown
// (Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::ResetAllSkillCollDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetAllSkillCollDown");

	UUTSkillManagerComponent_ResetAllSkillCollDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RequestSkillStates
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    RequestIDs                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState, TArray<int> RequestIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RequestSkillStates");

	UUTSkillManagerComponent_RequestSkillStates_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;
	params.RequestIDs = RequestIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RepSkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepSkillHitInfo");

	UUTSkillManagerComponent_RepSkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RepOneSkillSynData
// (Final, Native, Public)
// Parameters:
// int                            SkillSlot                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            InLastSkillID                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RepOneSkillSynData(int SkillSlot, int InLastSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepOneSkillSynData");

	UUTSkillManagerComponent_RepOneSkillSynData_Params params;
	params.SkillSlot = SkillSlot;
	params.InLastSkillID = InLastSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RepLastCastTime
// (Final, Native, Public)

void UUTSkillManagerComponent::RepLastCastTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepLastCastTime");

	UUTSkillManagerComponent_RepLastCastTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ReplaceSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ReplaceSkill(int OldSkillID, int NewSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ReplaceSkill");

	UUTSkillManagerComponent_ReplaceSkill_Params params;
	params.OldSkillID = OldSkillID;
	params.NewSkillID = NewSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RemoveSkillUIWidget
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SkillClassName                 (Parm, ZeroConstructor)
// struct FSoftObjectPath         ObjPath                        (Parm)

void UUTSkillManagerComponent::RemoveSkillUIWidget(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveSkillUIWidget");

	UUTSkillManagerComponent_RemoveSkillUIWidget_Params params;
	params.SkillClassName = SkillClassName;
	params.ObjPath = ObjPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RemoveReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveReplacedSkill");

	UUTSkillManagerComponent_RemoveReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RemoveAllSkillUIWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget");

	UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RegistSkillUIWidgetBP
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SkillClassName                 (Parm, ZeroConstructor)
// struct FSoftObjectPath         ObjPath                        (Parm)

void UUTSkillManagerComponent::RegistSkillUIWidgetBP(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RegistSkillUIWidgetBP");

	UUTSkillManagerComponent_RegistSkillUIWidgetBP_Params params;
	params.SkillClassName = SkillClassName;
	params.ObjPath = ObjPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          RegisterBlackboard             (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad");

	UUTSkillManagerComponent_RegisterActorBlackBorad_Params params;
	params.InActor = InActor;
	params.RegisterBlackboard = RegisterBlackboard;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.RandRangeSyn
// (Final, Native, Public)
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::RandRangeSyn(int StartIndex, int EndIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RandRangeSyn");

	UUTSkillManagerComponent_RandRangeSyn_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
// (Native, Public)
// Parameters:
// struct FUTSkillHitInfo         TheSkillHitInfo                (Parm)

void UUTSkillManagerComponent::PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect");

	UUTSkillManagerComponent_PlayHurtSkillEffect_Params params;
	params.TheSkillHitInfo = TheSkillHitInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnStopSkill
// (Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnStopSkill");

	UUTSkillManagerComponent_OnStopSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnSameTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  A                              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::OnSameTeam(class AActor* A, class AActor* B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnSameTeam");

	UUTSkillManagerComponent_OnSameTeam_Params params;
	params.A = A;
	params.B = B;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.OnRespawned
// (Native, Public)

void UUTSkillManagerComponent::OnRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRespawned");

	UUTSkillManagerComponent_OnRespawned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_SkillSynSinglePhaseData
// (Native, Public)

void UUTSkillManagerComponent::OnRep_SkillSynSinglePhaseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillSynSinglePhaseData");

	UUTSkillManagerComponent_OnRep_SkillSynSinglePhaseData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_SkillSynData
// (Native, Public)

void UUTSkillManagerComponent::OnRep_SkillSynData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillSynData");

	UUTSkillManagerComponent_OnRep_SkillSynData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
// (Native, Public)

void UUTSkillManagerComponent::OnRep_SkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo");

	UUTSkillManagerComponent_OnRep_SkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_SkillCDDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas");

	UUTSkillManagerComponent_OnRep_SkillCDDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_SkillActiveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState");

	UUTSkillManagerComponent_OnRep_SkillActiveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_ReplaceSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill");

	UUTSkillManagerComponent_OnRep_ReplaceSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_DynamicRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData");

	UUTSkillManagerComponent_OnRep_DynamicRepData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnRecycled
// (Native, Public)

void UUTSkillManagerComponent::OnRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRecycled");

	UUTSkillManagerComponent_OnRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.OnInterruptSkill
// (Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnInterruptSkill");

	UUTSkillManagerComponent_OnInterruptSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.IsUsingSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsUsingSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsUsingSkill");

	UUTSkillManagerComponent_IsUsingSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsSkillCanUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillCanUse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillCanUse");

	UUTSkillManagerComponent_IsSkillCanUse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsSkillActived
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillActived(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillActived");

	UUTSkillManagerComponent_IsSkillActived_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsReadyToCastSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsReadyToCastSkill");

	UUTSkillManagerComponent_IsReadyToCastSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsEnableSkillCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown");

	UUTSkillManagerComponent_IsEnableSkillCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCurrentUseSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID");

	UUTSkillManagerComponent_IsCurrentUseSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsCastingSkillID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkillID");

	UUTSkillManagerComponent_IsCastingSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.IsCastingSkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkill");

	UUTSkillManagerComponent_IsCastingSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillClientData      OperateData                    (ConstParm, Parm, OutParm, ReferenceParm)

void UUTSkillManagerComponent::HandleTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent");

	UUTSkillManagerComponent_HandleTriggerParamsEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.OperateData = OperateData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.HandleSkillStop
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStop(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStop");

	UUTSkillManagerComponent_HandleSkillStop_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.HandleSkillStart
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStart(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStart");

	UUTSkillManagerComponent_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillId
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboardBySkillId(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillId");

	UUTSkillManagerComponent_GetUAEBlackboardBySkillId_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetUAEBlackboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboard(class AUTSkill* InSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboard");

	UUTSkillManagerComponent_GetUAEBlackboard_Params params;
	params.InSkill = InSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillWidget* UUTSkillManagerComponent::GetSkillWidget(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillWidget");

	UUTSkillManagerComponent_GetSkillWidget_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUTSkillStateSyncData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUTSkillStateSyncData> UUTSkillManagerComponent::GetSkillState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillState");

	UUTSkillManagerComponent_GetSkillState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID");

	UUTSkillManagerComponent_GetSkillSlotBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkill(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill");

	UUTSkillManagerComponent_GetSkillSlotBySkill_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillsByGroup
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SkillGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetSkillsByGroup(const struct FName& SkillGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillsByGroup");

	UUTSkillManagerComponent_GetSkillsByGroup_Params params;
	params.SkillGroup = SkillGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillLevel(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillLevel");

	UUTSkillManagerComponent_GetSkillLevel_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillLastPhase
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillLastPhase(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillLastPhase");

	UUTSkillManagerComponent_GetSkillLastPhase_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillIDFromSkillIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InSkillIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillIDFromSkillIndex(int InSkillIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillIDFromSkillIndex");

	UUTSkillManagerComponent_GetSkillIDFromSkillIndex_Params params;
	params.InSkillIndex = InSkillIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillIDByClass
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SkillClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillIDByClass(class UClass* SkillClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillIDByClass");

	UUTSkillManagerComponent_GetSkillIDByClass_Params params;
	params.SkillClass = SkillClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillCurPhase
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillCurPhase(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillCurPhase");

	UUTSkillManagerComponent_GetSkillCurPhase_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillByName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SkillName                      (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByName(const struct FString& SkillName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByName");

	UUTSkillManagerComponent_GetSkillByName_Params params;
	params.SkillName = SkillName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillByClassName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SkillClassName                 (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByClassName(const struct FString& SkillClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByClassName");

	UUTSkillManagerComponent_GetSkillByClassName_Params params;
	params.SkillClassName = SkillClassName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkillBaseData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillCreateData      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUTSkillCreateData UUTSkillManagerComponent::GetSkillBaseData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillBaseData");

	UUTSkillManagerComponent_GetSkillBaseData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetSkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkill");

	UUTSkillManagerComponent_GetSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetReplacedSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetReplacedSkill");

	UUTSkillManagerComponent_GetReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<enum ENetRole>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<enum ENetRole> UUTSkillManagerComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety");

	UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetLastCastTime
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastTime");

	UUTSkillManagerComponent_GetLastCastTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastFinishTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastFinishTime");

	UUTSkillManagerComponent_GetLastCastFinishTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurUsingSkillIDS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurUsingSkillIDS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurUsingSkillIDS");

	UUTSkillManagerComponent_GetCurUsingSkillIDS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkills
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetCurSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkills");

	UUTSkillManagerComponent_GetCurSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkillPhases
// (Final, Native, Public)
// Parameters:
// TArray<class UUTSkillPhase*>   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UUTSkillPhase*> UUTSkillManagerComponent::GetCurSkillPhases()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillPhases");

	UUTSkillManagerComponent_GetCurSkillPhases_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
// (Final, Native, Public)
// Parameters:
// int                            InSkillSlot                    (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurSkillPhase(int InSkillSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillPhase");

	UUTSkillManagerComponent_GetCurSkillPhase_Params params;
	params.InSkillSlot = InSkillSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkillIDs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<int> UUTSkillManagerComponent::GetCurSkillIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillIDs");

	UUTSkillManagerComponent_GetCurSkillIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetCurSkillID(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillID");

	UUTSkillManagerComponent_GetCurSkillID_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillSlot                    (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurSkill(int InSkillSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkill");

	UUTSkillManagerComponent_GetCurSkill_Params params;
	params.InSkillSlot = InSkillSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurMonopolizeSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills");

	UUTSkillManagerComponent_GetCurMonopolizeSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.FindRelatedCurSkillID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutRelatedSkillSlot            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPeekSlotIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::FindRelatedCurSkillID(int SkillID, bool bPeekSlotIndex, int* OutRelatedSkillSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.FindRelatedCurSkillID");

	UUTSkillManagerComponent_FindRelatedCurSkillID_Params params;
	params.SkillID = SkillID;
	params.bPeekSlotIndex = bPeekSlotIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRelatedSkillSlot != nullptr)
		*OutRelatedSkillSlot = params.OutRelatedSkillSlot;

	return params.ReturnValue;
}

// Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicRemoveSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicRemoveSkill");

	UUTSkillManagerComponent_DynamicRemoveSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.DynamicAddSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicAddSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicAddSkill");

	UUTSkillManagerComponent_DynamicAddSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ClientStartSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStartSkill");

	UUTSkillManagerComponent_ClientStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ClearSkill
// (Native, Public)

void UUTSkillManagerComponent::ClearSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearSkill");

	UUTSkillManagerComponent_ClearSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ClearRepParams
// (Native, Public)

void UUTSkillManagerComponent::ClearRepParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearRepParams");

	UUTSkillManagerComponent_ClearRepParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillManagerComponent.ClearInitParams
// (Native, Public)

void UUTSkillManagerComponent::ClearInitParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearInitParams");

	UUTSkillManagerComponent_ClearInitParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillInterface.TriggerEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.TriggerEvent");

	UUTSkillInterface_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillInterface.HandleSkillStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillStart(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillStart");

	UUTSkillInterface_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillInterface.HandleSkillEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillEnd(int SkillID, EUTSkillStopReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillEnd");

	UUTSkillInterface_HandleSkillEnd_Params params;
	params.SkillID = SkillID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.TryJumpToPhase
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PhaseId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.TryJumpToPhase");

	UUTSkillPhase_TryJumpToPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.PhaseId = PhaseId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.StopPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StopPhase");

	UUTSkillPhase_StopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.StartPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StartPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StartPhase");

	UUTSkillPhase_StartPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.RepeatPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.RepeatPhase");

	UUTSkillPhase_RepeatPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.PlaySkillHurtEffect
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtEffect");

	UUTSkillPhase_PlaySkillHurtEffect_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtAppearances");

	UUTSkillPhase_PlaySkillHurtAppearances_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.PickTargets
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::PickTargets(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PickTargets");

	UUTSkillPhase_PickTargets_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.OnEvent
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnEvent");

	UUTSkillPhase_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.OnCustomEvent
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<enum EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnCustomEvent");

	UUTSkillPhase_OnCustomEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.GetChargePhaseRate
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillPhase::GetChargePhaseRate(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.GetChargePhaseRate");

	UUTSkillPhase_GetChargePhaseRate_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.ForceStopPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ForceStopPhase");

	UUTSkillPhase_ForceStopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.ClearAttachments
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ClearAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ClearAttachments");

	UUTSkillPhase_ClearAttachments_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPhase.AfterStartPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::AfterStartPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.AfterStartPhase");

	UUTSkillPhase_AfterStartPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.AddSkillConditionLua
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLuaPath                      (Parm, ZeroConstructor)

void UUTSkillPhase::AddSkillConditionLua(class AUTSkill* InSkill, const struct FString& InLuaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.AddSkillConditionLua");

	UUTSkillPhase_AddSkillConditionLua_Params params;
	params.InSkill = InSkill;
	params.InLuaPath = InLuaPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPhase.AddSkillActionLua
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLuaPath                      (Parm, ZeroConstructor)

void UUTSkillPhase::AddSkillActionLua(class AUTSkill* InSkill, const struct FString& InLuaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.AddSkillActionLua");

	UUTSkillPhase_AddSkillActionLua_Params params;
	params.InSkill = InSkill;
	params.InLuaPath = InLuaPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillPicker.PickTargetsInner
// (Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargetsInner(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargetsInner");

	UUTSkillPicker_PickTargetsInner_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPicker.PickTargets
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargets(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargets");

	UUTSkillPicker_PickTargets_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillPickerFilter.HandleFilterArray
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUTSkillPickedTarget> inArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillPickerFilter::HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillPickerFilter.HandleFilterArray");

	UUTSkillPickerFilter_HandleFilterArray_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}

// Function Skill.UTSkillWidget.TriggerPassiveEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<enum EUTSkillEventType> SkillEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::TriggerPassiveEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.TriggerPassiveEvent");

	UUTSkillWidget_TriggerPassiveEvent_Params params;
	params.SkillEvent = SkillEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.TriggerEvent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EUTSkillEventType> SkillEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::TriggerEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.TriggerEvent");

	UUTSkillWidget_TriggerEvent_Params params;
	params.SkillEvent = SkillEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.SetSkillManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* manager                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillWidget::SetSkillManager(class UUTSkillManagerComponent* manager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillManager");

	UUTSkillWidget_SetSkillManager_Params params;
	params.manager = manager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.SetSkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::SetSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillID");

	UUTSkillWidget_SetSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.RemoveSkillUI
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UUTSkillWidget::RemoveSkillUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.RemoveSkillUI");

	UUTSkillWidget_RemoveSkillUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.OnSkillStopEvent
// (Native, Public)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             InStopReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::OnSkillStopEvent(int InSkillID, EUTSkillStopReason InStopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.OnSkillStopEvent");

	UUTSkillWidget_OnSkillStopEvent_Params params;
	params.InSkillID = InSkillID;
	params.InStopReason = InStopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.OnSkillStartEvent
// (Native, Public)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::OnSkillStartEvent(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.OnSkillStartEvent");

	UUTSkillWidget_OnSkillStartEvent_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillWidget.IsTickFinish
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillWidget::IsTickFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.IsTickFinish");

	UUTSkillWidget_IsTickFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.IsCDReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillWidget::IsCDReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.IsCDReady");

	UUTSkillWidget_IsCDReady_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkillName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillWidget::GetSkillName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillName");

	UUTSkillWidget_GetSkillName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkillManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillWidget::GetSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillManager");

	UUTSkillWidget_GetSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillWidget::GetSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillID");

	UUTSkillWidget_GetSkillID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkillCDProgess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UUTSkillWidget::GetSkillCDProgess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillCDProgess");

	UUTSkillWidget_GetSkillCDProgess_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkillCDBases
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUTSkillCDBase*>  ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UUTSkillCDBase*> UUTSkillWidget::GetSkillCDBases()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillCDBases");

	UUTSkillWidget_GetSkillCDBases_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillWidget::GetSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkill");

	UUTSkillWidget_GetSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetMaxEnergy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillWidget::GetMaxEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetMaxEnergy");

	UUTSkillWidget_GetMaxEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetLocalPlayerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUTSkillWidget::GetLocalPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetLocalPlayerController");

	UUTSkillWidget_GetLocalPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetEnergyValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillWidget::GetEnergyValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetEnergyValue");

	UUTSkillWidget_GetEnergyValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetEnergyThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillWidget::GetEnergyThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetEnergyThreshold");

	UUTSkillWidget_GetEnergyThreshold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.GetDeltaEnergy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillWidget::GetDeltaEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetDeltaEnergy");

	UUTSkillWidget_GetDeltaEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillWidget.DoRemove
// (Final, Native, Public, BlueprintCallable)

void UUTSkillWidget::DoRemove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.DoRemove");

	UUTSkillWidget_DoRemove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FItemSkillsConfig> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSkillsConfig> UAddNewSkillToOwnerInterface::GetSkillTemplates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates");

	UAddNewSkillToOwnerInterface_GetSkillTemplates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject");

	UUTSkillBlackboardInterface_SetValueAsWeakObject_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsVector");

	UUTSkillBlackboardInterface_SetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillBlackboardInterface::SetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsString");

	UUTSkillBlackboardInterface_SetValueAsString_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsRotator");

	UUTSkillBlackboardInterface_SetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsObject");

	UUTSkillBlackboardInterface_SetValueAsObject_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsName");

	UUTSkillBlackboardInterface_SetValueAsName_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsInt");

	UUTSkillBlackboardInterface_SetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsFloat");

	UUTSkillBlackboardInterface_SetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsEnum");

	UUTSkillBlackboardInterface_SetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsClass");

	UUTSkillBlackboardInterface_SetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.SetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsBool");

	UUTSkillBlackboardInterface_SetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistWeakObject");

	UUTSkillBlackboardInterface_IsExistWeakObject_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistVector
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistVector(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistVector");

	UUTSkillBlackboardInterface_IsExistVector_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistString
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistString(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistString");

	UUTSkillBlackboardInterface_IsExistString_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistRotator
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistRotator");

	UUTSkillBlackboardInterface_IsExistRotator_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistObject(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistObject");

	UUTSkillBlackboardInterface_IsExistObject_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistName(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistName");

	UUTSkillBlackboardInterface_IsExistName_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistInt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistInt(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistInt");

	UUTSkillBlackboardInterface_IsExistInt_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistFloat
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistFloat");

	UUTSkillBlackboardInterface_IsExistFloat_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistEnum
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistEnum");

	UUTSkillBlackboardInterface_IsExistEnum_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistClass(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistClass");

	UUTSkillBlackboardInterface_IsExistClass_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.IsExistBool
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistBool(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistBool");

	UUTSkillBlackboardInterface_IsExistBool_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillBlackboardInterface::GetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsVector");

	UUTSkillBlackboardInterface_GetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillBlackboardInterface::GetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsString");

	UUTSkillBlackboardInterface_GetValueAsString_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillBlackboardInterface::GetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsRotator");

	UUTSkillBlackboardInterface_GetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillBlackboardInterface::GetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsName");

	UUTSkillBlackboardInterface_GetValueAsName_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillBlackboardInterface::GetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsInt");

	UUTSkillBlackboardInterface_GetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillBlackboardInterface::GetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsFloat");

	UUTSkillBlackboardInterface_GetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillBlackboardInterface::GetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsEnum");

	UUTSkillBlackboardInterface_GetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillBlackboardInterface::GetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsClass");

	UUTSkillBlackboardInterface_GetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::GetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsBool");

	UUTSkillBlackboardInterface_GetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillId
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBlackboardInterface::GetUAEBlackboardBySkillId(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillId");

	UUTSkillBlackboardInterface_GetUAEBlackboardBySkillId_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.StopConsumCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCDBase::StopConsumCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.StopConsumCD");

	UUTSkillCDBase_StopConsumCD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.IsTickFinish
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCDBase::IsTickFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.IsTickFinish");

	UUTSkillCDBase_IsTickFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.IsCDReady
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCDBase::IsCDReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.IsCDReady");

	UUTSkillCDBase_IsCDReady_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.GetCurrentTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillCDBase::GetCurrentTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.GetCurrentTime");

	UUTSkillCDBase_GetCurrentTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.ForceConsumCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCDBase::ForceConsumCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.ForceConsumCD");

	UUTSkillCDBase_ForceConsumCD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCDBase.ConsumCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCDBase::ConsumCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.ConsumCD");

	UUTSkillCDBase_ConsumCD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCD_EnergyOfSkill.RefreshEnergy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillCD_EnergyOfSkill::RefreshEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCD_EnergyOfSkill.RefreshEnergy");

	UUTSkillCD_EnergyOfSkill_RefreshEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCD_EnergyOfSkill.GetDeltaEnergy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillCD_EnergyOfSkill::GetDeltaEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCD_EnergyOfSkill.GetDeltaEnergy");

	UUTSkillCD_EnergyOfSkill_GetDeltaEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentPercent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillCD_EnergyOfSkill::GetCurrentPercent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentPercent");

	UUTSkillCD_EnergyOfSkill_GetCurrentPercent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentEnergy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillCD_EnergyOfSkill::GetCurrentEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillCD_EnergyOfSkill.GetCurrentEnergy");

	UUTSkillCD_EnergyOfSkill_GetCurrentEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillSpecificAction.UpdateAction_Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UpdateAction_Internal");

	UUTSkillSpecificAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillSpecificAction.UndoAction_Internal
// (Native, Public, BlueprintCallable)

void UUTSkillSpecificAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UndoAction_Internal");

	UUTSkillSpecificAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillSpecificAction.Reset_Internal
// (Native, Public, BlueprintCallable)

void UUTSkillSpecificAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.Reset_Internal");

	UUTSkillSpecificAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillSpecificAction.RealDoAction_Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillSpecificAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.RealDoAction_Internal");

	UUTSkillSpecificAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Skill.UTSkillSpecificAction.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PreCloseSkill");

	UUTSkillSpecificAction_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillSpecificAction.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostInitSkill");

	UUTSkillSpecificAction_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Skill.UTSkillSpecificAction.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostActiveSkill");

	UUTSkillSpecificAction_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

