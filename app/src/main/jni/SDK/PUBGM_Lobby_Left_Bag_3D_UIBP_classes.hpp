#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Bag_3D_UIBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Left_Bag_3D_UIBP.Lobby_Left_Bag_3D_UIBP_C
// 0x00D0 (0x03B0 - 0x02E0)
class ALobby_Left_Bag_3D_UIBP_C : public AActor
{
public:
	class UWidgetComponent*                            Widget;                                                   // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FTransform                                  UI_Transform;                                             // 0x02F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  UI_Transform_Long;                                        // 0x0320(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Bag_Transform;                                            // 0x0350(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Bag_Transform_Long;                                       // 0x0380(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Left_Bag_3D_UIBP.Lobby_Left_Bag_3D_UIBP_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

