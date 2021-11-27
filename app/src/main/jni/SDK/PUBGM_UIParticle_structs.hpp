#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UIParticle.EUIParticlePropertyType
enum class EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float = 0,
	EUIParticlePropertyType__FloatRange = 1,
	EUIParticlePropertyType__FloatCurve = 2,
	EUIParticlePropertyType__FloatCurveRange = 3,
	EUIParticlePropertyType__Vector2D = 4,
	EUIParticlePropertyType__Vector2DRange = 5,
	EUIParticlePropertyType__LinearColorCurve = 6,
	EUIParticlePropertyType__LinearColorCurveRange = 7,
	EUIParticlePropertyType__EUIParticlePropertyType_MAX = 8
};


// Enum UIParticle.EParticleDrawEffect
enum class EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None      = 0,
	EParticleDrawEffect__NoBlending = 1,
	EParticleDrawEffect__PreMultipliedAlpha = 2,
	EParticleDrawEffect__NoGamma   = 3,
	EParticleDrawEffect__InvertAlpha = 4,
	EParticleDrawEffect__NoPixelSnapping = 5,
	EParticleDrawEffect__DisabledEffect = 6,
	EParticleDrawEffect__IgnoreTextureAlpha = 7,
	EParticleDrawEffect__ReverseGamma = 8,
	EParticleDrawEffect__EParticleDrawEffect_MAX = 9
};


// Enum UIParticle.EPositionType
enum class EPositionType : uint8_t
{
	EPositionType__FREE            = 0,
	EPositionType__RELATIVE        = 1,
	EPositionType__EPositionType_MAX = 2
};


// Enum UIParticle.EEmitterType
enum class EEmitterType : uint8_t
{
	EEmitterType__Gravity          = 0,
	EEmitterType__Radial           = 1,
	EEmitterType__Curve            = 2,
	EEmitterType__EEmitterType_MAX = 3
};


// Enum UIParticle.ECurveType
enum class ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent = 0,
	ECurveType__ParticleLifeTime   = 1,
	ECurveType__EmitLifeTime       = 2,
	ECurveType__ECurveType_MAX     = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0010
struct FUIParticleEmitterInfo
{
	bool                                               Disable;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ActiveDelay;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUIParticleEmitterAsset*                     Asset;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.Range_Float
// 0x0008
struct FRange_Float
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0058
struct FUIParticleFloatCurve
{
	struct FRichCurve                                  CurveData;                                                // 0x0000(0x0054) (Edit)
	ECurveType                                         CurveType;                                                // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_FloatCurve
// 0x00B0
struct FRange_FloatCurve
{
	struct FUIParticleFloatCurve                       Min;                                                      // 0x0000(0x0058) (Edit)
	struct FUIParticleFloatCurve                       Max;                                                      // 0x0058(0x0058) (Edit)
};

// ScriptStruct UIParticle.Range_Vector2D
// 0x0014
struct FRange_Vector2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               RandomKey_X_Y;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x0154
struct FUIParticleLinearColorCurve
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0054) (Edit)
	ECurveType                                         CurveType;                                                // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x02B0
struct FRange_LinearColorCurve
{
	struct FUIParticleLinearColorCurve                 Min;                                                      // 0x0000(0x0154) (Edit)
	struct FUIParticleLinearColorCurve                 Max;                                                      // 0x0154(0x0154) (Edit)
	bool                                               RandomKey_R_G;                                            // 0x02A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_B;                                            // 0x02A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_A;                                            // 0x02AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_B;                                            // 0x02AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_A;                                            // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_B_A;                                            // 0x02AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleProperty
// 0x0538
struct FUIParticleProperty
{
	EUIParticlePropertyType                            Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRange_Float                                FloatRangeValue;                                          // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FUIParticleFloatCurve                       FloatCurveValue;                                          // 0x0010(0x0058) (Edit)
	struct FRange_FloatCurve                           FloatCurveRangeValue;                                     // 0x0068(0x00B0) (Edit)
	struct FVector2D                                   Vector2DValue;                                            // 0x0118(0x0008) (Edit, IsPlainOldData)
	struct FRange_Vector2D                             Vector2DRangeValue;                                       // 0x0120(0x0014) (Edit)
	struct FUIParticleLinearColorCurve                 LinearColorCurveValue;                                    // 0x0134(0x0154) (Edit)
	struct FRange_LinearColorCurve                     LinearColorCurveRangeValue;                               // 0x0288(0x02B0) (Edit)
};

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0A70
struct FPosotion_Vector2DCurve
{
	struct FUIParticleProperty                         X;                                                        // 0x0000(0x0538) (Edit)
	struct FUIParticleProperty                         Y;                                                        // 0x0538(0x0538) (Edit)
};

// ScriptStruct UIParticle.ChildEmitter
// 0x0014
struct FChildEmitter
{
	float                                              ActivityInParentLifeTime;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FollowParentPosition;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              FollowParentSpeedPercent;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrderOffset;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.ScalarParamCurve
// 0x0540
struct FScalarParamCurve
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUIParticleProperty                         Value;                                                    // 0x0008(0x0538) (Edit)
};

// ScriptStruct UIParticle.EasyParticleChildEmitterArray
// 0x0038
struct FEasyParticleChildEmitterArray
{
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDateTime                                   EmitterStartTime;                                         // 0x0008(0x0008)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0A70
struct FSize_Vector2DCurve
{
	struct FUIParticleProperty                         Min;                                                      // 0x0000(0x0538) (Edit)
	struct FUIParticleProperty                         Max;                                                      // 0x0538(0x0538) (Edit)
};

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0010
struct FScalarParamFloat
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRange_Float                                Value;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010
struct FLerpKeyColor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008
struct FLerpKeyVector2D
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

