#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0024 (0x0040 - 0x001C)
class UMovieSceneSignedObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x001C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return pStaticClass;
	}

};


// Class MovieScene.MovieScene
// 0x0070 (0x00B0 - 0x0040)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0040(0x000C) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x004C(0x000C) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0058(0x000C) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x0064(0x000C) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x0070(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFloatRange                                 SelectionRange;                                           // 0x0074(0x0010)
	struct FFloatRange                                 PlaybackRange;                                            // 0x0084(0x0010)
	bool                                               bForceFixedFrameIntervalPlayback;                         // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              OutTime;                                                  // 0x00A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartTime;                                                // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieScene");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0054 (0x0070 - 0x001C)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0020(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x44];                                      // 0x002C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0020 - 0x0020)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0020 - 0x0020)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x000C (0x0028 - 0x001C)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x000C (0x0028 - 0x001C)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0020 - 0x0020)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return pStaticClass;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneFolder
// 0x003C (0x0058 - 0x001C)
class UMovieSceneFolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       FolderName;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0028(0x000C) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0034(0x000C) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0040(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0048 - 0x0040)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0040(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0040(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0044(0x0028) (Edit)
	float                                              StartTime;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x007C(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x007C(0x0001) (Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x007C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              PrerollTime;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x0088(0x0002)
	unsigned char                                      UnknownData02[0x6];                                       // 0x008A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0010 (0x0058 - 0x0048)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0048(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestSection");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x01E0 (0x0220 - 0x0040)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                       // 0x0040(0x0194)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                       // 0x01D4(0x0002)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D6(0x0002) MISSED OFFSET
	TMap<class UObject*, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates;                  // 0x01D8(0x0050) (ZeroConstructor)
	bool                                               bParentContextsAreSignificant;                            // 0x0214(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0215(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x05EC (0x0608 - 0x001C)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C4];                                     // 0x001C(0x02C4) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x02E0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x02EC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x02F8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreStop;                                                // 0x0304(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               FreezeEndFrame;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x0314(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0320(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnObjectSpawnedEvent;                                     // 0x032C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<enum EMovieScenePlayerStatus>          Status;                                                   // 0x0338(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0339(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x0339(0x0001)
	unsigned char                                      UnknownData02[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x033C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x034C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0350(0x000C) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x035C(0x0020)
	unsigned char                                      UnknownData04[0x28C];                                     // 0x037C(0x028C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return pStaticClass;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlayLoopCount(int NumLoops);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void Scrub();
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToPositionEx(float NewPlaybackPosition);
	void JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


}

