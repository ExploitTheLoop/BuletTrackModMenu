#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_DragDrop_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetAllDirectionEnable
struct UCommon_DragDrop_Item_C_SetAllDirectionEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDragWithDragPath
struct UCommon_DragDrop_Item_C_RegisterDragWithDragPath_Params
{
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     extraPath;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.CreateWidgetByDragDropType
struct UCommon_DragDrop_Item_C_CreateWidgetByDragDropType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDragDropWidget
struct UCommon_DragDrop_Item_C_GetDragDropWidget_Params
{
	int                                                dragDropType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchMoved
struct UCommon_DragDrop_Item_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDropEnable
struct UCommon_DragDrop_Item_C_SetDropEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDragEnable
struct UCommon_DragDrop_Item_C_SetDragEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetEnable
struct UCommon_DragDrop_Item_C_SetEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.UnRegisterDrop
struct UCommon_DragDrop_Item_C_UnRegisterDrop_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrop
struct UCommon_DragDrop_Item_C_RegisterDrop_Params
{
	int                                                dragType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDrop
struct UCommon_DragDrop_Item_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchEnded
struct UCommon_DragDrop_Item_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchStarted
struct UCommon_DragDrop_Item_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDefaultTexture
struct UCommon_DragDrop_Item_C_GetDefaultTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrag
struct UCommon_DragDrop_Item_C_RegisterDrag_Params
{
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragDetected
struct UCommon_DragDrop_Item_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.Construct
struct UCommon_DragDrop_Item_C_Construct_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCancelled
struct UCommon_DragDrop_Item_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.ForceStartDrag
struct UCommon_DragDrop_Item_C_ForceStartDrag_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnMouseLeave
struct UCommon_DragDrop_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.ExecuteUbergraph_Common_DragDrop_Item
struct UCommon_DragDrop_Item_C_ExecuteUbergraph_Common_DragDrop_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchMoved__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchMoved__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchEnded__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchEnded__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchStarted__DelegateSignature
struct UCommon_DragDrop_Item_C_OnItemTouchStarted__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragSuccess__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragSuccess__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragClicked__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragClicked__DelegateSignature_Params
{
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragReadyToShape__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragReadyToShape__DelegateSignature_Params
{
	class UWidget*                                     generatedWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommon_DragDrop_Data_C*                     dragOperation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCanceled__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragCanceled__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragStarted__DelegateSignature
struct UCommon_DragDrop_Item_C_OnDragStarted__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

