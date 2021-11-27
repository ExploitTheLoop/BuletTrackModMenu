#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LoadedClassManager_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C
// 0x0040 (0x02A8 - 0x0268)
class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0004) (Transient, DuplicateTransient)
	TMap<struct FString, struct FString>               BPTableName2TableName;                                    // 0x026C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return pStaticClass;
	}


	void LoadBPTableData_Mod(const struct FString& BPTableName, const struct FString& tableName);
	void LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName);
	void Load3DIconBPTable(const struct FString& BPTableName);
	void LoadInFillingBPTable(const struct FString& BPTableName);
	void LoadVehiclePropsBPTable(const struct FString& BPTableName);
	void LoadDecalBPTable(const struct FString& BPTableName);
	void LoadSkillPropsBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitPartternBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitColorBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitParticleBPTable(const struct FString& BPTableName);
	void LoadPetAvatarBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitBPTable(const struct FString& BPTableName);
	void LoadSeasonMissionBPTable(const struct FString& BPTableName);
	void LoadAvatarPatternBPTable(const struct FString& BPTableName);
	void LoadAvatarColorBPTable(const struct FString& BPTableName);
	void LoadVehicleBPTable(const struct FString& BPTableName);
	void LoadPlaneBPTable(const struct FString& BPTableName);
	void LoadEmoteBPTable(const struct FString& BPTableName);
	void LoadConsumableBPTable(const struct FString& BPTableName);
	void LoadGameModeBPTable(const struct FString& BPTableName);
	void LoadAvatarBPTable(const struct FString& BPTableName);
	void LoadWeaponBPTable(const struct FString& BPTableName);
	void InitBPTableMap();
	void InitBPTableMap_Mod();
	void ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

