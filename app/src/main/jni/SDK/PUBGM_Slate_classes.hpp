#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Slate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x02B8 (0x02D8 - 0x0020)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0020(0x02B8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x05F0 (0x0610 - 0x0020)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0020(0x05F0) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0438 (0x0458 - 0x0020)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0020(0x0438) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x0400 (0x0420 - 0x0020)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0020(0x0400) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0890 (0x08B0 - 0x0020)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0020(0x0890) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0230 (0x0250 - 0x0020)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0020(0x0230) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01D0 (0x01F0 - 0x0020)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0020(0x01D0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0560 (0x0580 - 0x0020)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0020(0x0560) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0268 (0x0288 - 0x0020)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0020(0x0268) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.SlateSettings
// 0x0004 (0x0020 - 0x001C)
class USlateSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.SlateSettings");
		return pStaticClass;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0330 (0x0350 - 0x0020)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0020(0x0330) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x01E0 (0x0200 - 0x0020)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0020(0x01E0) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return pStaticClass;
	}

};


}

