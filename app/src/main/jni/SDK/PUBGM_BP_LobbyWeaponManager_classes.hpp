#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyWeaponManager.BP_LobbyWeaponManager_C
// 0x004C (0x0304 - 0x02B8)
class UBP_LobbyWeaponManager_C : public ULobbyWeaponManagerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0004) (Transient, DuplicateTransient)
	int                                                CurEquipWeaponID;                                         // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurUseWeaponID;                                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x02C4(0x003C) UNKNOWN PROPERTY: SetProperty BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.NoneLODModeWeapons
	int                                                ExactDeviceLevel;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyWeaponManager.BP_LobbyWeaponManager_C");
		return pStaticClass;
	}


	void UnEquipAllWeapon();
	void UnEquipAllExtraWeapon();
	void AsyncWeaponAllAssetsLoadFinish(class ABP_LobbyWeapon_C* BPLobbyWeapon);
	void AsyncWeaponMeshLoadFinish(class UAvatarDIYComponent* AvatarDIYComponent);
	void AsyncWeaponAnimLoadFinish(class ASTExtraLobbyWeapon* LobbyWeapon);
	void CheckWeaponNeedLODOptimize(int AvatarLevel, bool* bIsNeedLodOptimize);
	void CheckCanEquipWeapon(int resID, bool* canEquip);
	void EquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon);
	void UnEquipWeaponByResId(const struct FName& SocketName);
	void GetWeaponSocketNameByResId(int resID, struct FName* SocketName);
	void SetWeaponVisibility(bool bHide);
	void CreateWeapon(int inInt, class ASTExtraWeapon** Weapon, class UBattleItemHandleBase** Handle);
	class UClass* GetLobbyWeaponClass(int InWeaponAvatarID);
	class ASTExtraWeapon* CreateWeaponAndChangeSkin(int* WeaponSkinID, bool* bUse, bool* bSync);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyWeaponManager(int EntryPoint);
};


}

