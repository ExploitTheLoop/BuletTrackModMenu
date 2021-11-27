#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Title_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Title_UIBP.Title_UIBP_C.__SetLbsGlobalAliasInfo
struct UTitle_UIBP_C___SetLbsGlobalAliasInfo_Params
{
	int                                                RankID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title_UIBP.Title_UIBP_C.SetAliasInfo
struct UTitle_UIBP_C_SetAliasInfo_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Nation;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Available_len;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RankID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title_UIBP.Title_UIBP_C.__SetImageWithsSpriteRes
struct UTitle_UIBP_C___SetImageWithsSpriteRes_Params
{
	struct FString                                     ResPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title_UIBP.Title_UIBP_C.__GetNationInfo
struct UTitle_UIBP_C___GetNationInfo_Params
{
	struct FString                                     NationCode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FBP_STRUCT_RegionConfig_type                NationInfo;                                               // (Parm, OutParm)
};

// Function Title_UIBP.Title_UIBP_C.SetAliasData
struct UTitle_UIBP_C_SetAliasData_Params
{
	struct FString                                     Nation;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathUrl;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              availableLen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RankID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title_UIBP.Title_UIBP_C.HideAll
struct UTitle_UIBP_C_HideAll_Params
{
};

// Function Title_UIBP.Title_UIBP_C.DelayCheckAliasLength
struct UTitle_UIBP_C_DelayCheckAliasLength_Params
{
	float                                              AvaliableLen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Title_UIBP.Title_UIBP_C.ExecuteUbergraph_Title_UIBP
struct UTitle_UIBP_C_ExecuteUbergraph_Title_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

