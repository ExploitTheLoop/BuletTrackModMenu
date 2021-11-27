#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CommonLib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CommonLib.TextWidgetInterface.GetTextContent
struct UTextWidgetInterface_GetTextContent_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.IsMatch
struct UCommonLuaLibrary_IsMatch_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     regex;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.CommonLuaLibrary.GetName
struct UCommonLuaLibrary_GetName_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.GetModNames
struct UCommonLuaLibrary_GetModNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.CommonLuaLibrary.GetGWorld
struct UCommonLuaLibrary_GetGWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.CommonLuaLibrary.GetFullName
struct UCommonLuaLibrary_GetFullName_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile
struct URuntimeFilesDownloaderLibrary_DownloadFile_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     savePath;                                                 // (Parm, ZeroConstructor)
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader
struct URuntimeFilesDownloaderLibrary_CreateDownloader_Params
{
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.ServiceManager.UnregisterService
struct UServiceManager_UnregisterService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.RegisterService
struct UServiceManager_RegisterService_Params
{
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.GetService
struct UServiceManager_GetService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

