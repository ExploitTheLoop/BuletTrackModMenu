#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TApm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TApm.TApmHelper
// 0x0000 (0x0020 - 0x0020)
class UTApmHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TApm.TApmHelper");
		return pStaticClass;
	}


	static struct FString ValidateDevice();
	static void UpdateGameStatusToVmp(int Key, const struct FString& Value);
	static void SetVersionIden(const struct FString& versionName);
	static void SetUserID(const struct FString& userId);
	static void SetTragetFrameRate(int Target);
	static void SetQuality(int Quality);
	static void SetPssManualMode();
	static void SetLocale(const struct FString& Locale);
	static void SetDeviceLevel(int DeviceLevel);
	static void setAffinityForThread(int tid);
	static void requestResourceGuarantee(int Condition, int loadType, int applyType);
	static void RequestPssSample();
	static void ReleaseStepEventContext();
	static void RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID);
	static void PutKVS(const struct FString& Key, const struct FString& Value);
	static void PutKVI(const struct FString& Key, int Value);
	static void PutKVD(const struct FString& Key, float Value);
	static void PostValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void PostValueI3(const struct FString& catgory, const struct FString& Key, int A, int B, int C);
	static void PostValueI2(const struct FString& catgory, const struct FString& Key, int A, int B);
	static void PostValueI1(const struct FString& catgory, const struct FString& Key, int A);
	static void PostValueF3(const struct FString& catgory, const struct FString& Key, float A, float B, float C);
	static void PostValueF2(const struct FString& catgory, const struct FString& Key, float A, float B);
	static void PostValueF1(const struct FString& catgory, const struct FString& Key, float A);
	static void PostTrackState(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	static void PostStreamEvent(int stepId, int Status, int code, const struct FString& Info);
	static void PostStepEvent(const struct FString& eventCategory, int stepId, int Status, int code, const struct FString& Msg, const struct FString& extraKey);
	static void PostNTL(int latency);
	static void PostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void PostLagStatus(float Distance);
	static void PostGameStatusToTGPASS(const struct FString& Key, const struct FString& Value);
	static void PostGameStatusToTGPASMap(const struct FString& Key, TMap<struct FString, struct FString> mapData);
	static void PostGameStatusToTGPAIS(int Key, const struct FString& Value);
	static void PostFrame(float DeltaTime);
	static void PostEvent(int Key, const struct FString& Info, bool savetolocal);
	static void MarkLevelLoadCompleted();
	static void MarkLevelLoad(const struct FString& SceneName, int Quality);
	static void MarkLevelFin();
	static void MarkHideLoadingUI();
	static void MarkAppFinishLaunch();
	static void LinkLastStepEventSession(const struct FString& eventCategory);
	static void InitTGPA();
	static void InitStepEventContext();
	static struct FString GetOptCfgStr();
	static int GetDeviceLevelByQcc(const struct FString& ConfigName, const struct FString& GPUFamily);
	static int GetDeviceLevel();
	static struct FString GetDataFromTGPA(const struct FString& Key, const struct FString& Value);
	static void EndTupleWrap();
	static void EndTag();
	static void EndExclude();
	static void EnableDebugMode();
	static void DumpEvent(const struct FString& dumpfile);
	static void cancelAffinityForThread(int tid);
	static void BeginTupleWrap(const struct FString& Key);
	static void BeginExclude();
	static void AddTag(const struct FString& TagName);
};


// Class TApm.TApmSceneMarker
// 0x0004 (0x0020 - 0x001C)
class UTApmSceneMarker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TApm.TApmSceneMarker");
		return pStaticClass;
	}


	static void SetEnable(bool Enabled);
	static void MarkOPScene(int ID);
	static void MarkFlowScene(int ID);
	static void CancelOPScene(int ID);
};


}

