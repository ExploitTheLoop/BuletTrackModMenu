#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TemBPNode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TemBPNode.TemBPLibrary
// 0x0000 (0x0020 - 0x0020)
class UTemBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.TemBPLibrary");
		return pStaticClass;
	}


	static void TempUIMsgInvokeRef(class UObject* ObjContext, const struct FString& MsgName, const struct FString& ModuleName, TArray<struct FTemBPDataAddr> ParamArray);
	static void TempBridgeEventInvokeRef(class UObject* ObjContext, const struct FString& EventType, const struct FString& EventId, TArray<struct FTemBPDataAddr> ParamArray);
	static struct FTemBPDataAddr AddrFromWild(const struct FString& DataType, const struct FTemBPDataAddr& InAny);
	static struct FTemBPDataAddr AddrFromSet(const struct FString& DataType);
	static struct FTemBPDataAddr AddrFromMap(const struct FString& DataType, TMap<int, int> InAny);
	static struct FTemBPDataAddr AddrFromArray(const struct FString& DataType, TArray<int> InAny);
};


// Class TemBPNode.LuaTemBPData
// 0x0004 (0x0020 - 0x001C)
class ULuaTemBPData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_bool
// 0x0000 (0x0020 - 0x0020)
class ULuaTemBPData_bool : public ULuaTemBPData
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_bool");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_int
// 0x0000 (0x0020 - 0x0020)
class ULuaTemBPData_int : public ULuaTemBPData
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_int");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_float
// 0x0000 (0x0020 - 0x0020)
class ULuaTemBPData_float : public ULuaTemBPData
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_float");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_string
// 0x0008 (0x0028 - 0x0020)
class ULuaTemBPData_string : public ULuaTemBPData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_string");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_object
// 0x0000 (0x0020 - 0x0020)
class ULuaTemBPData_object : public ULuaTemBPData
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_object");
		return pStaticClass;
	}

};


}

