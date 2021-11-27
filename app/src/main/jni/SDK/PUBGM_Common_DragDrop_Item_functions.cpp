// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_DragDrop_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetAllDirectionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::SetAllDirectionEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetAllDirectionEnable");

	UCommon_DragDrop_Item_C_SetAllDirectionEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDragWithDragPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 extraPath                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_DragDrop_Item_C::RegisterDragWithDragPath(int Style, int ItemId, int InstID, const struct FString& ExtraData, const struct FString& extraPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDragWithDragPath");

	UCommon_DragDrop_Item_C_RegisterDragWithDragPath_Params params;
	params.Style = Style;
	params.ItemId = ItemId;
	params.InstID = InstID;
	params.ExtraData = ExtraData;
	params.extraPath = extraPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.CreateWidgetByDragDropType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::CreateWidgetByDragDropType(int Type, class UUserWidget** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.CreateWidgetByDragDropType");

	UCommon_DragDrop_Item_C_CreateWidgetByDragDropType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDragDropWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            dragDropType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::GetDragDropWidget(int dragDropType, class UUserWidget** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDragDropWidget");

	UCommon_DragDrop_Item_C_GetDragDropWidget_Params params;
	params.dragDropType = dragDropType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCommon_DragDrop_Item_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchMoved");

	UCommon_DragDrop_Item_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDropEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::SetDropEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDropEnable");

	UCommon_DragDrop_Item_C_SetDropEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDragEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::SetDragEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetDragEnable");

	UCommon_DragDrop_Item_C_SetDragEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::SetEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.SetEnable");

	UCommon_DragDrop_Item_C_SetEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.UnRegisterDrop
// (Public, BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::UnRegisterDrop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.UnRegisterDrop");

	UCommon_DragDrop_Item_C_UnRegisterDrop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            dragType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommon_DragDrop_Item_C::RegisterDrop(int dragType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrop");

	UCommon_DragDrop_Item_C_RegisterDrop_Params params;
	params.dragType = dragType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommon_DragDrop_Item_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDrop");

	UCommon_DragDrop_Item_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCommon_DragDrop_Item_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchEnded");

	UCommon_DragDrop_Item_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCommon_DragDrop_Item_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnTouchStarted");

	UCommon_DragDrop_Item_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDefaultTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::GetDefaultTexture(class UTexture2D** Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.GetDefaultTexture");

	UCommon_DragDrop_Item_C_GetDefaultTexture_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCommon_DragDrop_Item_C::RegisterDrag(int Style, int ItemId, int InstID, const struct FString& ExtraData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.RegisterDrag");

	UCommon_DragDrop_Item_C_RegisterDrag_Params params;
	params.Style = Style;
	params.ItemId = ItemId;
	params.InstID = InstID;
	params.ExtraData = ExtraData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragDetected");

	UCommon_DragDrop_Item_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_DragDrop_Item_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.Construct");

	UCommon_DragDrop_Item_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCancelled");

	UCommon_DragDrop_Item_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.ForceStartDrag
// (BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::ForceStartDrag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.ForceStartDrag");

	UCommon_DragDrop_Item_C_ForceStartDrag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommon_DragDrop_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnMouseLeave");

	UCommon_DragDrop_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.ExecuteUbergraph_Common_DragDrop_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::ExecuteUbergraph_Common_DragDrop_Item(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.ExecuteUbergraph_Common_DragDrop_Item");

	UCommon_DragDrop_Item_C_ExecuteUbergraph_Common_DragDrop_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchMoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::OnItemTouchMoved__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchMoved__DelegateSignature");

	UCommon_DragDrop_Item_C_OnItemTouchMoved__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::OnItemTouchEnded__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchEnded__DelegateSignature");

	UCommon_DragDrop_Item_C_OnItemTouchEnded__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::OnItemTouchStarted__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnItemTouchStarted__DelegateSignature");

	UCommon_DragDrop_Item_C_OnItemTouchStarted__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommon_DragDrop_Data_C* Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragSuccess__DelegateSignature(class UCommon_DragDrop_Data_C* Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragSuccess__DelegateSignature");

	UCommon_DragDrop_Item_C_OnDragSuccess__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommon_DragDrop_Item_C::OnDragClicked__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragClicked__DelegateSignature");

	UCommon_DragDrop_Item_C_OnDragClicked__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragReadyToShape__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 generatedWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommon_DragDrop_Data_C* dragOperation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragReadyToShape__DelegateSignature(class UWidget* generatedWidget, class UCommon_DragDrop_Data_C* dragOperation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragReadyToShape__DelegateSignature");

	UCommon_DragDrop_Item_C_OnDragReadyToShape__DelegateSignature_Params params;
	params.generatedWidget = generatedWidget;
	params.dragOperation = dragOperation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommon_DragDrop_Data_C* Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragCanceled__DelegateSignature(class UCommon_DragDrop_Data_C* Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragCanceled__DelegateSignature");

	UCommon_DragDrop_Item_C_OnDragCanceled__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommon_DragDrop_Data_C* Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_DragDrop_Item_C::OnDragStarted__DelegateSignature(class UCommon_DragDrop_Data_C* Operation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_DragDrop_Item.Common_DragDrop_Item_C.OnDragStarted__DelegateSignature");

	UCommon_DragDrop_Item_C_OnDragStarted__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

