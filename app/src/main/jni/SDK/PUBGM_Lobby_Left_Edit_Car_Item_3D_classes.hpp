#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Left_Edit_Car_Item_3D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Left_Edit_Car_Item_3D.Lobby_Left_Edit_Car_Item_3D_C
// 0x0008 (0x02E8 - 0x02E0)
class ALobby_Left_Edit_Car_Item_3D_C : public AActor
{
public:
	class UWidgetComponent*                            Widget;                                                   // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Left_Edit_Car_Item_3D.Lobby_Left_Edit_Car_Item_3D_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

