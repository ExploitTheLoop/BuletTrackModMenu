#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanPlugin.ForceTriangle
// 0x006C
struct FForceTriangle
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0000(0x006C) MISSED OFFSET
};

// ScriptStruct OceanPlugin.BuoyancyVertex
// 0x0010
struct FBuoyancyVertex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestRadius;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                   // 0x0000(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave02;                                                   // 0x0014(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave03;                                                   // 0x0028(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave04;                                                   // 0x003C(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave05;                                                   // 0x0050(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave06;                                                   // 0x0064(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave07;                                                   // 0x0078(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave08;                                                   // 0x008C(0x0014) (Edit, BlueprintVisible)
};

// ScriptStruct OceanPlugin.WaveAdjust
// 0x0008
struct FWaveAdjust
{
	float                                              TimeScaleOffset;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.TrippleWaveParameter
// 0x0054
struct FTrippleWaveParameter
{
	struct FWaveParameter                              WaveCluster0;                                             // 0x0000(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWaveAdjust                                 WaveAdjust0;                                              // 0x0014(0x0008) (Edit)
	struct FWaveParameter                              WaveCluster1;                                             // 0x001C(0x0014) (Edit)
	struct FWaveAdjust                                 WaveAdjust1;                                              // 0x0030(0x0008) (Edit)
	struct FWaveParameter                              WaveCluster2;                                             // 0x0038(0x0014) (Edit)
	struct FWaveAdjust                                 WaveAdjust2;                                              // 0x004C(0x0008) (Edit)
};

// ScriptStruct OceanPlugin.SegmentWaterBox
// 0x0090
struct FSegmentWaterBox
{
	struct FBox                                        WaterBox;                                                 // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FTransform                                  WaterTransform;                                           // 0x0020(0x0030) (IsPlainOldData)
	struct FVector                                     WaterBoxExtend;                                           // 0x0050(0x000C) (IsPlainOldData)
	float                                              WaterBoxAcceptZValue;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Direction;                                                // 0x0060(0x0008) (IsPlainOldData)
	float                                              SpeedValue;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseSplineZ;                                               // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTrippleWaveParameter>               WaveClusters;                                             // 0x0074(0x000C) (ZeroConstructor)
	class USplineComponent*                            DirectionSpline;                                          // 0x0080(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct OceanPlugin.TimeDate
// 0x001C
struct FTimeDate
{
	int                                                Millisecond;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Year;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaterBoxCell
// 0x0020
struct FWaterBoxCell
{
	struct FVector                                     WaveDirection;                                            // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              WaveZ;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PushForceDirection;                                       // 0x0010(0x000C) (Edit, IsPlainOldData)
	float                                              Speed;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

