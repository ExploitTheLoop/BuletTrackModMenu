#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C
// 0x0058 (0x0808 - 0x07B0)
class ABP_LobbyWeapon_C : public ASTExtraLobbyWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B0(0x0004) (Transient, DuplicateTransient)
	class UWeaponAvatarComp_BP_C*                      WeaponAvatarComp_BP;                                      // 0x07B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldBack;                                                // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	TMap<struct FString, struct FTransform>            WeaponAttachRelativeTransformMap;                         // 0x07BC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WeaponMeshAndMatLoaded;                                   // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAnimLoaded;                                         // 0x07F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07FA(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponAllAssetsLoaded;                                  // 0x07FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C");
		return pStaticClass;
	}


	void RequestWeaponDIYData(const struct FString& PlayerUID, int WeaponAvatarID, int DIYPlanID);
	void EquipWeaponPandentByPandentId(int pendantID, EWeaponPendantSocketType PendantSocketType);
	void OnAsyncLoadLobbyWeaponAnimDone();
	void CheckWeaponAssetsAllLoaded();
	void ResetWeaponLoadedStatus();
	void OnAsyncLoadLobbyWeaponMeshDone();
	struct FTransform GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby(int* Level, int* SideType);
	void InitMesh(class UBattleItemHandleBase* Handle);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyWeapon(int EntryPoint);
	void OnWeaponAllAssetsLoaded__DelegateSignature(class ABP_LobbyWeapon_C* BPLobbyWeapon);
};


}

