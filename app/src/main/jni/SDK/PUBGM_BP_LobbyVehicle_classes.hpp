#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C
// 0x00B8 (0x0438 - 0x0380)
class ABP_LobbyVehicle_C : public ASTExtraLobbyVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0004) (Transient, DuplicateTransient)
	class UVehicleAdvanceAvatarComp_BP_C*              VehicleAdvanceAvatarComp_BP;                              // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FPPDynamicMat;                                            // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FName                                       TailLightParamName;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontLightParamName;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPPBoostLightParamName;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                vehicleResId;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_TailLight;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_AdvanceVehicle;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighlightTryTime;                                         // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x03C0(0x003C) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SkyMotors
	unsigned char                                      UnknownData02[0x3C];                                      // 0x03FC(0x003C) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SpecialMotors

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C");
		return pStaticClass;
	}


	void SetHighLight(float invincible, float FreExp, float Speed);
	int GetDefaultAvatarID(int* InAvatarID);
	void SetDMIParam(class UMaterialInstanceDynamic* Target, const struct FName& Name, float Value);
	void GetVehicleMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	bool ClearAllVehicleItems();
	bool PreChangeVehicleAvatar_Old(int* InAvatarID, int* InAdvanceAvatarID);
	bool PutOffVehicleSlot(EVehicleSlotType* InSlotType);
	bool PutOffVehicleItem(int* InModelID);
	bool PutOnVehicleItem(int* InModelID, int* ColorID, int* PatternID, int* ParticleID);
	void GetNewVehicleMasterAnimBPPath(int InSkinID, struct FString* AnimBpPath);
	void GetNewVehilceMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	bool PreChangeVehicleAvatar(int* InAvatarID, int* InAdvanceAvatarID);
	bool ClearAllVehicleStyleID();
	bool PutOffVehicleStyleID(int* InStyleID);
	bool PutOnVehicleStyleID(int* InStyleID);
	void UserConstructionScript();
	void TrySetHighlight(float invincible, float Freq, float Speed);
	void ExecuteUbergraph_BP_LobbyVehicle(int EntryPoint);
};


}

