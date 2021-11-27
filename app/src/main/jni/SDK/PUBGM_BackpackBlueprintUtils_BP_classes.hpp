#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BackpackBlueprintUtils_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C
// 0x01CC (0x0D54 - 0x0B88)
class UBackpackBlueprintUtils_BP_C : public UBackpackBlueprintUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B88(0x0004) (Transient, DuplicateTransient)
	TArray<struct FBattleItemAdditionalData>           EmptyAdditionalData;                                      // 0x0B8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FItemAssociation>        EmptyAssociationMap;                                      // 0x0B98(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemAssociation>                    EmptyAssociationArray;                                    // 0x0BD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, EAvatarSlotType>                         EquipmentID2SlotID_Map;                                   // 0x0BE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentBagID2Level_Map;                                 // 0x0C1C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentHelmetID2Level_Map;                              // 0x0C58(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentArmorID2Level_Map;                               // 0x0C94(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        GhillieSuitItem;                                          // 0x0CD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     GrenadeTypeToPriority;                                    // 0x0CDC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     CacheItemId2BagLevelMap;                                  // 0x0D18(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C");
		return pStaticClass;
	}


	int GetCustomPickupItemCountByDefineID(class UBackpackComponent** BackpackComp, struct FItemDefineID* DefineID, struct FJudgePickupUsefulItem* JudgePickUseful);
	class UClass* GetBattleItemHandleClass(struct FItemDefineID* DefineID);
	bool CanNotAutoSwitchToGrenade(int* InGrenadeID);
	void PreModifyPickupSettingData(class USettingConfig_C* SettingConfig);
	bool IsConsumableMissionItemType(int* ItemId);
	int GetGrenadePriorityByType(int* InGrenadeType);
	bool IsIceDrinkEmoteIDInBackpack(int* InItemID, int* InEmoteID);
	bool IsEquipmentItem(int* ItemId);
	class UBattleItemHandleBase* CreateVirtualItemHandle(class UObject** Outer, struct FItemDefineID* DefineID);
	int GetPendantIDByWeaponID(int* WeaponId);
	int GetWeaponSkinMappingID(int* InWeaponSkinID);
	bool GetItemOperationSoundAndBank(int* ItemSoundID, EBattleItemOperationType* ItemOperation, struct FString* OutBankName, struct FString* OutSoundName);
	bool IsGlideItemType(int* ItemId);
	bool IsGhillieSuitItemType(int* ItemId);
	int GetEquipmentBagLevel(int* ItemId);
	int GetEquipmentLevel(int* ItemId);
	bool Is3BackpackID(int* ID);
	bool IsInPveMode();
	void IsPVEMode(bool* Out);
	void GetEquipmentSkinIDByAvatar(int InItemID, const struct FGameModePlayerEquipmentAvatar& EquipmentAvatar, int* SkinItemID);
	void ModifySetting();
	void ModifyPickupSetting();
	void ModifyBulletAndMedician();
	int GetBPIDByResID(int* resID);
	void AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType socket);
	void InitItemTable();
	struct FString GetBattleItemHandlePath(bool* bLobby, bool* bForceLobby, struct FItemDefineID* DefineID);
	struct FString GetRawBattleTextByRawTextID(int* ID);
	struct FString GetRawBattleTextByType(EBattleTextType* Type, int* InSubType);
	int GetItemSubTypeID(int* SpecificID);
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID);
	void GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID);
	bool IsVirtualItemData(struct FBattleItemData* ItemData);
	class UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp);
	void CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, bool bLobby, class UBattleItemHandleBase** BattleItemHandle);
	void GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* CreateBattleItemHandle(class UObject** Outer, bool* bLobby, struct FItemDefineID* DefineID);
	struct FBattleItemData GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp);
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int* ItemTableID);
	struct FBattleItemData ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID);
	void GetItemTableRowByItemTableID(int ID, struct FItemRecordData* ItemTableRow);
	void AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character);
	void InitialItemTable();
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint);
};


}

