// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MMKVUnreal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MMKVUnreal.MMKVObject.TotalSize
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMMKVObject::TotalSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.TotalSize");

	UMMKVObject_TotalSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.SetString
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::SetString(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetString");

	UMMKVObject_SetString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.SetInt32
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::SetInt32(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetInt32");

	UMMKVObject_SetInt32_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.SetErrorLogDelegate
// (Final, Native, Static, Public)
// Parameters:
// struct FScriptDelegate         handler                        (Parm, ZeroConstructor)

void UMMKVObject::SetErrorLogDelegate(const struct FScriptDelegate& handler)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetErrorLogDelegate");

	UMMKVObject_SetErrorLogDelegate_Params params;
	params.handler = handler;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MMKVUnreal.MMKVObject.SetDouble
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// double                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::SetDouble(const struct FString& Key, double Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetDouble");

	UMMKVObject_SetDouble_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.SetBuffer
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::SetBuffer(const struct FString& Key, TArray<unsigned char> Buffer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetBuffer");

	UMMKVObject_SetBuffer_Params params;
	params.Key = Key;
	params.Buffer = Buffer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.SetBool
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::SetBool(const struct FString& Key, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.SetBool");

	UMMKVObject_SetBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.Remove
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UMMKVObject::Remove(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.Remove");

	UMMKVObject_Remove_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// DelegateFunction MMKVUnreal.MMKVObject.MMKVLogError__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString                 MapId                          (Parm, ZeroConstructor)
// int                            ErrorType                      (Parm, ZeroConstructor, IsPlainOldData)

void UMMKVObject::MMKVLogError__DelegateSignature(const struct FString& MapId, int ErrorType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("DelegateFunction MMKVUnreal.MMKVObject.MMKVLogError__DelegateSignature");

	UMMKVObject_MMKVLogError__DelegateSignature_Params params;
	params.MapId = MapId;
	params.ErrorType = ErrorType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MMKVUnreal.MMKVObject.Init
// (Final, Native, Public)
// Parameters:
// struct FString                 MMapID                         (Parm, ZeroConstructor)
// struct FString                 RootPath                       (Parm, ZeroConstructor)

void UMMKVObject::Init(const struct FString& MMapID, const struct FString& RootPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.Init");

	UMMKVObject_Init_Params params;
	params.MMapID = MMapID;
	params.RootPath = RootPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MMKVUnreal.MMKVObject.GetValueSize
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMMKVObject::GetValueSize(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetValueSize");

	UMMKVObject_GetValueSize_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetString
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMMKVObject::GetString(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetString");

	UMMKVObject_GetString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetInt32
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMMKVObject::GetInt32(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetInt32");

	UMMKVObject_GetInt32_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetDouble
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UMMKVObject::GetDouble(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetDouble");

	UMMKVObject_GetDouble_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetBuffer
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UMMKVObject::GetBuffer(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetBuffer");

	UMMKVObject_GetBuffer_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetBool
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::GetBool(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetBool");

	UMMKVObject_GetBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.GetAllKeys
// (Final, Native, Public, Const)
// Parameters:
// TMap<struct FString, bool>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, bool> UMMKVObject::GetAllKeys()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.GetAllKeys");

	UMMKVObject_GetAllKeys_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MMKVUnreal.MMKVObject.ContainsKey
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMMKVObject::ContainsKey(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MMKVUnreal.MMKVObject.ContainsKey");

	UMMKVObject_ContainsKey_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

