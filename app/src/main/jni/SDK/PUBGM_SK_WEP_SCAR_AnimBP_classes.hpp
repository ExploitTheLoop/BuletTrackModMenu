#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SK_WEP_SCAR_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C
// 0x0308 (0x0638 - 0x0330)
class USK_WEP_SCAR_AnimBP_C : public UWeaponAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_E0B90AD14ED6B7EC52E645A370C3E9D6;      // 0x0338(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861;// 0x0370(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0FC4C7994FF75BBBC7DA1E8F8A28D1D1;// 0x0408(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42DBF73F4D1B13CD4B302EB7F90A76E9;// 0x0468(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D116339E424B254CA282DE8A8C5CBE65;      // 0x04C8(0x0058)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BA19168644BB52369E637290CC89E913;// 0x0520(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E00B452142980F5B03492B99D420779E;// 0x05D0(0x0060)
	bool                                               EquipScope;                                               // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0631(0x0003) MISSED OFFSET
	class UWeaponAvatarComponent*                      WeaponAvatarComp;                                         // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass SK_WEP_SCAR_AnimBP.SK_WEP_SCAR_AnimBP_C");
		return pStaticClass;
	}


	void HandleWeaponStateChanged(TEnumAsByte<enum EFreshWeaponStateType> Selection);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_SCAR_AnimBP_AnimGraphNode_BlendListByBool_C89DFC5847056D779E16F58B2B65C861();
	void OnWeaponChangeState(TEnumAsByte<enum EFreshWeaponStateType> CurState);
	void OnScopeEquip(EWeaponAttachmentSocketType AttachmentSocketTypeD);
	void OnScopeUnequip(EWeaponAttachmentSocketType AttachmentSocketType);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_WEP_SCAR_AnimBP(int EntryPoint);
};


}

