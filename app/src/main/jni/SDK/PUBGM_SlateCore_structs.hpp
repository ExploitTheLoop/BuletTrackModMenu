#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};


// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
};


// Enum SlateCore.EWidgetVisible
enum class EWidgetVisible : uint8_t
{
	EWidgetVisible__Default        = 0,
	EWidgetVisible__ForceNotVisible = 1,
	EWidgetVisible__ForceVisible   = 2,
	EWidgetVisible__MaxVisible     = 3,
	EWidgetVisible__EWidgetVisible_MAX = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};


// Enum SlateCore.EBlurType
enum class EBlurType : uint8_t
{
	BlurType_Default               = 0,
	BlurType_Directional           = 1,
	BlurType_Radial                = 2,
	BlurType_Rotate                = 3,
	BlurType_MAX                   = 4
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x001C
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<enum ESlateColorStylingMode>           ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0011(0x000B) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0098
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x000C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x001C(0x001C) (Edit, BlueprintVisible)
	bool                                               bAsyncEnabled;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySoftInEditor;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	class UObject*                                     ResourceObject;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SlateCore.SlateBrush.SoftResourceObject
	struct FName                                       ResourceName;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      UVRegion;                                                 // 0x0070(0x0014)
	TEnumAsByte<enum ESlateBrushDrawType>              DrawAs;                                                   // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESlateBrushTileType>              Tiling;                                                   // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESlateBrushMirrorType>            Mirroring;                                                // 0x0086(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESlateBrushImageType>             ImageType;                                                // 0x0087(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 // 0x0090(0x0001)
	unsigned char                                      bHasUObject : 1;                                          // 0x0090(0x0001) (Deprecated)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FGeometry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0014
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x004C (0x0060 - 0x0014)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0014(0x004C) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0004
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x02B4 (0x02B8 - 0x0004)
struct FButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     PressedPadding;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0288(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x02A0(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x001C
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OutlineMaterial;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSeparateFillAlpha;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0040
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontOutlineSettings                        OutlineSettings;                                          // 0x0008(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBold;                                                   // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x075C (0x0760 - 0x0004)
struct FTableRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0268(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x0300(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0398(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0430(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x04C8(0x0098) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x0560(0x001C) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x057C(0x001C) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0598(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x0630(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x06C8(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03FC (0x0400 - 0x0004)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x02B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x02C0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0358(0x0098) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x03F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0434 (0x0438 - 0x0004)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x0400) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0408(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0420(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x022C (0x0230 - 0x0004)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0048(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0068(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0100(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0198(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x055C (0x0560 - 0x0004)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0268(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x0300(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0398(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0430(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x04C8(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x088C (0x0890 - 0x0004)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0268(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0278(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x02B8(0x001C) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x02D4(0x001C) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x02F0(0x001C) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x030C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x031C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0330(0x0560) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x01DC (0x01E0 - 0x0004)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0040) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x004C(0x001C) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0080(0x001C) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x009C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 HighlightShape;                                           // 0x00B0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UnderlineBrush;                                           // 0x0148(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x032C (0x0330 - 0x0004)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0268(0x0098) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0300(0x001C)
	struct FMargin                                     TextPadding;                                              // 0x031C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0264 (0x0268 - 0x0004)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x01D0(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x001C (0x0030 - 0x0014)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0038 - 0x0030)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0004 (0x0018 - 0x0014)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0044 - 0x0014)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0014(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0014
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x000C) (ZeroConstructor)
	EFontHinting                                       Hinting;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	EFontLoadingPolicy                                 LoadingPolicy;                                            // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class UObject*                                     FontFaceAsset;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0020
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.Typeface
// 0x000C
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x001C
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x000C)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x000C(0x000C) (ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.CompositeFont
// 0x0018
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x000C)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0004 (0x0018 - 0x0014)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x112C (0x1130 - 0x0004)
struct FWindowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x02B8) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x02C0(0x02B8) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0578(0x02B8) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0830(0x02B8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0AE8(0x01E0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0CC8(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0D60(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0DF8(0x0098) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0E90(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0EB0(0x0098) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0F48(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0F64(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BorderBrush;                                              // 0x0F68(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x1000(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x1098(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0134 (0x0138 - 0x0004)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00A0(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x07AC (0x07B0 - 0x0004)
struct FDockTabStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x02B8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x02C0(0x0098) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0358(0x0098) (Edit)
	struct FSlateBrush                                 ColorOverlayTabBrush;                                     // 0x03F0(0x0098) (Edit)
	struct FSlateBrush                                 ColorOverlayIconBrush;                                    // 0x0488(0x0098) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0520(0x0098) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x05B8(0x0098) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0650(0x0098) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x06E8(0x0098) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0780(0x0010) (Edit, IsPlainOldData)
	float                                              OverlapWidth;                                             // 0x0790(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FlashColor;                                               // 0x0794(0x001C) (Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x055C (0x0560 - 0x0004)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x0098) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x00A0(0x0098) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0138(0x0098) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x01D0(0x0098) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0268(0x0098) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0300(0x0098) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0398(0x0098) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x0430(0x0098) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x04C8(0x0098) (Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0134 (0x0138 - 0x0004)
struct FSplitterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x00A0(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0CB4 (0x0CB8 - 0x0004)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x0560) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0568(0x0560) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0AC8(0x0138) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0C00(0x0098) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0C98(0x001C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CB4(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x00A4 (0x00A8 - 0x0004)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0098) (Edit)
	int16_t                                            Baseline;                                                 // 0x00A0(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x026C (0x0270 - 0x0004)
struct FSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x01D0(0x0098) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x056C (0x0570 - 0x0004)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0270) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0278(0x0098) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x0310(0x0098) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x03A8(0x0098) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0440(0x0098) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x04D8(0x0098) (Edit)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0B4C (0x0B50 - 0x0004)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x0890) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0898(0x0040) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x08D8(0x0098) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0970(0x0098) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0A08(0x0098) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0AA0(0x0098) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0B38(0x0010) (Edit, IsPlainOldData)
	bool                                               bLeftAlignButtons;                                        // 0x0B48(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B49(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x013C (0x0140 - 0x0004)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x0098) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x00A0(0x0098) (Edit)
	float                                              RolloutAnimationSeconds;                                  // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01CC (0x01D0 - 0x0004)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0138(0x0098) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A74 (0x0A78 - 0x0004)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x0890) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0898(0x01E0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x04AC (0x04B0 - 0x0004)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x02B8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x02C0(0x01E0) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x04A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05EC (0x05F0 - 0x0004)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<enum ESlateCheckBoxType>               CheckBoxType;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0008(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x00A0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0138(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x01D0(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0268(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x0300(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0398(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0430(0x0098) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x04C8(0x0098) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0560(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0570(0x001C) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x058C(0x001C) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x05A8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x05C0(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x05D8(0x0018) (Edit, BlueprintVisible)
};

}

