#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_SlateCore_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealArchExt.EWidgetCompareType
enum class EWidgetCompareType : uint8_t
{
	EWidgetCompareType__Equal      = 0,
	EWidgetCompareType__NotEqual   = 1,
	EWidgetCompareType__LessThan   = 2,
	EWidgetCompareType__LargeThan  = 3,
	EWidgetCompareType__EqualLessThan = 4,
	EWidgetCompareType__EqualLargeThan = 5,
	EWidgetCompareType__EWidgetCompareType_MAX = 6
};


// Enum UnrealArchExt.EUserWidgetNameEqualPolitics
enum class EUserWidgetNameEqualPolitics : uint8_t
{
	EUserWidgetNameEqualPolitics__Normal = 0,
	EUserWidgetNameEqualPolitics__StartsWith = 1,
	EUserWidgetNameEqualPolitics__Regex = 2,
	EUserWidgetNameEqualPolitics__EUserWidgetNameEqualPolitics_MAX = 3
};


// Enum UnrealArchExt.EUserWidgetFadingStatus
enum class EUserWidgetFadingStatus : uint8_t
{
	EUserWidgetFadingStatus__UserWidgetFadingStatus_None = 0,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingIn = 1,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingOut = 2,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_MAX = 3
};


// Enum UnrealArchExt.EUAEUIMsgCallType
enum class EUAEUIMsgCallType : uint8_t
{
	EUAEUIMsgCallType__MCT_OnlySelf = 0,
	EUAEUIMsgCallType__MCT_AllFunc = 1,
	EUAEUIMsgCallType__MCT_MAX     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealArchExt.UserWidgetState
// 0x0020
struct FUserWidgetState
{
	struct FString                                     WidgetName;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       ContainerName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // 0x001C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UnrealArchExt.UnixTimestampCallback
// 0x0010
struct FUnixTimestampCallback
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct UnrealArchExt.LogicManagerCreateParams
// 0x0010
struct FLogicManagerCreateParams
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	class UClass*                                      pLogicManagerClass;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

