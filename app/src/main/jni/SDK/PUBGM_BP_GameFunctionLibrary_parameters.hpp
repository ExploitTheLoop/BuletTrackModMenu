#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_GameFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetModeMaxTeammateNum
struct UBP_GameFunctionLibrary_C_GetModeMaxTeammateNum_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.EditorGetGameModeID
struct UBP_GameFunctionLibrary_C_EditorGetGameModeID_Params
{
	class UObject*                                     WorldCont;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModeID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeUpperBound
struct UBP_GameFunctionLibrary_C_IsInFloatRangeUpperBound_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFloatRangeBound                            FloatRangeBound;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRangeLowerBound
struct UBP_GameFunctionLibrary_C_IsInFloatRangeLowerBound_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFloatRangeBound                            FloatRangeBound;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsInFloatRange
struct UBP_GameFunctionLibrary_C_IsInFloatRange_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 FloatRange;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetGuideTextStruct
struct UBP_GameFunctionLibrary_C_GetGuideTextStruct_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam1;                                                // (Parm, OutParm)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetMinimapPathByModeID
struct UBP_GameFunctionLibrary_C_GetMinimapPathByModeID_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MinimapPath;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMinimapPath
struct UBP_GameFunctionLibrary_C_GetCurLevelMinimapPath_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MinimapPath;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetDecentAsset
struct UBP_GameFunctionLibrary_C_GetDecentAsset_Params
{
	int                                                TypeEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSys;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength
struct UBP_GameFunctionLibrary_C_ClampStringLength_Params
{
	struct FString                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget
struct UBP_GameFunctionLibrary_C_IsPlayerCanSeeWidget_Params
{
	class UWidget*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               cansee;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture
struct UBP_GameFunctionLibrary_C_GetCurLevelMapTexture_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag
struct UBP_GameFunctionLibrary_C_GetActorsByTag_Params
{
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag
struct UBP_GameFunctionLibrary_C_AddActorTag_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData
struct UBP_GameFunctionLibrary_C_SetUpGamePostProcessEffectData_Params
{
	class APostProcessVolume*                          Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

