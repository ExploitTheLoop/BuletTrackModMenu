#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyModelShowActorBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyModelShowActorBP.LobbyModelShowActorBP_C
// 0x01E4 (0x0554 - 0x0370)
class ALobbyModelShowActorBP_C : public ALuaActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0004) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponMatTimeline_time_492B8511488AA34B66EFCEB09ACAE5EE;  // 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               WeaponMatTimeline__Direction_492B8511488AA34B66EFCEB09ACAE5EE;// 0x0388(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WeaponMatTimeline;                                        // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UWeaponAvatarComponent*                      WeaponAvatarComponent;                                    // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               press;                                                    // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x039A(0x0002) MISSED OFFSET
	float                                              LocationX;                                                // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAutoRotateZ;                                           // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              zRotateSpeed;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationY;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canAutoRotateX;                                           // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	float                                              backTime;                                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              curBackTime;                                              // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              disinteractDis;                                           // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              yIntensity;                                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              yDisinteractRatio;                                        // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              originX;                                                  // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              originY;                                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               alreadyRotate;                                            // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               alreadyRotateY;                                           // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRotateBack;                                            // 0x03CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x03CF(0x0001) MISSED OFFSET
	int                                                ShowType;                                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               needXRotation;                                            // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class ACharacter*                                  PlaneCharacter;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              XRotateMin;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XRotateMax;                                               // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YRotateMin;                                               // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YRotateMax;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentItemID;                                            // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Lobby_Grenade_C*                         grenadeActor;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               isTouching;                                               // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	TArray<struct FVector>                             projectilePredictArray;                                   // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                projectileTickIndex;                                      // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              xRotateSpeed;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachPointDefaultRotate;                                 // 0x040C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ALobbyModelCommonActorBP_C*                  bagWidgetActor;                                           // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_LobbyVehicle_C*                          VehicleActor;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               canRotate;                                                // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	int                                                curGrenadeIndex;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                spawnIndex;                                               // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, struct FShowActorData>                   ShowActorDataArray;                                       // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_LobbyVehicle_C*                          refitVehicleActor;                                        // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALobbyModelCommonActorBP_C*                  parachuteActor;                                           // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                curVehicleIndex;                                          // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             ExtraData;                                                // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               EnableInput_2;                                            // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateBackZ;                                              // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	class ALobbyModelShowActorBP_C*                    nextShowActor;                                            // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAsyncLoading;                                           // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               weaponDynMatChanged;                                      // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	class ALobbyModelCommonActorBP_C*                  icon3DActor;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3C];                                      // 0x04C4(0x003C) UNKNOWN PROPERTY: SetProperty LobbyModelShowActorBP.LobbyModelShowActorBP_C.HasShakeEffectItem
	class ALobbyModelCommonActorBP_C*                  bagActor;                                                 // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FBP_STRUCT_WeaponMatParamCfg_type           WeaponMatParam;                                           // 0x0504(0x004C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MatAlpha;                                                 // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyModelShowActorBP.LobbyModelShowActorBP_C");
		return pStaticClass;
	}


	void DetachSuperCarAttachToAttachPoint();
	void OnAsyncReadyLua();
	void DestroyContentsInLua();
	void GetLoadedClass(int ID, class UClass** AsBattle_Item_Handle_Base, bool* Success);
	void TryShowModel(int resID, int BPID, bool bIgnoreDownload);
	void PreChangeWeaponAvatar(int resID, int BPID);
	void TriggerDownloadRes(int ItemId, int BPID);
	void CreaetAndSetWeaponDynamicMat();
	void ShowBag(int commonActorResId);
	void SetHolderBack();
	void SetCastShadow(bool CastShadow);
	void MakeShowTypeCanRotateBack();
	void ProcessIcon3DAttachTexture();
	void OnIcon3dAsyncReady();
	void ShowIcon3D(int resID, bool isSync);
	void ShowIcon3dAsycOrSync(int resID);
	void DestroyAllContent();
	void UpdateWeaponMatParam(float Alpha);
	void GetRotateSpeed(float DeltaX, float DeltaY, float* Speed);
	void UpdateWeaponMat(float RotateSpeed);
	void OnParachuteAsyncReady();
	void OnBagWidgetAsyncReady();
	void OnWeaponAsyncReady();
	void OnPlaneAsyncReady();
	void ProcessNextActor();
	void OnDIYWeaponDecalFinish(int RequestID, class UTextureRenderTarget2D* RT);
	void SetDIYDecalNumPerFrame(bool isSync, int Num);
	void SetRotateBackZ(bool rotateZ);
	void SetWeaponCollision(const struct FString& Asset);
	void SetCanTouchRotate(bool canRotate);
	void SetWeaponPendantSocketType(EWeaponPendantSocketType Type);
	void GetSocketTransform(int ShowType, const struct FString& SocketName, struct FTransform* Transform);
	void ShowBagWidgetAsycOrSync(int resID);
	void ShowParachuteAsycOrSync(int resID);
	void GetComponentPosition(int SlotID, struct FVector* Location);
	void OnRefitVehicleAsyncReady();
	void UpdateCapsuleSize(float HalfHeight, float Radius);
	void DestroyForType(int exceptType);
	void OnVehicleAsyncReady();
	void OnGrenadeAsyncReady();
	void ShowModel(int resID, int BPID);
	void ShowParachute(int resID, bool isSync);
	void ShowRefitVehicle(int VehicleID);
	void SetShowActorLocationRotation(int resID);
	void OnAsyncReady();
	void ModelSimulatePhysics();
	void TryRotate(float* DeltaX, float* DeltaY);
	void MakeRotation(float newLocationX, float newLocationY, float* RotationX, float* RotationY, float* RotationZ);
	void AttachModelCenter(int CameraID);
	void GetShowTypeByItemType(int resID, int itemType, int ItemSubType, int* Type);
	void ShowVehicle(int VehicleID);
	void RecordTmpVar(int resID, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needXRotation, bool CanAutoRotateZ, bool CanRotateBack, bool canRotate, const struct FString& ExtraData);
	void ShowWeapon(int resID, int BPID);
	void ShowPlane(int resID);
	struct FTransform MakeSpawnTransform(float ActorScale, const struct FString& ModelOffset);
	void ShowBagWidget(int resID, bool isSync);
	void ShowGrenade(int resID);
	void GetAttachPoint(class AActor** attachPoint);
	void ResetAttachPointRotate();
	void DetachFromAttachPoint();
	void AttachToAttachPoint();
	void OnParticleSystemFinish(class UParticleSystemComponent* NewParam);
	void XAutoRotate();
	void TickProjectileEffect();
	void PlayParticleEffect(const struct FVector& Location);
	void PlayProjectileEffect();
	void IsModelValid(bool* Valid);
	void GetBaseItemHBClass(bool* NewParam, class UClass** AsBattle_Item_Handle_Base);
	void StopAkEvent();
	void UpdateRotateLimit(const struct FString& XRotateLimit, const struct FString& YRotateLimit);
	void UpdateShowType(int resID, int itemType, int ItemSubType);
	void SetTouchStatus(bool Can);
	void SetRotateBackStatus(bool Can);
	void NeedRotateY(float X, float Y, bool* need);
	void NeedRotate(float X, float Y, bool* need);
	void RotateBack(float Delta);
	void ZAutoRotate();
	void DestroyWeaponActor();
	void GetItemSubType(int RowNum, int* SubType);
	void GetBPID(int RowName, int* BPID, int* itemType, int* ItemSubType);
	void PutOffEquipmentByResID(int resID);
	void PutOnEquipmentByResID(int resID, bool* Ret);
	void ShowModelByResid(int resID, float XOffset, const struct FRotator& Rotator, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needResetAutoRotation, bool needXRotation, float ActorScale, const struct FString& XRotateLimit, const struct FString& YRotateLimit, const struct FString& ModelOffset, bool canAutoRotate, bool CanRotateBack, bool canRotate, const struct FRotator& InitRotate, const struct FString& ExtraData);
	void UserConstructionScript();
	void WeaponMatTimeline__FinishedFunc();
	void WeaponMatTimeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ReceiveDestroyed();
	void Projectile(float X, float Y, float Z);
	void TickWeaponMat(float fromShake, float toShake);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LobbyModelShowActorBP(int EntryPoint);
};


}

