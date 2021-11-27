// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Activity_BtnItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetOnlineActivityData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobby_Activity_BtnItem_C::SetOnlineActivityData(int Status, const struct FString& strText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetOnlineActivityData");

	ULobby_Activity_BtnItem_C_SetOnlineActivityData_Params params;
	params.Status = Status;
	params.strText = strText;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.UpdateRedDot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRedDot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::UpdateRedDot(bool bRedDot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.UpdateRedDot");

	ULobby_Activity_BtnItem_C_UpdateRedDot_Params params;
	params.bRedDot = bRedDot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_ActivityBtnDisplay btnData                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobby_Activity_BtnItem_C::SetBtnDisplayName(const struct FBP_STRUCT_ActivityBtnDisplay& btnData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnDisplayName");

	ULobby_Activity_BtnItem_C_SetBtnDisplayName_Params params;
	params.btnData = btnData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.GetFormatURL
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 returl                         (Parm, OutParm, ZeroConstructor)
// bool                           ishttp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::GetFormatURL(const struct FString& URL, struct FString* returl, bool* ishttp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.GetFormatURL");

	ULobby_Activity_BtnItem_C_GetFormatURL_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (returl != nullptr)
		*returl = params.returl;
	if (ishttp != nullptr)
		*ishttp = params.ishttp;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULobby_Activity_BtnItem_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchEnded");

	ULobby_Activity_BtnItem_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULobby_Activity_BtnItem_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchStarted");

	ULobby_Activity_BtnItem_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetRedPointStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModeID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobby_Activity_BtnItem_C::SetRedPointStatus(bool Show, const struct FString& ModeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetRedPointStatus");

	ULobby_Activity_BtnItem_C_SetRedPointStatus_Params params;
	params.Show = Show;
	params.ModeID = ModeID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActivityName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 JumpUrl                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsShowCountDownIcon            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DependItems                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ActID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CreatedUtc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::SetBtnData(const struct FString& ActivityName, const struct FString& IconPath, const struct FString& JumpUrl, bool IsShowCountDownIcon, bool isNew, const struct FString& DependItems, int ActID, int CreatedUtc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnData");

	ULobby_Activity_BtnItem_C_SetBtnData_Params params;
	params.ActivityName = ActivityName;
	params.IconPath = IconPath;
	params.JumpUrl = JumpUrl;
	params.IsShowCountDownIcon = IsShowCountDownIcon;
	params.isNew = isNew;
	params.DependItems = DependItems;
	params.ActID = ActID;
	params.CreatedUtc = CreatedUtc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.DownLoadURL
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobby_Activity_BtnItem_C::DownLoadURL(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.DownLoadURL");

	ULobby_Activity_BtnItem_C_DownLoadURL_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnSuccessImageDownloader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImageDownloader*        ImageDownloader                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::OnSuccessImageDownloader(class UTexture2D* Texture, class UImageDownloader* ImageDownloader)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnSuccessImageDownloader");

	ULobby_Activity_BtnItem_C_OnSuccessImageDownloader_Params params;
	params.Texture = Texture;
	params.ImageDownloader = ImageDownloader;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnFailImageDownloader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImageDownloader*        ImageDownloader                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::OnFailImageDownloader(class UTexture2D* Texture, class UImageDownloader* ImageDownloader)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnFailImageDownloader");

	ULobby_Activity_BtnItem_C_OnFailImageDownloader_Params params;
	params.Texture = Texture;
	params.ImageDownloader = ImageDownloader;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobby_Activity_BtnItem_C::BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	ULobby_Activity_BtnItem_C_BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ExecuteUbergraph_Lobby_Activity_BtnItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ExecuteUbergraph_Lobby_Activity_BtnItem(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ExecuteUbergraph_Lobby_Activity_BtnItem");

	ULobby_Activity_BtnItem_C_ExecuteUbergraph_Lobby_Activity_BtnItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemClickDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemClickDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemClickDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemMoveRightDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemMoveRightDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_Activity_BtnItem_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Activity_BtnItem_C::ItemMoveLeftDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature");

	ULobby_Activity_BtnItem_C_ItemMoveLeftDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

