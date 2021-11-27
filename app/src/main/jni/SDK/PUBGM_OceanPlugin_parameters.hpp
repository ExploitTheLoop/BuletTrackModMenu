#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_OceanPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     C;                                                        // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
	struct FBuoyancyVertex                             H;                                                        // (Parm)
	struct FBuoyancyVertex                             M;                                                        // (Parm)
	struct FBuoyancyVertex                             L;                                                        // (Parm)
	struct FVector                                     InArrow;                                                  // (Parm, IsPlainOldData)
	TArray<struct FForceTriangle>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
	float                                              NewDensity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWaterDensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	bool                                               bJustGetHeightAtLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};

// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
	struct FForceTriangle                              TriForce;                                                 // (Parm)
	struct FColor                                      DebugColor;                                               // (Parm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
	struct FVector                                     SlamForce;                                                // (Parm, IsPlainOldData)
	struct FVector                                     TriCenter;                                                // (Parm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
	struct FForceTriangle                              TriForce;                                                 // (Parm)
};

// Function OceanPlugin.BuoyancyForceComponent.TickBuoyancyForce
struct UBuoyancyForceComponent_TickBuoyancyForce_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction OceanPlugin.BuoyancyForceComponent.OnEnterWaterDelegate__DelegateSignature
struct UBuoyancyForceComponent_OnEnterWaterDelegate__DelegateSignature_Params
{
	bool                                               IsUnderWater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction OceanPlugin.BuoyancyForceComponent.OnContactWaterDelegate__DelegateSignature
struct UBuoyancyForceComponent_OnContactWaterDelegate__DelegateSignature_Params
{
	bool                                               IsContactingWater;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.BuoyancyForceComponent.NativeSetEnableCustomWaveForce
struct UBuoyancyForceComponent_NativeSetEnableCustomWaveForce_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.BuoyancyForceComponent.IsEntirelyUnderWater
struct UBuoyancyForceComponent_IsEntirelyUnderWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.BuoyancyForceComponent.IsContactedWater
struct UBuoyancyForceComponent_IsContactedWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.BuoyancyForceComponent.EndableUprightConstraint
struct UBuoyancyForceComponent_EndableUprightConstraint_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.BuoyancyForceComponent.CheckPointInWater
struct UBuoyancyForceComponent_CheckPointInWater_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	bool                                               isWorldPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.FlockFish.OnEndOverlap
struct AFlockFish_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.FlockFish.OnBeginOverlap
struct AFlockFish_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.OnRep_ReplicatedWorldRealTimeSeconds
struct AOceanManager_OnRep_ReplicatedWorldRealTimeSeconds_Params
{
};

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
struct AOceanManager_LoadLandscapeHeightmap_Params
{
	class UTexture2D*                                  Tex2D;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetHeightmapPixel
struct AOceanManager_GetHeightmapPixel_Params
{
	float                                              U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.SegmentOceanManager.RemoveBoxComponent
struct ASegmentOceanManager_RemoveBoxComponent_Params
{
	class UWaterBoxComponent*                          InBoxComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OceanPlugin.SegmentOceanManager.AddBoxComponent
struct ASegmentOceanManager_AddBoxComponent_Params
{
	class UWaterBoxComponent*                          InBoxComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            InDirectionSpline;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
struct ATimeManager_SetCurrentLocalTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.IsLeapYear
struct ATimeManager_IsLeapYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.InitializeCalendar
struct ATimeManager_InitializeCalendar_Params
{
	struct FTimeDate                                   Time;                                                     // (Parm)
};

// Function OceanPlugin.TimeManager.IncrementTime
struct ATimeManager_IncrementTime_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetYearPhase
struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInYear
struct ATimeManager_GetDaysInYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInMonth
struct ATimeManager_GetDaysInMonth_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayPhase
struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayOfYear
struct ATimeManager_GetDayOfYear_Params
{
	struct FTimeDate                                   Time;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateSunAngle
struct ATimeManager_CalculateSunAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonPhase
struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonAngle
struct ATimeManager_CalculateMoonAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

