#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MMKVUnreal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MMKVUnreal.MMKVObject.TotalSize
struct UMMKVObject_TotalSize_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.SetString
struct UMMKVObject_SetString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.SetInt32
struct UMMKVObject_SetInt32_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.SetErrorLogDelegate
struct UMMKVObject_SetErrorLogDelegate_Params
{
	struct FScriptDelegate                             handler;                                                  // (Parm, ZeroConstructor)
};

// Function MMKVUnreal.MMKVObject.SetDouble
struct UMMKVObject_SetDouble_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	double                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.SetBuffer
struct UMMKVObject_SetBuffer_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.SetBool
struct UMMKVObject_SetBool_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.Remove
struct UMMKVObject_Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// DelegateFunction MMKVUnreal.MMKVObject.MMKVLogError__DelegateSignature
struct UMMKVObject_MMKVLogError__DelegateSignature_Params
{
	struct FString                                     MapId;                                                    // (Parm, ZeroConstructor)
	int                                                ErrorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.Init
struct UMMKVObject_Init_Params
{
	struct FString                                     MMapID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     RootPath;                                                 // (Parm, ZeroConstructor)
};

// Function MMKVUnreal.MMKVObject.GetValueSize
struct UMMKVObject_GetValueSize_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.GetString
struct UMMKVObject_GetString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MMKVUnreal.MMKVObject.GetInt32
struct UMMKVObject_GetInt32_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.GetDouble
struct UMMKVObject_GetDouble_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.GetBuffer
struct UMMKVObject_GetBuffer_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MMKVUnreal.MMKVObject.GetBool
struct UMMKVObject_GetBool_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MMKVUnreal.MMKVObject.GetAllKeys
struct UMMKVObject_GetAllKeys_Params
{
	TMap<struct FString, bool>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MMKVUnreal.MMKVObject.ContainsKey
struct UMMKVObject_ContainsKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

