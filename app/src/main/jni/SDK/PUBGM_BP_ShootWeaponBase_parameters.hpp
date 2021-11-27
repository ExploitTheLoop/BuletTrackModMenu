#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_ShootWeaponBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateSupportAttachments
struct ABP_ShootWeaponBase_C_UpdateSupportAttachments_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponShootLightEffect
struct ABP_ShootWeaponBase_C_GetCurWeaponShootLightEffect_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetShineIntensity
struct ABP_ShootWeaponBase_C_SetShineIntensity_Params
{
	float                                              deltaSecond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.SetCurWeaponShine
struct ABP_ShootWeaponBase_C_SetCurWeaponShine_Params
{
	float                                              AutoLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightFreq;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponLightEffect
struct ABP_ShootWeaponBase_C_GetCurWeaponLightEffect_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetCurWeaponMesh
struct ABP_ShootWeaponBase_C_GetCurWeaponMesh_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.GetColorByTeamID
struct ABP_ShootWeaponBase_C_GetColorByTeamID_Params
{
	int*                                               TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnMagDropDown
struct ABP_ShootWeaponBase_C_OnMagDropDown_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnHideDropDownMag
struct ABP_ShootWeaponBase_C_OnHideDropDownMag_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn
struct ABP_ShootWeaponBase_C_OnWeaponMagIn_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut
struct ABP_ShootWeaponBase_C_OnWeaponMagOut_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent
struct ABP_ShootWeaponBase_C_BeginRegReloadEvent_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh
struct ABP_ShootWeaponBase_C_BP_PawnAttachMesh_Params
{
	class UMeshComponent*                              PlayerMesh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart
struct ABP_ShootWeaponBase_C_BP_OnWeaponReloadStart_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd
struct ABP_ShootWeaponBase_C_BP_OnWeaponReloadEnd_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera
struct ABP_ShootWeaponBase_C_ResetCamera_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript
struct ABP_ShootWeaponBase_C_UserConstructionScript_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX
struct ABP_ShootWeaponBase_C_PlayLocalShellDropFX_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.EventOnMagDropDown
struct ABP_ShootWeaponBase_C_EventOnMagDropDown_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveEndPlay
struct ABP_ShootWeaponBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<enum EEndPlayReason>*                  EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnClientShootPlayer
struct ABP_ShootWeaponBase_C_OnClientShootPlayer_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StartFire
struct ABP_ShootWeaponBase_C_StartFire_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature
struct ABP_ShootWeaponBase_C_BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnFireHitServer
struct ABP_ShootWeaponBase_C_OnFireHitServer_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay
struct ABP_ShootWeaponBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UpdateWeaponAvatar
struct ABP_ShootWeaponBase_C_UpdateWeaponAvatar_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature
struct ABP_ShootWeaponBase_C_BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.StopFire
struct ABP_ShootWeaponBase_C_StopFire_Params
{
	TEnumAsByte<enum EFreshWeaponStateType>*           ToState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase
struct ABP_ShootWeaponBase_C_ExecuteUbergraph_BP_ShootWeaponBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

