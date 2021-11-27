#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetHighLight
struct ABP_LobbyVehicle_C_SetHighLight_Params
{
	float                                              invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FreExp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetDefaultAvatarID
struct ABP_LobbyVehicle_C_GetDefaultAvatarID_Params
{
	int*                                               InAvatarID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.SetDMIParam
struct ABP_LobbyVehicle_C_SetDMIParam_Params
{
	class UMaterialInstanceDynamic*                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetVehicleMasterPath
struct ABP_LobbyVehicle_C_GetVehicleMasterPath_Params
{
	int                                                VehicleSkinID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MeshBasePath;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleItems
struct ABP_LobbyVehicle_C_ClearAllVehicleItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar_Old
struct ABP_LobbyVehicle_C_PreChangeVehicleAvatar_Old_Params
{
	int*                                               InAvatarID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InAdvanceAvatarID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleSlot
struct ABP_LobbyVehicle_C_PutOffVehicleSlot_Params
{
	EVehicleSlotType*                                  InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleItem
struct ABP_LobbyVehicle_C_PutOffVehicleItem_Params
{
	int*                                               InModelID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleItem
struct ABP_LobbyVehicle_C_PutOnVehicleItem_Params
{
	int*                                               InModelID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ParticleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehicleMasterAnimBPPath
struct ABP_LobbyVehicle_C_GetNewVehicleMasterAnimBPPath_Params
{
	int                                                InSkinID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimBpPath;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.GetNewVehilceMasterPath
struct ABP_LobbyVehicle_C_GetNewVehilceMasterPath_Params
{
	int                                                VehicleSkinID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MeshBasePath;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PreChangeVehicleAvatar
struct ABP_LobbyVehicle_C_PreChangeVehicleAvatar_Params
{
	int*                                               InAvatarID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InAdvanceAvatarID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ClearAllVehicleStyleID
struct ABP_LobbyVehicle_C_ClearAllVehicleStyleID_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOffVehicleStyleID
struct ABP_LobbyVehicle_C_PutOffVehicleStyleID_Params
{
	int*                                               InStyleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.PutOnVehicleStyleID
struct ABP_LobbyVehicle_C_PutOnVehicleStyleID_Params
{
	int*                                               InStyleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.UserConstructionScript
struct ABP_LobbyVehicle_C_UserConstructionScript_Params
{
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.TrySetHighlight
struct ABP_LobbyVehicle_C_TrySetHighlight_Params
{
	float                                              invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Freq;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyVehicle.BP_LobbyVehicle_C.ExecuteUbergraph_BP_LobbyVehicle
struct ABP_LobbyVehicle_C_ExecuteUbergraph_BP_LobbyVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

