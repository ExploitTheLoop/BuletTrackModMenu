#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlayerPrefs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C
// 0x04B0 (0x04D0 - 0x0020)
class UPlayerPrefs_C : public USaveGame
{
public:
	int                                                LoginCount;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoginTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstInLobby;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GuestWarningAccepted;                                     // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                YXXYRedPoint;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             NearByNewTipsList;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: SetProperty PlayerPrefs.PlayerPrefs_C.CloseLocationList
	bool                                               QuestionDone;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ServerListClicked;                                        // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                MysteryLastTime;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               notFirstEnterMall;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                CoprsShopLevelRedPoint;                                   // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        StoreBoxList;                                             // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, bool>                                    HasSeeShopItemDict;                                       // 0x0094(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NewsIds;                                                  // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LobbyNoticeID;                                            // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UserAgreementAcceptedVersion;                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrivacyPolicyAcceptedVersion;                             // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClickTimeNotBind;                                         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClickTimeBind;                                            // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, int>                          UidClickTimeNotBind;                                      // 0x00E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          UidClickTimeBind;                                         // 0x0124(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StoreGiftBoxList;                                         // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AchievementInitialized;                                   // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	int                                                Mystery2LastTime;                                         // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FString>               ConfigStringMap;                                          // 0x0174(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          ConfigIntMap;                                             // 0x01B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, float>                        ConfigFloatMap;                                           // 0x01EC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         ConfigBoolMap;                                            // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          UidAirDropTime;                                           // 0x0264(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoginFrequency;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDay;                                               // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             SecondLanguage;                                           // 0x02A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FDateTime                                   ShowSwitchSecondLanguageNextTime;                         // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickUPassAct;                                         // 0x02C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickInviteTeamAct;                                    // 0x02FC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CursorFaceInfoID;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FString>               FaceInfoClickedIDAndTime;                                 // 0x033C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LanguagePromptState;                                      // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTipLeagueGameSign;                                     // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x037A(0x0002) MISSED OFFSET
	TMap<struct FString, int>                          ClickTimeHalloweenVehicle;                                // 0x037C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickHalloweenExchange;                                // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     primeClicktimestamp;                                      // 0x03F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isVNGadult;                                               // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	TMap<struct FString, int>                          ClickTimeIceLucky;                                        // 0x0404(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFirstTimeShowPrime;                                     // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	TMap<struct FString, bool>                         HasCliickVehicleAcitivtyGuide;                            // 0x0444(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          ClickTimeAnniversary;                                     // 0x0480(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DecomposeTriggerTime;                                     // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               haveClickGuaranteeTips;                                   // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	int                                                LastEnterExcitingTourTimeSec;                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IfHasShowExcitingTourTips;                                // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                PrivacyPolicyPopupVersion;                                // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C");
		return pStaticClass;
	}


	void SetPopupPolicyVersion(int PolicyVersion);
	void SetGuaranteeFlag(bool clicked);
	void GetGuaranteeClickFlag(bool* clicked);
	void GetDecomposeIndexTriggerTime(int* DecomposeTriggerTim);
	void SetDecomposeIndexTriggerTime(int TimeStamp);
	void SetClickTimeAnniversary(const struct FString& UId, int Time);
	void GetClickTimeAnniversary(const struct FString& UId, int* Value);
	void GetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool* hasClick);
	void SetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool isClick);
	void SetClickTimeIceLucky(int Time, const struct FString& UUID);
	void GetClickTimeIceLucky(const struct FString& UUID, int* Value);
	void SetIsVNGAdult();
	void GetIsFirstTimeShowPrime(bool* IsfirstTimeOpenPrime);
	void SetIsFirstTimeShowPrime();
	void SetHasClickHalloweenExchange(bool isClick, const struct FString& UUID);
	void GetHasClickHalloweenExchange(const struct FString& UUID, bool* hasClick);
	void SetClickTimeHalloweenVehicle(int Time, const struct FString& UUID);
	void GetClickTimeHalloweenVehicle(const struct FString& UUID, int* Value);
	void GetFaceInfoClickedIDAndTime(const struct FString& Faceid, struct FString* TimeStamp);
	void SetFaceInfoClickedIDAndTime(const struct FString& Faceid);
	void GetCursorFaceInfoID(int* CursorFaceInfoID);
	void SetCursorFaceInfoID(int LastFace);
	void SetHasClickInviteTeamAct(bool isClick, const struct FString& UUID);
	void GetHasClickInviteTeamAct(const struct FString& UUID, bool* hasClick);
	void GetHasClickUPassAct(const struct FString& UUID, bool* hasClick);
	void SetHasClickUPassAct(bool isClick, const struct FString& UUID);
	void SetShowSwitchSecondLanguageNextTime(const struct FDateTime& DateTime);
	void GetShowSwitchSecondLanguageNextTime(struct FDateTime* DateTime);
	void GetLoginFrequency(int* loginfreq);
	void SetLoginFrequency(int CurrentDay);
	void GetAirDropTime(const struct FString& UId, int* outAirDropTime);
	void SetAirDropTime(int InTime, const struct FString& UId);
	void SetMystery2LastTime(int Time);
	void SetStoreGiftBoxList(TArray<int>* BoxList);
	void GetClickTimeAboutBind(const struct FString& UId, int* TimeNotBind, int* TimeBind);
	void SetClickTimeAboutBind(int TimeNotBind, int TimeBind, const struct FString& UId);
	void IsEqualCurID(int ids, bool* Has);
	void SetNewsIds(int ids);
	void SetMallSeeDict(TMap<int, bool> Dict);
	void SetStoreBosList(TArray<int>* BoxList);
	void SetCorpsShopRedPoint(int coprsLevel);
	void SetFirstEnterMall();
	void SetMysteryLastTime(int Time);
	void RejectUserAgreement();
	void AcceptUserAgreement(int newVersion);
	void ServerListClick();
	void HasCloseLocation(bool UId, bool* Has);
	void SetCloseLocation(bool CloseLocation, const struct FString& UId);
	void HasNearByNewTips(const struct FString& UId, bool* Has);
	void SetNearByNewTipsRead(const struct FString& UId);
	void SetYXXYRedPoint(int isRed);
	void AcceptGuestWarning();
	void RejectPolicy();
	void AcceptPolicy(int newVersion);
	void SetFirstInLobby();
	void SetTime(int arg);
	void ClearCount();
	void SetCount(int Count);
	class USaveGame* LoadData();
	void SaveData(bool* SaveDataState);
};


}

