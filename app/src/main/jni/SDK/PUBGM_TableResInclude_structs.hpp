#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TableResInclude.AudioVehicle_TabRes
// 0x0020
struct FAudioVehicle_TabRes
{
	struct FString                                     ID;                                                       // 0x0000(0x000C) (ZeroConstructor)
	int                                                MinValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsOpen;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.CarMusic_TabRes
// 0x0084
struct FCarMusic_TabRes
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music5;                                                   // 0x0004(0x000C) (ZeroConstructor)
	int                                                Music1Probability;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music3;                                                   // 0x0014(0x000C) (ZeroConstructor)
	int                                                Music7Probability;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music2;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int                                                Music2Probability;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music1;                                                   // 0x0034(0x000C) (ZeroConstructor)
	int                                                Music4Probability;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music5Probability;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music6;                                                   // 0x0048(0x000C) (ZeroConstructor)
	struct FString                                     Music7;                                                   // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     Music8;                                                   // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     Music4;                                                   // 0x006C(0x000C) (ZeroConstructor)
	int                                                Music8Probability;                                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music6Probability;                                        // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music3Probability;                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.DropConfig_TabRes
// 0x00B8
struct FDropConfig_TabRes
{
	int                                                DropPercent3;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode9;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterID;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart7;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart2;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart3;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd9;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode4;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent10;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent7;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart5;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd5;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart6;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart8;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd8;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode8;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd7;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode6;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent5;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode10;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd2;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd3;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd10;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode5;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent8;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent6;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart9;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart10;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode7;                                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd6;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleIDNumber;                                         // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent1;                                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent9;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode1;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TreasureBoxName;                                          // 0x0088(0x000C) (ZeroConstructor)
	int                                                DropPercent4;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TreasureBoxType;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode2;                                                // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart1;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent2;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart4;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode3;                                                // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd4;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd1;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.EvoBaseMapUIMarkTable
// 0x0020 (0x0024 - 0x0004)
struct FEvoBaseMapUIMarkTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UIBPSrcID;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     UIBPSoftPtr;                                              // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UIDescription;                                            // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct TableResInclude.EvoBaseModTableTestTable
// 0x0018 (0x001C - 0x0004)
struct FEvoBaseModTableTestTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     TestString;                                               // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TestNumber;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct TableResInclude.GrenadeSortPriority_TabRes
// 0x003C
struct FGrenadeSortPriority_TabRes
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GrenadeEnumValue;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BPPath;                                                   // 0x000C(0x000C) (ZeroConstructor)
	int                                                SwitchOrder;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pressedimagepath;                                         // 0x001C(0x000C) (ZeroConstructor)
	struct FString                                     ImagePath;                                                // 0x0028(0x000C) (ZeroConstructor)
	int                                                CountDown;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillIndex;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.ItemSpawnDataSub_TabRes
// 0x0054
struct FItemSpawnDataSub_TabRes
{
	int                                                Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CategoryFilter;                                           // 0x0004(0x000C) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0014(0x000C) (ZeroConstructor)
	int                                                CountMin;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueFilter;                                              // 0x002C(0x000C) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     SubCategoryFilter;                                        // 0x0048(0x000C) (ZeroConstructor)
};

// ScriptStruct TableResInclude.ItemSpawnData_TabRes
// 0x0048
struct FItemSpawnData_TabRes
{
	struct FString                                     ItemPath;                                                 // 0x0000(0x000C) (ZeroConstructor)
	int                                                Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueFilter;                                              // 0x0014(0x000C) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CategoryFilter;                                           // 0x0024(0x000C) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountMin;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0038(0x000C) (ZeroConstructor)
	int                                                Count;                                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.ItemTag_TabRes
// 0x0018
struct FItemTag_TabRes
{
	int                                                TagValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TagName;                                                  // 0x0008(0x000C) (ZeroConstructor)
	int                                                ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.Item_TabRes
// 0x0170
struct FItem_TabRes
{
	struct FString                                     ItemBigIcon;                                              // 0x0000(0x000C) (ZeroConstructor)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                itemType;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoEquipandDrop;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ItemId;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Consumable;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FString                                     ItemDesc;                                                 // 0x0024(0x000C) (ZeroConstructor)
	struct FString                                     ItemSmallIcon;                                            // 0x0030(0x000C) (ZeroConstructor)
	struct FString                                     ItemName;                                                 // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     WardrobeTab;                                              // 0x0048(0x000C) (ZeroConstructor)
	int                                                ItemSubType;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Equippable;                                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              UnitWeight_f;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemWhiteIcon;                                            // 0x0060(0x000C) (ZeroConstructor)
	int                                                ItemQuality;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SellTokenType;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SellPrice;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PickupSound;                                              // 0x0078(0x000C) (ZeroConstructor)
	struct FString                                     UnEquipSound;                                             // 0x0084(0x000C) (ZeroConstructor)
	struct FString                                     DropSound;                                                // 0x0090(0x000C) (ZeroConstructor)
	struct FString                                     EquipSound;                                               // 0x009C(0x000C) (ZeroConstructor)
	struct FString                                     UnEquipBank;                                              // 0x00A8(0x000C) (ZeroConstructor)
	struct FString                                     EquipBank;                                                // 0x00B4(0x000C) (ZeroConstructor)
	struct FString                                     DropBank;                                                 // 0x00C0(0x000C) (ZeroConstructor)
	struct FString                                     PickUpBank;                                               // 0x00CC(0x000C) (ZeroConstructor)
	struct FString                                     KillWhiteIcon;                                            // 0x00D8(0x000C) (ZeroConstructor)
	bool                                               NeedShare;                                                // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	int                                                WeightforOrder;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Preview;                                                  // 0x00EC(0x000C) (ZeroConstructor)
	struct FString                                     ExTime;                                                   // 0x00F8(0x000C) (ZeroConstructor)
	struct FString                                     JumpUrl;                                                  // 0x0104(0x000C) (ZeroConstructor)
	int                                                SourceBookEnable;                                         // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PickupDesc;                                               // 0x0114(0x000C) (ZeroConstructor)
	int                                                WardrobeMainTab;                                          // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Durability;                                               // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     JumpExchangeUrl;                                          // 0x0128(0x000C) (ZeroConstructor)
	int                                                LongDescID;                                               // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIFullVaule;                                              // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSmallIcon2;                                           // 0x013C(0x000C) (ZeroConstructor)
	struct FString                                     ItemBigIcon2;                                             // 0x0148(0x000C) (ZeroConstructor)
	struct FString                                     BackpackSimple;                                           // 0x0154(0x000C) (ZeroConstructor)
	int                                                UseType;                                                  // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmoryJumpId;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CharmValue;                                               // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.MonsterSpawnData_TabRes
// 0x0058
struct FMonsterSpawnData_TabRes
{
	struct FString                                     ValueFilter;                                              // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     ItemTogetherPath;                                         // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0018(0x000C) (ZeroConstructor)
	int                                                Count;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountMin;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CategoryFilter;                                           // 0x0030(0x000C) (ZeroConstructor)
	int                                                Weight;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0044(0x000C) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterID;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.PawnStateInvisUI_TabRes
// 0x0018
struct FPawnStateInvisUI_TabRes
{
	struct FString                                     UIClassName;                                              // 0x0000(0x000C) (ZeroConstructor)
	TArray<int>                                        InvisPawnState_a;                                         // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct TableResInclude.RoleUpgradeTable_TabRes
// 0x0014
struct FRoleUpgradeTable_TabRes
{
	int                                                Capacity;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZombieInjury_f;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovingSpeed_f;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.VehicleMaxHP_TabRes
// 0x0030
struct FVehicleMaxHP_TabRes
{
	int                                                HPNum;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VehicleItemID;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EndTime;                                                  // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     ModuleTypeID;                                             // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct TableResInclude.VehicleSpawn_TabRes
// 0x0024
struct FVehicleSpawn_TabRes
{
	struct FString                                     VehicleType;                                              // 0x0000(0x000C) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Weight;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Vehicle;                                                  // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct TableResInclude.WeaponAttachments_TabRes
// 0x0084
struct FWeaponAttachments_TabRes
{
	int                                                Magazine1ID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stock2ID;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower1ID;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower2ID;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine3ID;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stock1ID;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine2ID;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle2ID;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper1ID;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper2ID;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle1ID;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper4ID;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle3ID;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper3ID;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper5ID;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletID;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProposeBulletNum;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower3ID;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower5ID;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower4ID;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper7ID;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle5ID;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle6ID;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle4ID;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine6ID;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine4ID;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine5ID;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper6ID;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIMaxAttackDist;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIMinAttackDist;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower6ID;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpperSide1ID;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.ZombieTreasureBox_TabRes
// 0x001C
struct FZombieTreasureBox_TabRes
{
	struct FString                                     BoxPath;                                                  // 0x0000(0x000C) (ZeroConstructor)
	int                                                ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoxHealth;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeToCount;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoxDropPlan;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

