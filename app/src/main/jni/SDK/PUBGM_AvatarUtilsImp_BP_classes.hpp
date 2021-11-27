#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarUtilsImp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C
// 0x0000 (0x03D0 - 0x03D0)
class UAvatarUtilsImp_BP_C : public UAvatarBPUtils
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C");
		return pStaticClass;
	}


	int GetAdjustWeaponBPID_Lobby(int* WeaponId);
	void GetClothAvatarSuits(int* gender, struct FItemDefineID* ItemDefineID, TArray<int>* OutClothSuits);
	int GetVehicleAvatarTemplateID(struct FItemDefineID* ItemDefineID);
	int GetClothAvatarTemplateID(struct FItemDefineID* ItemDefineID);
	int GetBPIDByResID(int* resID);
	bool GetVehicleDefaultStyleID(int* InVehicleSkinID, TArray<int>* OutStyleIDList);
	struct FString GetVehicleBPPathBySkinID(int* InVehicleSkinID);
	int GetVehicleShapeBySkinID(int* InVehicleSkinID);
	void GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName, int* SpecificID);
	void ConstructAvatarDataFromTable(int* itemType, int* TemplateID, struct FAvatarTableData* OutAvatarTableData);
	class UItemHandleBase* CreateAvatarHandle(struct FItemDefineID* DefineID, class UObject** Outer, bool* bLobby);
	struct FString GetAvatarHandlePath(struct FItemDefineID* DefineID, bool* bLobby);
};


}

