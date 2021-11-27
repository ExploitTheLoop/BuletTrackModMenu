#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleAdvanceAvatarComp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C
// 0x0010 (0x0770 - 0x0760)
class UVehicleAdvanceAvatarComp_BP_C : public UVehicleAdvanceAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0004) (Transient, DuplicateTransient)
	TArray<int>                                        DefaultStyleIDList;                                       // 0x0764(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	EMeshType BPGetSlotMeshType(int* InSlotID, int* InSubSlotID, class UItemHandleBase** InItemHandle);
	bool InitVehicleAvatarBySkinID_Old(int* InVehicleSkinID);
	void PutOffItemIDInLobby(int InItemID, bool* Result);
	void PutOnItemIDInLobby(int InItemID, int ColorID, int PatternID, int Particle_ID, bool* Result);
	void PutOffSlotInLobby(unsigned char InSlotType, bool* Result);
	void BP_ProcessStyleUnequipped(int OldStyleID);
	void Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_ProcessStyleEquipped(int NewStyleID, int OldStyleID);
	void Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void BPCreateAvatarCustomHandle(int* SlotID, int* ItemId, struct FAvatarCustom* InCostomInfo, TArray<class UAvatarCustomBase*>* OutCustomHandle);
	struct FVehicleStyleData MakeVehicleStyleData(int* InStyleID);
	bool GenerateDefaultAvatarConfig(int* InBaseSkinID);
	bool InitVehicleAvatarBySkinID(int* InVehicleSkinID);
	void ReceiveBeginPlay();
	void Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_EventStyleEquipped(int NewStyleID, int OldStyleID);
	void BP_EventStyleUnequipped(int OldStyleID);
	void ExecuteUbergraph_VehicleAdvanceAvatarComp_BP(int EntryPoint);
};


}

