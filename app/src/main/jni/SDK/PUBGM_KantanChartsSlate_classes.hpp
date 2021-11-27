#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_KantanChartsSlate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KantanChartsSlate.KantanBarChartWidgetStyle
// 0x0120 (0x0140 - 0x0020)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanBarChartStyle                        ChartStyle;                                               // 0x0020(0x0120) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanBarChartWidgetStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// 0x0120 (0x0140 - 0x0020)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanCartesianChartStyle                  ChartStyle;                                               // 0x0020(0x0120) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCartesianChartWidgetStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanCategoryStyleSet
// 0x0010 (0x0030 - 0x0020)
class UKantanCategoryStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanCategoryStyle>                Styles;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCategoryStyleSet");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanPointStyle
// 0x0020 (0x0040 - 0x0020)
class UKantanPointStyle : public UDataAsset
{
public:
	class UTexture2D*                                  DataPointTexture;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   PointSizeTextureOffsets[0x3];                             // 0x0024(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanPointStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanSeriesStyleSet
// 0x0010 (0x0030 - 0x0020)
class UKantanSeriesStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanSeriesStyle>                  Styles;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanSeriesStyleSet");
		return pStaticClass;
	}

};


}

