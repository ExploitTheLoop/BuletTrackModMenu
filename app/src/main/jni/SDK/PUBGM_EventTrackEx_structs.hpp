#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_MovieSceneTracks_classes.hpp"
#include "PUBGM_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EventTrackEx.XTEventPayload
// 0x0060
struct FXTEventPayload
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgName;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor)
	struct FString                                     param1;                                                   // 0x0014(0x000C) (Edit, ZeroConstructor)
	struct FString                                     param2;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor)
	struct FString                                     param3;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Param4;                                                   // 0x0038(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Param5;                                                   // 0x0044(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Param6;                                                   // 0x0050(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct EventTrackEx.MovieSceneXTEventSectionData
// 0x0018
struct FMovieSceneXTEventSectionData
{
	TArray<float>                                      KeyTimes;                                                 // 0x0000(0x000C) (ZeroConstructor)
	TArray<struct FXTEventPayload>                     KeyValues;                                                // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct EventTrackEx.MovieSceneXTEventSectionTemplate
// 0x0028 (0x0034 - 0x000C)
struct FMovieSceneXTEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneXTEventSectionData               EventData;                                                // 0x000C(0x0018)
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           // 0x0024(0x000C) (ZeroConstructor)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0030(0x0001)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

}

