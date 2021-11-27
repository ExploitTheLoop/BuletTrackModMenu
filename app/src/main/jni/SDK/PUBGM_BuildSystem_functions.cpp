// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BuildSystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuildSystem.BuildingActorBase.SpawnDestroyParticle
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// bool                           bSpawnParticle                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Loc                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FSoftObjectPath         DestroyBuildingEffectPath      (ConstParm, Parm, OutParm, ReferenceParm)
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorBase::SpawnDestroyParticle(bool bSpawnParticle, const struct FTransform& Loc, const struct FSoftObjectPath& DestroyBuildingEffectPath, class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.SpawnDestroyParticle");

	ABuildingActorBase_SpawnDestroyParticle_Params params;
	params.bSpawnParticle = bSpawnParticle;
	params.Loc = Loc;
	params.DestroyBuildingEffectPath = DestroyBuildingEffectPath;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.PlayDestroyAnimation
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bUseParticle                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorBase::PlayDestroyAnimation(bool bUseParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.PlayDestroyAnimation");

	ABuildingActorBase_PlayDestroyAnimation_Params params;
	params.bUseParticle = bUseParticle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.OnTakeDamageFromVehicle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForwardSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorBase::OnTakeDamageFromVehicle(class AActor* DamagedActor, float ForwardSpeed, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnTakeDamageFromVehicle");

	ABuildingActorBase_OnTakeDamageFromVehicle_Params params;
	params.DamagedActor = DamagedActor;
	params.ForwardSpeed = ForwardSpeed;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.OnPlayDestroyAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUseParticle                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorBase::OnPlayDestroyAnimation(bool bUseParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnPlayDestroyAnimation");

	ABuildingActorBase_OnPlayDestroyAnimation_Params params;
	params.bUseParticle = bUseParticle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.OnBuildingActorDamaged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorBase::OnBuildingActorDamaged(float Health)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnBuildingActorDamaged");

	ABuildingActorBase_OnBuildingActorDamaged_Params params;
	params.Health = Health;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.OnBornAnimationPlayEndInClient
// (Event, Protected, BlueprintEvent)

void ABuildingActorBase::OnBornAnimationPlayEndInClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnBornAnimationPlayEndInClient");

	ABuildingActorBase_OnBornAnimationPlayEndInClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorBase.GetBuildID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABuildingActorBase::GetBuildID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.GetBuildID");

	ABuildingActorBase_GetBuildID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorBase.BPOnOwnerChanged
// (Event, Protected, BlueprintEvent)

void ABuildingActorBase::BPOnOwnerChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.BPOnOwnerChanged");

	ABuildingActorBase_BPOnOwnerChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.TryAttachToMoveablePlatform
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedBuilding                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BuildLocation                  (Parm, IsPlainOldData)

void UBuildSystemComponent::TryAttachToMoveablePlatform(class AActor* SpawnedBuilding, const struct FVector& BuildLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.TryAttachToMoveablePlatform");

	UBuildSystemComponent_TryAttachToMoveablePlatform_Params params;
	params.SpawnedBuilding = SpawnedBuilding;
	params.BuildLocation = BuildLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.StopPlaceBuilding
// (Native, Public, BlueprintCallable)

void UBuildSystemComponent::StopPlaceBuilding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.StopPlaceBuilding");

	UBuildSystemComponent_StopPlaceBuilding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.StartPrePlaceBuilding
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingViewType> viewType                       (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::StartPrePlaceBuilding(int InBuildID, TEnumAsByte<enum EBuildingViewType> viewType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.StartPrePlaceBuilding");

	UBuildSystemComponent_StartPrePlaceBuilding_Params params;
	params.InBuildID = InBuildID;
	params.viewType = viewType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.SkipCDTimeByBuildID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          IncreaseRate                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::SkipCDTimeByBuildID(int InBuildID, float IncreaseRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SkipCDTimeByBuildID");

	UBuildSystemComponent_SkipCDTimeByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.IncreaseRate = IncreaseRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ShouldEnableDoubleTouchMode
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::ShouldEnableDoubleTouchMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ShouldEnableDoubleTouchMode");

	UBuildSystemComponent_ShouldEnableDoubleTouchMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.SetPrebuildEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           CanBePlaced                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::SetPrebuildEnabled(bool CanBePlaced, bool IsVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SetPrebuildEnabled");

	UBuildSystemComponent_SetPrebuildEnabled_Params params;
	params.CanBePlaced = CanBePlaced;
	params.IsVisible = IsVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ServerStopPlaceBuilding
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UBuildSystemComponent::ServerStopPlaceBuilding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ServerStopPlaceBuilding");

	UBuildSystemComponent_ServerStopPlaceBuilding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ServerStartPrePlaceBuilding
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UBuildSystemComponent::ServerStartPrePlaceBuilding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ServerStartPrePlaceBuilding");

	UBuildSystemComponent_ServerStartPrePlaceBuilding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ServerPlaceBuildActor
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// int                            BuildingIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BuildLocation                  (Parm, IsPlainOldData)
// struct FRotator                BuildRotation                  (Parm, IsPlainOldData)
// uint32_t                       InResult                       (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::ServerPlaceBuildActor(int BuildingIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, uint32_t InResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ServerPlaceBuildActor");

	UBuildSystemComponent_ServerPlaceBuildActor_Params params;
	params.BuildingIndex = BuildingIndex;
	params.BuildLocation = BuildLocation;
	params.BuildRotation = BuildRotation;
	params.InResult = InResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.S2C_SkipCDTimeByBuildID
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          IncreaseRate                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::S2C_SkipCDTimeByBuildID(int InBuildID, float IncreaseRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.S2C_SkipCDTimeByBuildID");

	UBuildSystemComponent_S2C_SkipCDTimeByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.IncreaseRate = IncreaseRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.S2C_ResetBuildngCDByBuildID
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InNewCDTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::S2C_ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.S2C_ResetBuildngCDByBuildID");

	UBuildSystemComponent_S2C_ResetBuildngCDByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.InNewCDTime = InNewCDTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ResetBuildngCDByBuildID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InNewCDTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ResetBuildngCDByBuildID");

	UBuildSystemComponent_ResetBuildngCDByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.InNewCDTime = InNewCDTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ResetBuildList
// (Final, Native, Public, BlueprintCallable)

void UBuildSystemComponent::ResetBuildList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ResetBuildList");

	UBuildSystemComponent_ResetBuildList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.ProccessNothingHitTraceOverlap
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                DestRotation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          MaxBuildDist                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::ProccessNothingHitTraceOverlap(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, const struct FVector& ViewLocation, struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ProccessNothingHitTraceOverlap");

	UBuildSystemComponent_ProccessNothingHitTraceOverlap_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.MaxBuildDist = MaxBuildDist;
	params.buildIndex = buildIndex;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.PlaceBuildingWithIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::PlaceBuildingWithIndex(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuildingWithIndex");

	UBuildSystemComponent_PlaceBuildingWithIndex_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.PlaceBuildingAtLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBuildSystemComponent::PlaceBuildingAtLocation(int buildIndex, const struct FVector& Loc, const struct FRotator& Rot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuildingAtLocation");

	UBuildSystemComponent_PlaceBuildingAtLocation_Params params;
	params.buildIndex = buildIndex;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.PlaceBuilding
// (Native, Public, BlueprintCallable)

void UBuildSystemComponent::PlaceBuilding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuilding");

	UBuildSystemComponent_PlaceBuilding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OverriveDeploymentTransform
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FRotator                rotIn                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 locIn                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                rotOut                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 locOut                         (Parm, OutParm, IsPlainOldData)

void UBuildSystemComponent::OverriveDeploymentTransform(const struct FRotator& rotIn, const struct FVector& locIn, struct FRotator* rotOut, struct FVector* locOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OverriveDeploymentTransform");

	UBuildSystemComponent_OverriveDeploymentTransform_Params params;
	params.rotIn = rotIn;
	params.locIn = locIn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rotOut != nullptr)
		*rotOut = params.rotOut;
	if (locOut != nullptr)
		*locOut = params.locOut;
}

// Function BuildSystem.BuildSystemComponent.OverrideBuildingMaxBuildDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BuildingMaxDistance            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetAll                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            BuildingID                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, int BuildingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OverrideBuildingMaxBuildDistance");

	UBuildSystemComponent_OverrideBuildingMaxBuildDistance_Params params;
	params.BuildingMaxDistance = BuildingMaxDistance;
	params.SetAll = SetAll;
	params.BuildingID = BuildingID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBoxEnded
// (Native, Public)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBuildSystemComponent::OnTouchedConstructableBoxEnded(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBoxEnded");

	UBuildSystemComponent_OnTouchedConstructableBoxEnded_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBox
// (Native, Public)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBuildSystemComponent::OnTouchedConstructableBox(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBox");

	UBuildSystemComponent_OnTouchedConstructableBox_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OnTouchActorBuild
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::OnTouchActorBuild(const struct FVector2D& ScreenPosition, class APlayerController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchActorBuild");

	UBuildSystemComponent_OnTouchActorBuild_Params params;
	params.ScreenPosition = ScreenPosition;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OnAsyncLoadingEffectFinished
// (Final, Native, Public)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::OnAsyncLoadingEffectFinished(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnAsyncLoadingEffectFinished");

	UBuildSystemComponent_OnAsyncLoadingEffectFinished_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.OnAsyncLoadingBuildingFinished
// (Final, Native, Public)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::OnAsyncLoadingBuildingFinished(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnAsyncLoadingBuildingFinished");

	UBuildSystemComponent_OnAsyncLoadingBuildingFinished_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.LineTraceToBlackTag
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector                 BuildLocation                  (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::LineTraceToBlackTag(const struct FVector& BuildLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.LineTraceToBlackTag");

	UBuildSystemComponent_LineTraceToBlackTag_Params params;
	params.BuildLocation = BuildLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.IsInPreBuildingMode
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::IsInPreBuildingMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsInPreBuildingMode");

	UBuildSystemComponent_IsInPreBuildingMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.IsCanPlaceBuildingBP
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::IsCanPlaceBuildingBP(int InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsCanPlaceBuildingBP");

	UBuildSystemComponent_IsCanPlaceBuildingBP_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.IsCanPlaceBuilding
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InBuildID                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingActionType> _TYPE                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::IsCanPlaceBuilding(int InBuildID, TEnumAsByte<enum EBuildingActionType> _TYPE)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsCanPlaceBuilding");

	UBuildSystemComponent_IsCanPlaceBuilding_Params params;
	params.InBuildID = InBuildID;
	params._TYPE = _TYPE;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetOwnerPlayerController
// (Native, Protected)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UBuildSystemComponent::GetOwnerPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetOwnerPlayerController");

	UBuildSystemComponent_GetOwnerPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetMaxDistance
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildSystemComponent::GetMaxDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetMaxDistance");

	UBuildSystemComponent_GetMaxDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetIsHasInitData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::GetIsHasInitData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetIsHasInitData");

	UBuildSystemComponent_GetIsHasInitData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetIndexByBuildingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BuildID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBuildSystemComponent::GetIndexByBuildingID(int BuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetIndexByBuildingID");

	UBuildSystemComponent_GetIndexByBuildingID_Params params;
	params.BuildID = BuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetCurrentBuildType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<enum EBuildingType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<enum EBuildingType> UBuildSystemComponent::GetCurrentBuildType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetCurrentBuildType");

	UBuildSystemComponent_GetCurrentBuildType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetCDOByIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBuildSystemComponent::GetCDOByIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetCDOByIndex");

	UBuildSystemComponent_GetCDOByIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.GetBuildingList
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBuildingData>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuildingData> UBuildSystemComponent::GetBuildingList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetBuildingList");

	UBuildSystemComponent_GetBuildingList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.EnableBuildingByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BuildID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::EnableBuildingByID(int BuildID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.EnableBuildingByID");

	UBuildSystemComponent_EnableBuildingByID_Params params;
	params.BuildID = BuildID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.DoSceenTouchBuild
// (Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPostion                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            PointerIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingActionType> _TYPE                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBegin                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingActionType> CustomBuildEvent               (Parm, ZeroConstructor, IsPlainOldData)

void UBuildSystemComponent::DoSceenTouchBuild(int buildIndex, const struct FVector2D& ScreenPostion, int PointerIndex, TEnumAsByte<enum EBuildingActionType> _TYPE, bool IsBegin, TEnumAsByte<enum EBuildingActionType> CustomBuildEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.DoSceenTouchBuild");

	UBuildSystemComponent_DoSceenTouchBuild_Params params;
	params.buildIndex = buildIndex;
	params.ScreenPostion = ScreenPostion;
	params.PointerIndex = PointerIndex;
	params._TYPE = _TYPE;
	params.IsBegin = IsBegin;
	params.CustomBuildEvent = CustomBuildEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildSystemComponent.DensityCheck
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBuildingActorDensityCheck DensityCheckParmas             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::DensityCheck(const struct FBuildingActorDensityCheck& DensityCheckParmas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.DensityCheck");

	UBuildSystemComponent_DensityCheck_Params params;
	params.DensityCheckParmas = DensityCheckParmas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.CheckShouldSkipByVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     _comp                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::CheckShouldSkipByVisibility(class UPrimitiveComponent* _comp, int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckShouldSkipByVisibility");

	UBuildSystemComponent_CheckShouldSkipByVisibility_Params params;
	params._comp = _comp;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.CheckPlacementOverlap
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitArray                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBuildingData           CurBuildData                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                BuildRotation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ControlRot                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ViewLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           HasForbiddenObject             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::CheckPlacementOverlap(TArray<struct FHitResult> HitArray, const struct FVector& ViewLocation, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FRotator& BuildRotation, const struct FRotator& ControlRot, struct FVector* OutLocation, bool* HasForbiddenObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckPlacementOverlap");

	UBuildSystemComponent_CheckPlacementOverlap_Params params;
	params.HitArray = HitArray;
	params.BoxExtent = BoxExtent;
	params.CurBuildData = CurBuildData;
	params.BuildRotation = BuildRotation;
	params.ControlRot = ControlRot;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (HasForbiddenObject != nullptr)
		*HasForbiddenObject = params.HasForbiddenObject;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.CheckObjectIsOneOfTheTemplate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          _ActorFilterTemplates          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::CheckObjectIsOneOfTheTemplate(class UObject* Obj, TArray<class UClass*> _ActorFilterTemplates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckObjectIsOneOfTheTemplate");

	UBuildSystemComponent_CheckObjectIsOneOfTheTemplate_Params params;
	params.Obj = Obj;
	params._ActorFilterTemplates = _ActorFilterTemplates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.BuildAtWorldLoc
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            buildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              tranx                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, IsPlainOldData)
// bool                           bUseTrace                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBuildingActionType> BuildType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::BuildAtWorldLoc(int buildIndex, const struct FTransform& tranx, const struct FVector& EndLocation, bool bUseTrace, TEnumAsByte<enum EBuildingActionType> BuildType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.BuildAtWorldLoc");

	UBuildSystemComponent_BuildAtWorldLoc_Params params;
	params.buildIndex = buildIndex;
	params.tranx = tranx;
	params.EndLocation = EndLocation;
	params.bUseTrace = bUseTrace;
	params.BuildType = BuildType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.BP_LineTraceToBlackTag
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 BuildLocation                  (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildSystemComponent::BP_LineTraceToBlackTag(const struct FVector& BuildLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.BP_LineTraceToBlackTag");

	UBuildSystemComponent_BP_LineTraceToBlackTag_Params params;
	params.BuildLocation = BuildLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildSystemComponent.AddBuildingData
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FBuildingData           InData                         (Parm)

void UBuildSystemComponent::AddBuildingData(const struct FBuildingData& InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.AddBuildingData");

	UBuildSystemComponent_AddBuildingData_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.ShouldUseExtraRotation
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::ShouldUseExtraRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldUseExtraRotation");

	UBuildingActorInterface_ShouldUseExtraRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.ShouldUseExtraOffset
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::ShouldUseExtraOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldUseExtraOffset");

	UBuildingActorInterface_ShouldUseExtraOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.ShouldSnapToGrid
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::ShouldSnapToGrid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldSnapToGrid");

	UBuildingActorInterface_ShouldSnapToGrid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.ShouldCustomBlockingChannels
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::ShouldCustomBlockingChannels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldCustomBlockingChannels");

	UBuildingActorInterface_ShouldCustomBlockingChannels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.ShouldCheckVisibilityTypes
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::ShouldCheckVisibilityTypes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldCheckVisibilityTypes");

	UBuildingActorInterface_ShouldCheckVisibilityTypes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.SetBuildingActorID
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            BuildID                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingActorInterface::SetBuildingActorID(int BuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.SetBuildingActorID");

	UBuildingActorInterface_SetBuildingActorID_Params params;
	params.BuildID = BuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.PrebuildCDOBodyInstance
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              tranx                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBuildingActorInterface::PrebuildCDOBodyInstance(class UWorld* World, const struct FTransform& tranx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.PrebuildCDOBodyInstance");

	UBuildingActorInterface_PrebuildCDOBodyInstance_Params params;
	params.World = World;
	params.tranx = tranx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.NonCullingBeginPlay
// (Native, Event, Public, BlueprintEvent)

void UBuildingActorInterface::NonCullingBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.NonCullingBeginPlay");

	UBuildingActorInterface_NonCullingBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.MaxUnderWaterBuildDepth
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildingActorInterface::MaxUnderWaterBuildDepth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.MaxUnderWaterBuildDepth");

	UBuildingActorInterface_MaxUnderWaterBuildDepth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.IsEnableOverlayPlace
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::IsEnableOverlayPlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsEnableOverlayPlace");

	UBuildingActorInterface_IsEnableOverlayPlace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.IsAutoPickValidPlace
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::IsAutoPickValidPlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsAutoPickValidPlace");

	UBuildingActorInterface_IsAutoPickValidPlace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.HandleBuildingDestroyed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingActorInterface::HandleBuildingDestroyed(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.HandleBuildingDestroyed");

	UBuildingActorInterface_HandleBuildingDestroyed_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.HandleBuildingConstructed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingActorInterface::HandleBuildingConstructed(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.HandleBuildingConstructed");

	UBuildingActorInterface_HandleBuildingConstructed_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorInterface.GetWorldSnapSetup
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FBuildingActorWorldSnapSetup ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBuildingActorWorldSnapSetup UBuildingActorInterface::GetWorldSnapSetup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetWorldSnapSetup");

	UBuildingActorInterface_GetWorldSnapSetup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetVisibilitySkipTypes
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UBuildingActorInterface::GetVisibilitySkipTypes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetVisibilitySkipTypes");

	UBuildingActorInterface_GetVisibilitySkipTypes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetToleraceDistance
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildingActorInterface::GetToleraceDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetToleraceDistance");

	UBuildingActorInterface_GetToleraceDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetProhibitedActorTemplateList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UBuildingActorInterface::GetProhibitedActorTemplateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetProhibitedActorTemplateList");

	UBuildingActorInterface_GetProhibitedActorTemplateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectPath
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftObjectPath UBuildingActorInterface::GetPreBuildingEffectPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectPath");

	UBuildingActorInterface_GetPreBuildingEffectPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetOverlayPlaceHeight
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildingActorInterface::GetOverlayPlaceHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetOverlayPlaceHeight");

	UBuildingActorInterface_GetOverlayPlaceHeight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetMaxTraceDepth
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildingActorInterface::GetMaxTraceDepth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetMaxTraceDepth");

	UBuildingActorInterface_GetMaxTraceDepth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetMaxDeviation
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuildingActorInterface::GetMaxDeviation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetMaxDeviation");

	UBuildingActorInterface_GetMaxDeviation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetDestroyedParticleTransformOffset
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UBuildingActorInterface::GetDestroyedParticleTransformOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDestroyedParticleTransformOffset");

	UBuildingActorInterface_GetDestroyedParticleTransformOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetDensityParams
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBuildingActorDensityCheck ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBuildingActorDensityCheck UBuildingActorInterface::GetDensityParams(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDensityParams");

	UBuildingActorInterface_GetDensityParams_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetCustomBlockingChannels
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<TEnumAsByte<enum ECollisionChannel>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TEnumAsByte<enum ECollisionChannel>> UBuildingActorInterface::GetCustomBlockingChannels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetCustomBlockingChannels");

	UBuildingActorInterface_GetCustomBlockingChannels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetConstructingMode
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<enum EBuildingActorConstructingMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<enum EBuildingActorConstructingMode> UBuildingActorInterface::GetConstructingMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetConstructingMode");

	UBuildingActorInterface_GetConstructingMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetBuildingActorID
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBuildingActorInterface::GetBuildingActorID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetBuildingActorID");

	UBuildingActorInterface_GetBuildingActorID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxRotator
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBuildingActorInterface::GetActorCollisionBoxRotator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxRotator");

	UBuildingActorInterface_GetActorCollisionBoxRotator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxExtern
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBuildingActorInterface::GetActorCollisionBoxExtern()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxExtern");

	UBuildingActorInterface_GetActorCollisionBoxExtern_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxCenter
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBuildingActorInterface::GetActorCollisionBoxCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxCenter");

	UBuildingActorInterface_GetActorCollisionBoxCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.CanDoQuadTrace
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::CanDoQuadTrace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CanDoQuadTrace");

	UBuildingActorInterface_CanDoQuadTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.CanBuildUnderWater
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::CanBuildUnderWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CanBuildUnderWater");

	UBuildingActorInterface_CanBuildUnderWater_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorInterface.BPCheckPlacement
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              tranx                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingActorInterface::BPCheckPlacement(class UWorld* World, const struct FTransform& tranx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.BPCheckPlacement");

	UBuildingActorInterface_BPCheckPlacement_Params params;
	params.World = World;
	params.tranx = tranx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.BuildingActorMgr.OnBuildingActorSpawned
// (Final, Native, Public)
// Parameters:
// class AActor*                  InOwnerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABuildingActorBase*      InBuildingActor                (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorMgr::OnBuildingActorSpawned(class AActor* InOwnerActor, class ABuildingActorBase* InBuildingActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.OnBuildingActorSpawned");

	ABuildingActorMgr_OnBuildingActorSpawned_Params params;
	params.InOwnerActor = InOwnerActor;
	params.InBuildingActor = InBuildingActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorMgr.OnBuildingActorDestroyed
// (Final, Native, Public)
// Parameters:
// class ABuildingActorBase*      InBuildingActor                (Parm, ZeroConstructor, IsPlainOldData)

void ABuildingActorMgr::OnBuildingActorDestroyed(class ABuildingActorBase* InBuildingActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.OnBuildingActorDestroyed");

	ABuildingActorMgr_OnBuildingActorDestroyed_Params params;
	params.InBuildingActor = InBuildingActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.BuildingActorMgr.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ABuildingActorMgr*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABuildingActorMgr* ABuildingActorMgr::GetInstance(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.GetInstance");

	ABuildingActorMgr_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.SelectBuildActor.SetSelectActorTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)

void ASelectBuildActor::SetSelectActorTemplate(class UParticleSystem* Template)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorTemplate");

	ASelectBuildActor_SetSelectActorTemplate_Params params;
	params.Template = Template;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.SelectBuildActor.SetSelectActorPlacementEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           PlacementEnable                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void ASelectBuildActor::SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorPlacementEnable");

	ASelectBuildActor_SetSelectActorPlacementEnable_Params params;
	params.PlacementEnable = PlacementEnable;
	params.IsVisible = IsVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.SelectBuildActor.SetIsPlacementEnable
// (Final, Native, Public)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ASelectBuildActor::SetIsPlacementEnable(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetIsPlacementEnable");

	ASelectBuildActor_SetIsPlacementEnable_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.SelectBuildActor.OnParticleLoaded
// (Native, Event, Public, BlueprintEvent)

void ASelectBuildActor::OnParticleLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.OnParticleLoaded");

	ASelectBuildActor_OnParticleLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuildSystem.SelectBuildActor.IsCurrentPlacementEnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASelectBuildActor::IsCurrentPlacementEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.IsCurrentPlacementEnable");

	ASelectBuildActor_IsCurrentPlacementEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuildSystem.SelectBuildActor.GetIsPlacementEnable
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASelectBuildActor::GetIsPlacementEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.GetIsPlacementEnable");

	ASelectBuildActor_GetIsPlacementEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

