#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None        = 0,
	EPlanarConstraint__X           = 1,
	EPlanarConstraint__Y           = 2,
	EPlanarConstraint__Z           = 3,
	EPlanarConstraint__EPlanarConstraint_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// 0x0018
struct FKawaiiPhysicsSettings
{
	float                                              Damping;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldDampingLocation;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldDampingRotation;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitAngle;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// 0x0050
struct FCollisionLimitBase
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0018) (Edit)
	struct FVector                                     OffsetLocation;                                           // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0024(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0040(0x0010) (IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// 0x0010 (0x0060 - 0x0050)
struct FSphericalLimit : public FCollisionLimitBase
{
	float                                              Radius;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESphericalLimitType                                LimitType;                                                // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0055(0x000B) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// 0x0010 (0x0060 - 0x0050)
struct FCapsuleLimit : public FCollisionLimitBase
{
	float                                              Radius;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// 0x0010 (0x0060 - 0x0050)
struct FPlanarLimit : public FCollisionLimitBase
{
	struct FPlane                                      Plane;                                                    // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// 0x00B0
struct FKawaiiPhysicsModifyBone
{
	struct FBoneReference                              BoneRef;                                                  // 0x0000(0x0018)
	int                                                ParentIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChildIndexs;                                              // 0x001C(0x000C) (ZeroConstructor)
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          // 0x0028(0x0018)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (IsPlainOldData)
	struct FVector                                     PrevLocation;                                             // 0x004C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FQuat                                       PrevRotation;                                             // 0x0060(0x0010) (IsPlainOldData)
	struct FVector                                     PoseLocation;                                             // 0x0070(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FQuat                                       PoseRotation;                                             // 0x0080(0x0010) (IsPlainOldData)
	struct FVector                                     PoseScale;                                                // 0x0090(0x000C) (IsPlainOldData)
	float                                              LengthFromRoot;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// 0x0118 (0x0170 - 0x0058)
struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 // 0x0058(0x0018) (Edit)
	TArray<struct FBoneReference>                      ExcludeBones;                                             // 0x0070(0x000C) (Edit, ZeroConstructor)
	int                                                TargetFramerate;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTargetFramerate;                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          // 0x0084(0x0018) (Edit, BlueprintVisible)
	class UCurveFloat*                                 DampingCurve;                                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WorldDampingLocationCurve;                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WorldDampingRotationCurve;                                // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StiffnessCurve;                                           // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RadiusCurve;                                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LimitAngleCurve;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatePhysicsSettingsInGame;                             // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              DummyBoneLength;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlanarConstraint                                  PlanarConstraint;                                         // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<struct FSphericalLimit>                     SphericalLimits;                                          // 0x00C0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FCapsuleLimit>                       CapsuleLimits;                                            // 0x00CC(0x000C) (Edit, ZeroConstructor)
	TArray<struct FPlanarLimit>                        PlanarLimits;                                             // 0x00D8(0x000C) (Edit, ZeroConstructor)
	float                                              TeleportDistanceThreshold;                                // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeleportRotationThreshold;                                // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x00EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bEnableWind;                                              // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              WindScale;                                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FKawaiiPhysicsModifyBone>            ModifyBones;                                              // 0x0100(0x000C) (ZeroConstructor)
	float                                              TotalBoneLength;                                          // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  PreSkelCompTransform;                                     // 0x0110(0x0030) (IsPlainOldData)
	bool                                               bInitPhysicsSettings;                                     // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2F];                                      // 0x0141(0x002F) MISSED OFFSET
};

}

