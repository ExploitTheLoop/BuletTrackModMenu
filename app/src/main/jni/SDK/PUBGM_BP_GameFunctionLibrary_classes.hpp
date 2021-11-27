#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_GameFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UBP_GameFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C");
		return pStaticClass;
	}


	static void GetModeMaxTeammateNum(class UObject* __WorldContext, int* Result);
	static void EditorGetGameModeID(class UObject* WorldCont, class UObject* __WorldContext, struct FString* ModeID);
	static bool IsInFloatRangeUpperBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext);
	static bool IsInFloatRangeLowerBound(float Value, const struct FFloatRangeBound& FloatRangeBound, class UObject* __WorldContext);
	static bool IsInFloatRange(float Value, const struct FFloatRange& FloatRange, class UObject* __WorldContext);
	static void GetGuideTextStruct(int NewParam, class UObject* __WorldContext, struct FBP_STRUCT_GuideText_type* NewParam1);
	static void GetMinimapPathByModeID(class UObject* WorldContext, class UObject* __WorldContext, struct FString* MinimapPath);
	static void GetCurLevelMinimapPath(class UObject* __WorldContext, struct FString* MinimapPath);
	static void GetDecentAsset(int TypeEnum, class UObject* __WorldContext, class UParticleSystem** ParticleSys);
	static void ClampStringLength(const struct FString& Source, int Length, class UObject* __WorldContext, struct FString* Result);
	static void IsPlayerCanSeeWidget(class UWidget* NewParam, class UObject* __WorldContext, bool* cansee);
	static void GetCurLevelMapTexture(class UObject* __WorldContext, class UTexture2D** Texture);
	static void GetActorsByTag(const struct FName& Tag, class UObject* ContextObject, class UClass* ActorClass, class UObject* __WorldContext, TArray<class AActor*>* Targets);
	static void AddActorTag(class AActor* Target, const struct FName& TagInfo, class UObject* __WorldContext);
	static void SetUpGamePostProcessEffectData(class APostProcessVolume* Volume, class UObject* ContextObject, class UObject* __WorldContext);
};


}

