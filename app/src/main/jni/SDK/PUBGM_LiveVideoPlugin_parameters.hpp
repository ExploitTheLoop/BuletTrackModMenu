#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LiveVideoPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LiveVideoPlugin.BP_LiveVideoLibrary.GetInstance
struct UBP_LiveVideoLibrary_GetInstance_Params
{
	class UBP_LiveVideoLibrary*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerInit
struct UBP_LiveVideoLibrary_BP_VideoEditerInit_Params
{
	struct FString                                     szLicenseUrl;                                             // (Parm, ZeroConstructor)
	struct FString                                     szLicenseKey;                                             // (Parm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerCallbackTest
struct UBP_LiveVideoLibrary_BP_VideoEditerCallbackTest_Params
{
	int                                                nCode;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadVideFile
struct UBP_LiveVideoLibrary_BP_TcUploadVideFile_Params
{
	struct FString                                     strSignature;                                             // (Parm, ZeroConstructor)
	struct FString                                     strVideoPath;                                             // (Parm, ZeroConstructor)
	struct FString                                     strCoverPath;                                             // (Parm, ZeroConstructor)
	bool                                               bEnableResume;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHttps;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strFileName;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadUnInit
struct UBP_LiveVideoLibrary_BP_TcUploadUnInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadInit
struct UBP_LiveVideoLibrary_BP_TcUploadInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadCancel
struct UBP_LiveVideoLibrary_BP_TcUploadCancel_Params
{
	int                                                nSessionId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveVideoToAlbum
struct UBP_LiveVideoLibrary_BP_SaveVideoToAlbum_Params
{
	struct FString                                     strVideoPath;                                             // (Parm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveImageToAlbum
struct UBP_LiveVideoLibrary_BP_SaveImageToAlbum_Params
{
	struct FString                                     strImagePath;                                             // (Parm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_OpenVideoEditer
struct UBP_LiveVideoLibrary_BP_OpenVideoEditer_Params
{
	struct FString                                     szUrl;                                                    // (Parm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherUnInit
struct UBP_LiveVideoLibrary_BP_LivePusherUnInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStopRecord
struct UBP_LiveVideoLibrary_BP_LivePusherStopRecord_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStop
struct UBP_LiveVideoLibrary_BP_LivePusherStop_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStartRecord
struct UBP_LiveVideoLibrary_BP_LivePusherStartRecord_Params
{
	struct FString                                     strFilePath;                                              // (Parm, ZeroConstructor)
	int                                                nWidth;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nHeight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nFrameRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nBitRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strThumbnailPath;                                         // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStart
struct UBP_LiveVideoLibrary_BP_LivePusherStart_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSetOption
struct UBP_LiveVideoLibrary_BP_LivePusherSetOption_Params
{
	struct FString                                     strOption;                                                // (Parm, ZeroConstructor)
	int                                                nVal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSaveVideoThumbnail
struct UBP_LiveVideoLibrary_BP_LivePusherSaveVideoThumbnail_Params
{
	struct FString                                     strThumbnailPath;                                         // (Parm, ZeroConstructor)
	struct FString                                     strVideoPath;                                             // (Parm, ZeroConstructor)
	float                                              fTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherResume
struct UBP_LiveVideoLibrary_BP_LivePusherResume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherPause
struct UBP_LiveVideoLibrary_BP_LivePusherPause_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsRecord
struct UBP_LiveVideoLibrary_BP_LivePusherIsRecord_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPushing
struct UBP_LiveVideoLibrary_BP_LivePusherIsPushing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPush
struct UBP_LiveVideoLibrary_BP_LivePusherIsPush_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherInit
struct UBP_LiveVideoLibrary_BP_LivePusherInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetVideoFileTotalTime
struct UBP_LiveVideoLibrary_BP_LivePusherGetVideoFileTotalTime_Params
{
	struct FString                                     strVideoPath;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetStatus
struct UBP_LiveVideoLibrary_BP_LivePusherGetStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurRecordTime
struct UBP_LiveVideoLibrary_BP_LivePusherGetCurRecordTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurFreeStorage
struct UBP_LiveVideoLibrary_BP_LivePusherGetCurFreeStorage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetAllStorage
struct UBP_LiveVideoLibrary_BP_LivePusherGetAllStorage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerUnInit
struct UBP_LiveVideoLibrary_BP_LivePlayerUnInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerTexture
struct UBP_LiveVideoLibrary_BP_LivePlayerTexture_Params
{
	int                                                nIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerSeek
struct UBP_LiveVideoLibrary_BP_LivePlayerSeek_Params
{
	float                                              fSeekTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerResume
struct UBP_LiveVideoLibrary_BP_LivePlayerResume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlayWithFd
struct UBP_LiveVideoLibrary_BP_LivePlayerPlayWithFd_Params
{
	int                                                nFd;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bLoopKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlayKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlay
struct UBP_LiveVideoLibrary_BP_LivePlayerPlay_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoopKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlayKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPause
struct UBP_LiveVideoLibrary_BP_LivePlayerPause_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlaying
struct UBP_LiveVideoLibrary_BP_LivePlayerIsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlay
struct UBP_LiveVideoLibrary_BP_LivePlayerIsPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerInit
struct UBP_LiveVideoLibrary_BP_LivePlayerInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetVideoTime
struct UBP_LiveVideoLibrary_BP_LivePlayerGetVideoTime_Params
{
	float                                              fCurTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              fTotalTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetStatus
struct UBP_LiveVideoLibrary_BP_LivePlayerGetStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSolution
struct UBP_LiveVideoLibrary_BP_LivePlayerGetSolution_Params
{
	int                                                nWidth;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                nHeight;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSDKVersion
struct UBP_LiveVideoLibrary_BP_LivePlayerGetSDKVersion_Params
{
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetformat
struct UBP_LiveVideoLibrary_BP_LivePlayerGetformat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerClose
struct UBP_LiveVideoLibrary_BP_LivePlayerClose_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetSavePath
struct UBP_LiveVideoLibrary_BP_LiveLiveGetSavePath_Params
{
	struct FString                                     strSavePath;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetFileSize
struct UBP_LiveVideoLibrary_BP_LiveLiveGetFileSize_Params
{
	struct FString                                     strSavePath;                                              // (Parm, ZeroConstructor)
	float                                              fFileSize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveForceGarbageCollection
struct UBP_LiveVideoLibrary_BP_LiveLiveForceGarbageCollection_Params
{
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_IsOpenGLEs3
struct UBP_LiveVideoLibrary_BP_IsOpenGLEs3_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_ImageSizeCompres
struct UBP_LiveVideoLibrary_BP_ImageSizeCompres_Params
{
	struct FString                                     strImagePath;                                             // (Parm, ZeroConstructor)
	struct FString                                     strOutImagePath;                                          // (Parm, ZeroConstructor)
	int                                                nNewWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nNewHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_CompressImage
struct UBP_LiveVideoLibrary_BP_CompressImage_Params
{
	struct FString                                     strImagePath;                                             // (Parm, ZeroConstructor)
	struct FString                                     strOutImagePath;                                          // (Parm, ZeroConstructor)
	int                                                nQuality;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

