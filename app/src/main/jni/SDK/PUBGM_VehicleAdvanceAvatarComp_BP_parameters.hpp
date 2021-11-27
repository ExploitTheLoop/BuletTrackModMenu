#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleAdvanceAvatarComp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GetReflectionCubeName_Lobby
struct UVehicleAdvanceAvatarComp_BP_C_GetReflectionCubeName_Lobby_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BPGetSlotMeshType
struct UVehicleAdvanceAvatarComp_BP_C_BPGetSlotMeshType_Params
{
	int*                                               InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSubSlotID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemHandleBase**                            InItemHandle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMeshType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.InitVehicleAvatarBySkinID_Old
struct UVehicleAdvanceAvatarComp_BP_C_InitVehicleAvatarBySkinID_Old_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOffItemIDInLobby
struct UVehicleAdvanceAvatarComp_BP_C_PutOffItemIDInLobby_Params
{
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOnItemIDInLobby
struct UVehicleAdvanceAvatarComp_BP_C_PutOnItemIDInLobby_Params
{
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Particle_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOffSlotInLobby
struct UVehicleAdvanceAvatarComp_BP_C_PutOffSlotInLobby_Params
{
	unsigned char                                      InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleUnequipped
struct UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleUnequipped_Params
{
	int                                                OldStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicUnequipped
struct UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleEquipped
struct UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleEquipped_Params
{
	int                                                NewStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicEquipped
struct UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BPCreateAvatarCustomHandle
struct UVehicleAdvanceAvatarComp_BP_C_BPCreateAvatarCustomHandle_Params
{
	int*                                               SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAvatarCustom                               InCostomInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAvatarCustomBase*>                   OutCustomHandle;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.MakeVehicleStyleData
struct UVehicleAdvanceAvatarComp_BP_C_MakeVehicleStyleData_Params
{
	int*                                               InStyleID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleStyleData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GenerateDefaultAvatarConfig
struct UVehicleAdvanceAvatarComp_BP_C_GenerateDefaultAvatarConfig_Params
{
	int*                                               InBaseSkinID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.InitVehicleAvatarBySkinID
struct UVehicleAdvanceAvatarComp_BP_C_InitVehicleAvatarBySkinID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ReceiveBeginPlay
struct UVehicleAdvanceAvatarComp_BP_C_ReceiveBeginPlay_Params
{
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicEquipped
struct UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicUnequipped
struct UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleEquipped
struct UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleEquipped_Params
{
	int                                                NewStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleUnequipped
struct UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleUnequipped_Params
{
	int                                                OldStyleID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ExecuteUbergraph_VehicleAdvanceAvatarComp_BP
struct UVehicleAdvanceAvatarComp_BP_C_ExecuteUbergraph_VehicleAdvanceAvatarComp_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

