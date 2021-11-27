// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_KantanChartsUMG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KantanChartsUMG.KantanChart.SetUpdateTickRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRate                         (Parm, ZeroConstructor, IsPlainOldData)

void UKantanChart::SetUpdateTickRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetUpdateTickRate");

	UKantanChart_SetUpdateTickRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChart.SetMargins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 InMargins                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanChart::SetMargins(const struct FMargin& InMargins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetMargins");

	UKantanChart_SetMargins_Params params;
	params.InMargins = InMargins;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChart.SetChartTitlePadding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanChart::SetChartTitlePadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetChartTitlePadding");

	UKantanChart_SetChartTitlePadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChart.SetChartTitle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InTitle                        (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanChart::SetChartTitle(const struct FText& InTitle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetChartTitle");

	UKantanChart_SetChartTitle_Params params;
	params.InTitle = InTitle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   CategoryId                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UKantanCategoryChart::AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride");

	UKantanCategoryChart_AddCategoryStyleOverride_Params params;
	params.CategoryId = CategoryId;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCartesianAxisConfig    InCfg                          (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanBarChartBase::SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig");

	UKantanBarChartBase_SetValueAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EKantanBarChartOrientation     InOrientation                  (Parm, ZeroConstructor, IsPlainOldData)

void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetOrientation");

	UKantanBarChartBase_SetOrientation_Params params;
	params.InOrientation = InOrientation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UKantanBarChartBase::SetMaxBarValue(float InMaxValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue");

	UKantanBarChartBase_SetMaxBarValue_Params params;
	params.InMaxValue = InMaxValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EKantanBarLabelPosition        InPosition                     (Parm, ZeroConstructor, IsPlainOldData)

void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition");

	UKantanBarChartBase_SetLabelPosition_Params params;
	params.InPosition = InPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EKantanBarValueExtents         InExtents                      (Parm, ZeroConstructor, IsPlainOldData)

void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay");

	UKantanBarChartBase_SetExtentsDisplay_Params params;
	params.InExtents = InExtents;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRatio                        (Parm, ZeroConstructor, IsPlainOldData)

void UKantanBarChartBase::SetBarToGapRatio(float InRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio");

	UKantanBarChartBase_SetBarToGapRatio_Params params;
	params.InRatio = InRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.BarChart.SetDatasource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InDataSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBarChart::SetDatasource(class UObject* InDataSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.BarChart.SetDatasource");

	UBarChart_SetDatasource_Params params;
	params.InDataSource = InDataSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCartesianAxisConfig    InCfg                          (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanCartesianChartBase::SetYAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig");

	UKantanCartesianChartBase_SetYAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCartesianAxisConfig    InCfg                          (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanCartesianChartBase::SetXAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig");

	UKantanCartesianChartBase_SetXAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCartesianAxisRange     InRangeX                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCartesianAxisRange     InRangeY                       (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanCartesianChartBase::SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange");

	UKantanCartesianChartBase_SetPlotScaleByRange_Params params;
	params.InRangeX = InRangeX;
	params.InRangeY = InRangeY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               inScale                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               InFocalCoords                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanCartesianChartBase::SetPlotScale(const struct FVector2D& inScale, const struct FVector2D& InFocalCoords)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale");

	UKantanCartesianChartBase_SetPlotScale_Params params;
	params.inScale = inScale;
	params.InFocalCoords = InFocalCoords;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<enum EKantanDataPointSize> InSize                         (Parm, ZeroConstructor, IsPlainOldData)

void UKantanCartesianChartBase::SetDataPointSize(TEnumAsByte<enum EKantanDataPointSize> InSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize");

	UKantanCartesianChartBase_SetDataPointSize_Params params;
	params.InSize = InSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanCartesianChartBase::SetAxisTitlePadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding");

	UKantanCartesianChartBase_SetAxisTitlePadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UKantanCartesianChartBase::EnableSeries(const struct FName& ID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries");

	UKantanCartesianChartBase_EnableSeries_Params params;
	params.ID = ID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawLines                     (Parm, ZeroConstructor, IsPlainOldData)

void UKantanCartesianChartBase::ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries");

	UKantanCartesianChartBase_ConfigureSeries_Params params;
	params.ID = ID;
	params.bDrawPoints = bDrawPoints;
	params.bDrawLines = bDrawLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, ZeroConstructor, IsPlainOldData)
// class UKantanPointStyle*       PointStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UKantanCartesianChartBase::AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride");

	UKantanCartesianChartBase_AddSeriesStyleOverride_Params params;
	params.SeriesId = SeriesId;
	params.PointStyle = PointStyle;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.CartesianPlot.SetDatasource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InDataSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCartesianPlot::SetDatasource(class UObject* InDataSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.CartesianPlot.SetDatasource");

	UCartesianPlot_SetDatasource_Params params;
	params.InDataSource = InDataSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanChartLegend::SetSeriesPadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding");

	UKantanChartLegend_SetSeriesPadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChartLegend.SetMargins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMargin                 InMargins                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UKantanChartLegend::SetMargins(const struct FMargin& InMargins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetMargins");

	UKantanChartLegend_SetMargins_Params params;
	params.InMargins = InMargins;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChartLegend.SetFontSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InFontSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UKantanChartLegend::SetFontSize(int InFontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetFontSize");

	UKantanChartLegend_SetFontSize_Params params;
	params.InFontSize = InFontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChartLegend.SetChart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKantanCartesianChartBase* InChart                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKantanChartLegend::SetChart(class UKantanCartesianChartBase* InChart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetChart");

	UKantanChartLegend_SetChart_Params params;
	params.InChart = InChart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.KantanChartLegend.SetBackground
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)

void UKantanChartLegend::SetBackground(const struct FSlateBrush& InBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetBackground");

	UKantanChartLegend_SetBackground_Params params;
	params.InBrush = InBrush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleBarChart::BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue");

	USimpleBarChart_BP_UpdateCategoryValue_Params params;
	params.ID = ID;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleBarChart::BP_RemoveCategory(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory");

	USimpleBarChart_BP_RemoveCategory_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories
// (Final, Native, Public, BlueprintCallable)

void USimpleBarChart::BP_RemoveAllCategories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories");

	USimpleBarChart_BP_RemoveAllCategories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleBarChart::BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId");

	USimpleBarChart_BP_AddCategoryWithId_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleBarChart.BP_AddCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Name                           (Parm)
// struct FName                   CatId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleBarChart::BP_AddCategory(const struct FText& Name, struct FName* CatId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_AddCategory");

	USimpleBarChart_BP_AddCategory_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CatId != nullptr)
		*CatId = params.CatId;
}

// Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleCartesianPlot::BP_RemoveSeries(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries");

	USimpleCartesianPlot_BP_RemoveSeries_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries
// (Final, Native, Public, BlueprintCallable)

void USimpleCartesianPlot::BP_RemoveAllSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries");

	USimpleCartesianPlot_BP_RemoveAllSeries_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLines                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleCartesianPlot::BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId");

	USimpleCartesianPlot_BP_AddSeriesWithId_Params params;
	params.ID = ID;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLines                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleCartesianPlot::BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries");

	USimpleCartesianPlot_BP_AddSeries_Params params;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SeriesId != nullptr)
		*SeriesId = params.SeriesId;
}

// Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleCartesianPlot::BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint");

	USimpleCartesianPlot_BP_AddDatapoint_Params params;
	params.SeriesId = SeriesId;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleTimeSeriesPlot::BP_RemoveSeries(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries");

	USimpleTimeSeriesPlot_BP_RemoveSeries_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries
// (Final, Native, Public, BlueprintCallable)

void USimpleTimeSeriesPlot::BP_RemoveAllSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries");

	USimpleTimeSeriesPlot_BP_RemoveAllSeries_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLines                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleTimeSeriesPlot::BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId");

	USimpleTimeSeriesPlot_BP_AddSeriesWithId_Params params;
	params.ID = ID;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLines                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleTimeSeriesPlot::BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries");

	USimpleTimeSeriesPlot_BP_AddSeries_Params params;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SeriesId != nullptr)
		*SeriesId = params.SeriesId;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleTimeSeriesPlot::BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow");

	USimpleTimeSeriesPlot_BP_AddDatapointNow_Params params;
	params.SeriesId = SeriesId;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   SeriesId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleTimeSeriesPlot::BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint");

	USimpleTimeSeriesPlot_BP_AddDatapoint_Params params;
	params.SeriesId = SeriesId;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}

// Function KantanChartsUMG.TimeSeriesPlot.SetDatasource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InDataSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeSeriesPlot::SetDatasource(class UObject* InDataSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function KantanChartsUMG.TimeSeriesPlot.SetDatasource");

	UTimeSeriesPlot_SetDatasource_Params params;
	params.InDataSource = InDataSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

