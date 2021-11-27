#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CommonLib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonLib.TextWidgetInterface
// 0x0000 (0x0020 - 0x0020)
class UTextWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CommonLib.TextWidgetInterface");
		return pStaticClass;
	}


	struct FString GetTextContent();
};


// Class CommonLib.LuaService
// 0x0000 (0x0020 - 0x0020)
class ULuaService : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CommonLib.LuaService");
		return pStaticClass;
	}

};


// Class CommonLib.CommonLuaLibrary
// 0x0000 (0x0020 - 0x0020)
class UCommonLuaLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CommonLib.CommonLuaLibrary");
		return pStaticClass;
	}


	static bool IsMatch(const struct FString& Source, const struct FString& regex);
	static struct FString GetName(class UObject* Obj);
	static TArray<struct FString> GetModNames();
	static class UWorld* GetGWorld();
	static struct FString GetFullName(class UObject* Obj);
};


// Class CommonLib.RuntimeFilesDownloaderLibrary
// 0x005C (0x0078 - 0x001C)
class URuntimeFilesDownloaderLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x001C(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnResult;                                                 // 0x003C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0048(0x0014) MISSED OFFSET
	struct FString                                     FileURL;                                                  // 0x005C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0068(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CommonLib.RuntimeFilesDownloaderLibrary");
		return pStaticClass;
	}


	class URuntimeFilesDownloaderLibrary* DownloadFile(const struct FString& URL, const struct FString& savePath);
	static class URuntimeFilesDownloaderLibrary* CreateDownloader();
};


// Class CommonLib.ServiceManager
// 0x003C (0x0058 - 0x001C)
class UServiceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CommonLib.ServiceManager");
		return pStaticClass;
	}


	void UnregisterService(class UClass* ServiceType, const struct FString& serviceName);
	void RegisterService(class UObject* Service, class UClass* ServiceType, const struct FString& serviceName);
	class UObject* GetService(class UClass* ServiceType, const struct FString& serviceName);
};


}

