#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TweenMaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TweenMaker.BaseTween
// 0x0064 (0x0080 - 0x001C)
class UBaseTween : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x001C(0x0030) MISSED OFFSET
	class UTweenContainer*                             mOwningTweenContainer;                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.BaseTween");
		return pStaticClass;
	}


	void TogglePauseTween(bool SkipTween);
	void SetTweenName(const struct FName& TweenName);
	void SetTimeScale(float NewTimeScale);
	void SetDelay(float NewDelay);
	void ResumeTween();
	void PauseTween(bool SkipTween);
	class UTweenFloat* JoinTweenWidgetOpacityTo(float to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenFloat* JoinTweenWidgetAngleTo(float to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenVector2D* JoinTweenShearWidgetTo(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenFloat* JoinTweenSceneComponentFollowSpline(bool UseConstantSpeed, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector2D* JoinTweenScaleWidgetTo(const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenVector2D* JoinTweenScaleWidgetBy(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenVector* JoinTweenScaleSceneComponentTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* JoinTweenScaleSceneComponentBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* JoinTweenScaleActorTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenVector* JoinTweenScaleActorBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenRotator* JoinTweenRotateSceneComponentTo(bool DeleteTweenOnHit, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenRotator* JoinTweenRotateSceneComponentBy(bool DeleteTweenOnHit, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenFloat* JoinTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenFloat* JoinTweenRotateSceneComponentAroundPoint(float Duration, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenRotator* JoinTweenRotateActorTo(bool DeleteTweenOnHit, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenRotator* JoinTweenRotateActorBy(bool DeleteTweenOnHit, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenFloat* JoinTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenFloat* JoinTweenRotateActorAroundPoint(float Duration, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenVector2D* JoinTweenMoveWidgetTo(const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenVector2D* JoinTweenMoveWidgetBy(const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float Delay, float TimeScale, class UWidget** TweenTarget);
	class UTweenVector* JoinTweenMoveSceneComponentTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* JoinTweenMoveSceneComponentBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* JoinTweenMoveActorTo(bool DeleteTweenOnHit, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenVector* JoinTweenMoveActorBy(bool DeleteTweenOnHit, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	class UTweenLinearColor* JoinTweenMaterialVectorTo(float Duration, const struct FName& ParameterName, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenLinearColor* JoinTweenMaterialVectorFromTo(float Duration, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenFloat* JoinTweenMaterialFloatTo(float Duration, const struct FName& ParameterName, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenFloat* JoinTweenMaterialFloatFromTo(float Duration, const struct FName& ParameterName, float from, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenVector2D* JoinTweenCustomVector2D(float Duration, const struct FVector2D& from, const struct FVector2D& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget);
	class UTweenVector* JoinTweenCustomVector(float Duration, const struct FVector& from, const struct FVector& to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget);
	class UTweenFloat* JoinTweenCustomFloat(float Duration, float from, float to, float TimeScale, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget);
	class UTweenFloat* JoinTweenActorFollowSpline(bool UseConstantSpeed, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget);
	bool IsTweenPaused();
	bool IsTweening();
	class UObject* GetTweenTarget();
	struct FName GetTweenName();
	float GetTweenElapsedTime();
	float GetTweenDuration();
	class UTweenContainer* GetTweenContainer();
	float GetTimeScale();
	void DeleteTween();
	class UTweenFloat* AppendTweenWidgetOpacityTo(int mNumLoops, float to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenFloat* AppendTweenWidgetAngleTo(int mNumLoops, float to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenVector2D* AppendTweenShearWidgetTo(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenFloat* AppendTweenSceneComponentFollowSpline(ETweenEaseType EaseType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector2D* AppendTweenScaleWidgetTo(int mNumLoops, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenVector2D* AppendTweenScaleWidgetBy(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenVector* AppendTweenScaleSceneComponentTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* AppendTweenScaleSceneComponentBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* AppendTweenScaleActorTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenVector* AppendTweenScaleActorBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenRotator* AppendTweenRotateSceneComponentTo(bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenRotator* AppendTweenRotateSceneComponentBy(bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenFloat* AppendTweenRotateSceneComponentAroundPointByOffset(bool DeleteTweenOnHit, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenFloat* AppendTweenRotateSceneComponentAroundPoint(ETweenEaseType EaseType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenRotator* AppendTweenRotateActorTo(bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenRotator* AppendTweenRotateActorBy(bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenFloat* AppendTweenRotateActorAroundPointByOffset(bool DeleteTweenOnHit, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenFloat* AppendTweenRotateActorAroundPoint(ETweenEaseType EaseType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenVector2D* AppendTweenMoveWidgetTo(int mNumLoops, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenVector2D* AppendTweenMoveWidgetBy(int mNumLoops, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, float TimeScale, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget);
	class UTweenVector* AppendTweenMoveSceneComponentTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* AppendTweenMoveSceneComponentBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class USceneComponent** TweenTarget);
	class UTweenVector* AppendTweenMoveActorTo(bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenVector* AppendTweenMoveActorBy(bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, float TimeScale, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
	class UTweenLinearColor* AppendTweenMaterialVectorTo(ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenLinearColor* AppendTweenMaterialVectorFromTo(ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenFloat* AppendTweenMaterialFloatTo(ETweenEaseType EaseType, const struct FName& ParameterName, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenFloat* AppendTweenMaterialFloatFromTo(ETweenEaseType EaseType, const struct FName& ParameterName, float from, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget);
	class UTweenVector2D* AppendTweenCustomVector2D(ETweenEaseType EaseType, const struct FVector2D& from, const struct FVector2D& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget);
	class UTweenVector* AppendTweenCustomVector(ETweenEaseType EaseType, const struct FVector& from, const struct FVector& to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget);
	class UTweenFloat* AppendTweenCustomFloat(ETweenEaseType EaseType, float from, float to, float Duration, float TimeScale, int mNumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget);
	class UTweenFloat* AppendTweenActorFollowSpline(ETweenEaseType EaseType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType mLoopType, float Delay, class AActor** TweenTarget);
};


// Class TweenMaker.TweenContainer
// 0x0034 (0x0050 - 0x001C)
class UTweenContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FParallelTween>                      mSequences;                                               // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x24];                                      // 0x002C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenContainer");
		return pStaticClass;
	}


	void TogglePauseTweenContainer();
	void SetTimeScale(float NewTimeScale);
	void SetLoop(int NumLoops, ETweenLoopType LoopType);
	void ResumeTweenContainer();
	void PauseTweenContainer();
	bool IsPaused();
	bool IsObjectTweeningInContainer(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound);
	void DeleteTweensInContainerByObject(ETweenGenericType TweensType, class UObject** TweenTarget);
	void DeleteTweenContainer();
};


// Class TweenMaker.TweenFloat
// 0x00E8 (0x0168 - 0x0080)
class UTweenFloat : public UBaseTween
{
public:
	struct FScriptMulticastDelegate                    OnTweenStart;                                             // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorHit;                                          // 0x00A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorBeginOverlap;                                 // 0x00B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentHit;                             // 0x00BC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentBeginOverlap;                    // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x94];                                      // 0x00D4(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenFloat");
		return pStaticClass;
	}


	void OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult);
	void OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult);
	void OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit);
	void OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor);
	float GetCurrentValue();
};


// Class TweenMaker.TweenFloatLatentFactory
// 0x0020 (0x0040 - 0x0020)
class UTweenFloatLatentFactory : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenFloatLatentFactory");
		return pStaticClass;
	}


	static class UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetOpacityTo(float Duration, float Delay, ETweenEaseType EaseType, float to, float TimeScale, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetAngleTo(float Duration, float Delay, ETweenEaseType EaseType, float to, float TimeScale, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenSceneComponentFollowSpline(bool ApplyScale, float Delay, bool DeleteTweenOnOverlap, class USplineComponent* Spline, float Duration, bool ApplyRotation, float TimeScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(float Duration, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPoint(const struct FVector& Axis, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, float TimeScale, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPointByOffset(float Duration, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPoint(const struct FVector& Axis, float Delay, bool DeleteTweenOnOverlap, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, float TimeScale, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatTo(float to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatFromTo(float to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float from, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenCustomFloat(float to, float Delay, ETweenEaseType EaseType, float from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_JoinLatentTweenActorFollowSpline(bool ApplyScale, float Delay, bool DeleteTweenOnOverlap, class USplineComponent* Spline, float Duration, bool ApplyRotation, float TimeScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetOpacityTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetAngleTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenSceneComponentFollowSpline(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPoint(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPointByOffset(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPoint(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatFromTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenCustomFloat(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget);
	static class UTweenFloatLatentFactory* BP_CreateLatentTweenActorFollowSpline(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenFloat** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetOpacityTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, float to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetAngleTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, float to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenSceneComponentFollowSpline(bool UseConstantSpeed, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPoint(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, float TimeScale, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPoint(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatFromTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, float from, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenCustomFloat(float Duration, float Delay, ETweenLoopType LoopType, float from, float to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenFloatLatentFactory* BP_AppendLatentTweenActorFollowSpline(bool UseConstantSpeed, float Delay, ETweenLoopType LoopType, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, float TimeScale, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenFloat** OutTween, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenFloatStandardFactory
// 0x0004 (0x0020 - 0x001C)
class UTweenFloatStandardFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenFloatStandardFactory");
		return pStaticClass;
	}


	static class UTweenFloat* BP_JoinTweenWidgetOpacityTo(ETweenEaseType EaseType, float TimeScale, float to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenWidgetAngleTo(ETweenEaseType EaseType, float TimeScale, float to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenSceneComponentFollowSpline(bool UseConstantSpeed, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPointByOffset(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPoint(float Duration, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenRotateActorAroundPointByOffset(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenRotateActorAroundPoint(float Duration, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenMaterialFloatTo(float Duration, float TimeScale, const struct FName& ParameterName, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenMaterialFloatFromTo(float Duration, float TimeScale, const struct FName& ParameterName, float from, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenCustomFloat(float Duration, float TimeScale, float from, float to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_JoinTweenActorFollowSpline(bool UseConstantSpeed, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, int SequenceIndex, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static void BP_CreateTweenWidgetOpacityTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenWidgetAngleTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenSceneComponentFollowSpline(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenRotateSceneComponentAroundPointByOffset(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenRotateSceneComponentAroundPoint(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenRotateActorAroundPointByOffset(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenRotateActorAroundPoint(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenMaterialFloatTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static void BP_CreateTweenMaterialFloatFromTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static void BP_CreateTweenCustomFloat(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, float from, float to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget);
	static void BP_CreateTweenActorFollowSpline(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenFloat** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static class UTweenFloat* BP_AppendTweenWidgetOpacityTo(int NumLoops, float TimeScale, float to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenWidgetAngleTo(int NumLoops, float TimeScale, float to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenSceneComponentFollowSpline(ETweenEaseType EaseType, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPointByOffset(bool DeleteTweenOnHit, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPoint(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenRotateActorAroundPointByOffset(bool DeleteTweenOnHit, float TimeScale, const struct FVector& PivotPoint, float OffsetAngle, ETweenReferenceAxis ReferenceAxis, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenRotateActorAroundPoint(ETweenEaseType EaseType, float TimeScale, const struct FVector& PivotPoint, float StartingAngle, float EndingAngle, float Radius, const struct FVector& Axis, float Duration, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenMaterialFloatTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenMaterialFloatFromTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, float from, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenCustomFloat(ETweenEaseType EaseType, float TimeScale, float from, float to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenFloat* BP_AppendTweenActorFollowSpline(ETweenEaseType EaseType, float TimeScale, class USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, int SequenceIndex, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenLinearColor
// 0x00A8 (0x0128 - 0x0080)
class UTweenLinearColor : public UBaseTween
{
public:
	struct FScriptMulticastDelegate                    OnTweenStart;                                             // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x84];                                      // 0x00A4(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenLinearColor");
		return pStaticClass;
	}


	struct FLinearColor GetCurrentValue();
};


// Class TweenMaker.TweenLinearColorLatentFactory
// 0x0020 (0x0040 - 0x0020)
class UTweenLinearColorLatentFactory : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenLinearColorLatentFactory");
		return pStaticClass;
	}


	static class UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorTo(const struct FLinearColor& to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorFromTo(const struct FLinearColor& to, float Delay, ETweenEaseType EaseType, const struct FName& ParameterName, const struct FLinearColor& from, float TimeScale, float Duration, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenLinearColor** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static class UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorFromTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenLinearColor** OutTween, class UTweenContainer** OutTweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static class UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorFromTo(float Duration, float Delay, ETweenLoopType LoopType, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UMaterialInstanceDynamic** TweenTarget, class UTweenLinearColor** OutTween, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenLinearColorStandardFactory
// 0x0004 (0x0020 - 0x001C)
class UTweenLinearColorStandardFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenLinearColorStandardFactory");
		return pStaticClass;
	}


	static class UTweenLinearColor* BP_JoinTweenMaterialVectorTo(float Duration, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenLinearColor* BP_JoinTweenMaterialVectorFromTo(float Duration, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static void BP_CreateTweenMaterialVectorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenLinearColor** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static void BP_CreateTweenMaterialVectorFromTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenLinearColor** Tween, class UTweenContainer** TweenContainer, class UMaterialInstanceDynamic** TweenTarget);
	static class UTweenLinearColor* BP_AppendTweenMaterialVectorTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenLinearColor* BP_AppendTweenMaterialVectorFromTo(ETweenEaseType EaseType, float TimeScale, const struct FName& ParameterName, const struct FLinearColor& from, const struct FLinearColor& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UMaterialInstanceDynamic** TweenTarget, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenManagerActor
// 0x0000 (0x02E0 - 0x02E0)
class ATweenManagerActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenManagerActor");
		return pStaticClass;
	}


	static bool IsObjectTweening(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound);
	static bool FindTweenByName(const struct FName& TweenName, ETweenGenericType TweenType, class UBaseTween** TweenFound);
	static bool DeleteAllTweensByObject(ETweenGenericType TweensType, class UObject** TweenTarget);
	static int DeleteAllTweens();
	static void BP_CreateTweenContainerStatic(int NumLoops, ETweenLoopType LoopType, float TimeScale, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenManagerComponent
// 0x0088 (0x0150 - 0x00C8)
class UTweenManagerComponent : public UActorComponent
{
public:
	TArray<class UTweenContainer*>                     mTweenContainers;                                         // 0x00C8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x00D4(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenManagerComponent");
		return pStaticClass;
	}


	void UpdateNameMap(class UBaseTween* pTween, const struct FName& pPreviousName, const struct FName& pNewName);
	void TweenDestroyed(class UBaseTween* pTween);
	bool IsObjectTweening(ETweenGenericType TweensType, class UObject** TweenTarget, class UBaseTween** TweenFound);
	bool FindTweenByName(const struct FName& TweenName, ETweenGenericType TweenType, class UBaseTween** TweenFound);
	bool DeleteAllTweensByObject(ETweenGenericType TweensType, class UObject** TweenTarget);
	int DeleteAllTweens();
	void BP_CreateTweenContainer(int NumLoops, ETweenLoopType LoopType, float TimeScale, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenRotator
// 0x0110 (0x0190 - 0x0080)
class UTweenRotator : public UBaseTween
{
public:
	struct FScriptMulticastDelegate                    OnTweenStart;                                             // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorHit;                                          // 0x00A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorBeginOverlap;                                 // 0x00B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentHit;                             // 0x00BC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentBeginOverlap;                    // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x00D4(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenRotator");
		return pStaticClass;
	}


	void OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult);
	void OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult);
	void OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit);
	void OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor);
	struct FRotator GetCurrentValue();
};


// Class TweenMaker.TweenRotatorLatentFactory
// 0x0020 (0x0040 - 0x0020)
class UTweenRotatorLatentFactory : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenRotatorLatentFactory");
		return pStaticClass;
	}


	static class UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FRotator& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenRotator** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenRotator** OutTween, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenRotatorStandardFactory
// 0x0004 (0x0020 - 0x001C)
class UTweenRotatorStandardFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenRotatorStandardFactory");
		return pStaticClass;
	}


	static class UTweenRotator* BP_JoinTweenRotateSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_JoinTweenRotateSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_JoinTweenRotateActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_JoinTweenRotateActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static void BP_CreateTweenRotateSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenRotateSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenRotateActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenRotateActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenRotator** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static class UTweenRotator* BP_AppendTweenRotateSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_AppendTweenRotateSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_AppendTweenRotateActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenRotator* BP_AppendTweenRotateActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FRotator& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenVector
// 0x00C8 (0x0148 - 0x0080)
class UTweenVector : public UBaseTween
{
public:
	struct FScriptMulticastDelegate                    OnTweenStart;                                             // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorHit;                                          // 0x00A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenActorBeginOverlap;                                 // 0x00B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentHit;                             // 0x00BC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenPrimitiveComponentBeginOverlap;                    // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x74];                                      // 0x00D4(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVector");
		return pStaticClass;
	}


	void OnPrimitiveComponentHit(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& pNormalImpulse, const struct FHitResult& pHitResult);
	void OnPrimitiveComponentBeginOverlap(class UPrimitiveComponent* pThisComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int pOtherBodyIndex, bool bFromSweep, const struct FHitResult& pSweepResult);
	void OnActorHit(class AActor* pThisActor, class AActor* pOtherActor, const struct FVector& pNormalImpulse, const struct FHitResult& pHit);
	void OnActorBeginOverlap(class AActor* pThisActor, class AActor* pOtherActor);
	struct FVector GetCurrentValue();
};


// Class TweenMaker.TweenVector2D
// 0x0068 (0x00E8 - 0x0080)
class UTweenVector2D : public UBaseTween
{
public:
	struct FScriptMulticastDelegate                    OnTweenStart;                                             // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x44];                                      // 0x00A4(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVector2D");
		return pStaticClass;
	}


	struct FVector2D GetCurrentValue();
};


// Class TweenMaker.TweenVector2DLatentFactory
// 0x0020 (0x0040 - 0x0020)
class UTweenVector2DLatentFactory : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVector2DLatentFactory");
		return pStaticClass;
	}


	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenShearWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetBy(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& bY, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetTo(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& to, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetBy(float Duration, float Delay, ETweenEaseType EaseType, const struct FVector2D& bY, float TimeScale, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_JoinLatentTweenCustomVector2D(const struct FVector2D& to, float Delay, ETweenEaseType EaseType, const struct FVector2D& from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenShearWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UWidget** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_CreateLatentTweenCustomVector2D(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector2D& from, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector2D** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenShearWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetBy(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetTo(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& to, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetBy(ETweenEaseType EaseType, float Delay, ETweenLoopType LoopType, const struct FVector2D& bY, float Duration, float TimeScale, int NumLoops, class UWidget** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVector2DLatentFactory* BP_AppendLatentTweenCustomVector2D(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector2D& from, const struct FVector2D& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenVector2D** OutTween, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenVector2DStandardFactory
// 0x0004 (0x0020 - 0x001C)
class UTweenVector2DStandardFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVector2DStandardFactory");
		return pStaticClass;
	}


	static class UTweenVector2D* BP_JoinTweenShearWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_JoinTweenScaleWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_JoinTweenScaleWidgetBy(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& bY, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_JoinTweenMoveWidgetTo(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& to, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_JoinTweenMoveWidgetBy(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& bY, float Duration, int SequenceIndex, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_JoinTweenCustomVector2D(float Duration, float TimeScale, const struct FVector2D& from, const struct FVector2D& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
	static void BP_CreateTweenShearWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenScaleWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenScaleWidgetBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenMoveWidgetTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenMoveWidgetBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UWidget** TweenTarget);
	static void BP_CreateTweenCustomVector2D(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector2D& from, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector2D** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget);
	static class UTweenVector2D* BP_AppendTweenShearWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_AppendTweenScaleWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_AppendTweenScaleWidgetBy(int NumLoops, float TimeScale, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_AppendTweenMoveWidgetTo(int NumLoops, float TimeScale, const struct FVector2D& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_AppendTweenMoveWidgetBy(int NumLoops, float TimeScale, const struct FVector2D& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, ETweenLoopType LoopType, float Delay, class UWidget** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector2D* BP_AppendTweenCustomVector2D(ETweenEaseType EaseType, float TimeScale, const struct FVector2D& from, const struct FVector2D& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenVectorLatentFactory
// 0x0020 (0x0040 - 0x0020)
class UTweenVectorLatentFactory : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTweenUpdate;                                            // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTweenEnd;                                               // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVectorLatentFactory");
		return pStaticClass;
	}


	static class UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorTo(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& to, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorBy(ETweenEaseType EaseType, float Delay, bool DeleteTweenOnOverlap, const struct FVector& bY, float Duration, float TimeScale, bool DeleteTweenOnHit, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_JoinLatentTweenCustomVector(const struct FVector& to, float Delay, ETweenEaseType EaseType, const struct FVector& from, float TimeScale, float Duration, class UObject** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class USceneComponent** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorTo(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorBy(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class AActor** TweenTarget);
	static class UTweenVectorLatentFactory* BP_CreateLatentTweenCustomVector(class UTweenManagerComponent* TweenManager, float TimeScale, float Delay, ETweenLoopType LoopType, const struct FVector& from, const struct FVector& to, float Duration, ETweenEaseType EaseType, int NumLoops, class UTweenVector** OutTween, class UTweenContainer** OutTweenContainer, class UObject** TweenTarget);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class USceneComponent** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorTo(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& to, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorBy(bool DeleteTweenOnHit, float Delay, ETweenLoopType LoopType, const struct FVector& bY, float Duration, ETweenEaseType EaseType, float TimeScale, bool DeleteTweenOnOverlap, int NumLoops, class AActor** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
	static class UTweenVectorLatentFactory* BP_AppendLatentTweenCustomVector(float Duration, float Delay, ETweenLoopType LoopType, const struct FVector& from, const struct FVector& to, float TimeScale, ETweenEaseType EaseType, int NumLoops, class UObject** TweenTarget, class UTweenVector** OutTween, class UTweenContainer** TweenContainer);
};


// Class TweenMaker.TweenVectorStandardFactory
// 0x0004 (0x0020 - 0x001C)
class UTweenVectorStandardFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TweenMaker.TweenVectorStandardFactory");
		return pStaticClass;
	}


	static class UTweenVector* BP_JoinTweenScaleSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenScaleSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenScaleActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenScaleActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenMoveSceneComponentTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenMoveSceneComponentBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenMoveActorTo(bool DeleteTweenOnHit, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenMoveActorBy(bool DeleteTweenOnHit, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, int SequenceIndex, bool DeleteTweenOnOverlap, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_JoinTweenCustomVector(float Duration, float TimeScale, const struct FVector& from, const struct FVector& to, int SequenceIndex, ETweenEaseType EaseType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
	static void BP_CreateTweenScaleSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenScaleSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenScaleActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenScaleActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenMoveSceneComponentTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenMoveSceneComponentBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class USceneComponent** TweenTarget);
	static void BP_CreateTweenMoveActorTo(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenMoveActorBy(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class AActor** TweenTarget);
	static void BP_CreateTweenCustomVector(class UTweenManagerComponent* TweenManager, int SequenceIndex, float TimeScale, float Delay, const struct FVector& from, const struct FVector& to, float Duration, ETweenEaseType EaseType, int NumLoops, ETweenLoopType LoopType, class UTweenVector** Tween, class UTweenContainer** TweenContainer, class UObject** TweenTarget);
	static class UTweenVector* BP_AppendTweenScaleSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenScaleSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenScaleActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenScaleActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenMoveSceneComponentTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenMoveSceneComponentBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class USceneComponent** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenMoveActorTo(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& to, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenMoveActorBy(bool DeleteTweenOnOverlap, float TimeScale, const struct FVector& bY, float Duration, ETweenEaseType EaseType, bool DeleteTweenOnHit, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class AActor** TweenTarget, class UTweenContainer** TweenContainer);
	static class UTweenVector* BP_AppendTweenCustomVector(ETweenEaseType EaseType, float TimeScale, const struct FVector& from, const struct FVector& to, float Duration, int SequenceIndex, int NumLoops, ETweenLoopType LoopType, float Delay, class UObject** TweenTarget, class UTweenContainer** TweenContainer);
};


}

