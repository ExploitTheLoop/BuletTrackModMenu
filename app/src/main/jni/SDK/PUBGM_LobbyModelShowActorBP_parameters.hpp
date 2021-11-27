#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyModelShowActorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachSuperCarAttachToAttachPoint
struct ALobbyModelShowActorBP_C_DetachSuperCarAttachToAttachPoint_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReadyLua
struct ALobbyModelShowActorBP_C_OnAsyncReadyLua_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyContentsInLua
struct ALobbyModelShowActorBP_C_DestroyContentsInLua_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetLoadedClass
struct ALobbyModelShowActorBP_C_GetLoadedClass_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AsBattle_Item_Handle_Base;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryShowModel
struct ALobbyModelShowActorBP_C_TryShowModel_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDownload;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PreChangeWeaponAvatar
struct ALobbyModelShowActorBP_C_PreChangeWeaponAvatar_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TriggerDownloadRes
struct ALobbyModelShowActorBP_C_TriggerDownloadRes_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.CreaetAndSetWeaponDynamicMat
struct ALobbyModelShowActorBP_C_CreaetAndSetWeaponDynamicMat_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBag
struct ALobbyModelShowActorBP_C_ShowBag_Params
{
	int                                                commonActorResId;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetHolderBack
struct ALobbyModelShowActorBP_C_SetHolderBack_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCastShadow
struct ALobbyModelShowActorBP_C_SetCastShadow_Params
{
	bool                                               CastShadow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeShowTypeCanRotateBack
struct ALobbyModelShowActorBP_C_MakeShowTypeCanRotateBack_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessIcon3DAttachTexture
struct ALobbyModelShowActorBP_C_ProcessIcon3DAttachTexture_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnIcon3dAsyncReady
struct ALobbyModelShowActorBP_C_OnIcon3dAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3D
struct ALobbyModelShowActorBP_C_ShowIcon3D_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3dAsycOrSync
struct ALobbyModelShowActorBP_C_ShowIcon3dAsycOrSync_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyAllContent
struct ALobbyModelShowActorBP_C_DestroyAllContent_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMatParam
struct ALobbyModelShowActorBP_C_UpdateWeaponMatParam_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetRotateSpeed
struct ALobbyModelShowActorBP_C_GetRotateSpeed_Params
{
	float                                              DeltaX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMat
struct ALobbyModelShowActorBP_C_UpdateWeaponMat_Params
{
	float                                              RotateSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParachuteAsyncReady
struct ALobbyModelShowActorBP_C_OnParachuteAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnBagWidgetAsyncReady
struct ALobbyModelShowActorBP_C_OnBagWidgetAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnWeaponAsyncReady
struct ALobbyModelShowActorBP_C_OnWeaponAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnPlaneAsyncReady
struct ALobbyModelShowActorBP_C_OnPlaneAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessNextActor
struct ALobbyModelShowActorBP_C_ProcessNextActor_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnDIYWeaponDecalFinish
struct ALobbyModelShowActorBP_C_OnDIYWeaponDecalFinish_Params
{
	int                                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RT;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetDIYDecalNumPerFrame
struct ALobbyModelShowActorBP_C_SetDIYDecalNumPerFrame_Params
{
	bool                                               isSync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackZ
struct ALobbyModelShowActorBP_C_SetRotateBackZ_Params
{
	bool                                               rotateZ;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponCollision
struct ALobbyModelShowActorBP_C_SetWeaponCollision_Params
{
	struct FString                                     Asset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCanTouchRotate
struct ALobbyModelShowActorBP_C_SetCanTouchRotate_Params
{
	bool                                               canRotate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponPendantSocketType
struct ALobbyModelShowActorBP_C_SetWeaponPendantSocketType_Params
{
	EWeaponPendantSocketType                           Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetSocketTransform
struct ALobbyModelShowActorBP_C_GetSocketTransform_Params
{
	int                                                ShowType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidgetAsycOrSync
struct ALobbyModelShowActorBP_C_ShowBagWidgetAsycOrSync_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachuteAsycOrSync
struct ALobbyModelShowActorBP_C_ShowParachuteAsycOrSync_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetComponentPosition
struct ALobbyModelShowActorBP_C_GetComponentPosition_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnRefitVehicleAsyncReady
struct ALobbyModelShowActorBP_C_OnRefitVehicleAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateCapsuleSize
struct ALobbyModelShowActorBP_C_UpdateCapsuleSize_Params
{
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyForType
struct ALobbyModelShowActorBP_C_DestroyForType_Params
{
	int                                                exceptType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnVehicleAsyncReady
struct ALobbyModelShowActorBP_C_OnVehicleAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnGrenadeAsyncReady
struct ALobbyModelShowActorBP_C_OnGrenadeAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModel
struct ALobbyModelShowActorBP_C_ShowModel_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachute
struct ALobbyModelShowActorBP_C_ShowParachute_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowRefitVehicle
struct ALobbyModelShowActorBP_C_ShowRefitVehicle_Params
{
	int                                                VehicleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetShowActorLocationRotation
struct ALobbyModelShowActorBP_C_SetShowActorLocationRotation_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReady
struct ALobbyModelShowActorBP_C_OnAsyncReady_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ModelSimulatePhysics
struct ALobbyModelShowActorBP_C_ModelSimulatePhysics_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryRotate
struct ALobbyModelShowActorBP_C_TryRotate_Params
{
	float                                              DeltaX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeRotation
struct ALobbyModelShowActorBP_C_MakeRotation_Params
{
	float                                              newLocationX;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              newLocationY;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RotationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RotationZ;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachModelCenter
struct ALobbyModelShowActorBP_C_AttachModelCenter_Params
{
	int                                                CameraID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetShowTypeByItemType
struct ALobbyModelShowActorBP_C_GetShowTypeByItemType_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowVehicle
struct ALobbyModelShowActorBP_C_ShowVehicle_Params
{
	int                                                VehicleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RecordTmpVar
struct ALobbyModelShowActorBP_C_RecordTmpVar_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZSpeed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              backTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              disinteractDis;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YdisRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              yIntensity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               needXRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAutoRotateZ;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanRotateBack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canRotate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowWeapon
struct ALobbyModelShowActorBP_C_ShowWeapon_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowPlane
struct ALobbyModelShowActorBP_C_ShowPlane_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeSpawnTransform
struct ALobbyModelShowActorBP_C_MakeSpawnTransform_Params
{
	float                                              ActorScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModelOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidget
struct ALobbyModelShowActorBP_C_ShowBagWidget_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSync;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowGrenade
struct ALobbyModelShowActorBP_C_ShowGrenade_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetAttachPoint
struct ALobbyModelShowActorBP_C_GetAttachPoint_Params
{
	class AActor*                                      attachPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ResetAttachPointRotate
struct ALobbyModelShowActorBP_C_ResetAttachPointRotate_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachFromAttachPoint
struct ALobbyModelShowActorBP_C_DetachFromAttachPoint_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachToAttachPoint
struct ALobbyModelShowActorBP_C_AttachToAttachPoint_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParticleSystemFinish
struct ALobbyModelShowActorBP_C_OnParticleSystemFinish_Params
{
	class UParticleSystemComponent*                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.XAutoRotate
struct ALobbyModelShowActorBP_C_XAutoRotate_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickProjectileEffect
struct ALobbyModelShowActorBP_C_TickProjectileEffect_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayParticleEffect
struct ALobbyModelShowActorBP_C_PlayParticleEffect_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayProjectileEffect
struct ALobbyModelShowActorBP_C_PlayProjectileEffect_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.IsModelValid
struct ALobbyModelShowActorBP_C_IsModelValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBaseItemHBClass
struct ALobbyModelShowActorBP_C_GetBaseItemHBClass_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AsBattle_Item_Handle_Base;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.StopAkEvent
struct ALobbyModelShowActorBP_C_StopAkEvent_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateRotateLimit
struct ALobbyModelShowActorBP_C_UpdateRotateLimit_Params
{
	struct FString                                     XRotateLimit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     YRotateLimit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateShowType
struct ALobbyModelShowActorBP_C_UpdateShowType_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetTouchStatus
struct ALobbyModelShowActorBP_C_SetTouchStatus_Params
{
	bool                                               Can;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackStatus
struct ALobbyModelShowActorBP_C_SetRotateBackStatus_Params
{
	bool                                               Can;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotateY
struct ALobbyModelShowActorBP_C_NeedRotateY_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotate
struct ALobbyModelShowActorBP_C_NeedRotate_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RotateBack
struct ALobbyModelShowActorBP_C_RotateBack_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ZAutoRotate
struct ALobbyModelShowActorBP_C_ZAutoRotate_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyWeaponActor
struct ALobbyModelShowActorBP_C_DestroyWeaponActor_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetItemSubType
struct ALobbyModelShowActorBP_C_GetItemSubType_Params
{
	int                                                RowNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBPID
struct ALobbyModelShowActorBP_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOffEquipmentByResID
struct ALobbyModelShowActorBP_C_PutOffEquipmentByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOnEquipmentByResID
struct ALobbyModelShowActorBP_C_PutOnEquipmentByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModelByResid
struct ALobbyModelShowActorBP_C_ShowModelByResid_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              XOffset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ZSpeed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              backTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              disinteractDis;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YdisRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              yIntensity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               needResetAutoRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               needXRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ActorScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     XRotateLimit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     YRotateLimit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ModelOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               canAutoRotate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanRotateBack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canRotate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InitRotate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     ExtraData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UserConstructionScript
struct ALobbyModelShowActorBP_C_UserConstructionScript_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__FinishedFunc
struct ALobbyModelShowActorBP_C_WeaponMatTimeline__FinishedFunc_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__UpdateFunc
struct ALobbyModelShowActorBP_C_WeaponMatTimeline__UpdateFunc_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveTick
struct ALobbyModelShowActorBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
struct ALobbyModelShowActorBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct ALobbyModelShowActorBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveDestroyed
struct ALobbyModelShowActorBP_C_ReceiveDestroyed_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.Projectile
struct ALobbyModelShowActorBP_C_Projectile_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickWeaponMat
struct ALobbyModelShowActorBP_C_TickWeaponMat_Params
{
	float                                              fromShake;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              toShake;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveBeginPlay
struct ALobbyModelShowActorBP_C_ReceiveBeginPlay_Params
{
};

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ExecuteUbergraph_LobbyModelShowActorBP
struct ALobbyModelShowActorBP_C_ExecuteUbergraph_LobbyModelShowActorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

