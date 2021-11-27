#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Item_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_Item_BP.Common_Item_BP_C
// 0x0044 (0x024C - 0x0208)
class UCommon_Item_BP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0004) (Transient, DuplicateTransient)
	class UCommon_DragDrop_Item_C*                     Common_DragDrop_Item;                                     // 0x020C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGridPanel*                                  GridPanel_1;                                              // 0x0210(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Panel_Download;                                           // 0x0214(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Item;                                              // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClickItemCallback;                                      // 0x021C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressItemCallback;                                      // 0x0228(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleaseItemCallback;                                    // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UODPakDownload_Component_C*                  ODPaksDownload_Component;                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 targetUI;                                                 // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                resID;                                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Item_BP.Common_Item_BP_C");
		return pStaticClass;
	}


	void SetEveryPackIcon(int specailIconTable);
	void SetLight(bool bShow);
	void SetNameColor(const struct FSlateColor& Color);
	void SetLimitCount(bool IsShow, int Has, int Max);
	void SetCostCount(bool IsShow, int Has, int Cost);
	void HideQualityOfBG();
	void HideQuality();
	void SetTimeLimitIcon(bool Show);
	void SetValidTime(int validTime);
	void SetIsShowSubTransparentBg(bool IsShow);
	void SetGrayBg(bool IsShow);
	void SetBlackBg(bool IsShow);
	void SetAwardState(int State);
	void SetCombatReadinessIcon(bool Visibility);
	void SetIsWear(bool isWear);
	void PlayDecomposeAni(int OldItemID, int NewItemID, int newCnt);
	void SetTakeState(bool canTake);
	void SetHasGet(bool hasGet);
	void EnableItemPreview();
	void SetIconFromTexture(class UTexture2D* Texture);
	void ShowItemName();
	void DisableItemPreview();
	void OnReleaseItem();
	void OnPressItem();
	void OnClickItem();
	void SetUseCount(int UseCount, bool isRolewear);
	void SetSmallerIcon(bool IsNeedSmall);
	void SetSpecialIcon(const struct FString& Path);
	void SetDecomposeEffectIcon(int from_id, int to_id, int to_cnt, float playAnimDelayTime);
	void PlayDecomposeAnim();
	void EnableShowLimit(bool Enable);
	void SetColorAndPattern(int Color, int Pattern);
	void SetIsolated(bool bShow);
	void ShowMask(bool IsShow);
	void SetBGVisibility(bool Visible);
	void EnableShowTips(bool Enable);
	void HideNameAddrStr();
	void SetIsTryOn(bool tryOn);
	void SetNameAddStr(const struct FString& NewParam);
	void SetIconAlpha(float Alpha);
	void SetIsLock(bool isLock);
	void SetIsNew(bool isNew);
	void SetQuality(int Quality);
	void SetUsingState(bool isUsing);
	void SetSelected(bool isSelected);
	void SetNumber(int Number);
	void InitView(int resID, int Count, int Style, int validHour, bool isShowTips, bool isRedEmotion, class UCommon_Item_BP_C** Item);
	void OnClickDownload();
	void OnClickEvent();
	void OnPressEvent();
	void OnReleaseEvent();
	void Construct();
	void Destruct();
	void _BindEvent();
	void _ClearEvent();
	void OnConstruct();
	void OnDestruct();
	void ExecuteUbergraph_Common_Item_BP(int EntryPoint);
	void OnReleaseItemCallback__DelegateSignature();
	void OnPressItemCallback__DelegateSignature();
	void OnClickItemCallback__DelegateSignature(int resID);
};


}

