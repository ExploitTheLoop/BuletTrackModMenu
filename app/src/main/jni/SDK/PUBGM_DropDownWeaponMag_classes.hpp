#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_DropDownWeaponMag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DropDownWeaponMag.DropDownWeaponMag_C
// 0x0016 (0x02F6 - 0x02E0)
class ADropDownWeaponMag_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0004) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Up;                                                       // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Down;                                                     // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mag;                                                      // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PendingDestroy;                                           // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckRollDown;                                            // 0x02F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass DropDownWeaponMag.DropDownWeaponMag_C");
		return pStaticClass;
	}


	void SetPendingDestroyState(bool isPendingDestroy);
	void SetCollisionEnable(bool Enable);
	void SetVisible(bool Visible, class APawn* Owner);
	void SetSimulatePhysics(bool Enable);
	void SetMagMesh(class UStaticMesh* Mesh);
	void UserConstructionScript();
	void WaitforDestroy(float leftTime);
	void ExecuteUbergraph_DropDownWeaponMag(int EntryPoint);
};


}

