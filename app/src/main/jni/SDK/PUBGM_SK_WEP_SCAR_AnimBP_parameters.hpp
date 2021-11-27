#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SK_WEP_SCAR_AnimBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.HandleWeaponStateChanged
struct USK_WEP_SCAR_AnimBP_C_HandleWeaponStateChanged_Params
{
	TEnumAsByte<enum EFreshWeaponStateType>            Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861
struct USK_WEP_SCAR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861_Params
{
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnWeaponChangeState
struct USK_WEP_SCAR_AnimBP_C_OnWeaponChangeState_Params
{
	TEnumAsByte<enum EFreshWeaponStateType>            CurState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeEquip
struct USK_WEP_SCAR_AnimBP_C_OnScopeEquip_Params
{
	EWeaponAttachmentSocketType                        AttachmentSocketTypeD;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.OnScopeUnequip
struct USK_WEP_SCAR_AnimBP_C_OnScopeUnequip_Params
{
	EWeaponAttachmentSocketType                        AttachmentSocketType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.BlueprintInitializeAnimation
struct USK_WEP_SCAR_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C.ExecuteUbergraph_SK_WEP_SCAR_AnimBP
struct USK_WEP_SCAR_AnimBP_C_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

