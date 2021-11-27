#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BuildPatchServices_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildPatchServices.BuildPatchManifest
// 0x00BC (0x00D8 - 0x001C)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint32_t                                           AppID;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppName;                                                  // 0x0024(0x000C) (ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x0030(0x000C) (ZeroConstructor)
	struct FString                                     LaunchExe;                                                // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     LaunchCommand;                                            // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0054(0x003C) UNKNOWN PROPERTY: SetProperty BuildPatchServices.BuildPatchManifest.PrereqIds
	struct FString                                     PrereqName;                                               // 0x0090(0x000C) (ZeroConstructor)
	struct FString                                     PrereqPath;                                               // 0x009C(0x000C) (ZeroConstructor)
	struct FString                                     PrereqArgs;                                               // 0x00A8(0x000C) (ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00B4(0x000C) (ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x00C0(0x000C) (ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x00CC(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return pStaticClass;
	}

};


}

