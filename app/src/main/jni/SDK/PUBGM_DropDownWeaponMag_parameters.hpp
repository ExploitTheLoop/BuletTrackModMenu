#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_DropDownWeaponMag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetPendingDestroyState
struct ADropDownWeaponMag_C_SetPendingDestroyState_Params
{
	bool                                               isPendingDestroy;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetCollisionEnable
struct ADropDownWeaponMag_C_SetCollisionEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetVisible
struct ADropDownWeaponMag_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetSimulatePhysics
struct ADropDownWeaponMag_C_SetSimulatePhysics_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.SetMagMesh
struct ADropDownWeaponMag_C_SetMagMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.UserConstructionScript
struct ADropDownWeaponMag_C_UserConstructionScript_Params
{
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.WaitforDestroy
struct ADropDownWeaponMag_C_WaitforDestroy_Params
{
	float                                              leftTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDownWeaponMag.DropDownWeaponMag_C.ExecuteUbergraph_DropDownWeaponMag
struct ADropDownWeaponMag_C_ExecuteUbergraph_DropDownWeaponMag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

