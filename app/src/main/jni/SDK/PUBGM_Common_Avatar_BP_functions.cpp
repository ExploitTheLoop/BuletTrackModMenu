// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_Avatar_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerBanned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBanned                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetPlayerBanned(bool bIsBanned)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerBanned");

	UCommon_Avatar_BP_C_SetPlayerBanned_Params params;
	params.bIsBanned = bIsBanned;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnDownloadSuc
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::OnDownloadSuc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.OnDownloadSuc");

	UCommon_Avatar_BP_C_OnDownloadSuc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetUsePool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           usePool                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetUsePool(bool usePool)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetUsePool");

	UCommon_Avatar_BP_C_SetUsePool_Params params;
	params.usePool = usePool;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetAssetLoadingMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Async                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetAssetLoadingMethod(bool Async)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetAssetLoadingMethod");

	UCommon_Avatar_BP_C_SetAssetLoadingMethod_Params params;
	params.Async = Async;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetIconSize(int X, int Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetIconSize");

	UCommon_Avatar_BP_C_SetIconSize_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTextureExt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetFrameTextureExt(int frameLevel, class UTexture2D* Texture2D, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTextureExt");

	UCommon_Avatar_BP_C_SetFrameTextureExt_Params params;
	params.frameLevel = frameLevel;
	params.Texture2D = Texture2D;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetFrameTexture(class UTexture2D* Texture2D)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrameTexture");

	UCommon_Avatar_BP_C_SetFrameTexture_Params params;
	params.Texture2D = Texture2D;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetPlayerLevel(int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerLevel");

	UCommon_Avatar_BP_C_SetPlayerLevel_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GD                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetPlayerGender(int GD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerGender");

	UCommon_Avatar_BP_C_SetPlayerGender_Params params;
	params.GD = GD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerUid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::SetPlayerUid(const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerUid");

	UCommon_Avatar_BP_C_SetPlayerUid_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.GetRankFrameLevelPath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UCommon_Avatar_BP_C::GetRankFrameLevelPath(int frameLevel, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.GetRankFrameLevelPath");

	UCommon_Avatar_BP_C_GetRankFrameLevelPath_Params params;
	params.frameLevel = frameLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::SetFrame(int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetFrame");

	UCommon_Avatar_BP_C_SetFrame_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetDefaultIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::SetDefaultIcon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetDefaultIcon");

	UCommon_Avatar_BP_C_SetDefaultIcon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::SetPlayerIcon(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.SetPlayerIcon");

	UCommon_Avatar_BP_C_SetPlayerIcon_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.InitView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 iconUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreFrame                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RoleNation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::InitView(int Style, const struct FString& UId, const struct FString& iconUrl, int gender, int frameLevel, int PlayerLevel, bool ignoreFrame, const struct FString& RoleNation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.InitView");

	UCommon_Avatar_BP_C_InitView_Params params;
	params.Style = Style;
	params.UId = UId;
	params.iconUrl = iconUrl;
	params.gender = gender;
	params.frameLevel = frameLevel;
	params.PlayerLevel = PlayerLevel;
	params.ignoreFrame = ignoreFrame;
	params.RoleNation = RoleNation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItem
// (BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::OnClickItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItem");

	UCommon_Avatar_BP_C_OnClickItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnLoadIcon
// (BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::OnLoadIcon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.OnLoadIcon");

	UCommon_Avatar_BP_C_OnLoadIcon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C._BindEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::_BindEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C._BindEvent");

	UCommon_Avatar_BP_C__BindEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C._ClearEvent
// (BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::_ClearEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C._ClearEvent");

	UCommon_Avatar_BP_C__ClearEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.ExecuteUbergraph_Common_Avatar_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Avatar_BP_C::ExecuteUbergraph_Common_Avatar_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.ExecuteUbergraph_Common_Avatar_BP");

	UCommon_Avatar_BP_C_ExecuteUbergraph_Common_Avatar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.DownloadSuc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_Avatar_BP_C::DownloadSuc__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.DownloadSuc__DelegateSignature");

	UCommon_Avatar_BP_C_DownloadSuc__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItemCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_Avatar_BP_C::OnClickItemCallback__DelegateSignature(const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Avatar_BP.Common_Avatar_BP_C.OnClickItemCallback__DelegateSignature");

	UCommon_Avatar_BP_C_OnClickItemCallback__DelegateSignature_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

