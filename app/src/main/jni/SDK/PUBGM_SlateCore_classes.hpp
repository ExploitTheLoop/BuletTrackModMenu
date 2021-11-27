#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SlateCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SlateCore.FontBulkData
// 0x005C (0x0078 - 0x001C)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x001C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.FontBulkData");
		return pStaticClass;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0020 - 0x0020)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return pStaticClass;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0020 - 0x0020)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return pStaticClass;
	}

};


// Class SlateCore.SlateTypes
// 0x0004 (0x0020 - 0x001C)
class USlateTypes : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.SlateTypes");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0004 (0x0020 - 0x001C)
class USlateWidgetStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0004 (0x0020 - 0x001C)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0020 - 0x0020)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return pStaticClass;
	}

};


}

