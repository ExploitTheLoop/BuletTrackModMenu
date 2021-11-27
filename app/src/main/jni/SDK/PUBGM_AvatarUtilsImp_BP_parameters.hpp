#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarUtilsImp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby
struct UAvatarUtilsImp_BP_C_GetAdjustWeaponBPID_Lobby_Params
{
	int*                                               WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarSuits
struct UAvatarUtilsImp_BP_C_GetClothAvatarSuits_Params
{
	int*                                               gender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        OutClothSuits;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleAvatarTemplateID
struct UAvatarUtilsImp_BP_C_GetVehicleAvatarTemplateID_Params
{
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarTemplateID
struct UAvatarUtilsImp_BP_C_GetClothAvatarTemplateID_Params
{
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPIDByResID
struct UAvatarUtilsImp_BP_C_GetBPIDByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID
struct UAvatarUtilsImp_BP_C_GetVehicleDefaultStyleID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutStyleIDList;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID
struct UAvatarUtilsImp_BP_C_GetVehicleBPPathBySkinID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID
struct UAvatarUtilsImp_BP_C_GetVehicleShapeBySkinID_Params
{
	int*                                               InVehicleSkinID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName
struct UAvatarUtilsImp_BP_C_GetBPTableName_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypeSpecificID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BPTableName;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                SpecificID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.ConstructAvatarDataFromTable
struct UAvatarUtilsImp_BP_C_ConstructAvatarDataFromTable_Params
{
	int*                                               itemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TemplateID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAvatarTableData                            OutAvatarTableData;                                       // (Parm, OutParm)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle
struct UAvatarUtilsImp_BP_C_CreateAvatarHandle_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath
struct UAvatarUtilsImp_BP_C_GetAvatarHandlePath_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              bLobby;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

