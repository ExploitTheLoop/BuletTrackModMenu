#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlaneCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlaneCharacter.BP_PlaneCharacter_C
// 0x0058 (0x0798 - 0x0740)
class ABP_PlaneCharacter_C : public APlaneCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0004) (Transient, DuplicateTransient)
	class UPlaneAvatarComponent_BP_C*                  PlaneAvatarComponent_BP;                                  // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0748(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            PlaneCamera;                                              // 0x074C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         PlaneSpringArm;                                           // 0x0750(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0754(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem7;                                          // 0x0758(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem6;                                          // 0x075C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem5;                                          // 0x0760(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem4;                                          // 0x0764(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x0768(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_tail_01;                                           // 0x076C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_light_green_01;                                    // 0x0770(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_light_red_02;                                      // 0x0774(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_light_red_01;                                      // 0x0778(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_light_blue_01;                                     // 0x077C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0784(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0788(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plan_Propeller_01;                                      // 0x078C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0790(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                planeResId;                                               // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlaneCharacter.BP_PlaneCharacter_C");
		return pStaticClass;
	}


	void AsyncChangePlaneAvatar(int InItemID);
	void ChangePlaneAvatar(int InItemID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlaneCharacter(int EntryPoint);
};


}

