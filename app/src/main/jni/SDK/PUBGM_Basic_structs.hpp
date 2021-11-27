#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_UAESharedModule_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_slua_unreal_classes.hpp"
#include "PUBGM_Skill_classes.hpp"
#include "PUBGM_OnlineSubsystemUtils_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Basic.EAttrOperator
enum class EAttrOperator : uint8_t
{
	EAttrOperator__Plus            = 0,
	EAttrOperator__Multiply        = 1,
	EAttrOperator__Set             = 2,
	EAttrOperator__EAttrOperator_MAX = 3
};


// Enum Basic.EAttrVariableType
enum class EAttrVariableType : uint8_t
{
	EAttrVariableType__Byte        = 0,
	EAttrVariableType__Int         = 1,
	EAttrVariableType__Float       = 2,
	EAttrVariableType__EAttrVariableType_MAX = 3
};


// Enum Basic.EActorRegAttrTableType
enum class EActorRegAttrTableType : uint8_t
{
	EActorRegAttrTableType__EATY_NONE = 0,
	EActorRegAttrTableType__EATY_PLAYER = 1,
	EActorRegAttrTableType__EATY_ZOMBIE = 2,
	EActorRegAttrTableType__EATY_WEAPON = 3,
	EActorRegAttrTableType__EATY_VEHICLE = 4,
	EActorRegAttrTableType__EATY_MAX = 5
};


// Enum Basic.EBattleItemDropReason
enum class EBattleItemDropReason : uint8_t
{
	EBattleItemDropReason__Manually = 0,
	EBattleItemDropReason__Associated = 1,
	EBattleItemDropReason__AutoEquipAndDrop = 2,
	EBattleItemDropReason__AutoEquipFailed = 3,
	EBattleItemDropReason__CapacityExceeded = 4,
	EBattleItemDropReason__UsedUp  = 5,
	EBattleItemDropReason__Force   = 6,
	EBattleItemDropReason__Replaced = 7,
	EBattleItemDropReason__VehicleGroup = 8,
	EBattleItemDropReason__Throwaway = 9,
	EBattleItemDropReason__EBattleItemDropReason_MAX = 10
};


// Enum Basic.EBattleItemUseReason
enum class EBattleItemUseReason : uint8_t
{
	EBattleItemUseReason__Manually = 0,
	EBattleItemUseReason__Associated = 1,
	EBattleItemUseReason__AutoEquipAndDrop = 2,
	EBattleItemUseReason__Swapped  = 3,
	EBattleItemUseReason__Initial  = 4,
	EBattleItemUseReason__EquipAndRecovery = 5,
	EBattleItemUseReason__SwappedWithPackageWeapon = 6,
	EBattleItemUseReason__EquipAndRecoveryToSafetyBox = 7,
	EBattleItemUseReason__EBattleItemUseReason_MAX = 8
};


// Enum Basic.EItemStoreArea
enum class EItemStoreArea : uint8_t
{
	EItemStoreArea__InBag          = 0,
	EItemStoreArea__InSafetyBox    = 1,
	EItemStoreArea__EItemStoreArea_MAX = 2
};


// Enum Basic.EBattleItemDisuseReason
enum class EBattleItemDisuseReason : uint8_t
{
	EBattleItemDisuseReason__Manually = 0,
	EBattleItemDisuseReason__Associated = 1,
	EBattleItemDisuseReason__Excluded = 2,
	EBattleItemDisuseReason__Swapped = 3,
	EBattleItemDisuseReason__Dropped = 4,
	EBattleItemDisuseReason__Force = 5,
	EBattleItemDisuseReason__Replace = 6,
	EBattleItemDisuseReason__VehicleGroup = 7,
	EBattleItemDisuseReason__PutBack = 8,
	EBattleItemDisuseReason__PutIntoSafetyBox = 9,
	EBattleItemDisuseReason__ReplacedAndPutBack = 10,
	EBattleItemDisuseReason__EBattleItemDisuseReason_MAX = 11
};


// Enum Basic.EBattleItemPickupReason
enum class EBattleItemPickupReason : uint8_t
{
	EBattleItemPickupReason__Manually = 0,
	EBattleItemPickupReason__Associated = 1,
	EBattleItemPickupReason__AutoPickup = 2,
	EBattleItemPickupReason__Initial = 3,
	EBattleItemPickupReason__ForceIntoBackpack = 4,
	EBattleItemPickupReason__AutoPickupAttachment = 5,
	EBattleItemPickupReason__EBattleItemPickupReason_MAX = 6
};


// Enum Basic.EAttrModifyChannel
enum class EAttrModifyChannel : uint8_t
{
	EAttrModifyChannel__SimulatedProxy = 0,
	EAttrModifyChannel__AutonomousProxy = 1,
	EAttrModifyChannel__Authority  = 2,
	EAttrModifyChannel__AllChannel = 3,
	EAttrModifyChannel__EAttrModifyChannel_MAX = 4
};


// Enum Basic.EAttrModifyRefType
enum class EAttrModifyRefType : uint8_t
{
	EAttrModifyRefType__Val        = 0,
	EAttrModifyRefType__Rate       = 1,
	EAttrModifyRefType__Abs        = 2,
	EAttrModifyRefType__Set        = 3,
	EAttrModifyRefType__EAttrModifyRefType_MAX = 4
};


// Enum Basic.EAttrValidTrend
enum class EAttrValidTrend : uint8_t
{
	EAttrValidTrend__Bigger        = 0,
	EAttrValidTrend__Smaller       = 1,
	EAttrValidTrend__Both          = 2,
	EAttrValidTrend__EAttrValidTrend_MAX = 3
};


// Enum Basic.EBattleItemClientPickupType
enum class EBattleItemClientPickupType : uint8_t
{
	EBattleItemClientPickupType__Defalut = 0,
	EBattleItemClientPickupType__ForceIntoBackpack = 1,
	EBattleItemClientPickupType__PickupIntoSafetyBox = 2,
	EBattleItemClientPickupType__EBattleItemClientPickupType_MAX = 3
};


// Enum Basic.EColdModeItemType
enum class EColdModeItemType : uint8_t
{
	EColdModeItemType__firewood    = 0,
	EColdModeItemType__meat        = 1,
	EColdModeItemType__EColdModeItemType_MAX = 2
};


// Enum Basic.EBattleItemPickupRule
enum class EBattleItemPickupRule : uint8_t
{
	EBattleItemPickupRule__All     = 0,
	EBattleItemPickupRule__Self    = 1,
	EBattleItemPickupRule__Team    = 2,
	EBattleItemPickupRule__Group   = 3,
	EBattleItemPickupRule__None    = 4,
	EBattleItemPickupRule__EBattleItemPickupRule_MAX = 5
};


// Enum Basic.EDataTag
enum class EDataTag : uint8_t
{
	EDataTag__EDefault             = 0,
	EDataTag__EDamageQuery         = 1,
	EDataTag__EDamageBuff          = 2,
	EDataTag__EBulletImpactEffect  = 3,
	EDataTag__EDataTag_MAX         = 4
};


// Enum Basic.EFeatureSetType
enum class EFeatureSetType : uint8_t
{
	EFeatureSetType__DedicateServer = 0,
	EFeatureSetType__Autonomous    = 1,
	EFeatureSetType__Simulate_Team = 2,
	EFeatureSetType__Simulate_NonTeam = 3,
	EFeatureSetType__DedicateServer_AI = 4,
	EFeatureSetType__Simulate_AI   = 5,
	EFeatureSetType__Standalone    = 6,
	EFeatureSetType__Standalone_AI = 7,
	EFeatureSetType__Max           = 8
};


// Enum Basic.ESkillPropSubType
enum class ESkillPropSubType : uint8_t
{
	ESkillPropSubType_None         = 0,
	ESkillPropSubType              = 1,
	ESkillPropSubType_MAX          = 2
};


// Enum Basic.ELuaEventType
enum class ELuaEventType : uint8_t
{
	ELuaEventType__Invalid         = 0,
	ELuaEventType__ELuaEventType_MAX = 1
};


// Enum Basic.ESimulateAddBuffRole
enum class ESimulateAddBuffRole : uint8_t
{
	AddBuffRole_None               = 0,
	AddBuffRole_All                = 1,
	AddBuffRole_Self               = 2,
	AddBuffRole_Causer             = 3,
	AddBuffRole_Firend             = 4,
	AddBuffRole_Enermy             = 5,
	AddBuffRole_MAX                = 6
};


// Enum Basic.EDeviceLevel
enum class EDeviceLevel : uint8_t
{
	DeviceLevel_Low                = 0,
	DeviceLevel_Middle             = 1,
	DeviceLevel_Hight              = 2,
	DeviceLevel_MAX                = 3
};


// Enum Basic.EBuffEnabledRole
enum class EBuffEnabledRole : uint8_t
{
	EBuffEnabledRole__ROLE_None    = 0,
	EBuffEnabledRole__ROLE_SimulatedProxy = 1,
	EBuffEnabledRole__ROLE_AutonomousProxy = 2,
	EBuffEnabledRole__ROLE_Authority = 3,
	EBuffEnabledRole__ROLE_Client  = 4,
	EBuffEnabledRole__ROLE_MAX     = 5
};


// Enum Basic.EBuffClientSyncType
enum class EBuffClientSyncType : uint8_t
{
	EBuffClientSyncType__None      = 0,
	EBuffClientSyncType__All       = 1,
	EBuffClientSyncType__Autonomous = 2,
	EBuffClientSyncType__EBuffClientSyncType_MAX = 3
};


// Enum Basic.EBuffConditionAndOr
enum class EBuffConditionAndOr : uint8_t
{
	EBuffConditionAndOr__And       = 0,
	EBuffConditionAndOr__Or        = 1,
	EBuffConditionAndOr__EBuffConditionAndOr_MAX = 2
};


// Enum Basic.EBuffConditionExecuteTimeType
enum class EBuffConditionExecuteTimeType : uint8_t
{
	EBuffConditionExecuteTimeType__FirstTime = 0,
	EBuffConditionExecuteTimeType__EveryTime = 1,
	EBuffConditionExecuteTimeType__EBuffConditionExecuteTimeType_MAX = 2
};


// Enum Basic.EBuffConditionFalseExecuteType
enum class EBuffConditionFalseExecuteType : uint8_t
{
	EBuffConditionFalseExecuteType__None = 0,
	EBuffConditionFalseExecuteType__Disabled = 1,
	EBuffConditionFalseExecuteType__DisabledEnd = 2,
	EBuffConditionFalseExecuteType__EBuffConditionFalseExecuteType_MAX = 3
};


// Enum Basic.EBuffConditionTrueExecuteType
enum class EBuffConditionTrueExecuteType : uint8_t
{
	EBuffConditionTrueExecuteType__Enabled = 0,
	EBuffConditionTrueExecuteType__ReAction = 1,
	EBuffConditionTrueExecuteType__EBuffConditionTrueExecuteType_MAX = 2
};


// Enum Basic.EBuffConditionInitializeType
enum class EBuffConditionInitializeType : uint8_t
{
	EBuffConditionInitializeType__None = 0,
	EBuffConditionInitializeType__Disabled = 1,
	EBuffConditionInitializeType__EBuffConditionInitializeType_MAX = 2
};


// Enum Basic.EBuffTargetSubType
enum class EBuffTargetSubType : uint8_t
{
	EBuffTargetSubType__EBuffTargetSubType_Other = 0,
	EBuffTargetSubType__EBuffTargetSubType_Rifle = 1,
	EBuffTargetSubType__EBuffTargetSubType_SingleShotSniper = 2,
	EBuffTargetSubType__EBuffTargetSubType_BurstShotSniper = 3,
	EBuffTargetSubType__EBuffTargetSubType_Submachine = 4,
	EBuffTargetSubType__EBuffTargetSubType_ShotGun = 5,
	EBuffTargetSubType__EBuffTargetSubType_MachineGun = 6,
	EBuffTargetSubType__EBuffTargetSubType_Pistol = 7,
	EBuffTargetSubType__EBuffTargetSubType_Melee = 8,
	EBuffTargetSubType__EBuffTargetSubType_Crossbow = 9,
	EBuffTargetSubType__EBuffTargetSubType_All = 10,
	EBuffTargetSubType__EBuffTargetSubType_MAX = 11
};


// Enum Basic.EBuffTargetSocketType
enum class EBuffTargetSocketType : uint8_t
{
	EBuffTargetSocketType__Character = 0,
	EBuffTargetSocketType__Weapon  = 1,
	EBuffTargetSocketType__World   = 2,
	EBuffTargetSocketType__Vehicle = 3,
	EBuffTargetSocketType__EBuffTargetSocketType_MAX = 4
};


// Enum Basic.EBuffTargetType
enum class EBuffTargetType : uint8_t
{
	EBuffTargetType__Character     = 0,
	EBuffTargetType__Weapon        = 1,
	EBuffTargetType__Player        = 2,
	EBuffTargetType__Monster       = 3,
	EBuffTargetType__MonsterPlayer = 4,
	EBuffTargetType__Vehicle       = 5,
	EBuffTargetType__EBuffTargetType_MAX = 6
};


// Enum Basic.EBuffReActionType
enum class EBuffReActionType : uint8_t
{
	EBuffReActionType__None        = 0,
	EBuffReActionType__OverWOrAddL = 1,
	EBuffReActionType__ResetTime   = 2,
	EBuffReActionType__ResetLayer  = 3,
	EBuffReActionType__LayerChange = 4,
	EBuffReActionType__InitWeapon  = 5,
	EBuffReActionType__EBuffReActionType_MAX = 6
};


// Enum Basic.EBuffRefreshType
enum class EBuffRefreshType : uint8_t
{
	EBuffRefreshType__None         = 0,
	EBuffRefreshType__ResetTime    = 1,
	EBuffRefreshType__ResetTimeOnOverFlow = 2,
	EBuffRefreshType__ResetLayerOnOverFlow = 3,
	EBuffRefreshType__ResetAllOnOverFlow = 4,
	EBuffRefreshType__EBuffRefreshType_MAX = 5
};


// Enum Basic.EMultiSkillHandleType
enum class EMultiSkillHandleType : uint8_t
{
	EMultiSkillHandleType__UseNewer = 0,
	EMultiSkillHandleType__UseOlder = 1,
	EMultiSkillHandleType__StackEffect = 2,
	EMultiSkillHandleType__UseMaxPower = 3,
	EMultiSkillHandleType__RefreshOlder = 4,
	EMultiSkillHandleType__EMultiSkillHandleType_MAX = 5
};


// Enum Basic.EMultiCauserHandleType
enum class EMultiCauserHandleType : uint8_t
{
	EMultiCauserHandleType__UseNewer = 0,
	EMultiCauserHandleType__UseOlder = 1,
	EMultiCauserHandleType__StackEffect = 2,
	EMultiCauserHandleType__UseMaxPower = 3,
	EMultiCauserHandleType__RefreshOlder = 4,
	EMultiCauserHandleType__EMultiCauserHandleType_MAX = 5
};


// Enum Basic.EAnimLayerType
enum class EAnimLayerType : uint8_t
{
	EAnimLayer_Char                = 0,
	EAnimLayer_Avatar              = 1,
	EAnimLayer_Weapon              = 2,
	EAnimLayer_Skill               = 3,
	EAnimLayer_Max                 = 4
};


// Enum Basic.ENetMonitorType
enum class ENetMonitorType : uint8_t
{
	ENetMonitorType__CLOSE         = 0,
	ENetMonitorType__REPORT        = 1,
	ENetMonitorType__REPORTANDPROFILE = 2,
	ENetMonitorType__ENetMonitorType_MAX = 3
};


// Enum Basic.ELostConnectionToDSReason
enum class ELostConnectionToDSReason : uint8_t
{
	ELostConnectionToDSReason__LostConnectionToDSReason_None = 0,
	ELostConnectionToDSReason__LostConnectionToDSReason_TravelFailure_Default = 1,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalConnectionLost = 2,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalDetectedTimeout = 3,
	ELostConnectionToDSReason__LostConnectionToDSReason_NMTFailure_Default = 4,
	ELostConnectionToDSReason__LostConnectionToDSReason_MAX = 5
};


// Enum Basic.EAngleRotationDirectionType
enum class EAngleRotationDirectionType : uint8_t
{
	EAngleRotationDirectionType__EAutoMinAngle = 0,
	EAngleRotationDirectionType__ERight = 1,
	EAngleRotationDirectionType__ELeft = 2,
	EAngleRotationDirectionType__EAngleRotationDirectionType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Basic.AnimListData
// 0x0008
struct FAnimListData
{
	int                                                LayerID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Animation;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AnimListMapValueData
// 0x000C
struct FAnimListMapValueData
{
	TArray<struct FAnimListData>                       AnimListMapValue;                                         // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.ItemDefineID
// 0x0018
struct FItemDefineID
{
	int                                                Type;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TypeSpecificID;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bValidItem;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValidInstance;                                           // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	uint64_t                                           InstanceID;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.ItemAssociation
// 0x0028
struct FItemAssociation
{
	struct FName                                       AssociationName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FItemDefineID                               AssociationTargetDefineID;                                // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemHandleBase*                             AssociationTargetHandle;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.BattleItemAdditionalData
// 0x0028
struct FBattleItemAdditionalData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatData;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringData;                                               // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                IntData;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct Basic.BattleItemUseTarget
// 0x0028
struct FBattleItemUseTarget
{
	struct FItemDefineID                               TargetDefineID;                                           // 0x0000(0x0018) (BlueprintVisible)
	struct FName                                       TargetAssociationName;                                    // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.BattleItemPickupInfo
// 0x0048
struct FBattleItemPickupInfo
{
	class UObject*                                     Source;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               bAutoEquip;                                               // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FBattleItemUseTarget                        AutoEquipTarget;                                          // 0x0018(0x0028) (BlueprintVisible)
	bool                                               bDropOnDead;                                              // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Basic.ItemData
// 0x0048
struct FItemData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0008(0x0018) (BlueprintVisible)
	struct FString                                     Name;                                                     // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x002C(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Icon;                                                     // 0x0038(0x000C) (BlueprintVisible, ZeroConstructor)
	class UItemHandleBase*                             ItemHandle;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemFeatureData
// 0x0028
struct FBattleItemFeatureData
{
	float                                              UnitWeight;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CountLimit;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStackable;                                               // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SortingPriority;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Worth;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCapacity;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemDurability;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                itemType;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemData
// 0x0050 (0x0098 - 0x0048)
struct FBattleItemData : public FItemData
{
	int                                                Count;                                                    // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0050(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                Durability;                                               // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     ItemStoreArea;                                            // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FBattleItemFeatureData                      FeatureData;                                              // 0x0064(0x0028) (BlueprintVisible)
	TArray<struct FItemAssociation>                    Associations;                                             // 0x008C(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.STBaseBuffTemplateItem
// 0x0018
struct FSTBaseBuffTemplateItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 Buff;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.UTBuffSynData
// 0x0020
struct FUTBuffSynData
{
	struct FName                                       BuffName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpireTime;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.BuffInstancedItem
// 0x0038
struct FBuffInstancedItem
{
	struct FName                                       BuffName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BuffID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USTBaseBuff>                  Buff;                                                     // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class AController*                                 CauserPawnController;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               PendingRemove;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Expiry;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplier;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BuffIndex;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DamageCauseID;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.ClientBaseInfo
// 0x00E0
struct FClientBaseInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameSvrId;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x0024(0x000C) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           GameID;                                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleServerIP;                                           // 0x0050(0x000C) (ZeroConstructor)
	uint32_t                                           BattleServerPort;                                         // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x006C(0x000C) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	int8_t                                             WeatherID;                                                // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FString                                     WeatherLevelName;                                         // 0x0084(0x000C) (ZeroConstructor)
	float                                              WeatherTime;                                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsData;                                                // 0x0094(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	TMap<int, struct FString>                          AdvConfig;                                                // 0x00A4(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.CacheAffactTargetInfo
// 0x000C
struct FCacheAffactTargetInfo
{
	TWeakObjectPtr<class AActor>                       AffectTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FinalAddValue;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrModifyItem
// 0x0038
struct FAttrModifyItem
{
	TArray<struct FCacheAffactTargetInfo>              AffectTargetsCachInfo;                                    // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     AttrModifyItemName;                                       // 0x000C(0x000C) (Edit, ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     AttrName;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AttrId;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CompareId;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	EAttrOperator                                      ModifierOp;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsEnable;                                                 // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               ClientSimulate;                                           // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct Basic.AttributeExpand
// 0x002C
struct FAttributeExpand
{
	struct FString                                     AttrName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     AttrDesc;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor)
	int                                                RelateTypeId;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     RelateGroup;                                              // 0x001C(0x000C) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrDynamicModifyItem
// 0x0024
struct FAttrDynamicModifyItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      Causer;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.AttrDynamicModifyTarget
// 0x0014
struct FAttrDynamicModifyTarget
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FAttrDynamicModifyItem>              List;                                                     // 0x0008(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.AttrDynamicModifyConfig
// 0x0028
struct FAttrDynamicModifyConfig
{
	bool                                               IsOneceModify;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasLimitAttr;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasMaxAttr;                                               // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FString                                     AttrName;                                                 // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     LimitAttrName;                                            // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     MaxAttrName;                                              // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.AttrDynamicModifier
// 0x007C
struct FAttrDynamicModifier
{
	TMap<struct FString, struct FAttrDynamicModifyTarget> ModifyAttrs;                                              // 0x0000(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FAttrDynamicModifyConfig> ModifyConfigs;                                            // 0x003C(0x0050) (BlueprintVisible, ZeroConstructor)
	class UAttrModifyComponent*                        Component;                                                // 0x0078(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.RelateAttributeGroup
// 0x003C
struct FRelateAttributeGroup
{
	TMap<int, struct FString>                          RelateAttributes;                                         // 0x0000(0x0050) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.ModAttrSimulateSyncItem
// 0x0008
struct FModAttrSimulateSyncItem
{
	int                                                AttrId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FinalValue;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrRegisterItem
// 0x0024
struct FAttrRegisterItem
{
	struct FString                                     AttrName;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	EAttrVariableType                                  AttrVariableType;                                         // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasReplicatedTag;                                         // 0x000D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x000E(0x0016) MISSED OFFSET
};

// ScriptStruct Basic.AttrAffected
// 0x0010
struct FAttrAffected
{
	struct FString                                     AttrName;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AActor*                                      AffectedActor;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BPClassItem
// 0x00A0
struct FBPClassItem
{
	struct FString                                     ClassTagName;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftClassProperty Basic.BPClassItem.NativeClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty Basic.BPClassItem.BPClass
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0060(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassItem.BPClassModOverride
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.BPClassItemMap
// 0x003C
struct FBPClassItemMap
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassItemMap.BPClassModOverride
};

// ScriptStruct Basic.EventValueContainer
// 0x002C
struct FEventValueContainer
{
	TWeakObjectPtr<class UObject>                      ObjContext;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     EventType;                                                // 0x0014(0x000C) (ZeroConstructor)
	struct FString                                     EventId;                                                  // 0x0020(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.EventIDContainer
// 0x000C
struct FEventIDContainer
{
	TArray<struct FEventValueContainer>                EventValueContainer;                                      // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.EventTypeContainer
// 0x003C
struct FEventTypeContainer
{
	TMap<struct FString, struct FEventIDContainer>     EventIDContainer;                                         // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.LuaEventTypeContainer
// 0x003C
struct FLuaEventTypeContainer
{
	TMap<struct FString, int>                          EventIDContainer;                                         // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.LuaEventTypeIDSet
// 0x003C
struct FLuaEventTypeIDSet
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) UNKNOWN PROPERTY: SetProperty Basic.LuaEventTypeIDSet.EventIDSet
};

// ScriptStruct Basic.LuaEventTypeToIDSet
// 0x003C
struct FLuaEventTypeToIDSet
{
	TMap<struct FString, struct FLuaEventTypeIDSet>    EventTypeToIDSet;                                         // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.NetRelevancyGroupID
// 0x0004
struct FNetRelevancyGroupID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.StatusChange
// 0x0008
struct FStatusChange
{
	class UClass*                                      StatusName;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StatusValue;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Basic.BuffActionItem
// 0x0004
struct FBuffActionItem
{
	class UUTSkillAction*                              BuffAction;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.BuffEventActionItem
// 0x0008
struct FBuffEventActionItem
{
	class USTBaseBuffEventType*                        EventType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillAction*                              BuffEventAction;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.BuffManagerModPath
// 0x0010
struct FBuffManagerModPath
{
	struct FName                                       ModName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BuffListPath;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BuffConditionActionItem
// 0x0008
struct FBuffConditionActionItem
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionInitializeType                       InitializeType;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionTrueExecuteType                      TrueExecType;                                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionFalseExecuteType                     FalseExecType;                                            // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Basic.ClientSyncBrief
// 0x0020
struct FClientSyncBrief
{
	int                                                InstID;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LayerCount;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                BuffID;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauseActor;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SyncTime;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PendingRemove;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Basic.BuffTableRow
// 0x00D8
struct FBuffTableRow
{
	int                                                BuffID;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLayer;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BuffType;                                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     IconPath;                                                 // 0x0024(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     BPPath;                                                   // 0x0030(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x003C(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0048(0x003C) UNKNOWN PROPERTY: SetProperty Basic.BuffTableRow.MutexBuffTypes
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0084(0x003C) UNKNOWN PROPERTY: SetProperty Basic.BuffTableRow.ExcludeBuffTypes
	EBuffRefreshType                                   RefreshType;                                              // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffReActionType                                  ReActionType;                                             // 0x00C1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffTargetType                                    TargetType;                                               // 0x00C2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiCauserHandleType                             MultiCauserHanleType;                                     // 0x00C3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiSkillHandleType                              MultiSkillHandleType;                                     // 0x00C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffClientSyncType                                ClientSyncType;                                           // 0x00C5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	float                                              ClientSyncInterval;                                       // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExistForever;                                             // 0x00CC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnece;                                                  // 0x00CD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsClientOwnLife;                                          // 0x00CE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedShowInUI;                                            // 0x00CF(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocalizeDescID;                                           // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TipsOnAddBuff;                                            // 0x00D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.StringMap
// 0x003C
struct FStringMap
{
	TMap<struct FString, struct FString>               Data;                                                     // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.BPTableItem
// 0x0040
struct FBPTableItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Path;                                                     // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     LobbyPath;                                                // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     WrapperPath;                                              // 0x0028(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Custom1;                                                  // 0x0034(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.PendingRegionNetworkObject
// 0x001C
struct FPendingRegionNetworkObject
{
	class UObject*                                     RegionObject;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRegionID                                   OldRegionID;                                              // 0x0004(0x000C)
	struct FRegionID                                   NewRegionID;                                              // 0x0010(0x000C)
};

// ScriptStruct Basic.ItemRecordData
// 0x00EC
struct FItemRecordData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                ItemId;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                itemType;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemSubType;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BPID;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeightforOrder;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Worth;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCapacity;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        Attach;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BulletID;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProposeBulletNum;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Durability;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemSoundID;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemQuality;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemPickupRule;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AIFullVaule;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoEquipandDrop;                                         // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Consumable;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Equipable;                                                // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	struct FString                                     ItemName;                                                 // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemBigIcon;                                              // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemDesc;                                                 // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemSmallIcon;                                            // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     KillWhiteIcon;                                            // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemWhiteIcon;                                            // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     RedEmotionSoundPath;                                      // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PickupDesc;                                               // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     BackpackSimple;                                           // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SpecialIcon;                                              // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemBigIcon2;                                             // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemSmallIcon2;                                           // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Electricity;                                              // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E8(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.MultiStringMap
// 0x003C
struct FMultiStringMap
{
	TMap<int, struct FStringMap>                       StringMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.AttrModifyRepItem
// 0x000C
struct FAttrModifyRepItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrRowData
// 0x0020
struct FAttrRowData
{
	int                                                AttrGroup;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AttrName;                                                 // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
	EAttrVariableType                                  AttrVariableType;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              OriginalValue;                                            // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrModifyGroupItem
// 0x000C
struct FAttrModifyGroupItem
{
	TArray<struct FAttrModifyItem>                     AttrModifyItem;                                           // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct Basic.BattleItemPickupAfterLand
// 0x0068
struct FBattleItemPickupAfterLand
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (BlueprintVisible)
	struct FBattleItemPickupInfo                       pickupInfo;                                               // 0x0018(0x0048) (BlueprintVisible)
	EBattleItemPickupReason                            Reason;                                                   // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // 0x0061(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Basic.ItemTagList
// 0x003C
struct FItemTagList
{
	TMap<struct FName, int>                            TagValueMap;                                              // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Basic.TagItemList
// 0x000C
struct FTagItemList
{
	TArray<int>                                        tagList;                                                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Basic.TagOneItem
// 0x0008
struct FTagOneItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Basic.PickupFirstCount
// 0x0008
struct FPickupFirstCount
{
	int                                                pickID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.PickupProposeData
// 0x0154
struct FPickupProposeData
{
	TArray<struct FPickupFirstCount>                   pickFirst;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                closeSubType;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                crossbowSubType;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                panID;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pistolSubType;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                gunType;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                specialType;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                specialType2;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens2ID;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens3ID;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens4ID;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens6ID;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens8ID;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ID2Type;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pistolClipSubType;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubMachineGunClipSubType;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SniperClipSubType;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RifleClipSubType;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                gasSubID;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                backSubType;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                back3ID;                                                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BandageID;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QuickBandageID;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnergyDrinksID;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AdrenalineID;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnodyneID;                                                // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Medical1ID;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QuickMedical1ID;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Medical2ID;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AntidoteID;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BatteryChipID;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GameCoinID;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ZhenBaoDan;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                YanWuDan;                                                 // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RanShaoPing;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShouLei;                                                  // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlarePistolID;                                            // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        SideMirrorList;                                           // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MirrorList;                                               // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ViscidityBomb;                                            // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrenadeZombie;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrenadeYedan;                                             // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultMedicineNum;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                helmetSubType;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                armorSubType;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreItemSubType;                                         // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpecialNoDropItemSubType;                                 // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IceDrinkItemSubType;                                      // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IsAutoPickUpTaskSubType;                                  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        carryOnPlane;                                             // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CapacityThreshold;                                        // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GlideSubType;                                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParachuteItemSubType;                                     // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                revivalCardID;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SnowManID;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              revivalCardValidTime;                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        firewoodPriority;                                         // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        meatPriority;                                             // 0x010C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        UAVList;                                                  // 0x0118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ElectricityList;                                          // 0x0124(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ToUseInBackpackSubList;                                   // 0x0130(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ToUseInBackpackIDList;                                    // 0x013C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        notExtractItemIDList;                                     // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Basic.PickupSettingForTPlan
// 0x016C
struct FPickupSettingForTPlan
{
	int                                                LimitSkillProps;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, int>                                     LimitBulletMap_XT;                                        // 0x0004(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitDrugMap_XT;                                          // 0x0040(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitThrowObjMap_XT;                                      // 0x007C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitMultipleMirrorMap_XT;                                // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitNormalInfillingMap_XT;                               // 0x00F4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitHalloweenInfillingMap_XT;                            // 0x0130(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Basic.PickupSetting
// 0x0178
struct FPickupSetting
{
	int                                                LimitBandage;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitMedical;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitFirstAidKit;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitAnodyne;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitEnergyDrinks;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitAdrenaline;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitShouliudan;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitYanwudan;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitZhenbaodan;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitRanshaodan;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitViscidityBomb;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitGrenadeZombie;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitGrenadeYedan;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitAntidote;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBatteryChip;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitGameCoin;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet9mm;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet7_62mm;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit12koujing;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit45koujing;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit300magenandanyao;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limitbolt;                                                // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet5_57;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPickupPistol;                                         // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPickupLevel3Backpack;                                 // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPickupSideMirror;                                     // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	int                                                LimitSniper2X;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitSniper3X;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitSniper4X;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitSniper6X;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitSniper8X;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPickupSkillProps;                                     // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                LimitSkillProps;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitSnowMan;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPickMirror;                                           // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                AutoPickClipType;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, int>                                     LimitDrugMap;                                             // 0x0088(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitThrowObjMap;                                         // 0x00C4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitMultipleMirrorMap;                                   // 0x0100(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     LimitFixConsumeItemMap;                                   // 0x013C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Basic.SpecPickItem
// 0x000C
struct FSpecPickItem
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                cur_count;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_count;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.ArmorAttachItemUnit
// 0x0020
struct FArmorAttachItemUnit
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.RecordItemID
// 0x0018
struct FRecordItemID
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Basic.NetRelevancyGroupManager
// 0x003C
struct FNetRelevancyGroupManager
{
	TMap<struct FNetRelevancyGroupID, class UNetRelevancyGroup*> RelevancyGroups;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.BuffActionShared
// 0x0001
struct FBuffActionShared
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Basic.BuffTargetShared
// 0x000B (0x000C - 0x0001)
struct FBuffTargetShared : public FBuffActionShared
{
	TArray<class AActor*>                              Actors;                                                   // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.AnimChildComponentData
// 0x000C
struct FAnimChildComponentData
{
	TWeakObjectPtr<class UUAEAnimListComponentBase>    ChildComp;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.GameEngineTickStat
// 0x0008
struct FGameEngineTickStat
{
	float                                              Duration;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AvgTickDelta;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.TravelFailureInfo
// 0x0014
struct FTravelFailureInfo
{
	class UWorld*                                      World;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0008(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.NetworkFailureInfo
// 0x0018
struct FNetworkFailureInfo
{
	class UWorld*                                      World;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct Basic.LoadClassArrayParams
// 0x0010
struct FLoadClassArrayParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Basic.DistanceSegmentConfig
// 0x0008
struct FDistanceSegmentConfig
{
	float                                              RadiusSquared;                                            // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                NumberLimit;                                              // 0x0004(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Basic.DistanceSegmentItem
// 0x000C
struct FDistanceSegmentItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Basic.DSNetReportInfo
// 0x001C
struct FDSNetReportInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Basic.TableKeyPair
// 0x004C
struct FTableKeyPair
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
	TWeakObjectPtr<class UUAEDataTable>                BaseDataTable;                                            // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUAEDataTable>                ModDataTable;                                             // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

