#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Koenigsegg_Mesh_Bottom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C
// 0x0164 (0x04D8 - 0x0374)
class ALobby_Koenigsegg_Mesh_Bottom_C : public ABP_ScriptBinder_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0374(0x0004) (Transient, DuplicateTransient)
	class UActorSequenceComponent*                     Switch_car;                                               // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Koenigsegg_Open_A;                               // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Koenigsegg_Open_B;                               // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Koenigsegg_Open_C;                               // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Koenigsegg_Open_D;                               // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Koenigsegg_Platform;                             // 0x0390(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSequenceComponent*                     entrance;                                                 // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Alpha_ACB8AE614DFE050CA246E7B034D5967B;        // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_0__Direction_ACB8AE614DFE050CA246E7B034D5967B;   // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationY;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateOnlyZ;                                              // 0x03B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Touching;                                                 // 0x03B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03B7(0x0001) MISSED OFFSET
	float                                              OriginTouchX;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OriginTouchY;                                             // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurRotator;                                               // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             Normal;                                                   // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoftObjectPath                             NormalSwitchCar;                                          // 0x03E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoftObjectPath                             NormalIdle;                                               // 0x0400(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoftObjectPath                             NormalFullIdle;                                           // 0x0418(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoftObjectPath                             TopIdle;                                                  // 0x0430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoftObjectPath                             TopFullIdle;                                              // 0x0448(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, class ALevelSequenceActor*>              LevelSequenceActors;                                      // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class ULevelSequencePlayer*>             LvelSequencePlayers;                                      // 0x049C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C");
		return pStaticClass;
	}


	void RemoveCacheActor();
	void ResetPlatform();
	void GetSeqByBind(int Type, struct FMovieSceneObjectBindingID* NewParam);
	void CreateLevelSequnceActor(class UObject* SluaHUID, int sequenceType, class ULevelSequencePlayer** Player, class ALevelSequenceActor** sequenceActor);
	void CreateSeq(int Type, class UObject** NewParam);
	void TriggerRotate(float Delta);
	void NeedRotate(float X, float Y, bool* need);
	void TickRotate();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void RotateSpecificAngle(float Delta);
	void StopRotate();
	void ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom(int EntryPoint);
};


}

