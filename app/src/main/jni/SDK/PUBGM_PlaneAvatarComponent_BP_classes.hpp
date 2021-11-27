#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlaneAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C
// 0x0010 (0x0308 - 0x02F8)
class UPlaneAvatarComponent_BP_C : public UPlaneAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0004) (Transient, DuplicateTransient)
	float                                              ChangeDissolveTime;                                       // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BOpenDissolve;                                            // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	float                                              DissolveValue;                                            // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C");
		return pStaticClass;
	}


	class UBattleItemHandleBase* CreateItemAvatarHandle(int InItemID);
	void BP_SetMatDissolve(float NewParam);
	void BP_OnPlaneAvatarChanged();
	class UBackpackPlaneAvatarHandle* GetPlaneAvatarHandle(int* ItemId);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void PlaneAvatarChanged();
	void ExecuteUbergraph_PlaneAvatarComponent_BP(int EntryPoint);
};


}

