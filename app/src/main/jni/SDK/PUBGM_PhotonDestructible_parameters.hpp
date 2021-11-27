#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PhotonDestructible_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorRadiusHitAction
struct AFracturedStaticMeshActor_Server_OnActorRadiusHitAction_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldImpactPoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorHitAction
struct AFracturedStaticMeshActor_Server_OnActorHitAction_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonDestructible.FracturedStaticMeshActor.OnRep_FSMNetData
struct AFracturedStaticMeshActor_OnRep_FSMNetData_Params
{
};

// Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentsHPChanged
struct AFracturedStaticMeshActor_Client_OnFragmentsHPChanged_Params
{
	TArray<int>                                        FragmentsIndex;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      FragmentsChangedHP;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldImpactPoint;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentHPChanged
struct AFracturedStaticMeshActor_Client_OnFragmentHPChanged_Params
{
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FragmentHP;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldImpactPoint;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit
struct UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData
struct UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params
{
};

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit
struct UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit
struct UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData
struct UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params
{
};

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit
struct UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function PhotonDestructible.FracturedSkeletalMeshActor.Server_OnActorHitAction
struct AFracturedSkeletalMeshActor_Server_OnActorHitAction_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonDestructible.FracturedSkeletalMeshActor.OnRep_FSMNetData
struct AFracturedSkeletalMeshActor_OnRep_FSMNetData_Params
{
};

// Function PhotonDestructible.FracturedSkeletalMeshActor.Client_OnImpact
struct AFracturedSkeletalMeshActor_Client_OnImpact_Params
{
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactWorldPos;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactWorldDir;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              ImpulseForce;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFirstImpactTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent
struct UPhotonDestructiblePuppet_TriggerPuppetEvent_Params
{
	int                                                EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent
struct UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params
{
	struct FString                                     ObjectName;                                               // (Parm, ZeroConstructor)
	int                                                EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent
struct UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params
{
	struct FGuid                                       PuppetGUID;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	int                                                EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

