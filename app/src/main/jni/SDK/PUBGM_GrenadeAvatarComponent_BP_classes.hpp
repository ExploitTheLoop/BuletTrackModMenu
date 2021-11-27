#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GrenadeAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C
// 0x00D0 (0x0458 - 0x0388)
class UGrenadeAvatarComponent_BP_C : public UGrenadeAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x038C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeEffect
	unsigned char                                      UnknownData02[0x28];                                      // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.ExplodeSound
	unsigned char                                      UnknownData03[0x28];                                      // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeFuzeAkSoundEvent
	unsigned char                                      UnknownData04[0x28];                                      // 0x0408(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeThrowAkSoundEvent
	unsigned char                                      UnknownData05[0x28];                                      // 0x0430(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C.GrenadeWallCollideAkSoundEvent

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GrenadeAvatarComponent_BP.GrenadeAvatarComponent_BP_C");
		return pStaticClass;
	}


	int GetDefaultAvatarID(int* InAvatarID);
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void GrenadeAvatarEquiped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrenadeAvatarComponent_BP(int EntryPoint);
};


}

