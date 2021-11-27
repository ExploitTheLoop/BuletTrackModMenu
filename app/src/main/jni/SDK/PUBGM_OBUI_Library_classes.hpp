#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_OBUI_Library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBUI_Library.OBUI_Library_C
// 0x0000 (0x0020 - 0x0020)
class UOBUI_Library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass OBUI_Library.OBUI_Library_C");
		return pStaticClass;
	}


	static void IsAllStarGame(class UObject* WorldContextObj, class UObject* __WorldContext, bool* bRes);
	static void GetCustomTeammatePicByName(const struct FString& PlayerName, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetCustomCornerMarkByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* CornerMark);
	static void GetCustomKillInfoByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetCustomTeamNameByTeamID(int TeamID, class UObject* __WorldContext, bool* bFind, struct FString* TeamName);
	static void IsTeamMatch(class UObject* __WorldContext, bool* BRet);
	static void GetCustomTeamLogoByTeamID(int TeamID, class UObject* __WorldContext, TArray<struct FString>* Resolution, bool* bFind, struct FString* logoPath, class UTexture2D** LogoObject);
	static void GetPlayerNameColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerNameColor);
	static void GetPlayerColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerColor);
};


}

