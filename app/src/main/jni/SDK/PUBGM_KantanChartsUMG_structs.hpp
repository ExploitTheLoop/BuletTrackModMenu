#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_KantanChartsSlate_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_SlateCore_classes.hpp"
#include "PUBGM_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KantanChartsUMG.CategoryStyleManualMapping
// 0x0020
struct FCategoryStyleManualMapping
{
	struct FName                                       CategoryId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKantanCategoryStyle                        Style;                                                    // 0x0008(0x0018) (Edit)
};

// ScriptStruct KantanChartsUMG.SeriesStyleManualMapping
// 0x0028
struct FSeriesStyleManualMapping
{
	struct FName                                       SeriesId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKantanSeriesStyle                          Style;                                                    // 0x0008(0x0020) (Edit)
};

}

