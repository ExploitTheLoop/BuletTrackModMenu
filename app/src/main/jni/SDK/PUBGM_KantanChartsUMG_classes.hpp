#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_KantanChartsUMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KantanChartsUMG.KantanChart
// 0x0038 (0x0108 - 0x00D0)
class UKantanChart : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D0(0x000C) MISSED OFFSET
	struct FText                                       ChartTitle;                                               // 0x00DC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TitlePadding;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              UpdateTickRate;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00FC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChart");
		return pStaticClass;
	}


	void SetUpdateTickRate(float InRate);
	void SetMargins(const struct FMargin& InMargins);
	void SetChartTitlePadding(const struct FMargin& InPadding);
	void SetChartTitle(const struct FText& InTitle);
};


// Class KantanChartsUMG.KantanCategoryChart
// 0x0010 (0x0118 - 0x0108)
class UKantanCategoryChart : public UKantanChart
{
public:
	class UKantanCategoryStyleSet*                     CategoryStyleSet;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCategoryStyleManualMapping>         ManualStyleMappings;                                      // 0x010C(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCategoryChart");
		return pStaticClass;
	}


	void AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color);
};


// Class KantanChartsUMG.KantanBarChartBase
// 0x0160 (0x0278 - 0x0118)
class UKantanBarChartBase : public UKantanCategoryChart
{
public:
	struct FKantanBarChartStyle                        WidgetStyle;                                              // 0x0118(0x0120) (Edit, BlueprintVisible)
	EKantanBarChartOrientation                         Orientation;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              MaxBarValue;                                              // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKantanBarLabelPosition                            LabelPosition;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              BarToGapRatio;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKantanBarValueExtents                             ValueExtentsDisplay;                                      // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FCartesianAxisConfig                        ValueAxisCfg;                                             // 0x024C(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanBarChartBase");
		return pStaticClass;
	}


	void SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetOrientation(EKantanBarChartOrientation InOrientation);
	void SetMaxBarValue(float InMaxValue);
	void SetLabelPosition(EKantanBarLabelPosition InPosition);
	void SetExtentsDisplay(EKantanBarValueExtents InExtents);
	void SetBarToGapRatio(float InRatio);
};


// Class KantanChartsUMG.BarChart
// 0x0008 (0x0280 - 0x0278)
class UBarChart : public UKantanBarChartBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.BarChart");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDataSource);
};


// Class KantanChartsUMG.KantanCartesianChartBase
// 0x01C8 (0x02D0 - 0x0108)
class UKantanCartesianChartBase : public UKantanChart
{
public:
	struct FKantanCartesianChartStyle                  WidgetStyle;                                              // 0x0108(0x0120) (Edit, BlueprintVisible)
	struct FKantanCartesianPlotScale                   PlotScale;                                                // 0x0228(0x0024) (Edit)
	TEnumAsByte<enum EKantanDataPointSize>             DataPointSize;                                            // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	struct FCartesianAxisConfig                        XAxisCfg;                                                 // 0x0250(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianAxisConfig                        YAxisCfg;                                                 // 0x027C(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     AxisTitlePadding;                                         // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UKantanSeriesStyleSet*                       SeriesStyleSet;                                           // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSeriesStyleManualMapping>           ManualStyleMappings;                                      // 0x02BC(0x000C) (Edit, ZeroConstructor)
	bool                                               bAntiAlias;                                               // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianChartBase");
		return pStaticClass;
	}


	void SetYAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetXAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY);
	void SetPlotScale(const struct FVector2D& inScale, const struct FVector2D& InFocalCoords);
	void SetDataPointSize(TEnumAsByte<enum EKantanDataPointSize> InSize);
	void SetAxisTitlePadding(const struct FMargin& InPadding);
	void EnableSeries(const struct FName& ID, bool bEnable);
	void ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines);
	void AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color);
};


// Class KantanChartsUMG.KantanCartesianPlotBase
// 0x0000 (0x02D0 - 0x02D0)
class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianPlotBase");
		return pStaticClass;
	}

};


// Class KantanChartsUMG.CartesianPlot
// 0x0000 (0x02D0 - 0x02D0)
class UCartesianPlot : public UKantanCartesianPlotBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.CartesianPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDataSource);
};


// Class KantanChartsUMG.KantanChartLegend
// 0x00D0 (0x01A0 - 0x00D0)
class UKantanChartLegend : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D0(0x000C) MISSED OFFSET
	struct FMargin                                     SeriesPadding;                                            // 0x00DC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x00F0(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                FontSize;                                                 // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKantanCartesianChartBase>    Chart;                                                    // 0x018C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0194(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChartLegend");
		return pStaticClass;
	}


	void SetSeriesPadding(const struct FMargin& InPadding);
	void SetMargins(const struct FMargin& InMargins);
	void SetFontSize(int InFontSize);
	void SetChart(class UKantanCartesianChartBase* InChart);
	void SetBackground(const struct FSlateBrush& InBrush);
};


// Class KantanChartsUMG.KantanTimeSeriesPlotBase
// 0x0020 (0x02F0 - 0x02D0)
class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{
public:
	struct FCartesianRangeBound                        LowerTimeBound;                                           // 0x02D0(0x0008) (Edit)
	struct FCartesianRangeBound                        UpperTimeBound;                                           // 0x02D8(0x0008) (Edit)
	struct FCartesianRangeBound                        LowerValueBound;                                          // 0x02E0(0x0008) (Edit)
	struct FCartesianRangeBound                        UpperValueBound;                                          // 0x02E8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanTimeSeriesPlotBase");
		return pStaticClass;
	}

};


// Class KantanChartsUMG.SimpleBarChart
// 0x0010 (0x0288 - 0x0278)
class USimpleBarChart : public UKantanBarChartBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0278(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleBarChart");
		return pStaticClass;
	}


	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllCategories();
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);
};


// Class KantanChartsUMG.SimpleCartesianPlot
// 0x0010 (0x02E0 - 0x02D0)
class USimpleCartesianPlot : public UKantanCartesianPlotBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleCartesianPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};


// Class KantanChartsUMG.SimpleTimeSeriesPlot
// 0x0010 (0x0300 - 0x02F0)
class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleTimeSeriesPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};


// Class KantanChartsUMG.TimeSeriesPlot
// 0x0008 (0x02F8 - 0x02F0)
class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	class UObject*                                     DataSource;                                               // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsUMG.TimeSeriesPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDataSource);
};


}

