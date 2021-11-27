// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_GameFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetModeMaxTeammateNum
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::GetModeMaxTeammateNum(class UObject* __WorldContext, int* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetModeMaxTeammateNum");

	UBP_GameFunctionLibrary_C_GetModeMaxTeammateNum_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.EditorGetGameModeID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldCont                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModeID                         (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::EditorGetGameModeID(class UObject* WorldCont, class UObject* __WorldContext, struct FString* ModeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.EditorGetGameModeID");

	UBP_GameFunctionLibrary_C_EditorGetGameModeID_Params params;
	params.WorldCont = WorldCont;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ModeID != nullptr)
		*ModeID = params.ModeID;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeUpperBound
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRangeBound        FloatRangeBound                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GameFunctionLibrary_C::IsInFloatRangeUpperBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeUpperBound");

	UBP_GameFunctionLibrary_C_IsInFloatRangeUpperBound_Params params;
	params.Value = Value;
	params.FloatRangeBound = FloatRangeBound;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeLowerBound
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRangeBound        FloatRangeBound                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GameFunctionLibrary_C::IsInFloatRangeLowerBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeLowerBound");

	UBP_GameFunctionLibrary_C_IsInFloatRangeLowerBound_Params params;
	params.Value = Value;
	params.FloatRangeBound = FloatRangeBound;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             FloatRange                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GameFunctionLibrary_C::IsInFloatRange(float Value, const struct FFloatRange& FloatRange, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRange");

	UBP_GameFunctionLibrary_C_IsInFloatRange_Params params;
	params.Value = Value;
	params.FloatRange = FloatRange;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetGuideTextStruct
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam1                      (Parm, OutParm)

void UBP_GameFunctionLibrary_C::GetGuideTextStruct(int NewParam, class UObject* __WorldContext, struct FBP_STRUCT_GuideText_type* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetGuideTextStruct");

	UBP_GameFunctionLibrary_C_GetGuideTextStruct_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetMinimapPathByModeID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MinimapPath                    (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::GetMinimapPathByModeID(class UObject* WorldContext, class UObject* __WorldContext, struct FString* MinimapPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetMinimapPathByModeID");

	UBP_GameFunctionLibrary_C_GetMinimapPathByModeID_Params params;
	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MinimapPath != nullptr)
		*MinimapPath = params.MinimapPath;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMinimapPath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MinimapPath                    (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::GetCurLevelMinimapPath(class UObject* __WorldContext, struct FString* MinimapPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMinimapPath");

	UBP_GameFunctionLibrary_C_GetCurLevelMinimapPath_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MinimapPath != nullptr)
		*MinimapPath = params.MinimapPath;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetDecentAsset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TypeEnum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleSys                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::GetDecentAsset(int TypeEnum, class UObject* __WorldContext, class UParticleSystem** ParticleSys)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetDecentAsset");

	UBP_GameFunctionLibrary_C_GetDecentAsset_Params params;
	params.TypeEnum = TypeEnum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ParticleSys != nullptr)
		*ParticleSys = params.ParticleSys;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::ClampStringLength(const struct FString& Source, int Length, class UObject* __WorldContext, struct FString* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength");

	UBP_GameFunctionLibrary_C_ClampStringLength_Params params;
	params.Source = Source;
	params.Length = Length;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           cansee                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::IsPlayerCanSeeWidget(class UWidget* NewParam, class UObject* __WorldContext, bool* cansee)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget");

	UBP_GameFunctionLibrary_C_IsPlayerCanSeeWidget_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (cansee != nullptr)
		*cansee = params.cansee;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::GetCurLevelMapTexture(class UObject* __WorldContext, class UTexture2D** Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture");

	UBP_GameFunctionLibrary_C_GetCurLevelMapTexture_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::GetActorsByTag(const struct FName& Tag, class UObject* ContextObject, class UClass* ActorClass, class UObject* __WorldContext, TArray<class AActor*>* Targets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag");

	UBP_GameFunctionLibrary_C_GetActorsByTag_Params params;
	params.Tag = Tag;
	params.ContextObject = ContextObject;
	params.ActorClass = ActorClass;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::AddActorTag(class AActor* Target, const struct FName& TagInfo, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag");

	UBP_GameFunctionLibrary_C_AddActorTag_Params params;
	params.Target = Target;
	params.TagInfo = TagInfo;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APostProcessVolume*      Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::SetUpGamePostProcessEffectData(class APostProcessVolume* Volume, class UObject* ContextObject, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData");

	UBP_GameFunctionLibrary_C_SetUpGamePostProcessEffectData_Params params;
	params.Volume = Volume;
	params.ContextObject = ContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

