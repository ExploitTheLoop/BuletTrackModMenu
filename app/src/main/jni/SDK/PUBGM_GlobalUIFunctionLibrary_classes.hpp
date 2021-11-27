#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalUIFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// 0x0000 (0x0070 - 0x0070)
class UGlobalUIFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext);
	static void GetZoneDelay(int ZoneID, int fakeShowDelay, int maxDelay, class UObject* __WorldContext, int* Delay);
	static void UnixTimeToLocalizedTimeStrGMT(int Year, int Month, int Day, int Hour, int Min, int sec, bool start_from_month, const struct FString& h_m_s_format, class UObject* __WorldContext, struct FString* TimeStr);
	static void GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
	static void SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime);
	static void PlaySoundPopup(class UObject* __WorldContext);
	static void PlaySoundToggle(class UObject* __WorldContext);
	static void PlaySoundSubTab(class UObject* __WorldContext);
	static void PlaySoundTab(class UObject* __WorldContext);
	static void GetBgQualityPathWithLight(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right);
	static void IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res);
	static void IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res);
	static void GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget);
	static void GetBrushWithPath(const struct FString& ImagePath, int ImageWidth, int ImageHeight, class UObject* __WorldContext, struct FSlateBrush* OutBrush, bool* bOK);
	static void SwitchSceneCameraToTransform_2(const struct FTransform& Transform, float FOV, float blendTime, class UObject* __WorldContext);
	static void GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector);
	static void DestroyLobbyCameras(class UObject* __WorldContext);
	static void InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext);
	static struct FString GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext);
	static struct FString GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext);
	static struct FString GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext);
	static void SetArenaWeaponLightProperty(class UObject* __WorldContext);
	static void UpdateMPCLightDirection(class UObject* __WorldContext);
	static void SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, class UObject* __WorldContext);
	static void GetCurrentCamera(class UObject* __WorldContext, class ACameraActor** Result);
	static void PlayModelSequence(const struct FString& Path, class UObject* __WorldContext, class ULevelSequencePlayer** playingsequence);
	static void SwitchSceneCameraToTransform(const struct FVector& Location, const struct FVector& Rotation, const struct FVector& Scale, float FOV, float blendTime, class UObject* __WorldContext);
	static void SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	static void SetCharacterImage(const struct FString& imgPath, class UImage* imageItem, class UObject* __WorldContext);
	static void GetPopularityColor(int Type, class UObject* __WorldContext, struct FSlateColor* Output);
	static void GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result);
	static void LoadImage(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	static void LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	static void GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetLocalizationString(const struct FString& Key, class UObject* __WorldContext, struct FString* Ret);
	static void SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext);
	static void GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color);
	static void SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success);
	static void SendLobbyEventClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext);
	static void OpenSlapUrl(const struct FString& URL, class UObject* __WorldContext);
	static void GetItemName(const struct FString& Name, int Length, bool ChineseSensity, class UObject* __WorldContext, struct FString* OutName);
	static void UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext);
	static void ConvertRGBAStr(const struct FString& RGBAstr, class UObject* __WorldContext, float* R, float* G, float* B, float* A);
	static void SendGemClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext);
	static void IsJapanOrKorea(class UObject* __WorldContext, bool* Result);
	static void UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush);
	static void UpdateButtonColor(class UButton* Button, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void GetCameraMod(class UObject* __WorldContext, int* Mod);
	static void ConvertSecondsToString(int Seconds, class UObject* __WorldContext, struct FString* timestring);
	static void GetLangueTable(class UObject* __WorldContext, class UUAEDataTable** NewParam);
	static void ShowItemTipsByWidget(int ItemId, class UWidget* Widget, const struct FVector2D& LocalCoordinate, bool IsLimit, const struct FString& Times, int ColorID, int PatternID, int ItemCount, class UObject* __WorldContext);
	static void GetGuidonInfo(const struct FString& code, class UObject* __WorldContext, struct FBP_STRUCT_GuidonConfig_type* GuidonConfig);
	static void SetHumanLightProperty(class UObject* __WorldContext);
	static void SetWeaponLightProperty(class UObject* __WorldContext);
	static void SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void SetLobbyDefaultLightProperty(class UObject* __WorldContext);
	static void SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext);
	static void numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	static void numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	static void IdToColor(int ID, class UObject* __WorldContext, struct FColor* Color);
	static void GetOnLineColor(int onlinestate, bool bonline, class UObject* __WorldContext, struct FSlateColor* Color);
	static void UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext);
	static void SwitchSystemCameraByIndex(const struct FString& managerName, int Index, float blendTime, class UObject* __WorldContext);
	static void SwitchLobbyCameraByIndex(int Index, float blendTime, class UObject* __WorldContext, bool* Success);
	static void SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext);
	static void IsLengthyScreen(class UObject* __WorldContext, bool* bWideScreen);
	static void GetLobbyDragDropWidget(int dragDropType, class UObject* __WorldContext);
	static void SetItemQuality(int ItemQuality, class UImage* imageres, class UObject* __WorldContext);
	static void SetIntimacy(class UImage* heart, int intimacynum, class UTextBlock* intimacyText, class UObject* __WorldContext);
	static void GetLobbyRankTexture(int rankIntegral, class UObject* __WorldContext, class UTexture2D** Output);
	static void SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext);
	static void SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void SwitchSceneCameraByIndex(int idx, float blendTime, bool skipNotify, class UObject* __WorldContext);
	static void SetCorpsSegmentLimit(class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget, class UTextBlock* textWidget, int LevelId, class UObject* __WorldContext);
	static void SetCorpsLevelLimit(class UTextBlock* textWidget, int Level, class UObject* __WorldContext);
	static void GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value);
	static void GetPlatfromDisplayName(const struct FString& strChannel, class UObject* __WorldContext, struct FString* showChannel);
	static void GetPlayerPrefs(class UObject* __WorldContext, class UPlayerPrefs_C** bp_playerprefs);
	static void ShowLobbyMenuEnterAnimation(class UObject* __WorldContext);
	static void GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp);
	static void GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output);
	static void InvoleBpFunctionNoFetch(const struct FString& InName, const struct FString& InFunname, class UObject* __WorldContext);
	static void CheckChatPrivacyAcceptStatus(class UObject* __WorldContext, bool* ChatPrivacyAcceptStatus);
	static void GetGVoiceInterface(class UObject* __WorldContext, class UGVoiceInterface** outputObj);
	static void OpenUseItemUI(const struct FString& itemInsID, class UObject* __WorldContext);
	static void ConvertURLByLanguage(const struct FString& URL, class UObject* __WorldContext, struct FString* convertedURL);
	static void isChineseSymbol(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void isSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	static void SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	static void GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	static void GetBpLuaObject(const struct FString& bp_name, class UObject* __WorldContext, class ALuaClassObj** Lua_obj);
	static void CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret);
	static void GetValidStringAll(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, struct FString* validText);
	static void UpdateLobbyRedpointStatus(bool IsShow, int ModeID, class UObject* __WorldContext);
	static void GetItemTimeS_Server(int expire_ts, int valid_hours, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	static void GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	static void TimeNumToTimeS(int time_num, class UObject* __WorldContext, struct FString* time_s);
	static void ShowItemTipsWithItemInfo(class UWidget* Button, int resID, const struct FString& limitTimeStr, bool hasLimitTime, int PatternID, int ColorID, class UObject* __WorldContext);
	static void ShowItemTipsByButton(int ItemId, class UButton* Button, int ColorID, int PatternID, bool showLimitIcon, class UObject* __WorldContext);
	static void CloseItemTips(class UObject* __WorldContext);
	static void ShowItemTipsByPos(int ItemId, const struct FVector2D& pos, int ColorID, int PatternID, bool showLimitTimeIcon, class UObject* __WorldContext);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void PlaySoundCloseButton(class UObject* __WorldContext);
	static void ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void PlaySoundClickButton(class UObject* __WorldContext);
	static void IsChinese(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext);
	static void IsValidChar(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, bool* Result);
	static void IsNumber(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void GetTextLength(const struct FString& Text, bool ChineseSensity, class UObject* __WorldContext, int* Length);
	static void BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility);
	static void GetValidString(int maxLength, const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool ChineseSensity, bool CanBeSpace, class UObject* __WorldContext, struct FString* validText);
	static void IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void OpenURL(const struct FString& URL, class UObject* __WorldContext);
	static void UpdateRankName(class UTextBlock* Text, int Level, class UObject* __WorldContext);
	static void UpdateRankIcon(class UImage* imageObj, int Level, class UObject* __WorldContext);
	static void GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj);
	static void InvoleBpFunction(const struct FString& bp_name, const struct FString& func_name, class UObject* __WorldContext);
	static void GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue);
	static void GetGlobalUIEventDispatcher(class UFrontendHUD* FrontendHUD, class UObject* __WorldContext, class UGlobalUIEventDispatcher_BP_C** NewParam);
};


}

