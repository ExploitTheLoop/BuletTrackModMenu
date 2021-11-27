#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Basic.OnlyActorComponent
// 0x0008 (0x00D0 - 0x00C8)
class UOnlyActorComponent : public UActorComponent
{
public:
	unsigned char                                      bCanEverUpdate;                                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetActor
// 0x0008 (0x0378 - 0x0370)
class AUAENetActor : public ALuaActor
{
public:
	int                                                iRegionActor;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0374(0x0002) MISSED OFFSET
	bool                                               bStaticAddNetworkActor;                                   // 0x0376(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0377(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetActor");
		return pStaticClass;
	}

};


// Class Basic.UAEAnimListComponentBase
// 0x00B8 (0x0180 - 0x00C8)
class UUAEAnimListComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              // 0x0118(0x0050) (ZeroConstructor, Transient)
	TArray<class UAnimationAsset*>                     AnimationCatcheList;                                      // 0x0154(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0160(0x001C) MISSED OFFSET
	bool                                               bDisableAnimListOnDS;                                     // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x017D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return pStaticClass;
	}

};


// Class Basic.ItemHandleBase
// 0x006C (0x0088 - 0x001C)
class UItemHandleBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxCount;                                                 // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSingle;                                                  // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	TMap<struct FName, struct FItemAssociation>        AssociationMap;                                           // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0068(0x0018)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemHandleBase");
		return pStaticClass;
	}


	void SetAssociation(const struct FName& Name, const struct FItemAssociation& Association);
	void RemoveAssociation(const struct FName& Name);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<struct FName, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(const struct FName& Name);
	void Constuct(const struct FItemDefineID& InDefineID);
	void AddAssociation(const struct FName& Name, const struct FItemAssociation& Association);
};


// Class Basic.BattleItemHandleBase
// 0x0068 (0x00F0 - 0x0088)
class UBattleItemHandleBase : public UItemHandleBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0088(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEquipping;                                               // 0x00D4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     ItemStoreArea;                                            // 0x00D5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x00D8(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               bDropOnDead;                                              // 0x00E4(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	float                                              UnitWeight;                                               // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x00EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x00ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x00EE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00EF(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return pStaticClass;
	}


	void UpdateAttributeModify(bool bEnable);
	bool UnEquip();
	bool HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData);
	bool HanldeDropAssociationData();
	bool HanldeCleared();
	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason);
	bool HandleEnable(bool bEnable);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	bool HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea);
	bool HandleBindToTargetItem();
	class UWorld* GetWorldInternal();
	class UWorld* GetCurrentWorld();
	struct FBattleItemData ExtractItemData();
	void ClearAdditionalData();
	bool CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
};


// Class Basic.UAENetPoolActor
// 0x0038 (0x03B0 - 0x0378)
class AUAENetPoolActor : public AUAENetActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0378(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetPoolActor");
		return pStaticClass;
	}


	void OnBPRespawned();
	void OnBPRecycled();
};


// Class Basic.UAEBaseSkillCondition
// 0x0008 (0x00F8 - 0x00F0)
class UUAEBaseSkillCondition : public UUTSkillCondition
{
public:
	class APawn*                                       OwnerPawnForBuff;                                         // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEBaseSkillCondition");
		return pStaticClass;
	}

};


// Class Basic.DataProviderBase
// 0x0004 (0x0020 - 0x001C)
class UDataProviderBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DataProviderBase");
		return pStaticClass;
	}

};


// Class Basic.STBuffAction
// 0x001C (0x0038 - 0x001C)
class USTBuffAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TWeakObjectPtr<class USTBuff>                      OwnerBuff;                                                // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x002C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffAction");
		return pStaticClass;
	}


	void Tick(float DetalTime);
	void SetEnabled(bool Enabled);
	void ResetExecute(bool IgnoreEnd);
	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
	void Initialize();
	class USTBuff* GetOwnerBuff();
	class AActor* GetOwner();
	bool GetIsExecute();
	class AActor* GetCauser();
	void End();
	void Destroy();
	class USTBuffAction* CopyAction(class UObject* Outer);
	void ChangeNotify();
};


// Class Basic.STBuffCondition
// 0x0014 (0x0030 - 0x001C)
class USTBuffCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class USTBuffAction*                               OwnerAction;                                              // 0x0020(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTBuff*                                     OwnerBuff;                                                // 0x0024(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffCondition");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBaseBuffManager
// 0x010C (0x0128 - 0x001C)
class USTBaseBuffManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<class UClass*>                              BuffListTemplates;                                        // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, class USTBaseBuff*>                      BuffInstancedTemplateMap;                                 // 0x0034(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffManager");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffStatusType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffSystemComponent
// 0x0118 (0x01E0 - 0x00C8)
class USTBaseBuffSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00C8(0x003C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuffAttached;                                           // 0x0104(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuffDetached;                                           // 0x0110(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x011C(0x0040) MISSED OFFSET
	TArray<struct FUTBuffSynData>                      BuffSyncList;                                             // 0x015C(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     ServerBuffString;                                         // 0x0168(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              BuffSyncRemainingPeriod;                                  // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffInstancedItem>                  AllBuffs;                                                 // 0x0178(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0184(0x0008) MISSED OFFSET
	bool                                               isNeedCheckValidation;                                    // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x53];                                      // 0x018D(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffSystemComponent");
		return pStaticClass;
	}


	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	void ResetForDeath();
	void RepBuffSyncList();
	bool RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void RefreshAllBuffs();
	bool IsBufferMutexed(const struct FName& NewBuffName);
	bool HasBuffID(int BuffID);
	bool HasBuff(const struct FName& BuffName);
	class APawn* GetPawnOwner();
	struct FName GetBuffName(int BuffID);
	int GetBuffID(const struct FName& BuffName);
	float GetBuffExpiry(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	class AActor* GetActorOwner();
	void ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow);
	void ClearBuff(bool bDebuff, bool bGainBuff);
	bool CheckBuffStatus(class UClass* Status, bool* Value);
	void BuffDetached__DelegateSignature(const struct FName& BuffName);
	void BuffAttached__DelegateSignature(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	int AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor);
};


// Class Basic.STBaseBuffTriggerParam
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffTriggerParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffTriggerParam");
		return pStaticClass;
	}

};


// Class Basic.UAEGameInstance
// 0x0158 (0x0328 - 0x01D0)
class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           // 0x01D0(0x00E0)
	struct FScriptMulticastDelegate                    EnginePreTick;                                            // 0x02B0(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02BC(0x0020) MISSED OFFSET
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E0(0x0004) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x02E4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStandAloneFromLobby;                                     // 0x02E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1B];                                      // 0x02E9(0x001B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreBattleResult;                                        // 0x0304(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FString>                             HighWeatherNames;                                         // 0x0310(0x000C) (ZeroConstructor, Config)
	int                                                HighWeatherMinRenderQuality;                              // 0x031C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighWeatherMaxRenderQuality;                              // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0324(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEGameInstance");
		return pStaticClass;
	}


	void SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper);
	void OpenAssetLoadLog();
	void OnPreBattleResult__DelegateSignature();
	void LuaLeakDetect();
	void LuaDoString(const struct FString& LuaString);
	float GetWeatherTime();
	struct FString GetWeatherLevelName();
	int GetWeatherID();
	class ULuaStateWrapper* GetLuaStateWrapper();
	struct FString GetLoadWeatherName(const struct FString& InWeatherName);
	bool GetIsHighWeatherLevel(const struct FString& InWeatherLevelName);
	struct FString GetGameID();
	int GetDeviceLevel();
	class UUAEDataTable* GetDataTable_Mod(const struct FString& tableName);
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	class UFrontendHUD* GetAssociatedFrontendHUD();
	void CloseAssetLoadLog();
};


// Class Basic.AttrModifyComponent
// 0x0420 (0x04E8 - 0x00C8)
class UAttrModifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x39];                                      // 0x00C8(0x0039) MISSED OFFSET
	bool                                               UseAttributeModifyRep;                                    // 0x0101(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttrModified;                                           // 0x0104(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	uint32_t                                           AttrModifyStateList;                                      // 0x0110(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAttrModifyItem>                     DynamicModifierRepList;                                   // 0x0114(0x000C) (Net, ZeroConstructor)
	struct FRepAttributeModify                         DynamicModifierRep;                                       // 0x0120(0x0010) (Net)
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     // 0x0130(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x154];                                     // 0x013C(0x0154) MISSED OFFSET
	TArray<struct FAttributeExpand>                    AttributeExpands;                                         // 0x0290(0x000C) (Edit, ZeroConstructor)
	struct FAttrDynamicModifier                        DynamicModifier;                                          // 0x029C(0x007C)
	TMap<struct FString, struct FRelateAttributeGroup> RelateAttributeGroup;                                     // 0x0318(0x0050) (ZeroConstructor)
	EActorRegAttrTableType                             ActorAttrType;                                            // 0x0354(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC7];                                      // 0x0355(0x00C7) MISSED OFFSET
	TArray<struct FModAttrSimulateSyncItem>            ModSimulateSyncList;                                      // 0x041C(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0xC0];                                      // 0x0428(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyComponent");
		return pStaticClass;
	}


	void SetValueToAttributeSafety(const struct FString& AttrName, float Value);
	void SetOrignalValueToAttribute(const struct FString& AttrName, float Value);
	void SetAttrModifyStateValue(int Index, bool Value);
	void SetAttributeMaxValue(const struct FString& AttrName, float MaxValue);
	void ResponeAttrValue(const struct FString& AttrName, float FinalValue);
	void RequestAttrValue(const struct FString& AttrName);
	void RemoveDynamicModifyItemForLua(uint32_t ModifyUID);
	bool RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists, bool bSetAttrByOrigin);
	void OnRep_ModSimulateSyncList();
	void OnRep_DynamicModifierList();
	void OnRep_DynamicModifier();
	void OnRep_AttrModifyStateList();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	bool IsAttrModifyStateValidIndex(int Index);
	bool HasDynamicModifier(const struct FString& AttrModifyId);
	struct FString GetMaxAttrName(const struct FString& AttrName);
	bool GetAttrModifyStateValue(int Index);
	int GetAttrModifyStateNum();
	struct FAttrModifyItem GetAttrModifyItemByItemName(const struct FString& ItemName);
	float GetAttributeValue(const struct FString& AttrName);
	float GetAttributeOrignalValue(const struct FString& AttrName);
	bool EnableAttrModifierByIndex(int ModifyConfigIndex);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAttrModifierByIndex(int ModifyConfigIndex);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier();
	void AddValueToAttribute(const struct FString& AttrName, float Value);
	uint32_t AddDynamicModifyItemForLua(const struct FString& AttrName, unsigned char ModifyType, float Value, bool bEnable, class UObject* Causer);
	void AddDynamicModifier(struct FAttrModifyItem* AttrModifyItem);
};


// Class Basic.AttrModifyInterface
// 0x0000 (0x0020 - 0x0020)
class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyInterface");
		return pStaticClass;
	}


	void SetAttrValue(const struct FString& AttrName, float NewVal, int Reason);
	void RequestAttrValue(const struct FString& AttrName);
	void RegisterModifiedAttributes();
	float GetAttrValue(const struct FString& AttrName);
	TArray<class AActor*> GetAttrModifyRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
	float GetAttributeValue(const struct FString& AttrName);
	void AddAttrValue(const struct FString& AttrName, float AddVal, int Reason);
};


// Class Basic.AttrModifyModDataUtils
// 0x00F4 (0x0110 - 0x001C)
class UAttrModifyModDataUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF4];                                      // 0x001C(0x00F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyModDataUtils");
		return pStaticClass;
	}

};


// Class Basic.BlueprintFunctionOverride
// 0x0050 (0x0070 - 0x0020)
class UBlueprintFunctionOverride : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0020(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0060(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BlueprintFunctionOverride");
		return pStaticClass;
	}

};


// Class Basic.BPClassManager
// 0x0108 (0x0128 - 0x0020)
class UBPClassManager : public UDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x002C(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassLookUp
	TMap<class UClass*, struct FBPClassItemMap>        BPClassLookUpOverride;                                    // 0x0068(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x00A4(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassNameLookUp
	TMap<struct FString, struct FBPClassItemMap>       BPClassNameLookUpOverride;                                // 0x00E0(0x0050) (ZeroConstructor, Transient)
	struct FString                                     BPClassManagerPath;                                       // 0x011C(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BPClassManager");
		return pStaticClass;
	}


	void ModifyClass(class UClass* InNativeClass, const struct FString& ModTag);
	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag);
	class UClass* GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag);
	static class UBPClassManager* Get();
};


// Class Basic.DataSearcherInterface
// 0x0000 (0x0020 - 0x0020)
class UDataSearcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DataSearcherInterface");
		return pStaticClass;
	}

};


// Class Basic.DelayReplicationInterface
// 0x0000 (0x0020 - 0x0020)
class UDelayReplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DelayReplicationInterface");
		return pStaticClass;
	}


	void ReSendRPCAfterBeginPlay();
	void ReCallRepAfterBeginPlay();
};


// Class Basic.FeatureSetDefine
// 0x0004 (0x0020 - 0x001C)
class UFeatureSetDefine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.FeatureSetDefine");
		return pStaticClass;
	}

};


// Class Basic.PathCompressionRef
// 0x0028 (0x0048 - 0x0020)
class UPathCompressionRef : public UDataAsset
{
public:
	struct FString                                     Dict;                                                     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             DataTableRef;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.PathCompressionRef");
		return pStaticClass;
	}

};


// Class Basic.ItemContainerInterface
// 0x0000 (0x0020 - 0x0020)
class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemContainerInterface");
		return pStaticClass;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
};


// Class Basic.ItemFactoryInterface
// 0x0000 (0x0020 - 0x0020)
class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return pStaticClass;
	}

};


// Class Basic.LuaEventBridgeFunction
// 0x0000 (0x0020 - 0x0020)
class ULuaEventBridgeFunction : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.LuaEventBridgeFunction");
		return pStaticClass;
	}


	static void UnRegisterEventByTarget(class UObject* ObjContext);
	static void UnRegisterEvent(const struct FString& FEventType, const struct FString& EventId, class UObject* ObjContext);
	static void RegistEvent(const struct FString& EventType, const struct FString& EventId, class UObject* ObjContext, const struct FString& FunctionName);
};


// Class Basic.LuaEventBridge
// 0x00E4 (0x0100 - 0x001C)
class ULuaEventBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<struct FString, struct FEventTypeContainer>   RegisterEventMap;                                         // 0x0028(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FLuaEventTypeContainer> LuaRegisterEventMap;                                      // 0x0064(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FLuaEventTypeToIDSet>        FilterKeyRegisterMap;                                     // 0x00A0(0x0050) (ZeroConstructor)
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        // 0x00DC(0x000C) (ZeroConstructor)
	TArray<class UProperty*>                           Params;                                                   // 0x00E8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.LuaEventBridge");
		return pStaticClass;
	}


	void SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventId, int Number);
	TArray<class ULuaTemBPData*> GetCurrentParam();
	void DeactivateEventsByFilterKey(uint32_t FilterKey);
	bool CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bCheckNeedPostLua);
	void ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bActive);
};


// Class Basic.ModTable
// 0x00C4 (0x00E0 - 0x001C)
class UModTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x001C(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ModTable");
		return pStaticClass;
	}

};


// Class Basic.NetRelevancyGroup
// 0x0024 (0x0040 - 0x001C)
class UNetRelevancyGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UUAENetConnection*>                   Connections;                                              // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x14];                                      // 0x002C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorCompManagerComponent
// 0x0048 (0x0110 - 0x00C8)
class UOnlyActorCompManagerComponent : public UActorComponent
{
public:
	TMap<struct FString, class UOnlyActorComponent*>   CacheComponents;                                          // 0x00C8(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UOnlyActorComponent*>                 CacheUpdateComponents;                                    // 0x0104(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorCompManagerComponent");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorComponentManagerInterface
// 0x0000 (0x0020 - 0x0020)
class UOnlyActorComponentManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponentManagerInterface");
		return pStaticClass;
	}

};


// Class Basic.OwnerRelevancyDependencyInterface
// 0x0000 (0x0020 - 0x0020)
class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return pStaticClass;
	}

};


// Class Basic.PackTool
// 0x000C (0x0028 - 0x001C)
class UPackTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.PackTool");
		return pStaticClass;
	}


	void CookResBySelection();
};


// Class Basic.RenderFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class URenderFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.RenderFunctionLibrary");
		return pStaticClass;
	}


	static void MarkComponentRenderStateDirty(class UActorComponent* Comp);
};


// Class Basic.STBaseBuff
// 0x0104 (0x0120 - 0x001C)
class USTBaseBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	struct FString                                     BuffName;                                                 // 0x0024(0x000C) (ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundData;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeBuff;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreMagicalImmunity;                                    // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOtherPawnRefreshBuff;                               // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Layerable;                                                // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForReplaceExit;                        // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForAddLayer;                           // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceExsist;                                            // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StaysOnDeath;                                             // 0x0057(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerMax;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Internal;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   BuffConditions;                                           // 0x006C(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              Expiry;                                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStatusChange>                       StatusChanges;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedSimulateToClientMulticast;                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSimulateToClient;                                     // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESimulateAddBuffRole>             SimulateAddBuffRole;                                      // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	TArray<struct FName>                               MutexBuffers;                                             // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffActionItem>                     BuffActions;                                              // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffEventActionItem>                EventBuffActions;                                         // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fADScale;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysExists;                                           // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	class AController*                                 CauserPawnController;                                     // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauserPawnActor;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             UAEBlackboardParamList;                                   // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      BuffApplier;                                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x00E0(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuff");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffCarrierInterface
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return pStaticClass;
	}


	void SyncInvincibleData(float TotalTime);
	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySecondsFromNow);
	bool RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	bool IsSameTeamWithFirstPC();
	bool HasBuffID(int BuffID);
	bool HasBuff(const struct FName& BuffName);
	float GetBuffExpiry(const struct FName& BuffName);
	float GetBuffDuration(int BuffID, int CauseSkillID);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	bool CheckBuffTarget(class USTBuff* Buff);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	bool AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	int AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor);
};


// Class Basic.STBaseBuffConditionBase
// 0x0008 (0x00D0 - 0x00C8)
class USTBaseBuffConditionBase : public UActorComponent
{
public:
	TWeakObjectPtr<class USTBaseBuff>                  OwnerBuff;                                                // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffConditionBase");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffEventType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerMax
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_LayerMax : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerMax");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerSpecific
// 0x0008 (0x0028 - 0x0020)
class USTBaseBuffEventType_LayerSpecific : public USTBaseBuffEventType
{
public:
	int                                                LayerCountParam;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerSpecific");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Removed
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_Removed : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Removed");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_TakeBuffDamage
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_TakeBuffDamage : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_TakeBuffDamage");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_OnAttach
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_OnAttach : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_OnAttach");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_ConditionNotMatch
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_ConditionNotMatch : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_ConditionNotMatch");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Resurrection
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_Resurrection : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Resurrection");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_WeaponAttack
// 0x0010 (0x0030 - 0x0020)
class USTBaseBuffEventType_WeaponAttack : public USTBaseBuffEventType
{
public:
	class AActor*                                      Attacter;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_WeaponAttack");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffList
// 0x001C (0x0038 - 0x001C)
class USTBaseBuffList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffList");
		return pStaticClass;
	}

};


// Class Basic.BuffManagerPathClass
// 0x0018 (0x02F8 - 0x02E0)
class ABuffManagerPathClass : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	TArray<struct FBuffManagerModPath>                 BuffListPathMap;                                          // 0x02E8(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BuffManagerPathClass");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType_ImmuneDebuff
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffStatusType_ImmuneDebuff : public USTBaseBuffStatusType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType_ImmuneDebuff");
		return pStaticClass;
	}

};


// Class Basic.STBuff
// 0x0124 (0x0140 - 0x001C)
class USTBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     Desc;                                                     // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LayerMax;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientSyncInterval;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffClientSyncType                                ClientSyncType;                                           // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffTargetType                                    TargetType;                                               // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffRefreshType                                   RefreshType;                                              // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffReActionType                                  ReActionType;                                             // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiCauserHandleType                             MultiCauserHandleType;                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiSkillHandleType                              MultiSkillHandleType;                                     // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsExecuteOnece;                                           // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveAllLayer;                                           // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USTBuffAction*>                       Actions;                                                  // 0x004C(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bNeedShowBuffInBuffList;                                  // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                LocalizeDescID;                                           // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // 0x0060(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                TipsOnAddBuff;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDataProviderBase*>                   DataProviders;                                            // 0x0070(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	int                                                InstID;                                                   // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BuffID;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               PendingRemove;                                            // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              EndTime;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DSEndTime;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Causer;                                                   // 0x0094(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Owner;                                                    // 0x009C(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USTBuffSystemComponent>       OwnerSystem;                                              // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ExistForever;                                             // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              PowerValue;                                               // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSyncClientTime;                                       // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedSyncClient;                                         // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsClientOwnLife;                                          // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	class UUAEBlackboard*                              Blackborad;                                               // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x78];                                      // 0x00C4(0x0078) MISSED OFFSET
	int                                                LastLayerCount;                                           // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuff");
		return pStaticClass;
	}


	void Tick(float DetalTime, float TimeSeconds);
	void ResetActionExecute();
	void RefreshEndTime();
	void Initialize();
	void HandleLayer(int AddLayerCount, bool IsNewBuff);
	void End();
	void EnabledRemove();
	void Destroy();
	bool CopyActions();
	void CheckOnceBuffForClient();
	void ChangeNotify();
	void ChangeDuration(float NewDuration);
};


// Class Basic.STBuffAction_Lua
// 0x0050 (0x0088 - 0x0038)
class USTBuffAction_Lua : public USTBuffAction
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0078(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffAction_Lua");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
};


// Class Basic.STBuffConditionComplex
// 0x0008 (0x0038 - 0x0030)
class USTBuffConditionComplex : public USTBuffCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffConditionComplex");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBuffConditionAction
// 0x0028 (0x0060 - 0x0038)
class USTBuffConditionAction : public USTBuffAction
{
public:
	float                                              ConditionTickInterval;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probality;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionExecuteTimeType                      ExecuteTimeType;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDoOnFalse;                                              // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedTick;                                               // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSetFalseWhenExecute;                                    // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffConditionActionItem>            LinkActions;                                              // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffConditionAction");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnDestroy();
	void OnConditionTrue();
	void OnConditionFalse();
	void OnChangeNotify();
	void CheckCondition();
};


// Class Basic.STBuffSystemComponent
// 0x0270 (0x0338 - 0x00C8)
class USTBuffSystemComponent : public UActorComponent
{
public:
	struct FString                                     BuffTableName;                                            // 0x00C8(0x000C) (Edit, ZeroConstructor)
	struct FString                                     OneceBuffTableName;                                       // 0x00D4(0x000C) (Edit, ZeroConstructor)
	struct FString                                     ConditionBuffTableName;                                   // 0x00E0(0x000C) (Edit, ZeroConstructor)
	float                                              RPCSyncInterval;                                          // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreloadUClass;                                          // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	TArray<int>                                        PreloadBuffIDList;                                        // 0x00F4(0x000C) (Edit, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnClientAddBuffEvent;                                     // 0x0100(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientRemoveBuffEvent;                                  // 0x010C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientUpdateBuffEvent;                                  // 0x0118(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class USTBuff*>                             Buffs;                                                    // 0x0124(0x000C) (ExportObject, ZeroConstructor)
	int                                                SyncBriefNum;                                             // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FClientSyncBrief                            SyncBriefs[0x6];                                          // 0x0134(0x0020) (Net)
	struct FClientSyncBrief                            SyncRefBriefs[0x6];                                       // 0x01F4(0x0020)
	TMap<int, class USTBuff*>                          MaxPowerBuffs;                                            // 0x02B4(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x02F0(0x003C) UNKNOWN PROPERTY: SetProperty Basic.STBuffSystemComponent.BriefRemoveInstIds
	unsigned char                                      UnknownData02[0xC];                                       // 0x032C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffSystemComponent");
		return pStaticClass;
	}


	bool UpdateServerSyncBuff(class USTBuff* Buff);
	void UpdateClientBuff(int InstID, int BuffID, int LayerCount, int CauseSkillID, class AActor* CauseActor, float DSEndTime);
	void UpdateBriefs();
	class UClass* TryLoadBuffClass(struct FSoftObjectPath* ObjectPath);
	void RPC_Server_ReqBriefs();
	void RPC_Client_SyncBrief(const struct FClientSyncBrief& Brief);
	void RPC_Client_RspBriefs(TArray<struct FClientSyncBrief> Briefs);
	void RemoveClientBuff(int InstID);
	class USTBuff* RemoveBuffInner(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveAndFindMaxPowerBuff(class USTBuff* RemoveBuff);
	void RemoveAllBuffs();
	void OnServerAsyncLoaded(TArray<struct FSoftObjectPath> PendingList);
	void OnRep_SyncBriefs();
	void OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientBuffCreated(class USTBuff* Buff, int BuffID, int CauseSkillID, int InstID, float DSEndTime);
	void OnClientAsyncLoaded(const struct FString& Path, int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int InstID, float DSEndTime);
	void OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	bool HasSkillID(int SkillID);
	bool HasBuff(int BuffID);
	void HandleCauserSkill(class USTBuff* Buff, int SkillID);
	bool HandleBuffTypeMutex(int BuffID);
	void HandleBuffTypeExclude(int BuffID);
	void HandleBuffLayer(class USTBuff* Buff, int AddLayerCount, bool IsNewBuff);
	class UBuffTableConfig* GetTableConfig();
	TArray<class USTBuff*> GetBuffs();
	float GetBuffDuration(int BuffID, int CauseSkillID);
	class USTBuff* GetBuffByBuffID(int BuffID);
	class USTBuff* CreateBuffWithClass(class UClass* Class, int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	void CreateBuffAsync(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int InstID, float DSEndTime);
	class USTBuff* CreateBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	void CompareBuffPower(class USTBuff* Buff);
	bool ClientGetBuffInfo(int BuffID, struct FClientSyncBrief* OutBuff);
	void ClearBuffs(bool IsClearAll);
	bool CheckBuffTargetClient(class USTBuff* Buff);
	bool AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
};


// Class Basic.BuffTableConfig
// 0x00DC (0x00F8 - 0x001C)
class UBuffTableConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x001C(0x0024) MISSED OFFSET
	TMap<int, struct FBuffTableRow>                    Table;                                                    // 0x0040(0x0050) (ZeroConstructor)
	TMap<struct FString, class UClass*>                ServerBuffClassMap;                                       // 0x007C(0x0050) (ZeroConstructor)
	TMap<struct FString, class UClass*>                ClientBuffClassMap;                                       // 0x00B8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BuffTableConfig");
		return pStaticClass;
	}

};


// Class Basic.UStringMap
// 0x003C (0x0058 - 0x001C)
class UUStringMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UStringMap");
		return pStaticClass;
	}

};


// Class Basic.UAEGameEngine
// 0x0048 (0x0B88 - 0x0B40)
class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0B40(0x000C) MISSED OFFSET
	class UBackendHUD*                                 AssociatedBackendHUD;                                     // 0x0B4C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0B50(0x000C) MISSED OFFSET
	bool                                               bEnableAutoStat;                                          // 0x0B5C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAutoTickDeltaThreshold;                            // 0x0B5D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0B5E(0x0002) MISSED OFFSET
	float                                              AutoTickDeltaThresholdFactor;                             // 0x0B60(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              StatCollection_AvgTickDeltaThreshold;                     // 0x0B64(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_AvgTickDeltaThreshold;                           // 0x0B68(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_StartTime;                                       // 0x0B6C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B70(0x0004) MISSED OFFSET
	float                                              AutoStat_Duration_Engine;                                 // 0x0B74(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_Duration_PhysX;                                  // 0x0B78(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0B7C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEGameEngine");
		return pStaticClass;
	}

};


// Class Basic.BPTable
// 0x0084 (0x00A0 - 0x001C)
class UBPTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FBPTableItem>                     BPTableItemMap_Mod;                                       // 0x0064(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BPTable");
		return pStaticClass;
	}


	struct FString GetWrapperPath(int ID);
	class UClass* GetWrapperClass(int ID);
	struct FString GetPath(int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(int ID, class UObject* Outer, bool IsLobby);
	class UObject* GetModObject(int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetModClass(int ID, bool IsLobby);
	class UClass* GetCustom1Class(int ID);
	class UClass* GetClass(int ID, bool IsLobby);
	void ConvertPath(int ID);
};


// Class Basic.UAELoadedClassManager
// 0x024C (0x0268 - 0x001C)
class UUAELoadedClassManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
	TMap<struct FString, class UBPTable*>              BPTableMap_Mod;                                           // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FString>                          BPTableNameMap;                                           // 0x0094(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadedClassManagerClassName;                              // 0x00D0(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x14C];                                     // 0x00DC(0x014C) MISSED OFFSET
	TMap<class UObject*, struct FSoftClassPath>        AsyncLoadClassDict;                                       // 0x0228(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0264(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return pStaticClass;
	}


	void InitTableData();
	void InitialModTableItemMap();
	void InitBPTableMap_Mod();
	void InitBPTableMap();
	void HandleTableModNameChanged(const struct FString& InModName);
	struct FString GetWrapperPath(const struct FString& BPTableName, int ID);
	class UClass* GetWrapperClass(const struct FString& BPTableName, int ID);
	struct FString GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetCustom1Class(const struct FString& BPTableName, int ID);
	class UClass* GetClass(const struct FString& BPTableName, int ID, bool IsLobby);
	struct FString GetBPTableName(int Type);
	void GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UUAELoadedClassManager* Get();
	class UBPTable* CreateAndAddBPTable_Mod(const struct FString& BPTableName);
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearModTableItemMap();
	void ClearBPTable_Mod();
	void ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate);
	void ClearAllData();
};


// Class Basic.UAEMeshComponent
// 0x0000 (0x0A60 - 0x0A60)
class UUAEMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEMeshComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetConnection
// 0x0208 (0x29778 - 0x29570)
class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x29570(0x007C) MISSED OFFSET
	int                                                InitialHandshakeTimeoutNumThreshold;                      // 0x295EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x295F0(0x0004) MISSED OFFSET
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  // 0x295F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  // 0x295F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;// 0x295FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x29600(0x003C) MISSED OFFSET
	bool                                               bEnableHTTPDNS;                                           // 0x2963C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2963D(0x0003) MISSED OFFSET
	struct FString                                     HTTPDNSServerAddr;                                        // 0x29640(0x000C) (ZeroConstructor, Config)
	float                                              HTTPDNSResponseTimeout;                                   // 0x2964C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x29650(0x0010) MISSED OFFSET
	class UNetRelevancyGroup*                          RelevancyGroup;                                           // 0x29660(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xA4];                                      // 0x29664(0x00A4) MISSED OFFSET
	TArray<struct FPendingRegionNetworkObject>         PendingRegionNetworkObjects;                              // 0x29708(0x000C) (ZeroConstructor)
	float                                              MinRegionActorTickDelta;                                  // 0x29714(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRegionActorTickDelta;                                  // 0x29718(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x2971C(0x000C) MISSED OFFSET
	bool                                               EnableWeakNetUpdate;                                      // 0x29728(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x29729(0x0003) MISSED OFFSET
	float                                              MinWeakNetUpdateDelay;                                    // 0x2972C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxWeakNetUpdateDelay;                                    // 0x29730(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SquareSegmentSize;                                        // 0x29734(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSegmentDistance;                                       // 0x29738(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxObjectNumInSegments;                                   // 0x2973C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0xD];                                       // 0x29740(0x000D) MISSED OFFSET
	bool                                               bRecreateSocketOnLost;                                    // 0x2974D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x12];                                      // 0x2974E(0x0012) MISSED OFFSET
	float                                              UpdateClientPingTimeThreshold;                            // 0x29760(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x14];                                      // 0x29764(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetConnection");
		return pStaticClass;
	}

};


// Class Basic.UAENetDriver
// 0x00F0 (0x0660 - 0x0570)
class UUAENetDriver : public UIpNetDriver
{
public:
	bool                                               bEnableCollectNetStats;                                   // 0x0570(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableResetNetStats;                                     // 0x0571(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xEE];                                      // 0x0572(0x00EE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetDriver");
		return pStaticClass;
	}

};


// Class Basic.UAETableManager
// 0x02F4 (0x0310 - 0x001C)
class UUAETableManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FName>                               TablesNeedReleasedInBattle;                               // 0x0028(0x000C) (ZeroConstructor, Config)
	struct FString                                     ManualTableDirectory;                                     // 0x0034(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0040(0x003C) MISSED OFFSET
	bool                                               AllowItemTable;                                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	TArray<class UUAEDataTable*>                       TableObjList;                                             // 0x0080(0x000C) (ZeroConstructor)
	class UWorld*                                      CurWorld;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              // 0x0090(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap_Mod;                                          // 0x00CC(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTableCreateInFighting;                                  // 0x0108(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x78];                                      // 0x0114(0x0078) MISSED OFFSET
	struct FString                                     PathCompressionConfigsPath;                               // 0x018C(0x000C) (ZeroConstructor, Config)
	bool                                               bIsPathCompression;                                       // 0x0198(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsPathCompressionCache;                                  // 0x0199(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x019A(0x0002) MISSED OFFSET
	int                                                PathCompressionCacheMaxSize;                              // 0x019C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01A0(0x0004) MISSED OFFSET
	struct FString                                     BaseTableRelativeDir;                                     // 0x01A4(0x000C) (ZeroConstructor, Config)
	struct FString                                     ModTableRelativeDir;                                      // 0x01B0(0x000C) (ZeroConstructor, Config)
	TMap<struct FName, class UModTable*>               ModTableMap;                                              // 0x01BC(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> ModTableObjMap;                                           // 0x01F8(0x0050) (ZeroConstructor)
	TArray<class UUAEDataTable*>                       InGameTableObjList;                                       // 0x0234(0x000C) (ZeroConstructor)
	TMap<struct FName, bool>                           CheckNeedModMap;                                          // 0x0240(0x0050) (ZeroConstructor)
	struct FString                                     CurrentModName;                                           // 0x027C(0x000C) (ZeroConstructor)
	struct FString                                     EmptyModName;                                             // 0x0288(0x000C) (ZeroConstructor)
	TMap<struct FString, class UBaseTableResMap*>      LoadedTableMap;                                           // 0x0294(0x0050) (ZeroConstructor)
	TMap<struct FString, bool>                         CheckMapTable;                                            // 0x02D0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAETableManager");
		return pStaticClass;
	}


	void ReleaseTable(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr_Mod(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr(const struct FName& tableName);
	class UBaseTableResMap* GetTableMap(const struct FString& tableName);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
	static class UUAETableManager* GetInstance();
	static class UUAEDataTable* GetDataTableStatic_Mod(const struct FString& tableName);
	static class UUAEDataTable* GetDataTableStatic(const struct FString& tableName);
};


// Class Basic.UEMathUtilityMethods
// 0x0000 (0x0020 - 0x0020)
class UUEMathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UEMathUtilityMethods");
		return pStaticClass;
	}


	static bool FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes);
	static float CalculateAngleToTargetAngle(float startAngle, float targetAngle, float stepAngle, EAngleRotationDirectionType Dir);
	static int BKDRHash(const struct FString& StrToHash, int Mod);
	static float AngleDis(float angleA, float angleB);
};


// Class Basic.UEPathUtilityMethods
// 0x0000 (0x0020 - 0x0020)
class UUEPathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UEPathUtilityMethods");
		return pStaticClass;
	}


	static bool IsPathExist(const struct FString& HandlePath);
	static bool IsAvatarResPathExist(const struct FString& HandlePath);
	static struct FString GetModName(class UObject* WorldContext);
	static bool FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag);
};


}

