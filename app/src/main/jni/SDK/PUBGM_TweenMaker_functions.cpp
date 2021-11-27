// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TweenMaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TweenMaker.BaseTween.TogglePauseTween
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SkipTween                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseTween::TogglePauseTween(bool SkipTween)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.TogglePauseTween");

	UBaseTween_TogglePauseTween_Params params;
	params.SkipTween = SkipTween;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.SetTweenName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TweenName                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseTween::SetTweenName(const struct FName& TweenName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.SetTweenName");

	UBaseTween_SetTweenName_Params params;
	params.TweenName = TweenName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.SetTimeScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTimeScale                   (Parm, ZeroConstructor, IsPlainOldData)

void UBaseTween::SetTimeScale(float NewTimeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.SetTimeScale");

	UBaseTween_SetTimeScale_Params params;
	params.NewTimeScale = NewTimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.SetDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDelay                       (Parm, ZeroConstructor, IsPlainOldData)

void UBaseTween::SetDelay(float NewDelay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.SetDelay");

	UBaseTween_SetDelay_Params params;
	params.NewDelay = NewDelay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.ResumeTween
// (Final, Native, Public, BlueprintCallable)

void UBaseTween::ResumeTween()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.ResumeTween");

	UBaseTween_ResumeTween_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.PauseTween
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SkipTween                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseTween::PauseTween(bool SkipTween)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.PauseTween");

	UBaseTween_PauseTween_Params params;
	params.SkipTween = SkipTween;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.JoinTweenWidgetOpacityTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenWidgetOpacityTo(float to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenWidgetOpacityTo");

	UBaseTween_JoinTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenWidgetAngleTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenWidgetAngleTo(float to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenWidgetAngleTo");

	UBaseTween_JoinTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenShearWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenShearWidgetTo(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenShearWidgetTo");

	UBaseTween_JoinTweenShearWidgetTo_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenSceneComponentFollowSpline
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenSceneComponentFollowSpline(bool UseConstantSpeed, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenSceneComponentFollowSpline");

	UBaseTween_JoinTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenScaleWidgetTo(const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleWidgetTo");

	UBaseTween_JoinTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleWidgetBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenScaleWidgetBy(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleWidgetBy");

	UBaseTween_JoinTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenScaleSceneComponentTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentTo");

	UBaseTween_JoinTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenScaleSceneComponentBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentBy");

	UBaseTween_JoinTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenScaleActorTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleActorTo");

	UBaseTween_JoinTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenScaleActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenScaleActorBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenScaleActorBy");

	UBaseTween_JoinTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::JoinTweenRotateSceneComponentTo(bool DeleteTweenOnHit, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentTo");

	UBaseTween_JoinTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::JoinTweenRotateSceneComponentBy(bool DeleteTweenOnHit, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentBy");

	UBaseTween_JoinTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPointByOffset");

	UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenRotateSceneComponentAroundPoint(float Duration, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPoint");

	UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::JoinTweenRotateActorTo(bool DeleteTweenOnHit, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateActorTo");

	UBaseTween_JoinTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::JoinTweenRotateActorBy(bool DeleteTweenOnHit, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateActorBy");

	UBaseTween_JoinTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPointByOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPointByOffset");

	UBaseTween_JoinTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenRotateActorAroundPoint(float Duration, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPoint");

	UBaseTween_JoinTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenMoveWidgetTo(const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveWidgetTo");

	UBaseTween_JoinTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveWidgetBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenMoveWidgetBy(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveWidgetBy");

	UBaseTween_JoinTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenMoveSceneComponentTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentTo");

	UBaseTween_JoinTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenMoveSceneComponentBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentBy");

	UBaseTween_JoinTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenMoveActorTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveActorTo");

	UBaseTween_JoinTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMoveActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenMoveActorBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMoveActorBy");

	UBaseTween_JoinTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMaterialVectorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UBaseTween::JoinTweenMaterialVectorTo(float Duration, const struct FName& ParameterName, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMaterialVectorTo");

	UBaseTween_JoinTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMaterialVectorFromTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UBaseTween::JoinTweenMaterialVectorFromTo(float Duration, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMaterialVectorFromTo");

	UBaseTween_JoinTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMaterialFloatTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenMaterialFloatTo(float Duration, const struct FName& ParameterName, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMaterialFloatTo");

	UBaseTween_JoinTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenMaterialFloatFromTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenMaterialFloatFromTo(float Duration, const struct FName& ParameterName, float from, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenMaterialFloatFromTo");

	UBaseTween_JoinTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenCustomVector2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::JoinTweenCustomVector2D(float Duration, const struct FVector2D& from, const struct FVector2D& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenCustomVector2D");

	UBaseTween_JoinTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenCustomVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::JoinTweenCustomVector(float Duration, const struct FVector& from, const struct FVector& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenCustomVector");

	UBaseTween_JoinTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenCustomFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenCustomFloat(float Duration, float from, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenCustomFloat");

	UBaseTween_JoinTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.JoinTweenActorFollowSpline
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::JoinTweenActorFollowSpline(bool UseConstantSpeed, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.JoinTweenActorFollowSpline");

	UBaseTween_JoinTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.IsTweenPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBaseTween::IsTweenPaused()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.IsTweenPaused");

	UBaseTween_IsTweenPaused_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.IsTweening
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBaseTween::IsTweening()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.IsTweening");

	UBaseTween_IsTweening_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTweenTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBaseTween::GetTweenTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTweenTarget");

	UBaseTween_GetTweenTarget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTweenName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBaseTween::GetTweenName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTweenName");

	UBaseTween_GetTweenName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTweenElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBaseTween::GetTweenElapsedTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTweenElapsedTime");

	UBaseTween_GetTweenElapsedTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTweenDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBaseTween::GetTweenDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTweenDuration");

	UBaseTween_GetTweenDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTweenContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTweenContainer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenContainer* UBaseTween::GetTweenContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTweenContainer");

	UBaseTween_GetTweenContainer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.GetTimeScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBaseTween::GetTimeScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.GetTimeScale");

	UBaseTween_GetTimeScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.DeleteTween
// (Final, Native, Public, BlueprintCallable)

void UBaseTween::DeleteTween()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.DeleteTween");

	UBaseTween_DeleteTween_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.BaseTween.AppendTweenWidgetOpacityTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenWidgetOpacityTo(int mNumLoops, float to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenWidgetOpacityTo");

	UBaseTween_AppendTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenWidgetAngleTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenWidgetAngleTo(int mNumLoops, float to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenWidgetAngleTo");

	UBaseTween_AppendTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenShearWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenShearWidgetTo(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenShearWidgetTo");

	UBaseTween_AppendTweenShearWidgetTo_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenSceneComponentFollowSpline
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenSceneComponentFollowSpline(ETweenEaseType EaseType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenSceneComponentFollowSpline");

	UBaseTween_AppendTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenScaleWidgetTo(int mNumLoops, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleWidgetTo");

	UBaseTween_AppendTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleWidgetBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenScaleWidgetBy(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleWidgetBy");

	UBaseTween_AppendTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenScaleSceneComponentTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentTo");

	UBaseTween_AppendTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenScaleSceneComponentBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentBy");

	UBaseTween_AppendTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenScaleActorTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleActorTo");

	UBaseTween_AppendTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenScaleActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenScaleActorBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenScaleActorBy");

	UBaseTween_AppendTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::AppendTweenRotateSceneComponentTo(bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentTo");

	UBaseTween_AppendTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::AppendTweenRotateSceneComponentBy(bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentBy");

	UBaseTween_AppendTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenRotateSceneComponentAroundPointByOffset(bool DeleteTweenOnHit, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPointByOffset");

	UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenRotateSceneComponentAroundPoint(ETweenEaseType EaseType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPoint");

	UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::AppendTweenRotateActorTo(bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateActorTo");

	UBaseTween_AppendTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UBaseTween::AppendTweenRotateActorBy(bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateActorBy");

	UBaseTween_AppendTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPointByOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenRotateActorAroundPointByOffset(bool DeleteTweenOnHit, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPointByOffset");

	UBaseTween_AppendTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenRotateActorAroundPoint(ETweenEaseType EaseType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPoint");

	UBaseTween_AppendTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveWidgetTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenMoveWidgetTo(int mNumLoops, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveWidgetTo");

	UBaseTween_AppendTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveWidgetBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenMoveWidgetBy(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveWidgetBy");

	UBaseTween_AppendTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenMoveSceneComponentTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentTo");

	UBaseTween_AppendTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenMoveSceneComponentBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentBy");

	UBaseTween_AppendTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveActorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenMoveActorTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveActorTo");

	UBaseTween_AppendTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMoveActorBy
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenMoveActorBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMoveActorBy");

	UBaseTween_AppendTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMaterialVectorTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UBaseTween::AppendTweenMaterialVectorTo(ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMaterialVectorTo");

	UBaseTween_AppendTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMaterialVectorFromTo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UBaseTween::AppendTweenMaterialVectorFromTo(ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMaterialVectorFromTo");

	UBaseTween_AppendTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMaterialFloatTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenMaterialFloatTo(ETweenEaseType EaseType, const struct FName& ParameterName, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMaterialFloatTo");

	UBaseTween_AppendTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenMaterialFloatFromTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenMaterialFloatFromTo(ETweenEaseType EaseType, const struct FName& ParameterName, float from, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenMaterialFloatFromTo");

	UBaseTween_AppendTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenCustomVector2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UBaseTween::AppendTweenCustomVector2D(ETweenEaseType EaseType, const struct FVector2D& from, const struct FVector2D& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenCustomVector2D");

	UBaseTween_AppendTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenCustomVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UBaseTween::AppendTweenCustomVector(ETweenEaseType EaseType, const struct FVector& from, const struct FVector& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenCustomVector");

	UBaseTween_AppendTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenCustomFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            mNumLoops                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenCustomFloat(ETweenEaseType EaseType, float from, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenCustomFloat");

	UBaseTween_AppendTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.mNumLoops = mNumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.BaseTween.AppendTweenActorFollowSpline
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 mLoopType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UBaseTween::AppendTweenActorFollowSpline(ETweenEaseType EaseType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.BaseTween.AppendTweenActorFollowSpline");

	UBaseTween_AppendTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.mLoopType = mLoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenContainer.TogglePauseTweenContainer
// (Final, Native, Public, BlueprintCallable)

void UTweenContainer::TogglePauseTweenContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.TogglePauseTweenContainer");

	UTweenContainer_TogglePauseTweenContainer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenContainer.SetTimeScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTimeScale                   (Parm, ZeroConstructor, IsPlainOldData)

void UTweenContainer::SetTimeScale(float NewTimeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.SetTimeScale");

	UTweenContainer_SetTimeScale_Params params;
	params.NewTimeScale = NewTimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenContainer.SetLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)

void UTweenContainer::SetLoop(int NumLoops, ETweenLoopType LoopType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.SetLoop");

	UTweenContainer_SetLoop_Params params;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenContainer.ResumeTweenContainer
// (Final, Native, Public, BlueprintCallable)

void UTweenContainer::ResumeTweenContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.ResumeTweenContainer");

	UTweenContainer_ResumeTweenContainer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenContainer.PauseTweenContainer
// (Final, Native, Public, BlueprintCallable)

void UTweenContainer::PauseTweenContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.PauseTweenContainer");

	UTweenContainer_PauseTweenContainer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenContainer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTweenContainer::IsPaused()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.IsPaused");

	UTweenContainer_IsPaused_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenContainer.IsObjectTweeningInContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UBaseTween*              TweenFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTweenContainer::IsObjectTweeningInContainer(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.IsObjectTweeningInContainer");

	UTweenContainer_IsObjectTweeningInContainer_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenFound != nullptr)
		*TweenFound = params.TweenFound;

	return params.ReturnValue;
}

// Function TweenMaker.TweenContainer.DeleteTweensInContainerByObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)

void UTweenContainer::DeleteTweensInContainerByObject(ETweenGenericType TweensType, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.DeleteTweensInContainerByObject");

	UTweenContainer_DeleteTweensInContainerByObject_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
}

// Function TweenMaker.TweenContainer.DeleteTweenContainer
// (Final, Native, Public, BlueprintCallable)

void UTweenContainer::DeleteTweenContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenContainer.DeleteTweenContainer");

	UTweenContainer_DeleteTweenContainer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenFloat.OnPrimitiveComponentHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHitResult                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenFloat::OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloat.OnPrimitiveComponentHit");

	UTweenFloat_OnPrimitiveComponentHit_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pNormalImpulse = pNormalImpulse;
	params.pHitResult = pHitResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenFloat.OnPrimitiveComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            pOtherBodyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              pSweepResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenFloat::OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloat.OnPrimitiveComponentBeginOverlap");

	UTweenFloat_OnPrimitiveComponentBeginOverlap_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pOtherBodyIndex = pOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.pSweepResult = pSweepResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenFloat.OnActorHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHit                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenFloat::OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloat.OnActorHit");

	UTweenFloat_OnActorHit_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;
	params.pNormalImpulse = pNormalImpulse;
	params.pHit = pHit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenFloat.OnActorBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloat::OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloat.OnActorBeginOverlap");

	UTweenFloat_OnActorBeginOverlap_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenFloat.GetCurrentValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTweenFloat::GetCurrentValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloat.GetCurrentValue");

	UTweenFloat_GetCurrentValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetOpacityTo(float Duration, float Delay, ETweenEaseType EaseType, float to, float TimeScale, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetOpacityTo");

	UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetAngleTo(float Duration, float Delay, ETweenEaseType EaseType, float to, float TimeScale, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetAngleTo");

	UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenSceneComponentFollowSpline(bool ApplyScale, float Delay, bool DeleteTweenOnOverlap, class USplineComponent* Spline, float Duration, bool ApplyRotation, float TimeScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenSceneComponentFollowSpline");

	UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(float Duration, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPoint(const struct FVector& Axis, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, float TimeScale, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPoint");

	UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPointByOffset(float Duration, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPointByOffset");

	UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPoint(const struct FVector& Axis, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, float TimeScale, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPoint");

	UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatTo(float to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatTo");

	UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatFromTo(float to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float from, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatFromTo");

	UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenCustomFloat(float to, float Delay, ETweenEaseType EaseType, float from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenCustomFloat");

	UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_JoinLatentTweenActorFollowSpline(bool ApplyScale, float Delay, bool DeleteTweenOnOverlap, class USplineComponent* Spline, float Duration, bool ApplyRotation, float TimeScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenActorFollowSpline");

	UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetOpacityTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetOpacityTo");

	UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetAngleTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetAngleTo");

	UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenSceneComponentFollowSpline(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenSceneComponentFollowSpline");

	UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Params params;
	params.TweenManager = TweenManager;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPoint(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPoint");

	UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPointByOffset(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPointByOffset");

	UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPoint(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPoint");

	UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatTo");

	UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatFromTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatFromTo");

	UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenCustomFloat(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenCustomFloat");

	UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_CreateLatentTweenActorFollowSpline(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenActorFollowSpline");

	UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Params params;
	params.TweenManager = TweenManager;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetOpacityTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, float to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetOpacityTo");

	UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetAngleTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, float to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetAngleTo");

	UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenSceneComponentFollowSpline(bool UseConstantSpeed, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenSceneComponentFollowSpline");

	UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPoint(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPoint");

	UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPointByOffset");

	UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPoint(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPoint");

	UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatTo");

	UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatFromTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float from, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatFromTo");

	UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenCustomFloat(float Duration, float Delay, ETweenLoopType LoopType, float from, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenCustomFloat");

	UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenFloat*             OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloatLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloatLatentFactory* UTweenFloatLatentFactory::BP_AppendLatentTweenActorFollowSpline(bool UseConstantSpeed, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenActorFollowSpline");

	UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenWidgetOpacityTo(ETweenEaseType EaseType, float TimeScale, float to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetOpacityTo");

	UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenWidgetAngleTo(ETweenEaseType EaseType, float TimeScale, float to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetAngleTo");

	UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenSceneComponentFollowSpline(bool UseConstantSpeed, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenSceneComponentFollowSpline");

	UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPoint(float Duration, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPoint");

	UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPointByOffset");

	UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPoint(float Duration, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPoint");

	UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatTo(float Duration, float TimeScale, const struct FName& ParameterName, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatTo");

	UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatFromTo(float Duration, float TimeScale, const struct FName& ParameterName, float from, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatFromTo");

	UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenCustomFloat(float Duration, float TimeScale, float from, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenCustomFloat");

	UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_JoinTweenActorFollowSpline(bool UseConstantSpeed, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenActorFollowSpline");

	UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenWidgetOpacityTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetOpacityTo");

	UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenWidgetAngleTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetAngleTo");

	UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenSceneComponentFollowSpline(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenSceneComponentFollowSpline");

	UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Params params;
	params.TweenManager = TweenManager;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPointByOffset(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPoint(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPoint");

	UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPointByOffset(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPointByOffset");

	UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPoint(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPoint");

	UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Params params;
	params.TweenManager = TweenManager;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatTo");

	UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatFromTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatFromTo");

	UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenCustomFloat(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenCustomFloat");

	UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenFloatStandardFactory::BP_CreateTweenActorFollowSpline(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenActorFollowSpline");

	UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Params params;
	params.TweenManager = TweenManager;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetOpacityTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenWidgetOpacityTo(int NumLoops, float TimeScale, float to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetOpacityTo");

	UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetAngleTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenWidgetAngleTo(int NumLoops, float TimeScale, float to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetAngleTo");

	UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenSceneComponentFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenSceneComponentFollowSpline(ETweenEaseType EaseType, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenSceneComponentFollowSpline");

	UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPointByOffset(bool DeleteTweenOnHit, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPointByOffset");

	UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPoint(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPoint");

	UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPointByOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          OffsetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// ETweenReferenceAxis            ReferenceAxis                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPointByOffset(bool DeleteTweenOnHit, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPointByOffset");

	UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Params params;
	params.PivotPoint = PivotPoint;
	params.OffsetAngle = OffsetAngle;
	params.ReferenceAxis = ReferenceAxis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// float                          StartingAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPoint(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPoint");

	UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Params params;
	params.PivotPoint = PivotPoint;
	params.StartingAngle = StartingAngle;
	params.EndingAngle = EndingAngle;
	params.Radius = Radius;
	params.Axis = Axis;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatTo");

	UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatFromTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatFromTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, float from, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatFromTo");

	UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenCustomFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenCustomFloat(ETweenEaseType EaseType, float TimeScale, float from, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenCustomFloat");

	UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenActorFollowSpline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyScale                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseConstantSpeed               (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenFloat*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenFloat* UTweenFloatStandardFactory::BP_AppendTweenActorFollowSpline(ETweenEaseType EaseType, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenActorFollowSpline");

	UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Params params;
	params.Spline = Spline;
	params.Duration = Duration;
	params.ApplyRotation = ApplyRotation;
	params.ApplyScale = ApplyScale;
	params.UseConstantSpeed = UseConstantSpeed;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColor.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UTweenLinearColor::GetCurrentValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColor.GetCurrentValue");

	UTweenLinearColor_GetCurrentValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_JoinLatentTweenMaterialVectorTo(const struct FLinearColor& to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorTo");

	UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_JoinLatentTweenMaterialVectorFromTo(const struct FLinearColor& to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& from, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorFromTo");

	UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_CreateLatentTweenMaterialVectorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenLinearColor** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorTo");

	UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_CreateLatentTweenMaterialVectorFromTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenLinearColor** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorFromTo");

	UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_AppendLatentTweenMaterialVectorTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorTo");

	UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenLinearColor*       OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColorLatentFactory* UTweenLinearColorLatentFactory::BP_AppendLatentTweenMaterialVectorFromTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorFromTo");

	UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UTweenLinearColorStandardFactory::BP_JoinTweenMaterialVectorTo(float Duration, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorTo");

	UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UTweenLinearColorStandardFactory::BP_JoinTweenMaterialVectorFromTo(float Duration, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorFromTo");

	UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenLinearColorStandardFactory::BP_CreateTweenMaterialVectorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenLinearColor** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorTo");

	UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenLinearColorStandardFactory::BP_CreateTweenMaterialVectorFromTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenLinearColor** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorFromTo");

	UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Params params;
	params.TweenManager = TweenManager;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UTweenLinearColorStandardFactory::BP_AppendTweenMaterialVectorTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorTo");

	UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Params params;
	params.ParameterName = ParameterName;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorFromTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            from                           (Parm, IsPlainOldData)
// struct FLinearColor            to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenLinearColor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenLinearColor* UTweenLinearColorStandardFactory::BP_AppendTweenMaterialVectorFromTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorFromTo");

	UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Params params;
	params.ParameterName = ParameterName;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerActor.IsObjectTweening
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UBaseTween*              TweenFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATweenManagerActor::IsObjectTweening(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerActor.IsObjectTweening");

	ATweenManagerActor_IsObjectTweening_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenFound != nullptr)
		*TweenFound = params.TweenFound;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerActor.FindTweenByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TweenName                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenGenericType              TweenType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBaseTween*              TweenFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATweenManagerActor::FindTweenByName(const struct FName& TweenName, ETweenGenericType TweenType, class UBaseTween** TweenFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerActor.FindTweenByName");

	ATweenManagerActor_FindTweenByName_Params params;
	params.TweenName = TweenName;
	params.TweenType = TweenType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenFound != nullptr)
		*TweenFound = params.TweenFound;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerActor.DeleteAllTweensByObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATweenManagerActor::DeleteAllTweensByObject(ETweenGenericType TweensType, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerActor.DeleteAllTweensByObject");

	ATweenManagerActor_DeleteAllTweensByObject_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerActor.DeleteAllTweens
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATweenManagerActor::DeleteAllTweens()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerActor.DeleteAllTweens");

	ATweenManagerActor_DeleteAllTweens_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerActor.BP_CreateTweenContainerStatic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ATweenManagerActor::BP_CreateTweenContainerStatic(int NumLoops, ETweenLoopType LoopType, float TimeScale, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerActor.BP_CreateTweenContainerStatic");

	ATweenManagerActor_BP_CreateTweenContainerStatic_Params params;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
}

// Function TweenMaker.TweenManagerComponent.UpdateNameMap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UBaseTween*              pTween                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pPreviousName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   pNewName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTweenManagerComponent::UpdateNameMap(class UBaseTween* pTween, const struct FName& pPreviousName, const struct FName& pNewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.UpdateNameMap");

	UTweenManagerComponent_UpdateNameMap_Params params;
	params.pTween = pTween;
	params.pPreviousName = pPreviousName;
	params.pNewName = pNewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenManagerComponent.TweenDestroyed
// (Final, Native, Private)
// Parameters:
// class UBaseTween*              pTween                         (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManagerComponent::TweenDestroyed(class UBaseTween* pTween)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.TweenDestroyed");

	UTweenManagerComponent_TweenDestroyed_Params params;
	params.pTween = pTween;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenManagerComponent.IsObjectTweening
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UBaseTween*              TweenFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTweenManagerComponent::IsObjectTweening(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.IsObjectTweening");

	UTweenManagerComponent_IsObjectTweening_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenFound != nullptr)
		*TweenFound = params.TweenFound;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerComponent.FindTweenByName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TweenName                      (Parm, ZeroConstructor, IsPlainOldData)
// ETweenGenericType              TweenType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBaseTween*              TweenFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTweenManagerComponent::FindTweenByName(const struct FName& TweenName, ETweenGenericType TweenType, class UBaseTween** TweenFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.FindTweenByName");

	UTweenManagerComponent_FindTweenByName_Params params;
	params.TweenName = TweenName;
	params.TweenType = TweenType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenFound != nullptr)
		*TweenFound = params.TweenFound;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerComponent.DeleteAllTweensByObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETweenGenericType              TweensType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTweenManagerComponent::DeleteAllTweensByObject(ETweenGenericType TweensType, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.DeleteAllTweensByObject");

	UTweenManagerComponent_DeleteAllTweensByObject_Params params;
	params.TweensType = TweensType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerComponent.DeleteAllTweens
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTweenManagerComponent::DeleteAllTweens()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.DeleteAllTweens");

	UTweenManagerComponent_DeleteAllTweens_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenManagerComponent.BP_CreateTweenContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)

void UTweenManagerComponent::BP_CreateTweenContainer(int NumLoops, ETweenLoopType LoopType, float TimeScale, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenManagerComponent.BP_CreateTweenContainer");

	UTweenManagerComponent_BP_CreateTweenContainer_Params params;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
}

// Function TweenMaker.TweenRotator.OnPrimitiveComponentHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHitResult                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenRotator::OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotator.OnPrimitiveComponentHit");

	UTweenRotator_OnPrimitiveComponentHit_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pNormalImpulse = pNormalImpulse;
	params.pHitResult = pHitResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenRotator.OnPrimitiveComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            pOtherBodyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              pSweepResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenRotator::OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotator.OnPrimitiveComponentBeginOverlap");

	UTweenRotator_OnPrimitiveComponentBeginOverlap_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pOtherBodyIndex = pOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.pSweepResult = pSweepResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenRotator.OnActorHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHit                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenRotator::OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotator.OnActorHit");

	UTweenRotator_OnActorHit_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;
	params.pNormalImpulse = pNormalImpulse;
	params.pHit = pHit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenRotator.OnActorBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UTweenRotator::OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotator.OnActorBeginOverlap");

	UTweenRotator_OnActorBeginOverlap_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenRotator.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UTweenRotator::GetCurrentValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotator.GetCurrentValue");

	UTweenRotator_GetCurrentValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentTo");

	UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentBy");

	UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorTo");

	UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorBy");

	UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentTo");

	UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentBy");

	UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorTo");

	UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorBy");

	UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentTo");

	UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentBy");

	UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorTo");

	UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenRotator*           OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotatorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotatorLatentFactory* UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorBy");

	UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_JoinTweenRotateSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentTo");

	UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_JoinTweenRotateSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentBy");

	UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_JoinTweenRotateActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorTo");

	UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_JoinTweenRotateActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorBy");

	UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenRotatorStandardFactory::BP_CreateTweenRotateSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentTo");

	UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenRotatorStandardFactory::BP_CreateTweenRotateSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentBy");

	UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenRotatorStandardFactory::BP_CreateTweenRotateActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorTo");

	UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenRotatorStandardFactory::BP_CreateTweenRotateActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorBy");

	UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_AppendTweenRotateSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentTo");

	UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_AppendTweenRotateSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentBy");

	UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_AppendTweenRotateActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorTo");

	UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenRotator*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenRotator* UTweenRotatorStandardFactory::BP_AppendTweenRotateActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorBy");

	UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector.OnPrimitiveComponentHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHitResult                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenVector::OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector.OnPrimitiveComponentHit");

	UTweenVector_OnPrimitiveComponentHit_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pNormalImpulse = pNormalImpulse;
	params.pHitResult = pHitResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenVector.OnPrimitiveComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     pThisComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     pOtherComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            pOtherBodyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              pSweepResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenVector::OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector.OnPrimitiveComponentBeginOverlap");

	UTweenVector_OnPrimitiveComponentBeginOverlap_Params params;
	params.pThisComponent = pThisComponent;
	params.pOtherActor = pOtherActor;
	params.pOtherComp = pOtherComp;
	params.pOtherBodyIndex = pOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.pSweepResult = pSweepResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenVector.OnActorHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pNormalImpulse                 (Parm, IsPlainOldData)
// struct FHitResult              pHit                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTweenVector::OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector.OnActorHit");

	UTweenVector_OnActorHit_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;
	params.pNormalImpulse = pNormalImpulse;
	params.pHit = pHit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenVector.OnActorBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  pThisActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector::OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector.OnActorBeginOverlap");

	UTweenVector_OnActorBeginOverlap_Params params;
	params.pThisActor = pThisActor;
	params.pOtherActor = pOtherActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TweenMaker.TweenVector.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTweenVector::GetCurrentValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector.GetCurrentValue");

	UTweenVector_GetCurrentValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2D.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UTweenVector2D::GetCurrentValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2D.GetCurrentValue");

	UTweenVector2D_GetCurrentValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenShearWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenShearWidgetTo");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenScaleWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetTo");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenScaleWidgetBy(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& bY, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetBy");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenMoveWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetTo");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenMoveWidgetBy(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& bY, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetBy");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_JoinLatentTweenCustomVector2D(const struct FVector2D& to, float Delay, ETweenEaseType EaseType, const struct FVector2D& from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenCustomVector2D");

	UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenShearWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenShearWidgetTo");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenScaleWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetTo");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenScaleWidgetBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetBy");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenMoveWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetTo");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenMoveWidgetBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetBy");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_CreateLatentTweenCustomVector2D(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& from, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenCustomVector2D");

	UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenShearWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenShearWidgetTo");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenScaleWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetTo");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenScaleWidgetBy(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetBy");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenMoveWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetTo");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenMoveWidgetBy(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetBy");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector2D*          OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2DLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2DLatentFactory* UTweenVector2DLatentFactory::BP_AppendLatentTweenCustomVector2D(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector2D& from, const struct FVector2D& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenCustomVector2D");

	UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenShearWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenShearWidgetTo");

	UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenScaleWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetTo");

	UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenScaleWidgetBy(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& bY, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetBy");

	UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenMoveWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetTo");

	UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenMoveWidgetBy(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& bY, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetBy");

	UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_JoinTweenCustomVector2D(float Duration, float TimeScale, const struct FVector2D& from, const struct FVector2D& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenCustomVector2D");

	UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenShearWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenShearWidgetTo");

	UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenScaleWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetTo");

	UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenScaleWidgetBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetBy");

	UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenMoveWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetTo");

	UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenMoveWidgetBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetBy");

	UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVector2DStandardFactory::BP_CreateTweenCustomVector2D(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& from, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenCustomVector2D");

	UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenShearWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenShearWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenShearWidgetTo");

	UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenScaleWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetTo");

	UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenScaleWidgetBy(int NumLoops, float TimeScale, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetBy");

	UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenMoveWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetTo");

	UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector2D               bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenMoveWidgetBy(int NumLoops, float TimeScale, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetBy");

	UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenCustomVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               from                           (Parm, IsPlainOldData)
// struct FVector2D               to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector2D*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector2D* UTweenVector2DStandardFactory::BP_AppendTweenCustomVector2D(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& from, const struct FVector2D& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenCustomVector2D");

	UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenScaleSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentTo");

	UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenScaleSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentBy");

	UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenScaleActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorTo");

	UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenScaleActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorBy");

	UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenMoveSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentTo");

	UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenMoveSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentBy");

	UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenMoveActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorTo");

	UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenMoveActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorBy");

	UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_JoinLatentTweenCustomVector(const struct FVector& to, float Delay, ETweenEaseType EaseType, const struct FVector& from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenCustomVector");

	UTweenVectorLatentFactory_BP_JoinLatentTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenScaleSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentTo");

	UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenScaleSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentBy");

	UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenScaleActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorTo");

	UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenScaleActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorBy");

	UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenMoveSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentTo");

	UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenMoveSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentBy");

	UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenMoveActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorTo");

	UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenMoveActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorBy");

	UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         OutTweenContainer              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_CreateLatentTweenCustomVector(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& from, const struct FVector& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenCustomVector");

	UTweenVectorLatentFactory_BP_CreateLatentTweenCustomVector_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (OutTweenContainer != nullptr)
		*OutTweenContainer = params.OutTweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenScaleSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentTo");

	UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenScaleSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentBy");

	UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenScaleActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorTo");

	UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenScaleActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorBy");

	UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenMoveSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentTo");

	UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenMoveSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentBy");

	UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenMoveActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorTo");

	UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenMoveActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorBy");

	UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenVector*            OutTween                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVectorLatentFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVectorLatentFactory* UTweenVectorLatentFactory::BP_AppendLatentTweenCustomVector(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& from, const struct FVector& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenCustomVector");

	UTweenVectorLatentFactory_BP_AppendLatentTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (OutTween != nullptr)
		*OutTween = params.OutTween;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenScaleSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentTo");

	UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenScaleSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentBy");

	UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenScaleActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorTo");

	UTweenVectorStandardFactory_BP_JoinTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenScaleActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorBy");

	UTweenVectorStandardFactory_BP_JoinTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenMoveSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentTo");

	UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenMoveSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentBy");

	UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenMoveActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorTo");

	UTweenVectorStandardFactory_BP_JoinTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenMoveActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorBy");

	UTweenVectorStandardFactory_BP_JoinTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_JoinTweenCustomVector(float Duration, float TimeScale, const struct FVector& from, const struct FVector& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenCustomVector");

	UTweenVectorStandardFactory_BP_JoinTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenScaleSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentTo");

	UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenScaleSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentBy");

	UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenScaleActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorTo");

	UTweenVectorStandardFactory_BP_CreateTweenScaleActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenScaleActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorBy");

	UTweenVectorStandardFactory_BP_CreateTweenScaleActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenMoveSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentTo");

	UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenMoveSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentBy");

	UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenMoveActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorTo");

	UTweenVectorStandardFactory_BP_CreateTweenMoveActorTo_Params params;
	params.TweenManager = TweenManager;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenMoveActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorBy");

	UTweenVectorStandardFactory_BP_CreateTweenMoveActorBy_Params params;
	params.TweenManager = TweenManager;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenManagerComponent*  TweenManager                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            Tween                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UTweenVectorStandardFactory::BP_CreateTweenCustomVector(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& from, const struct FVector& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenCustomVector");

	UTweenVectorStandardFactory_BP_CreateTweenCustomVector_Params params;
	params.TweenManager = TweenManager;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;
	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (Tween != nullptr)
		*Tween = params.Tween;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenScaleSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentTo");

	UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenScaleSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentBy");

	UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenScaleActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorTo");

	UTweenVectorStandardFactory_BP_AppendTweenScaleActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenScaleActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorBy");

	UTweenVectorStandardFactory_BP_AppendTweenScaleActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenMoveSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentTo");

	UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         TweenTarget                    (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenMoveSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentBy");

	UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenMoveActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorTo");

	UTweenVectorStandardFactory_BP_AppendTweenMoveActorTo_Params params;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 bY                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnHit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeleteTweenOnOverlap           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenMoveActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorBy");

	UTweenVectorStandardFactory_BP_AppendTweenMoveActorBy_Params params;
	params.bY = bY;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.DeleteTweenOnHit = DeleteTweenOnHit;
	params.DeleteTweenOnOverlap = DeleteTweenOnOverlap;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenCustomVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTweenContainer*         TweenContainer                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 TweenTarget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 from                           (Parm, IsPlainOldData)
// struct FVector                 to                             (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenEaseType                 EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)
// ETweenLoopType                 LoopType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTweenVector*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTweenVector* UTweenVectorStandardFactory::BP_AppendTweenCustomVector(ETweenEaseType EaseType, float TimeScale, const struct FVector& from, const struct FVector& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenCustomVector");

	UTweenVectorStandardFactory_BP_AppendTweenCustomVector_Params params;
	params.from = from;
	params.to = to;
	params.Duration = Duration;
	params.EaseType = EaseType;
	params.NumLoops = NumLoops;
	params.LoopType = LoopType;
	params.Delay = Delay;
	params.TimeScale = TimeScale;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TweenContainer != nullptr)
		*TweenContainer = params.TweenContainer;
	if (TweenTarget != nullptr)
		*TweenTarget = params.TweenTarget;

	return params.ReturnValue;
}

}

