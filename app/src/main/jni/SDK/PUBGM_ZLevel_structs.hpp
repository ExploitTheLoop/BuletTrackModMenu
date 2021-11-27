#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ZLevel.ELevelEndCondType
enum class ELevelEndCondType : uint8_t
{
	MonsterWaveEnd                 = 0,
	ELevelEndCondType_MAX          = 1
};


// Enum ZLevel.EMonsterSpawnSourceType
enum class EMonsterSpawnSourceType : uint8_t
{
	Default                        = 0,
	LevelData                      = 1,
	EventTrigger                   = 2,
	BossCall                       = 3,
	GMTest                         = 4,
	AirDrop                        = 5,
	MonsterSpawnAction             = 6,
	ItemCall                       = 7,
	UserTrigger                    = 8,
	EMonsterSpawnSourceType_MAX    = 9
};


// Enum ZLevel.EGenerateType
enum class EGenerateType : uint8_t
{
	Random                         = 0,
	Nearest                        = 1,
	EGenerateType_MAX              = 2
};


// Enum ZLevel.EMonsterWaveEndCondType
enum class EMonsterWaveEndCondType : uint8_t
{
	AllMonsterDead                 = 0,
	SpecialMonsterDead             = 1,
	MonsterNumLimit                = 2,
	DurTimeLimit                   = 3,
	EMonsterWaveEndCondType_MAX    = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ZLevel.GameLevelDesc
// 0x0014
struct FGameLevelDesc
{
	int                                                ChapterID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LevelId;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ZLevel.RelifePoint
// 0x0040
struct FRelifePoint
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActivePoint;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FTransform                                  Trans;                                                    // 0x0010(0x0030) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ZLevel.PVECircle
// 0x0018
struct FPVECircle
{
	int                                                CircleID;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   targetPos;                                                // 0x0004(0x0008) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pain;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ZLevel.RoadPointInfo
// 0x0014
struct FRoadPointInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Radius;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ZLevel.MonsterSpot
// 0x002C
struct FMonsterSpot
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MonsterSpotType;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     pos;                                                      // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FRoadPointInfo>                      RoadPointList;                                            // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      SpotRadius;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct ZLevel.MonsterSpotGroup
// 0x0024
struct FMonsterSpotGroup
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     pos;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FMonsterSpot>                        SpotList;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ZLevel.MonsterGenerateCfg
// 0x002C
struct FMonsterGenerateCfg
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0004(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      SpotType;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MonsterNum;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomGenerateDelayTime;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReBornTimes;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReBornDelay;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GenerateDelayTime;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ZLevel.MonsterGeneratePlan
// 0x0020
struct FMonsterGeneratePlan
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	int                                                PlanWeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMonsterGenerateCfg>                 PlanDetail;                                               // 0x0010(0x000C) (Edit, ZeroConstructor)
	int                                                ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ZLevel.MonsterGroup
// 0x003C
struct FMonsterGroup
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<enum EGenerateType>                    ChooseGroupSpotType;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                NearPlayTeamIdx;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UZMonsterSpotGroup*>                  SpotGroupChooseList;                                      // 0x0014(0x000C) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FMonsterSpotGroup>                   MonsterSpotGroupChooseList;                               // 0x0020(0x000C) (Edit, ZeroConstructor)
	TArray<struct FMonsterGeneratePlan>                PlanList;                                                 // 0x002C(0x000C) (Edit, ZeroConstructor)
	int                                                ID;                                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ZLevel.MonsterWave
// 0x0028
struct FMonsterWave
{
	float                                              WaveDelayTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMonsterGroup>                       MonsterGroupList;                                         // 0x0004(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x0010(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<enum EMonsterWaveEndCondType>          EndCondType;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                EndCondPar;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ZLevel.LevelObjets
// 0x0040
struct FLevelObjets
{
	class UClass*                                      Objects;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Trans;                                                    // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ZLevel.LevelData
// 0x008C
struct FLevelData
{
	struct FGameLevelDesc                              LevelDesc;                                                // 0x0000(0x0014) (Edit)
	TArray<struct FString>                             TargetClassPaths;                                         // 0x0014(0x000C) (Edit, ZeroConstructor)
	struct FString                                     LeveDirectorFilePath;                                     // 0x0020(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<enum ELevelEndCondType>                EndCondType;                                              // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FString                                     EndCondPar;                                               // 0x0030(0x000C) (Edit, ZeroConstructor)
	bool                                               IsLastLevel;                                              // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                DiffcultPerc;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TaskPointLocations;                                       // 0x0044(0x000C) (Edit, ZeroConstructor)
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      // 0x0050(0x000C) (Edit, ZeroConstructor)
	TArray<struct FPVECircle>                          PVECircleInfo;                                            // 0x005C(0x000C) (Edit, ZeroConstructor)
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           // 0x0068(0x000C) (Edit, ZeroConstructor)
	struct FVector                                     pos;                                                      // 0x0074(0x000C) (Edit, IsPlainOldData)
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             // 0x0080(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ZLevel.MonsterGenerateInfo
// 0x0030
struct FMonsterGenerateInfo
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterNum;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterWaveId;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // 0x000C(0x000C) (IsPlainOldData)
	int                                                PosRadius;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReBornTimes;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReBornDelay;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRoadPointInfo>                      RoadPointList;                                            // 0x0024(0x000C) (ZeroConstructor)
};

}

