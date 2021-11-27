#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ODPakDownload_Component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ODPakDownload_Component.ODPakDownload_Component_C.HideDownloadBg
struct UODPakDownload_Component_C_HideDownloadBg_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.SetDownloadIconSize
struct UODPakDownload_Component_C_SetDownloadIconSize_Params
{
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.SetDownloadData
struct UODPakDownload_Component_C_SetDownloadData_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Posoffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.SetDownloadIconPos
struct UODPakDownload_Component_C_SetDownloadIconPos_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.OnClickDownload
struct UODPakDownload_Component_C_OnClickDownload_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.SetDownloadIcon
struct UODPakDownload_Component_C_SetDownloadIcon_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.Construct
struct UODPakDownload_Component_C_Construct_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.CustomEvent_1
struct UODPakDownload_Component_C_CustomEvent_1_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.Destruct
struct UODPakDownload_Component_C_Destruct_Params
{
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.ExecuteUbergraph_ODPakDownload_Component
struct UODPakDownload_Component_C_ExecuteUbergraph_ODPakDownload_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ODPakDownload_Component.ODPakDownload_Component_C.OnDownloadState__DelegateSignature
struct UODPakDownload_Component_C_OnDownloadState__DelegateSignature_Params
{
	int                                                DownloadState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

