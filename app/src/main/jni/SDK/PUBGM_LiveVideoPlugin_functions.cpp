// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LiveVideoPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LiveVideoPlugin.BP_LiveVideoLibrary.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBP_LiveVideoLibrary*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBP_LiveVideoLibrary* UBP_LiveVideoLibrary::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.GetInstance");

	UBP_LiveVideoLibrary_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 szLicenseUrl                   (Parm, ZeroConstructor)
// struct FString                 szLicenseKey                   (Parm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_VideoEditerInit(const struct FString& szLicenseUrl, const struct FString& szLicenseKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerInit");

	UBP_LiveVideoLibrary_BP_VideoEditerInit_Params params;
	params.szLicenseUrl = szLicenseUrl;
	params.szLicenseKey = szLicenseKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerCallbackTest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nCode                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam2                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strMessage                     (Parm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_VideoEditerCallbackTest(int nCode, int nParam1, int nParam2, const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_VideoEditerCallbackTest");

	UBP_LiveVideoLibrary_BP_VideoEditerCallbackTest_Params params;
	params.nCode = nCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadVideFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strSignature                   (Parm, ZeroConstructor)
// struct FString                 strVideoPath                   (Parm, ZeroConstructor)
// struct FString                 strCoverPath                   (Parm, ZeroConstructor)
// bool                           bEnableResume                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableHttps                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strFileName                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_TcUploadVideFile(const struct FString& strSignature, const struct FString& strVideoPath, const struct FString& strCoverPath, bool bEnableResume, bool bEnableHttps, const struct FString& strFileName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadVideFile");

	UBP_LiveVideoLibrary_BP_TcUploadVideFile_Params params;
	params.strSignature = strSignature;
	params.strVideoPath = strVideoPath;
	params.strCoverPath = strCoverPath;
	params.bEnableResume = bEnableResume;
	params.bEnableHttps = bEnableHttps;
	params.strFileName = strFileName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_TcUploadUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadUnInit");

	UBP_LiveVideoLibrary_BP_TcUploadUnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_TcUploadInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadInit");

	UBP_LiveVideoLibrary_BP_TcUploadInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nSessionId                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_TcUploadCancel(int nSessionId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_TcUploadCancel");

	UBP_LiveVideoLibrary_BP_TcUploadCancel_Params params;
	params.nSessionId = nSessionId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveVideoToAlbum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strVideoPath                   (Parm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_SaveVideoToAlbum(const struct FString& strVideoPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveVideoToAlbum");

	UBP_LiveVideoLibrary_BP_SaveVideoToAlbum_Params params;
	params.strVideoPath = strVideoPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveImageToAlbum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strImagePath                   (Parm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_SaveImageToAlbum(const struct FString& strImagePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_SaveImageToAlbum");

	UBP_LiveVideoLibrary_BP_SaveImageToAlbum_Params params;
	params.strImagePath = strImagePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_OpenVideoEditer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 szUrl                          (Parm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_OpenVideoEditer(const struct FString& szUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_OpenVideoEditer");

	UBP_LiveVideoLibrary_BP_OpenVideoEditer_Params params;
	params.szUrl = szUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherUnInit");

	UBP_LiveVideoLibrary_BP_LivePusherUnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStopRecord
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherStopRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStopRecord");

	UBP_LiveVideoLibrary_BP_LivePusherStopRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStop");

	UBP_LiveVideoLibrary_BP_LivePusherStop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStartRecord
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFilePath                    (Parm, ZeroConstructor)
// int                            nWidth                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            nHeight                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            nFrameRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            nBitRate                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strThumbnailPath               (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherStartRecord(const struct FString& strFilePath, int nWidth, int nHeight, int nFrameRate, int nBitRate, const struct FString& strThumbnailPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStartRecord");

	UBP_LiveVideoLibrary_BP_LivePusherStartRecord_Params params;
	params.strFilePath = strFilePath;
	params.nWidth = nWidth;
	params.nHeight = nHeight;
	params.nFrameRate = nFrameRate;
	params.nBitRate = nBitRate;
	params.strThumbnailPath = strThumbnailPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherStart(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherStart");

	UBP_LiveVideoLibrary_BP_LivePusherStart_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSetOption
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strOption                      (Parm, ZeroConstructor)
// int                            nVal                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherSetOption(const struct FString& strOption, int nVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSetOption");

	UBP_LiveVideoLibrary_BP_LivePusherSetOption_Params params;
	params.strOption = strOption;
	params.nVal = nVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSaveVideoThumbnail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strThumbnailPath               (Parm, ZeroConstructor)
// struct FString                 strVideoPath                   (Parm, ZeroConstructor)
// float                          fTime                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherSaveVideoThumbnail(const struct FString& strThumbnailPath, const struct FString& strVideoPath, float fTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherSaveVideoThumbnail");

	UBP_LiveVideoLibrary_BP_LivePusherSaveVideoThumbnail_Params params;
	params.strThumbnailPath = strThumbnailPath;
	params.strVideoPath = strVideoPath;
	params.fTime = fTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherResume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherResume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherResume");

	UBP_LiveVideoLibrary_BP_LivePusherResume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherPause");

	UBP_LiveVideoLibrary_BP_LivePusherPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsRecord
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_LivePusherIsRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsRecord");

	UBP_LiveVideoLibrary_BP_LivePusherIsRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPushing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_LivePusherIsPushing()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPushing");

	UBP_LiveVideoLibrary_BP_LivePusherIsPushing_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_LivePusherIsPush()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherIsPush");

	UBP_LiveVideoLibrary_BP_LivePusherIsPush_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherInit");

	UBP_LiveVideoLibrary_BP_LivePusherInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetVideoFileTotalTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strVideoPath                   (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_LiveVideoLibrary::BP_LivePusherGetVideoFileTotalTime(const struct FString& strVideoPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetVideoFileTotalTime");

	UBP_LiveVideoLibrary_BP_LivePusherGetVideoFileTotalTime_Params params;
	params.strVideoPath = strVideoPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePusherGetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetStatus");

	UBP_LiveVideoLibrary_BP_LivePusherGetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurRecordTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_LiveVideoLibrary::BP_LivePusherGetCurRecordTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurRecordTime");

	UBP_LiveVideoLibrary_BP_LivePusherGetCurRecordTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurFreeStorage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_LiveVideoLibrary::BP_LivePusherGetCurFreeStorage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetCurFreeStorage");

	UBP_LiveVideoLibrary_BP_LivePusherGetCurFreeStorage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetAllStorage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_LiveVideoLibrary::BP_LivePusherGetAllStorage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePusherGetAllStorage");

	UBP_LiveVideoLibrary_BP_LivePusherGetAllStorage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerUnInit");

	UBP_LiveVideoLibrary_BP_LivePlayerUnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nIndex                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBP_LiveVideoLibrary::BP_LivePlayerTexture(int nIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerTexture");

	UBP_LiveVideoLibrary_BP_LivePlayerTexture_Params params;
	params.nIndex = nIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerSeek
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fSeekTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerSeek(float fSeekTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerSeek");

	UBP_LiveVideoLibrary_BP_LivePlayerSeek_Params params;
	params.fSeekTime = fSeekTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerResume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerResume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerResume");

	UBP_LiveVideoLibrary_BP_LivePlayerResume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlayWithFd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            nFd                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bLoopKey                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoPlayKey                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerPlayWithFd(int nFd, bool bLoopKey, bool bAutoPlayKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlayWithFd");

	UBP_LiveVideoLibrary_BP_LivePlayerPlayWithFd_Params params;
	params.nFd = nFd;
	params.bLoopKey = bLoopKey;
	params.bAutoPlayKey = bAutoPlayKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoopKey                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoPlayKey                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerPlay(const struct FString& strUrl, bool bLoopKey, bool bAutoPlayKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPlay");

	UBP_LiveVideoLibrary_BP_LivePlayerPlay_Params params;
	params.strUrl = strUrl;
	params.bLoopKey = bLoopKey;
	params.bAutoPlayKey = bAutoPlayKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerPause");

	UBP_LiveVideoLibrary_BP_LivePlayerPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_LivePlayerIsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlaying");

	UBP_LiveVideoLibrary_BP_LivePlayerIsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_LivePlayerIsPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerIsPlay");

	UBP_LiveVideoLibrary_BP_LivePlayerIsPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerInit");

	UBP_LiveVideoLibrary_BP_LivePlayerInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetVideoTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          fCurTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          fTotalTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LiveVideoLibrary::BP_LivePlayerGetVideoTime(float* fCurTime, float* fTotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetVideoTime");

	UBP_LiveVideoLibrary_BP_LivePlayerGetVideoTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fCurTime != nullptr)
		*fCurTime = params.fCurTime;
	if (fTotalTime != nullptr)
		*fTotalTime = params.fTotalTime;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerGetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetStatus");

	UBP_LiveVideoLibrary_BP_LivePlayerGetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSolution
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            nWidth                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            nHeight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LiveVideoLibrary::BP_LivePlayerGetSolution(int* nWidth, int* nHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSolution");

	UBP_LiveVideoLibrary_BP_LivePlayerGetSolution_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSDKVersion
// (Final, Native, Static, Public, BlueprintCallable)

void UBP_LiveVideoLibrary::BP_LivePlayerGetSDKVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetSDKVersion");

	UBP_LiveVideoLibrary_BP_LivePlayerGetSDKVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetformat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerGetformat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerGetformat");

	UBP_LiveVideoLibrary_BP_LivePlayerGetformat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerClose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_LivePlayerClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LivePlayerClose");

	UBP_LiveVideoLibrary_BP_LivePlayerClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetSavePath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 strSavePath                    (Parm, OutParm, ZeroConstructor)

void UBP_LiveVideoLibrary::BP_LiveLiveGetSavePath(struct FString* strSavePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetSavePath");

	UBP_LiveVideoLibrary_BP_LiveLiveGetSavePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (strSavePath != nullptr)
		*strSavePath = params.strSavePath;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetFileSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 strSavePath                    (Parm, ZeroConstructor)
// float                          fFileSize                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LiveVideoLibrary::BP_LiveLiveGetFileSize(const struct FString& strSavePath, float* fFileSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveGetFileSize");

	UBP_LiveVideoLibrary_BP_LiveLiveGetFileSize_Params params;
	params.strSavePath = strSavePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fFileSize != nullptr)
		*fFileSize = params.fFileSize;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveForceGarbageCollection
// (Final, Native, Static, Public, BlueprintCallable)

void UBP_LiveVideoLibrary::BP_LiveLiveForceGarbageCollection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_LiveLiveForceGarbageCollection");

	UBP_LiveVideoLibrary_BP_LiveLiveForceGarbageCollection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_IsOpenGLEs3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LiveVideoLibrary::BP_IsOpenGLEs3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_IsOpenGLEs3");

	UBP_LiveVideoLibrary_BP_IsOpenGLEs3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_ImageSizeCompres
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strImagePath                   (Parm, ZeroConstructor)
// struct FString                 strOutImagePath                (Parm, ZeroConstructor)
// int                            nNewWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nNewHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_ImageSizeCompres(const struct FString& strImagePath, const struct FString& strOutImagePath, int nNewWidth, int nNewHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_ImageSizeCompres");

	UBP_LiveVideoLibrary_BP_ImageSizeCompres_Params params;
	params.strImagePath = strImagePath;
	params.strOutImagePath = strOutImagePath;
	params.nNewWidth = nNewWidth;
	params.nNewHeight = nNewHeight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_CompressImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strImagePath                   (Parm, ZeroConstructor)
// struct FString                 strOutImagePath                (Parm, ZeroConstructor)
// int                            nQuality                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_LiveVideoLibrary::BP_CompressImage(const struct FString& strImagePath, const struct FString& strOutImagePath, int nQuality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LiveVideoPlugin.BP_LiveVideoLibrary.BP_CompressImage");

	UBP_LiveVideoLibrary_BP_CompressImage_Params params;
	params.strImagePath = strImagePath;
	params.strOutImagePath = strOutImagePath;
	params.nQuality = nQuality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

