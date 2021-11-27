#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TweenMaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TweenMaker.BaseTween.TogglePauseTween
struct UBaseTween_TogglePauseTween_Params
{
	bool                                               SkipTween;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.BaseTween.SetTweenName
struct UBaseTween_SetTweenName_Params
{
	struct FName                                       TweenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.BaseTween.SetTimeScale
struct UBaseTween_SetTimeScale_Params
{
	float                                              NewTimeScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.BaseTween.SetDelay
struct UBaseTween_SetDelay_Params
{
	float                                              NewDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.BaseTween.ResumeTween
struct UBaseTween_ResumeTween_Params
{
};

// Function TweenMaker.BaseTween.PauseTween
struct UBaseTween_PauseTween_Params
{
	bool                                               SkipTween;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenWidgetOpacityTo
struct UBaseTween_JoinTweenWidgetOpacityTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenWidgetAngleTo
struct UBaseTween_JoinTweenWidgetAngleTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenShearWidgetTo
struct UBaseTween_JoinTweenShearWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenSceneComponentFollowSpline
struct UBaseTween_JoinTweenSceneComponentFollowSpline_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleWidgetTo
struct UBaseTween_JoinTweenScaleWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleWidgetBy
struct UBaseTween_JoinTweenScaleWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentTo
struct UBaseTween_JoinTweenScaleSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentBy
struct UBaseTween_JoinTweenScaleSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleActorTo
struct UBaseTween_JoinTweenScaleActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenScaleActorBy
struct UBaseTween_JoinTweenScaleActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentTo
struct UBaseTween_JoinTweenRotateSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentBy
struct UBaseTween_JoinTweenRotateSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPointByOffset
struct UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPoint
struct UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateActorTo
struct UBaseTween_JoinTweenRotateActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateActorBy
struct UBaseTween_JoinTweenRotateActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPointByOffset
struct UBaseTween_JoinTweenRotateActorAroundPointByOffset_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPoint
struct UBaseTween_JoinTweenRotateActorAroundPoint_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveWidgetTo
struct UBaseTween_JoinTweenMoveWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveWidgetBy
struct UBaseTween_JoinTweenMoveWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentTo
struct UBaseTween_JoinTweenMoveSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentBy
struct UBaseTween_JoinTweenMoveSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveActorTo
struct UBaseTween_JoinTweenMoveActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMoveActorBy
struct UBaseTween_JoinTweenMoveActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMaterialVectorTo
struct UBaseTween_JoinTweenMaterialVectorTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMaterialVectorFromTo
struct UBaseTween_JoinTweenMaterialVectorFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMaterialFloatTo
struct UBaseTween_JoinTweenMaterialFloatTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenMaterialFloatFromTo
struct UBaseTween_JoinTweenMaterialFloatFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenCustomVector2D
struct UBaseTween_JoinTweenCustomVector2D_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenCustomVector
struct UBaseTween_JoinTweenCustomVector_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenCustomFloat
struct UBaseTween_JoinTweenCustomFloat_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.JoinTweenActorFollowSpline
struct UBaseTween_JoinTweenActorFollowSpline_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.IsTweenPaused
struct UBaseTween_IsTweenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.IsTweening
struct UBaseTween_IsTweening_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTweenTarget
struct UBaseTween_GetTweenTarget_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTweenName
struct UBaseTween_GetTweenName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTweenElapsedTime
struct UBaseTween_GetTweenElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTweenDuration
struct UBaseTween_GetTweenDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTweenContainer
struct UBaseTween_GetTweenContainer_Params
{
	class UTweenContainer*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.GetTimeScale
struct UBaseTween_GetTimeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.DeleteTween
struct UBaseTween_DeleteTween_Params
{
};

// Function TweenMaker.BaseTween.AppendTweenWidgetOpacityTo
struct UBaseTween_AppendTweenWidgetOpacityTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenWidgetAngleTo
struct UBaseTween_AppendTweenWidgetAngleTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenShearWidgetTo
struct UBaseTween_AppendTweenShearWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenSceneComponentFollowSpline
struct UBaseTween_AppendTweenSceneComponentFollowSpline_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleWidgetTo
struct UBaseTween_AppendTweenScaleWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleWidgetBy
struct UBaseTween_AppendTweenScaleWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentTo
struct UBaseTween_AppendTweenScaleSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentBy
struct UBaseTween_AppendTweenScaleSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleActorTo
struct UBaseTween_AppendTweenScaleActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenScaleActorBy
struct UBaseTween_AppendTweenScaleActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentTo
struct UBaseTween_AppendTweenRotateSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentBy
struct UBaseTween_AppendTweenRotateSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPointByOffset
struct UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPoint
struct UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateActorTo
struct UBaseTween_AppendTweenRotateActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateActorBy
struct UBaseTween_AppendTweenRotateActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPointByOffset
struct UBaseTween_AppendTweenRotateActorAroundPointByOffset_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPoint
struct UBaseTween_AppendTweenRotateActorAroundPoint_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveWidgetTo
struct UBaseTween_AppendTweenMoveWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveWidgetBy
struct UBaseTween_AppendTweenMoveWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentTo
struct UBaseTween_AppendTweenMoveSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentBy
struct UBaseTween_AppendTweenMoveSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveActorTo
struct UBaseTween_AppendTweenMoveActorTo_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMoveActorBy
struct UBaseTween_AppendTweenMoveActorBy_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMaterialVectorTo
struct UBaseTween_AppendTweenMaterialVectorTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMaterialVectorFromTo
struct UBaseTween_AppendTweenMaterialVectorFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMaterialFloatTo
struct UBaseTween_AppendTweenMaterialFloatTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenMaterialFloatFromTo
struct UBaseTween_AppendTweenMaterialFloatFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenCustomVector2D
struct UBaseTween_AppendTweenCustomVector2D_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenCustomVector
struct UBaseTween_AppendTweenCustomVector_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenCustomFloat
struct UBaseTween_AppendTweenCustomFloat_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                mNumLoops;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.BaseTween.AppendTweenActorFollowSpline
struct UBaseTween_AppendTweenActorFollowSpline_Params
{
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     mLoopType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.TogglePauseTweenContainer
struct UTweenContainer_TogglePauseTweenContainer_Params
{
};

// Function TweenMaker.TweenContainer.SetTimeScale
struct UTweenContainer_SetTimeScale_Params
{
	float                                              NewTimeScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.SetLoop
struct UTweenContainer_SetLoop_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.ResumeTweenContainer
struct UTweenContainer_ResumeTweenContainer_Params
{
};

// Function TweenMaker.TweenContainer.PauseTweenContainer
struct UTweenContainer_PauseTweenContainer_Params
{
};

// Function TweenMaker.TweenContainer.IsPaused
struct UTweenContainer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.IsObjectTweeningInContainer
struct UTweenContainer_IsObjectTweeningInContainer_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBaseTween*                                  TweenFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.DeleteTweensInContainerByObject
struct UTweenContainer_DeleteTweensInContainerByObject_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenContainer.DeleteTweenContainer
struct UTweenContainer_DeleteTweenContainer_Params
{
};

// Function TweenMaker.TweenFloat.OnPrimitiveComponentHit
struct UTweenFloat_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHitResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloat.OnPrimitiveComponentBeginOverlap
struct UTweenFloat_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                pOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  pSweepResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloat.OnActorHit
struct UTweenFloat_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHit;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloat.OnActorBeginOverlap
struct UTweenFloat_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloat.GetCurrentValue
struct UTweenFloat_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetOpacityTo
struct UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetAngleTo
struct UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenSceneComponentFollowSpline
struct UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPoint
struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPointByOffset
struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPoint
struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatTo
struct UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatFromTo
struct UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenCustomFloat
struct UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenActorFollowSpline
struct UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetOpacityTo
struct UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetAngleTo
struct UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenSceneComponentFollowSpline
struct UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPoint
struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPointByOffset
struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPoint
struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatTo
struct UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatFromTo
struct UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenCustomFloat
struct UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenActorFollowSpline
struct UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetOpacityTo
struct UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetAngleTo
struct UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenSceneComponentFollowSpline
struct UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPoint
struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPointByOffset
struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPoint
struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatTo
struct UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatFromTo
struct UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenCustomFloat
struct UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenActorFollowSpline
struct UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenFloat*                                 OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloatLatentFactory*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetOpacityTo
struct UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetAngleTo
struct UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenSceneComponentFollowSpline
struct UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPoint
struct UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPointByOffset
struct UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPoint
struct UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatTo
struct UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatFromTo
struct UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenCustomFloat
struct UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenActorFollowSpline
struct UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetOpacityTo
struct UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetAngleTo
struct UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenSceneComponentFollowSpline
struct UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPoint
struct UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPointByOffset
struct UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPoint
struct UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatTo
struct UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatFromTo
struct UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenCustomFloat
struct UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenActorFollowSpline
struct UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetOpacityTo
struct UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetAngleTo
struct UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenSceneComponentFollowSpline
struct UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPointByOffset
struct UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPoint
struct UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPointByOffset
struct UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              OffsetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenReferenceAxis                                ReferenceAxis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPoint
struct UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	float                                              StartingAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatTo
struct UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatFromTo
struct UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenCustomFloat
struct UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenActorFollowSpline
struct UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseConstantSpeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenFloat*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColor.GetCurrentValue
struct UTweenLinearColor_GetCurrentValue_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorTo
struct UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorFromTo
struct UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorTo
struct UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorFromTo
struct UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorTo
struct UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorFromTo
struct UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenLinearColor*                           OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorTo
struct UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorFromTo
struct UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorTo
struct UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorFromTo
struct UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorTo
struct UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorFromTo
struct UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                from;                                                     // (Parm, IsPlainOldData)
	struct FLinearColor                                to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenLinearColor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerActor.IsObjectTweening
struct ATweenManagerActor_IsObjectTweening_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBaseTween*                                  TweenFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerActor.FindTweenByName
struct ATweenManagerActor_FindTweenByName_Params
{
	struct FName                                       TweenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenGenericType                                  TweenType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBaseTween*                                  TweenFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerActor.DeleteAllTweensByObject
struct ATweenManagerActor_DeleteAllTweensByObject_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerActor.DeleteAllTweens
struct ATweenManagerActor_DeleteAllTweens_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerActor.BP_CreateTweenContainerStatic
struct ATweenManagerActor_BP_CreateTweenContainerStatic_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.UpdateNameMap
struct UTweenManagerComponent_UpdateNameMap_Params
{
	class UBaseTween*                                  pTween;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pPreviousName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       pNewName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.TweenDestroyed
struct UTweenManagerComponent_TweenDestroyed_Params
{
	class UBaseTween*                                  pTween;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.IsObjectTweening
struct UTweenManagerComponent_IsObjectTweening_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBaseTween*                                  TweenFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.FindTweenByName
struct UTweenManagerComponent_FindTweenByName_Params
{
	struct FName                                       TweenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenGenericType                                  TweenType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBaseTween*                                  TweenFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.DeleteAllTweensByObject
struct UTweenManagerComponent_DeleteAllTweensByObject_Params
{
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETweenGenericType                                  TweensType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.DeleteAllTweens
struct UTweenManagerComponent_DeleteAllTweens_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenManagerComponent.BP_CreateTweenContainer
struct UTweenManagerComponent_BP_CreateTweenContainer_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotator.OnPrimitiveComponentHit
struct UTweenRotator_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHitResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotator.OnPrimitiveComponentBeginOverlap
struct UTweenRotator_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                pOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  pSweepResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotator.OnActorHit
struct UTweenRotator_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHit;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotator.OnActorBeginOverlap
struct UTweenRotator_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotator.GetCurrentValue
struct UTweenRotator_GetCurrentValue_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentTo
struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentBy
struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorTo
struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorBy
struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentTo
struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentBy
struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorTo
struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorBy
struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentTo
struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentBy
struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorTo
struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorBy
struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenRotator*                               OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentTo
struct UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentBy
struct UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorTo
struct UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorBy
struct UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentTo
struct UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentBy
struct UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorTo
struct UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorBy
struct UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentTo
struct UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentBy
struct UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorTo
struct UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorBy
struct UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenRotator*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector.OnPrimitiveComponentHit
struct UTweenVector_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHitResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector.OnPrimitiveComponentBeginOverlap
struct UTweenVector_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         pOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                pOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  pSweepResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector.OnActorHit
struct UTweenVector_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pNormalImpulse;                                           // (Parm, IsPlainOldData)
	struct FHitResult                                  pHit;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector.OnActorBeginOverlap
struct UTweenVector_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector.GetCurrentValue
struct UTweenVector_GetCurrentValue_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2D.GetCurrentValue
struct UTweenVector2D_GetCurrentValue_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenShearWidgetTo
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetTo
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetBy
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetTo
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetBy
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenCustomVector2D
struct UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenShearWidgetTo
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetTo
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetBy
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetTo
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetBy
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenCustomVector2D
struct UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenShearWidgetTo
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetTo
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetBy
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetTo
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetBy
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenCustomVector2D
struct UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector2D*                              OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenShearWidgetTo
struct UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetTo
struct UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetBy
struct UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetTo
struct UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetBy
struct UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenCustomVector2D
struct UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenShearWidgetTo
struct UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetTo
struct UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetBy
struct UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetTo
struct UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetBy
struct UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenCustomVector2D
struct UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenShearWidgetTo
struct UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetTo
struct UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetBy
struct UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetTo
struct UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetBy
struct UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenCustomVector2D
struct UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector2D*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentTo
struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentBy
struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorTo
struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorBy
struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentTo
struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentBy
struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorTo
struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorBy
struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenCustomVector
struct UTweenVectorLatentFactory_BP_JoinLatentTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentTo
struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentBy
struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorTo
struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorBy
struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentTo
struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentBy
struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorTo
struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorBy
struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenCustomVector
struct UTweenVectorLatentFactory_BP_CreateLatentTweenCustomVector_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             OutTweenContainer;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentTo
struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentBy
struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorTo
struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorBy
struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentTo
struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentBy
struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorTo
struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorBy
struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenCustomVector
struct UTweenVectorLatentFactory_BP_AppendLatentTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenVector*                                OutTween;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVectorLatentFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentTo
struct UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentBy
struct UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorTo
struct UTweenVectorStandardFactory_BP_JoinTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorBy
struct UTweenVectorStandardFactory_BP_JoinTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentTo
struct UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentBy
struct UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorTo
struct UTweenVectorStandardFactory_BP_JoinTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorBy
struct UTweenVectorStandardFactory_BP_JoinTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenCustomVector
struct UTweenVectorStandardFactory_BP_JoinTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentTo
struct UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentBy
struct UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorTo
struct UTweenVectorStandardFactory_BP_CreateTweenScaleActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorBy
struct UTweenVectorStandardFactory_BP_CreateTweenScaleActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentTo
struct UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentBy
struct UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorTo
struct UTweenVectorStandardFactory_BP_CreateTweenMoveActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorBy
struct UTweenVectorStandardFactory_BP_CreateTweenMoveActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenCustomVector
struct UTweenVectorStandardFactory_BP_CreateTweenCustomVector_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                Tween;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentTo
struct UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentBy
struct UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorTo
struct UTweenVectorStandardFactory_BP_AppendTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorBy
struct UTweenVectorStandardFactory_BP_AppendTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentTo
struct UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentBy
struct UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorTo
struct UTweenVectorStandardFactory_BP_AppendTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorBy
struct UTweenVectorStandardFactory_BP_AppendTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     bY;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeleteTweenOnOverlap;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenCustomVector
struct UTweenVectorStandardFactory_BP_AppendTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     TweenTarget;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     from;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     to;                                                       // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenEaseType                                     EaseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETweenLoopType                                     LoopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTweenVector*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

