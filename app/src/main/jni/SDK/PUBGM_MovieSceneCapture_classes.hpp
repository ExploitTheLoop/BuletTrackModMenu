#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MovieSceneCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCapture
// 0x014C (0x0168 - 0x001C)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FCaptureProtocolID                          CaptureType;                                              // 0x0028(0x0008) (Edit, Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0034(0x003C) (Edit, Config)
	bool                                               bUseSeparateProcess;                                      // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x0071(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x0074(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x0080(0x000C) (Edit, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0xDC];                                      // 0x008C(0x00DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x0168 - 0x0168)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0004 (0x0020 - 0x001C)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0030 (0x0050 - 0x0020)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	bool                                               bCaptureFramesInHDR;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<enum EHDRCaptureGamut>                 CaptureGamut;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0038(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0028 - 0x0020)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0020 - 0x0020)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0020 - 0x0020)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0188 - 0x0168)
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0169(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x0174(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0004 (0x0020 - 0x001C)
class UMovieSceneCaptureEnvironment : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return pStaticClass;
	}


	static int GetCaptureFrameNumber();
	static float GetCaptureElapsedTime();
};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0010 (0x0038 - 0x0028)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	float                                              CompressionQuality;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VideoCodec;                                               // 0x002C(0x000C) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return pStaticClass;
	}

};


}

