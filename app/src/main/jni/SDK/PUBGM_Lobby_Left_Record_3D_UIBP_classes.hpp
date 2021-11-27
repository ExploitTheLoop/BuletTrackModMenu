#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Record_3D_UIBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C
// 0x0278 (0x0558 - 0x02E0)
class ALobby_Left_Record_3D_UIBP_C : public AActor
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
	struct FVector                                     Timeline_0_SlotPos6_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x0304(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_SlotPos5_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x0310(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_SlotPos4_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x031C(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_SlotPos3_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x0328(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_SlotPos2_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x0334(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_SlotPos1_91D7C1FB4DF4AA9F9C875EB838F820D5;     // 0x0340(0x000C) (IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_0__Direction_91D7C1FB4DF4AA9F9C875EB838F820D5;   // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0354(0x000C) MISSED OFFSET
	struct FTransform                                  UI_3D_Transform;                                          // 0x0360(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  UI_3D_Transform_Long;                                     // 0x0390(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          Vehicle_3D_Transform;                                     // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          Vehicle_UI_3D_Transform;                                  // 0x03CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Vehicle_UI_Location;                                      // 0x03D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Vehicle_Download_Location;                                // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTransform                                  Bag_Transform;                                            // 0x03F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Bag_Transform_Long;                                       // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Shelf2_Transform;                                         // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Shelf2_Transform_Long;                                    // 0x0480(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Shelf3_Transform;                                         // 0x04B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Shelf3_Transform_Long;                                    // 0x04E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RankIntegral_Transform;                                   // 0x0510(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          AchieveAlias_Transform;                                   // 0x0540(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsScrollLeft;                                             // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	float                                              targetPositonZ;                                           // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpAlpha;                                                // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Left_Record_3D_UIBP.Lobby_Left_Record_3D_UIBP_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void EventScrollSlot(bool isScorllLeft);
	void EventStopScroll();
	void ExecuteUbergraph_Lobby_Left_Record_3D_UIBP(int EntryPoint);
};


}

