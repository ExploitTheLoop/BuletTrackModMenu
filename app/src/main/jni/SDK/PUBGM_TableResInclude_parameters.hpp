#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TableResInclude_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable
struct UEvoBaseMapUIMarkTableMap_TraversTable_Params
{
	class UUAEDataTable*                               TableData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable
struct UEvoBaseModTableTestTableMap_TraversTable_Params
{
	class UUAEDataTable*                               TableData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

