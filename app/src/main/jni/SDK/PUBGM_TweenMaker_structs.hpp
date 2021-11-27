#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TweenMaker.ETweenGenericType
enum class ETweenGenericType : uint8_t
{
	ETweenGenericType__Any         = 0,
	ETweenGenericType__Move        = 1,
	ETweenGenericType__Scale       = 2,
	ETweenGenericType__Rotate      = 3,
	ETweenGenericType__RotateAroundPoint = 4,
	ETweenGenericType__FollowSpline = 5,
	ETweenGenericType__MaterialVector = 6,
	ETweenGenericType__MaterialScalar = 7,
	ETweenGenericType__WidgetAngle = 8,
	ETweenGenericType__WidgetOpacity = 9,
	ETweenGenericType__WidgetShear = 10,
	ETweenGenericType__CustomVector = 11,
	ETweenGenericType__CustomFloat = 12,
	ETweenGenericType__CustomVector2D = 13,
	ETweenGenericType__ETweenGenericType_MAX = 14
};


// Enum TweenMaker.ETweenReferenceAxis
enum class ETweenReferenceAxis : uint8_t
{
	ETweenReferenceAxis__XAxis     = 0,
	ETweenReferenceAxis__YAxis     = 1,
	ETweenReferenceAxis__ZAxis     = 2,
	ETweenReferenceAxis__ETweenReferenceAxis_MAX = 3
};


// Enum TweenMaker.ETweenFloatType
enum class ETweenFloatType : uint8_t
{
	ETweenFloatType__MaterialScalarFromTo = 0,
	ETweenFloatType__MaterialScalarTo = 1,
	ETweenFloatType__RotateAroundPoint = 2,
	ETweenFloatType__FollowSpline  = 3,
	ETweenFloatType__WidgetAngleTo = 4,
	ETweenFloatType__WidgetOpacityTo = 5,
	ETweenFloatType__Custom        = 6,
	ETweenFloatType__ETweenFloatType_MAX = 7
};


// Enum TweenMaker.ETweenLinearColorType
enum class ETweenLinearColorType : uint8_t
{
	ETweenLinearColorType__MaterialVectorFromTo = 0,
	ETweenLinearColorType__MaterialVectorTo = 1,
	ETweenLinearColorType__ETweenLinearColorType_MAX = 2
};


// Enum TweenMaker.ETweenRotatorType
enum class ETweenRotatorType : uint8_t
{
	ETweenRotatorType__RotateTo    = 0,
	ETweenRotatorType__RotateBy    = 1,
	ETweenRotatorType__ETweenRotatorType_MAX = 2
};


// Enum TweenMaker.ETweenVector2DType
enum class ETweenVector2DType : uint8_t
{
	ETweenVector2DType__MoveTo     = 0,
	ETweenVector2DType__MoveBy     = 1,
	ETweenVector2DType__ScaleTo    = 2,
	ETweenVector2DType__ScaleBy    = 3,
	ETweenVector2DType__ShearTo    = 4,
	ETweenVector2DType__Custom     = 5,
	ETweenVector2DType__ETweenVector2DType_MAX = 6
};


// Enum TweenMaker.ETweenVectorType
enum class ETweenVectorType : uint8_t
{
	ETweenVectorType__MoveTo       = 0,
	ETweenVectorType__MoveBy       = 1,
	ETweenVectorType__ScaleTo      = 2,
	ETweenVectorType__ScaleBy      = 3,
	ETweenVectorType__Custom       = 4,
	ETweenVectorType__ETweenVectorType_MAX = 5
};


// Enum TweenMaker.ETweenTargetType
enum class ETweenTargetType : uint8_t
{
	ETweenTargetType__Actor        = 0,
	ETweenTargetType__SceneComponent = 1,
	ETweenTargetType__UMG          = 2,
	ETweenTargetType__Material     = 3,
	ETweenTargetType__Custom       = 4,
	ETweenTargetType__ETweenTargetType_MAX = 5
};


// Enum TweenMaker.ETweenLoopType
enum class ETweenLoopType : uint8_t
{
	ETweenLoopType__Yoyo           = 0,
	ETweenLoopType__Restart        = 1,
	ETweenLoopType__ETweenLoopType_MAX = 2
};


// Enum TweenMaker.ETweenEaseType
enum class ETweenEaseType : uint8_t
{
	ETweenEaseType__Linear         = 0,
	ETweenEaseType__EaseInQuad     = 1,
	ETweenEaseType__EaseOutQuad    = 2,
	ETweenEaseType__EaseInOutQuad  = 3,
	ETweenEaseType__EaseOutInQuad  = 4,
	ETweenEaseType__EaseInCubic    = 5,
	ETweenEaseType__EaseOutCubic   = 6,
	ETweenEaseType__EaseInOutCubic = 7,
	ETweenEaseType__EaseOutInCubic = 8,
	ETweenEaseType__EaseInQuart    = 9,
	ETweenEaseType__EaseOutQuart   = 10,
	ETweenEaseType__EaseInOutQuart = 11,
	ETweenEaseType__EaseOutInQuart = 12,
	ETweenEaseType__EaseInQuint    = 13,
	ETweenEaseType__EaseOutQuint   = 14,
	ETweenEaseType__EaseInOutQuint = 15,
	ETweenEaseType__EaseOutInQuint = 16,
	ETweenEaseType__EaseInSine     = 17,
	ETweenEaseType__EaseOutSine    = 18,
	ETweenEaseType__EaseInOutSine  = 19,
	ETweenEaseType__EaseOutInSine  = 20,
	ETweenEaseType__EaseInExpo     = 21,
	ETweenEaseType__EaseOutExpo    = 22,
	ETweenEaseType__EaseInOutExpo  = 23,
	ETweenEaseType__EaseOutInExpo  = 24,
	ETweenEaseType__EaseInCirc     = 25,
	ETweenEaseType__EaseOutCirc    = 26,
	ETweenEaseType__EaseInOutCirc  = 27,
	ETweenEaseType__EaseOutInCirc  = 28,
	ETweenEaseType__EaseInElastic  = 29,
	ETweenEaseType__EaseOutElastic = 30,
	ETweenEaseType__EaseInOutElastic = 31,
	ETweenEaseType__EaseOutInElastic = 32,
	ETweenEaseType__EaseInBack     = 33,
	ETweenEaseType__EaseOutBack    = 34,
	ETweenEaseType__EaseInOutBack  = 35,
	ETweenEaseType__EaseOutInBack  = 36,
	ETweenEaseType__EaseInBounce   = 37,
	ETweenEaseType__EaseOutBounce  = 38,
	ETweenEaseType__EaseInOutBounce = 39,
	ETweenEaseType__EaseOutInBounce = 40,
	ETweenEaseType__ETweenEaseType_MAX = 41
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TweenMaker.ParallelTween
// 0x001C
struct FParallelTween
{
	TArray<class UBaseTween*>                          ParallelTweens;                                           // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

}

