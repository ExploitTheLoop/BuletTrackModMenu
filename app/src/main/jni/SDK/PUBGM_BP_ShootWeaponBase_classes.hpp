#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_ShootWeaponBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C
// 0x00B1 (0x0DC1 - 0x0D10)
class ABP_ShootWeaponBase_C : public ASTExtraShootWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D10(0x0004) (Transient, DuplicateTransient)
	class UMultiBulletComponent*                       MultiBullet;                                              // 0x0D14(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponAvatarComp_BP_C*                      WeaponAvatarComp_BP;                                      // 0x0D18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCndComponent*                         CustomCnd;                                                // 0x0D1C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x0D20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletHitInfoUploadComponent*               BulletHitInfoUpload;                                      // 0x0D24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrossHairComponent*                         Crosshair;                                                // 0x0D28(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEntity*                          ShootWeaponEntity;                                        // 0x0D2C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x0D30(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoBulletWeaponState*                        NoBulletWeaponState;                                      // 0x0D34(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFireWeaponState*                            FireWeaponState;                                          // 0x0D38(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReloadWeaponState*                          ReloadWeaponState;                                        // 0x0D3C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIdleWeaponState*                            IdleWeaponState;                                          // 0x0D40(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInactiveWeaponState*                        InactiveWeaponState;                                      // 0x0D44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponStateManager*                    ShootWeaponStateManager;                                  // 0x0D48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEffectComponent*                 ShootWeaponEffect;                                        // 0x0D4C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletTrackComponent*                       BulletTrack;                                              // 0x0D50(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTEShootWeaponProjectComponent*             STEShootWeaponProject;                                    // 0x0D54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim;                                             // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D59(0x0003) MISSED OFFSET
	float                                              FOV;                                                      // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              normalShotVoiceDis;                                       // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlienceShotVoiceDis;                                      // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              MagComp;                                                  // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D6C(0x0004) MISSED OFFSET
	struct FName                                       MagCompAttachSocket;                                      // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADropDownWeaponMag_C*                        DropDownMag;                                              // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	struct FTimerHandle                                DropDownMagTimerHandle;                                   // 0x0D80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MagDropDownDelay;                                         // 0x0D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagDropDownOffset;                                        // 0x0D8C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagDropDownEnable;                                        // 0x0D98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D99(0x0003) MISSED OFFSET
	float                                              MagDropDownHideDelay;                                     // 0x0D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagInShownDelay;                                          // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShineIntensity;                                           // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootState;                                               // 0x0DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0DA9(0x0003) MISSED OFFSET
	float                                              totalDeltaSeconds;                                        // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkLightEffect;                                         // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ShellDropRot;                                             // 0x0DB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttachMagToMoveablePlat;                                // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C");
		return pStaticClass;
	}


	void UpdateSupportAttachments();
	void GetCurWeaponShootLightEffect();
	void SetShineIntensity(float deltaSecond);
	void SetCurWeaponShine(float AutoLight, float LightIntensity, float LightFreq, bool* Success);
	void GetCurWeaponLightEffect();
	void GetCurWeaponMesh(class UMeshComponent** MeshComponent);
	struct FLinearColor GetColorByTeamID(int* TeamID);
	void OnMagDropDown();
	void OnHideDropDownMag();
	void OnWeaponMagIn();
	void OnWeaponMagOut();
	void BeginRegReloadEvent();
	void BP_PawnAttachMesh(class UMeshComponent** PlayerMesh);
	void BP_OnWeaponReloadStart();
	void BP_OnWeaponReloadEnd();
	void ResetCamera();
	void UserConstructionScript();
	void PlayLocalShellDropFX();
	void EventOnMagDropDown();
	void ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason);
	void OnClientShootPlayer();
	void StartFire();
	void BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature();
	void OnFireHitServer(class ASTExtraWeapon* Weapon, const struct FVector& HitPoint);
	void ReceiveBeginPlay();
	void UpdateWeaponAvatar(float* DeltaTime);
	void BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature(int SlotID, const struct FItemDefineID& NewItemID);
	void StopFire(TEnumAsByte<enum EFreshWeaponStateType>* ToState);
	void ExecuteUbergraph_BP_ShootWeaponBase(int EntryPoint);
};


}

