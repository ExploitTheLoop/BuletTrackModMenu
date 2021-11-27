#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_MovieScene_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2
};


// Enum AkAudio.ECustomAKAreaType
enum class ECustomAKAreaType : uint8_t
{
	ECustomAKAreaType__EAT_NormalArea = 0,
	ECustomAKAreaType__EAT_ApartArea = 1,
	ECustomAKAreaType__EAT_TransitionArea = 2,
	ECustomAKAreaType__EAT_MAX     = 3
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_1   = 1,
	AkChannelConfiguration__Ak_2   = 2,
	AkChannelConfiguration__Ak_3   = 3,
	AkChannelConfiguration__Ak_4   = 4,
	AkChannelConfiguration__Ak_5   = 5,
	AkChannelConfiguration__Ak_7   = 6,
	AkChannelConfiguration__Ak_5_1 = 7,
	AkChannelConfiguration__Ak_7_1 = 8,
	AkChannelConfiguration__Ak_7_101 = 9,
	AkChannelConfiguration__Ak_Auro_9 = 10,
	AkChannelConfiguration__Ak_Auro_10 = 11,
	AkChannelConfiguration__Ak_Auro_11 = 12,
	AkChannelConfiguration__Ak_Auro_13 = 13,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 14,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 15,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 16,
	AkChannelConfiguration__Ak_MAX = 17
};


// Enum AkAudio.EFrequencyRange
enum class EFrequencyRange : uint8_t
{
	EFrequencyRange__SubBass       = 0,
	EFrequencyRange__Bass          = 1,
	EFrequencyRange__LowMid        = 2,
	EFrequencyRange__Mid           = 3,
	EFrequencyRange__UpperMid      = 4,
	EFrequencyRange__High          = 5,
	EFrequencyRange__VeryHigh      = 6,
	EFrequencyRange__Decibal       = 7,
	EFrequencyRange__EFrequencyRange_MAX = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AudioOfflineVisualBeatData
// 0x0010
struct FAudioOfflineVisualBeatData
{
	float                                              BeatTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Intensity;                                                // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AkAudio.AkPoly
// 0x0008
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0014
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AKAreaVolumeArray
// 0x000C
struct FAKAreaVolumeArray
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0004 (0x0010 - 0x000C)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x000C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0004 (0x0010 - 0x000C)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x000C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0060
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x000C) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x000C(0x0054)
};

}

