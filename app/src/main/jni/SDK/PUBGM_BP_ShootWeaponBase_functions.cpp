// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_ShootWeaponBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateSupportAttachments
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::UpdateSupportAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateSupportAttachments");

	ABP_ShootWeaponBase_C_UpdateSupportAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponShootLightEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::GetCurWeaponShootLightEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponShootLightEffect");

	ABP_ShootWeaponBase_C_GetCurWeaponShootLightEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetShineIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          deltaSecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::SetShineIntensity(float deltaSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetShineIntensity");

	ABP_ShootWeaponBase_C_SetShineIntensity_Params params;
	params.deltaSecond = deltaSecond;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetCurWeaponShine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AutoLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LightIntensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LightFreq                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::SetCurWeaponShine(float AutoLight, float LightIntensity, float LightFreq, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetCurWeaponShine");

	ABP_ShootWeaponBase_C_SetCurWeaponShine_Params params;
	params.AutoLight = AutoLight;
	params.LightIntensity = LightIntensity;
	params.LightFreq = LightFreq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponLightEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShootWeaponBase_C::GetCurWeaponLightEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponLightEffect");

	ABP_ShootWeaponBase_C_GetCurWeaponLightEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::GetCurWeaponMesh(class UMeshComponent** MeshComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponMesh");

	ABP_ShootWeaponBase_C_GetCurWeaponMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MeshComponent != nullptr)
		*MeshComponent = params.MeshComponent;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetColorByTeamID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_ShootWeaponBase_C::GetColorByTeamID(int* TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetColorByTeamID");

	ABP_ShootWeaponBase_C_GetColorByTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnMagDropDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnMagDropDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnMagDropDown");

	ABP_ShootWeaponBase_C_OnMagDropDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnHideDropDownMag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnHideDropDownMag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnHideDropDownMag");

	ABP_ShootWeaponBase_C_OnHideDropDownMag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnWeaponMagIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn");

	ABP_ShootWeaponBase_C_OnWeaponMagIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnWeaponMagOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut");

	ABP_ShootWeaponBase_C_OnWeaponMagOut_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BeginRegReloadEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent");

	ABP_ShootWeaponBase_C_BeginRegReloadEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          PlayerMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::BP_PawnAttachMesh(class UMeshComponent** PlayerMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh");

	ABP_ShootWeaponBase_C_BP_PawnAttachMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerMesh != nullptr)
		*PlayerMesh = params.PlayerMesh;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BP_OnWeaponReloadStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart");

	ABP_ShootWeaponBase_C_BP_OnWeaponReloadStart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BP_OnWeaponReloadEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd");

	ABP_ShootWeaponBase_C_BP_OnWeaponReloadEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::ResetCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera");

	ABP_ShootWeaponBase_C_ResetCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript");

	ABP_ShootWeaponBase_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX
// (Event, Public, BlueprintEvent)

void ABP_ShootWeaponBase_C::PlayLocalShellDropFX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX");

	ABP_ShootWeaponBase_C_PlayLocalShellDropFX_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.EventOnMagDropDown
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::EventOnMagDropDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.EventOnMagDropDown");

	ABP_ShootWeaponBase_C_EventOnMagDropDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EEndPlayReason>* EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveEndPlay");

	ABP_ShootWeaponBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnClientShootPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnClientShootPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnClientShootPlayer");

	ABP_ShootWeaponBase_C_OnClientShootPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StartFire
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::StartFire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StartFire");

	ABP_ShootWeaponBase_C_StartFire_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_ShootWeaponBase_C::BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature");

	ABP_ShootWeaponBase_C_BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnFireHitServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ShootWeaponBase_C::OnFireHitServer(class ASTExtraWeapon* Weapon, const struct FVector& HitPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnFireHitServer");

	ABP_ShootWeaponBase_C_OnFireHitServer_Params params;
	params.Weapon = Weapon;
	params.HitPoint = HitPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShootWeaponBase_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay");

	ABP_ShootWeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateWeaponAvatar
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::UpdateWeaponAvatar(float* DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateWeaponAvatar");

	ABP_ShootWeaponBase_C_UpdateWeaponAvatar_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ShootWeaponBase_C::BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature(int SlotID, const struct FItemDefineID& NewItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature");

	ABP_ShootWeaponBase_C_BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StopFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType>* ToState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::StopFire(TEnumAsByte<enum EFreshWeaponStateType>* ToState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StopFire");

	ABP_ShootWeaponBase_C_StopFire_Params params;
	params.ToState = ToState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::ExecuteUbergraph_BP_ShootWeaponBase(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase");

	ABP_ShootWeaponBase_C_ExecuteUbergraph_BP_ShootWeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

