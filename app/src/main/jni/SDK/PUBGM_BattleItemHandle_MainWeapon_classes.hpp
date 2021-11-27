#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_MainWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C
// 0x0118 (0x05F9 - 0x04E1)
class UBattleItemHandle_MainWeapon_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E4(0x0004) (Transient, DuplicateTransient)
	class UWeaponManagerComponent*                     WeaponManager;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	struct FName                                       socket;                                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot1Name;                                       // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot2Name;                                       // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, bool>            WeaponAttachmentSockTypeList;                             // 0x0524(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      BulletWrapperClass;                                       // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, class UBattleItemHandle_WeapAttachment_C*> EquipedWeapAttachments;                                   // 0x0564(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bResetInitBulletInBullet;                                 // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPistol;                                                // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05A2(0x0006) MISSED OFFSET
	struct FName                                       SubLogicSlotName;                                         // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBattleItemPickupInfo                       BattleIItemHandlePickInfo;                                // 0x05B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsAttachPendant;                                          // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C");
		return pStaticClass;
	}


	void AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array);
	void ReturnMultiBullet(int WantReturnCount);
	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass);
	void GetWeaponClass(bool* found, class UClass** WeaponClass);
	void CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle);
	void AutoEquipPendant();
	void EquipPendant(int pendantID);
	void CheckPendantCanAttach(bool* CanAttach);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void AutoEquipAttachments();
	void ReturnBullets(int Count);
	void UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void CreateWrapperOnGround();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* canEquip, bool* HasOcupied, bool* CanReplace);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	void ReturnAllBullets();
	void LocalAutoEquipAttachments();
	void ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint);
};


}

