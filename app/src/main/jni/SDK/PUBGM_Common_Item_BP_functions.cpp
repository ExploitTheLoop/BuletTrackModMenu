// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Item_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_Item_BP.Common_Item_BP_C.SetEveryPackIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            specailIconTable               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetEveryPackIcon(int specailIconTable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetEveryPackIcon");

	UCommon_Item_BP_C_SetEveryPackIcon_Params params;
	params.specailIconTable = specailIconTable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetLight(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetLight");

	UCommon_Item_BP_C_SetLight_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetNameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommon_Item_BP_C::SetNameColor(const struct FSlateColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetNameColor");

	UCommon_Item_BP_C_SetNameColor_Params params;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetLimitCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Has                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetLimitCount(bool IsShow, int Has, int Max)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetLimitCount");

	UCommon_Item_BP_C_SetLimitCount_Params params;
	params.IsShow = IsShow;
	params.Has = Has;
	params.Max = Max;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetCostCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Has                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetCostCount(bool IsShow, int Has, int Cost)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetCostCount");

	UCommon_Item_BP_C_SetCostCount_Params params;
	params.IsShow = IsShow;
	params.Has = Has;
	params.Cost = Cost;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.HideQualityOfBG
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::HideQualityOfBG()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.HideQualityOfBG");

	UCommon_Item_BP_C_HideQualityOfBG_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.HideQuality
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::HideQuality()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.HideQuality");

	UCommon_Item_BP_C_HideQuality_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetTimeLimitIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetTimeLimitIcon(bool Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetTimeLimitIcon");

	UCommon_Item_BP_C_SetTimeLimitIcon_Params params;
	params.Show = Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetValidTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            validTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetValidTime(int validTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetValidTime");

	UCommon_Item_BP_C_SetValidTime_Params params;
	params.validTime = validTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsShowSubTransparentBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsShowSubTransparentBg(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsShowSubTransparentBg");

	UCommon_Item_BP_C_SetIsShowSubTransparentBg_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetGrayBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetGrayBg(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetGrayBg");

	UCommon_Item_BP_C_SetGrayBg_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetBlackBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetBlackBg(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetBlackBg");

	UCommon_Item_BP_C_SetBlackBg_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetAwardState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetAwardState(int State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetAwardState");

	UCommon_Item_BP_C_SetAwardState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetCombatReadinessIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetCombatReadinessIcon(bool Visibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetCombatReadinessIcon");

	UCommon_Item_BP_C_SetCombatReadinessIcon_Params params;
	params.Visibility = Visibility;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsWear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isWear                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsWear(bool isWear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsWear");

	UCommon_Item_BP_C_SetIsWear_Params params;
	params.isWear = isWear;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAni
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldItemID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newCnt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::PlayDecomposeAni(int OldItemID, int NewItemID, int newCnt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAni");

	UCommon_Item_BP_C_PlayDecomposeAni_Params params;
	params.OldItemID = OldItemID;
	params.NewItemID = NewItemID;
	params.newCnt = newCnt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetTakeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canTake                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetTakeState(bool canTake)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetTakeState");

	UCommon_Item_BP_C_SetTakeState_Params params;
	params.canTake = canTake;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetHasGet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasGet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetHasGet(bool hasGet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetHasGet");

	UCommon_Item_BP_C_SetHasGet_Params params;
	params.hasGet = hasGet;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.EnableItemPreview
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::EnableItemPreview()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.EnableItemPreview");

	UCommon_Item_BP_C_EnableItemPreview_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIconFromTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIconFromTexture(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIconFromTexture");

	UCommon_Item_BP_C_SetIconFromTexture_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.ShowItemName
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::ShowItemName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.ShowItemName");

	UCommon_Item_BP_C_ShowItemName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.DisableItemPreview
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::DisableItemPreview()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.DisableItemPreview");

	UCommon_Item_BP_C_DisableItemPreview_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseItem
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnReleaseItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnReleaseItem");

	UCommon_Item_BP_C_OnReleaseItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnPressItem
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnPressItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnPressItem");

	UCommon_Item_BP_C_OnPressItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnClickItem
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnClickItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnClickItem");

	UCommon_Item_BP_C_OnClickItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetUseCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UseCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRolewear                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetUseCount(int UseCount, bool isRolewear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetUseCount");

	UCommon_Item_BP_C_SetUseCount_Params params;
	params.UseCount = UseCount;
	params.isRolewear = isRolewear;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetSmallerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNeedSmall                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetSmallerIcon(bool IsNeedSmall)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetSmallerIcon");

	UCommon_Item_BP_C_SetSmallerIcon_Params params;
	params.IsNeedSmall = IsNeedSmall;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetSpecialIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Item_BP_C::SetSpecialIcon(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetSpecialIcon");

	UCommon_Item_BP_C_SetSpecialIcon_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetDecomposeEffectIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            from_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            to_id                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            to_cnt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          playAnimDelayTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetDecomposeEffectIcon(int from_id, int to_id, int to_cnt, float playAnimDelayTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetDecomposeEffectIcon");

	UCommon_Item_BP_C_SetDecomposeEffectIcon_Params params;
	params.from_id = from_id;
	params.to_id = to_id;
	params.to_cnt = to_cnt;
	params.playAnimDelayTime = playAnimDelayTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::PlayDecomposeAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.PlayDecomposeAnim");

	UCommon_Item_BP_C_PlayDecomposeAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.EnableShowLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::EnableShowLimit(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.EnableShowLimit");

	UCommon_Item_BP_C_EnableShowLimit_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetColorAndPattern
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Pattern                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetColorAndPattern(int Color, int Pattern)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetColorAndPattern");

	UCommon_Item_BP_C_SetColorAndPattern_Params params;
	params.Color = Color;
	params.Pattern = Pattern;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsolated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsolated(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsolated");

	UCommon_Item_BP_C_SetIsolated_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.ShowMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::ShowMask(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.ShowMask");

	UCommon_Item_BP_C_ShowMask_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetBGVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetBGVisibility(bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetBGVisibility");

	UCommon_Item_BP_C_SetBGVisibility_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.EnableShowTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::EnableShowTips(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.EnableShowTips");

	UCommon_Item_BP_C_EnableShowTips_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.HideNameAddrStr
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::HideNameAddrStr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.HideNameAddrStr");

	UCommon_Item_BP_C_HideNameAddrStr_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsTryOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           tryOn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsTryOn(bool tryOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsTryOn");

	UCommon_Item_BP_C_SetIsTryOn_Params params;
	params.tryOn = tryOn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetNameAddStr
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Item_BP_C::SetNameAddStr(const struct FString& NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetNameAddStr");

	UCommon_Item_BP_C_SetNameAddStr_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIconAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIconAlpha(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIconAlpha");

	UCommon_Item_BP_C_SetIconAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsLock(bool isLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsLock");

	UCommon_Item_BP_C_SetIsLock_Params params;
	params.isLock = isLock;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetIsNew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetIsNew(bool isNew)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetIsNew");

	UCommon_Item_BP_C_SetIsNew_Params params;
	params.isNew = isNew;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetQuality(int Quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetQuality");

	UCommon_Item_BP_C_SetQuality_Params params;
	params.Quality = Quality;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetUsingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isUsing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetUsingState(bool isUsing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetUsingState");

	UCommon_Item_BP_C_SetUsingState_Params params;
	params.isUsing = isUsing;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetSelected(bool isSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetSelected");

	UCommon_Item_BP_C_SetSelected_Params params;
	params.isSelected = isSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::SetNumber(int Number)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.SetNumber");

	UCommon_Item_BP_C_SetNumber_Params params;
	params.Number = Number;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.InitView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            validHour                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowTips                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRedEmotion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommon_Item_BP_C*       Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::InitView(int resID, int Count, int Style, int validHour, bool isShowTips, bool isRedEmotion, class UCommon_Item_BP_C** Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.InitView");

	UCommon_Item_BP_C_InitView_Params params;
	params.resID = resID;
	params.Count = Count;
	params.Style = Style;
	params.validHour = validHour;
	params.isShowTips = isShowTips;
	params.isRedEmotion = isRedEmotion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}

// Function Common_Item_BP.Common_Item_BP_C.OnClickDownload
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnClickDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnClickDownload");

	UCommon_Item_BP_C_OnClickDownload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnClickEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnClickEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnClickEvent");

	UCommon_Item_BP_C_OnClickEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnPressEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnPressEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnPressEvent");

	UCommon_Item_BP_C_OnPressEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnReleaseEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnReleaseEvent");

	UCommon_Item_BP_C_OnReleaseEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_Item_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.Construct");

	UCommon_Item_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_Item_BP_C::Destruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.Destruct");

	UCommon_Item_BP_C_Destruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C._BindEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::_BindEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C._BindEvent");

	UCommon_Item_BP_C__BindEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C._ClearEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::_ClearEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C._ClearEvent");

	UCommon_Item_BP_C__ClearEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnConstruct
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnConstruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnConstruct");

	UCommon_Item_BP_C_OnConstruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnDestruct
// (BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnDestruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnDestruct");

	UCommon_Item_BP_C_OnDestruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.ExecuteUbergraph_Common_Item_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::ExecuteUbergraph_Common_Item_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.ExecuteUbergraph_Common_Item_BP");

	UCommon_Item_BP_C_ExecuteUbergraph_Common_Item_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnReleaseItemCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnReleaseItemCallback__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnReleaseItemCallback__DelegateSignature");

	UCommon_Item_BP_C_OnReleaseItemCallback__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnPressItemCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_Item_BP_C::OnPressItemCallback__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnPressItemCallback__DelegateSignature");

	UCommon_Item_BP_C_OnPressItemCallback__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Item_BP.Common_Item_BP_C.OnClickItemCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Item_BP_C::OnClickItemCallback__DelegateSignature(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Item_BP.Common_Item_BP_C.OnClickItemCallback__DelegateSignature");

	UCommon_Item_BP_C_OnClickItemCallback__DelegateSignature_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

