#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CharacterAvatarComp2_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C
// 0x0080 (0x0BD0 - 0x0B50)
class UCharacterAvatarComp2_BP_C : public UCharacterAvatarComponent2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0004) (Transient, DuplicateTransient)
	class UBackpackAvatarItemColor*                    BasedAvatarColorHandle;                                   // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBackpackAvatarItemPattern*                  BasedAvatarPatternHandle;                                 // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        HoodClothSubTypeMap;                                      // 0x0B5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EBattleItemUseReason                               PreEquipClothReason;                                      // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0B69(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.MaleBatchBodySoftPath
	unsigned char                                      UnknownData02[0x28];                                      // 0x0B98(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.FemaleBatchBodySoftPath
	bool                                               bForbidBindAvatarEquippedEvent;                           // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	TArray<int>                                        NeedModifyVehicleID;                                      // 0x0BC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C");
		return pStaticClass;
	}


	void EnableAvatarAnimation(bool IsEnable);
	int GetRepalceIDOnVehicle(int* OriginID);
	EForceHideState GetForceHideState(int* InSlotID);
	EAvatarSlotNameConfig GetBPSlotNameConfigType(class UBackpackAvatarHandle** InAvatarHandle);
	bool IsEnableItemDownload(int* ItemId);
	struct FSoftObjectPath GetBatchDefaultBodyPath();
	bool HideHeadMesh(class UMeshComponent** MasterBoneComp, class USkeletalMesh** SkeletalMesh);
	bool PutOffEquimentByResID(int* resID);
	bool PutOnEquipmentByResID(int* resID);
	void IsNeedConsiderHairCut(int InSlotID, class UBackpackAvatarHandle* Handle, struct FItemDefineID* ItemDefineID, bool* Result);
	int GetFakeAvatarHandleItem_InDev(int* InSlotID, int* InItemID, int* AdditionalItemID);
	bool GenerateClientDefaultAvatar(class UBattleItemHandleBase** InAvatarHandle);
	bool BPClientPostProcessViewDataMiddle();
	void ProcessGodzillaSuit();
	bool IsItemHasMutilReplaceMesh(int* InSlotID, struct FItemDefineID* InItemID);
	bool IsUseDefaultReplaceModel(int* InSlotID, class UBackpackAvatarHandle** Handle, struct FItemDefineID* InItemDefineID);
	int GetFakeAvatarHandleItem(int* InSlotID, int* InItemID, int* AdditionalItemID);
	void CheckAvatarWhoHideWho(EAvatarSlotType SlotType, const struct FItemDefineID& resID, TArray<int>* HideSomeAvatar, TArray<int>* HideBySomeAvatar);
	void PutOnCustomEquipmentByID(int resID, int ColorID, int PatternID, bool* Result);
	void SetEquipmentPattern(EAvatarSlotType SlotType);
	void SetEquipmentColor(EAvatarSlotType SlotType, const struct FLinearColor& MaskColor1, const struct FLinearColor& MaskColor2, const struct FLinearColor& MaskColor3);
	class UBackpackAvatarItemPattern* CreateAvatarItemPattern(EAvatarSlotType* InSlotType, int* InPatternID);
	class UBackpackAvatarItemColor* CreateAvatarItemColor(EAvatarSlotType* InSlotType, int* InColorID);
	int GetEquipmentSkinItemID(int* InItemID);
	void Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	bool PutOnDefaultEquipment(class UBackpackAvatarHandle* ItemHandle);
	bool InitBodyMeshByHead(class UBackpackAvatarHandle** InAvatarHandle, struct FItemDefineID* InItemID);
	void ReceiveBeginPlay();
	void Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void PreHanleEquipCloth(struct FBattleItemUseTarget* Target, class UBackpackAvatarHandle** InAvatarHandle, EBattleItemUseReason* Reason);
	void ClearEventFromOnAvatarEquippedEvent();
	void ExecuteUbergraph_CharacterAvatarComp2_BP(int EntryPoint);
};


}

