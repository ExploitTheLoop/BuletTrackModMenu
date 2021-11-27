#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Activity_BtnItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetOnlineActivityData
struct ULobby_Activity_BtnItem_C_SetOnlineActivityData_Params
{
	int                                                Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.UpdateRedDot
struct ULobby_Activity_BtnItem_C_UpdateRedDot_Params
{
	bool                                               bRedDot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnDisplayName
struct ULobby_Activity_BtnItem_C_SetBtnDisplayName_Params
{
	struct FBP_STRUCT_ActivityBtnDisplay               btnData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.GetFormatURL
struct ULobby_Activity_BtnItem_C_GetFormatURL_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     returl;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ishttp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchEnded
struct ULobby_Activity_BtnItem_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnTouchStarted
struct ULobby_Activity_BtnItem_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetRedPointStatus
struct ULobby_Activity_BtnItem_C_SetRedPointStatus_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModeID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.SetBtnData
struct ULobby_Activity_BtnItem_C_SetBtnData_Params
{
	struct FString                                     ActivityName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     JumpUrl;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsShowCountDownIcon;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DependItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ActID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CreatedUtc;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.DownLoadURL
struct ULobby_Activity_BtnItem_C_DownLoadURL_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnSuccessImageDownloader
struct ULobby_Activity_BtnItem_C_OnSuccessImageDownloader_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImageDownloader*                            ImageDownloader;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.OnFailImageDownloader
struct ULobby_Activity_BtnItem_C_OnFailImageDownloader_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImageDownloader*                            ImageDownloader;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct ULobby_Activity_BtnItem_C_BndEvt__Button_Activity_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ExecuteUbergraph_Lobby_Activity_BtnItem
struct ULobby_Activity_BtnItem_C_ExecuteUbergraph_Lobby_Activity_BtnItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemClickDispatcher__DelegateSignature
struct ULobby_Activity_BtnItem_C_ItemClickDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveRightDispatcher__DelegateSignature
struct ULobby_Activity_BtnItem_C_ItemMoveRightDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C.ItemMoveLeftDispatcher__DelegateSignature
struct ULobby_Activity_BtnItem_C_ItemMoveLeftDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

