#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Gun_3D_UIBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C
// 0x00E8 (0x03C8 - 0x02E0)
class ALobby_Left_Gun_3D_UIBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0004) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene6;                                                   // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene5;                                                   // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene4;                                                   // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene3;                                                   // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene2;                                                   // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_GunSlotScrollAnimation_Scene3_Pos_1D48F59341A91929BE9A47B14C62A65B;// 0x0304(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_GunSlotScrollAnimation_Scene2_Pos_1D48F59341A91929BE9A47B14C62A65B;// 0x0310(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_GunSlotScrollAnimation_Scene1_Pos_1D48F59341A91929BE9A47B14C62A65B;// 0x031C(0x000C) (IsPlainOldData)
	float                                              Timeline_GunSlotScrollAnimation_GunSlotScorll_1D48F59341A91929BE9A47B14C62A65B;// 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_GunSlotScrollAnimation__Direction_1D48F59341A91929BE9A47B14C62A65B;// 0x032C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_GunSlotScrollAnimation;                          // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0334(0x000C) MISSED OFFSET
	struct FTransform                                  Weapon_3D_UI_Transform;                                   // 0x0340(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Weapon_3D_UI_Transform_Long;                              // 0x0370(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              targetPositonZ;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpAlpha;                                                // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          Weapon_Transform;                                         // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USceneComponent*>                     SceneArr;                                                 // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsScrollUp;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              InitLocation;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Left_Gun_3D_UIBP.Lobby_Left_Gun_3D_UIBP_C");
		return pStaticClass;
	}


	void GetInitLocation(struct FVector* Location);
	void UserConstructionScript();
	void Timeline_GunSlotScrollAnimation__FinishedFunc();
	void Timeline_GunSlotScrollAnimation__UpdateFunc();
	void EventScrollWeaponSlot(bool isScorllUp, int scrollNum, float ZOffset);
	void CustomEventEventScrollWeaponSlot_Test(int scrollNum, float ZOffset, float Time);
	void EventStopScrollSlot();
	void ExecuteUbergraph_Lobby_Left_Gun_3D_UIBP(int EntryPoint);
};


}

