#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_KantanChartsDatasource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KantanChartsDatasource.KantanCartesianDatasourceInterface
// 0x0000 (0x0020 - 0x0020)
class UKantanCartesianDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanCartesianDatasourceInterface");
		return pStaticClass;
	}


	struct FText GetSeriesName(int SeriesIdx);
	struct FName GetSeriesId(int CatIdx);
	TArray<struct FKantanCartesianDatapoint> GetSeriesDatapoints(int SeriesIdx);
	int GetNumSeries();
};


// Class KantanChartsDatasource.KantanCategoryDatasourceInterface
// 0x0000 (0x0020 - 0x0020)
class UKantanCategoryDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanCategoryDatasourceInterface");
		return pStaticClass;
	}


	int GetNumCategories();
	float GetCategoryValue(int CatIdx);
	struct FText GetCategoryName(int CatIdx);
	struct FName GetCategoryId(int CatIdx);
};


// Class KantanChartsDatasource.KantanSimpleCartesianDatasource
// 0x0014 (0x0030 - 0x001C)
class UKantanSimpleCartesianDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanSimpleCartesianDatasource");
		return pStaticClass;
	}


	static class UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource();
	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, struct FName* SeriesId);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};


// Class KantanChartsDatasource.KantanSimpleCategoryDatasource
// 0x0014 (0x0030 - 0x001C)
class UKantanSimpleCategoryDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanSimpleCategoryDatasource");
		return pStaticClass;
	}


	static class UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();
	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllCategories();
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);
};


}

