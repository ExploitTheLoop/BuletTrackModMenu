#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Avatar_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_Avatar_BP.Common_Avatar_BP_C
// 0x003C (0x0244 - 0x0208)
class UCommon_Avatar_BP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0004) (Transient, DuplicateTransient)
	class UGridPanel*                                  GridPanel_1;                                              // 0x020C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerUID;                                                // 0x0210(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 targetUI;                                                 // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     buttonItem;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClickItemCallback;                                      // 0x0224(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UImage*                                      ImageRoleNation;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceUpdate;                                            // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNeedAsyncLoad;                                          // 0x0235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    DownloadSuc;                                              // 0x0238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Avatar_BP.Common_Avatar_BP_C");
		return pStaticClass;
	}


	void SetPlayerBanned(bool bIsBanned);
	void OnDownloadSuc();
	void SetUsePool(bool usePool);
	void SetAssetLoadingMethod(bool Async);
	void SetIconSize(int X, int Y);
	void SetFrameTextureExt(int frameLevel, class UTexture2D* Texture2D, class UTexture2D** Output);
	void SetFrameTexture(class UTexture2D* Texture2D);
	void SetPlayerLevel(int Level);
	void SetPlayerGender(int GD);
	void SetPlayerUid(const struct FString& UId);
	void GetRankFrameLevelPath(int frameLevel, struct FString* Path);
	void SetFrame(int Level);
	void SetDefaultIcon();
	void SetPlayerIcon(const struct FString& URL);
	void InitView(int Style, const struct FString& UId, const struct FString& iconUrl, int gender, int frameLevel, int PlayerLevel, bool ignoreFrame, const struct FString& RoleNation);
	void OnClickItem();
	void OnLoadIcon();
	void _BindEvent();
	void _ClearEvent();
	void ExecuteUbergraph_Common_Avatar_BP(int EntryPoint);
	void DownloadSuc__DelegateSignature();
	void OnClickItemCallback__DelegateSignature(const struct FString& UId);
};


}

