// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PhotonDestructible_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorRadiusHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldImpactPoint               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AFracturedStaticMeshActor::Server_OnActorRadiusHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& WorldImpactPoint, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorRadiusHitAction");

	AFracturedStaticMeshActor_Server_OnActorRadiusHitAction_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.WorldImpactPoint = WorldImpactPoint;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFracturedStaticMeshActor::Server_OnActorHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedStaticMeshActor.Server_OnActorHitAction");

	AFracturedStaticMeshActor_Server_OnActorHitAction_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedStaticMeshActor.OnRep_FSMNetData
// (Final, Native, Public)

void AFracturedStaticMeshActor::OnRep_FSMNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedStaticMeshActor.OnRep_FSMNetData");

	AFracturedStaticMeshActor_OnRep_FSMNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentsHPChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// TArray<int>                    FragmentsIndex                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<float>                  FragmentsChangedHP             (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldImpactPoint               (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AFracturedStaticMeshActor::Client_OnFragmentsHPChanged(TArray<int> FragmentsIndex, TArray<float> FragmentsChangedHP, const struct FVector& WorldImpactPoint, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentsHPChanged");

	AFracturedStaticMeshActor_Client_OnFragmentsHPChanged_Params params;
	params.FragmentsIndex = FragmentsIndex;
	params.FragmentsChangedHP = FragmentsChangedHP;
	params.WorldImpactPoint = WorldImpactPoint;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentHPChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          FragmentHP                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldImpactPoint               (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AFracturedStaticMeshActor::Client_OnFragmentHPChanged(int FragmentIndex, float FragmentHP, const struct FVector& WorldImpactPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedStaticMeshActor.Client_OnFragmentHPChanged");

	AFracturedStaticMeshActor_Client_OnFragmentHPChanged_Params params;
	params.FragmentIndex = FragmentIndex;
	params.FragmentHP = FragmentHP;
	params.WorldImpactPoint = WorldImpactPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPhotonDestructibleSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData
// (Final, Native, Public)

void UPhotonDestructibleSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, ReferenceParm)

void UPhotonDestructibleSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPhotonDestructibleInstancedSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData
// (Final, Native, Public)

void UPhotonDestructibleInstancedSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPhotonDestructibleSurfaceHitData HitData                        (ConstParm, Parm, ReferenceParm)

void UPhotonDestructibleInstancedSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedSkeletalMeshActor.Server_OnActorHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFracturedSkeletalMeshActor::Server_OnActorHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedSkeletalMeshActor.Server_OnActorHitAction");

	AFracturedSkeletalMeshActor_Server_OnActorHitAction_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedSkeletalMeshActor.OnRep_FSMNetData
// (Final, Native, Public)

void AFracturedSkeletalMeshActor::OnRep_FSMNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedSkeletalMeshActor.OnRep_FSMNetData");

	AFracturedSkeletalMeshActor_OnRep_FSMNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.FracturedSkeletalMeshActor.Client_OnImpact
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactWorldPos                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactWorldDir                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          ImpulseForce                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFirstImpactTime              (Parm, ZeroConstructor, IsPlainOldData)

void AFracturedSkeletalMeshActor::Client_OnImpact(int FragmentIndex, const struct FVector& ImpactWorldPos, const struct FVector& ImpactWorldDir, float ImpulseForce, float InFirstImpactTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.FracturedSkeletalMeshActor.Client_OnImpact");

	AFracturedSkeletalMeshActor_Client_OnImpact_Params params;
	params.FragmentIndex = FragmentIndex;
	params.ImpactWorldPos = ImpactWorldPos;
	params.ImpactWorldDir = ImpactWorldDir;
	params.ImpulseForce = ImpulseForce;
	params.InFirstImpactTime = InFirstImpactTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            EventId                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppet::TriggerPuppetEvent(int EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent");

	UPhotonDestructiblePuppet_TriggerPuppetEvent_Params params;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ObjectName                     (Parm, ZeroConstructor)
// int                            EventId                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppetContainer::TriggerPuppetEvent(const struct FString& ObjectName, int EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent");

	UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params params;
	params.ObjectName = ObjectName;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FGuid                   PuppetGUID                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// int                            EventId                        (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructiblePuppetMgr::Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent");

	UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params params;
	params.PuppetGUID = PuppetGUID;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

