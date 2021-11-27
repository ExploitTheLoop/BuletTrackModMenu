#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CoreUObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0020
class UObject
{
public:
	static FUObjectArray*                              GUObjectArray;                                            // 0x0000(0x0000)
	void*                                              VTable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      ClassPrivate;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              NamePrivate;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     OuterPrivate;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
        static const int ProcessEvent_Index = 71;
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, ProcessEvent_Index)(this, function, parms);
	}

	static inline TUObjectArray& GetGlobalObjects()
	{
		return GUObjectArray->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Object");
		return pStaticClass;
	}


	void ExecuteUbergraph(int EntryPoint);
};


// Class CoreUObject.Interface
// 0x0004 (0x0020 - 0x001C)
class UInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Interface");
		return pStaticClass;
	}

};


// Class CoreUObject.GCObjectReferencer
// 0x0014 (0x0030 - 0x001C)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return pStaticClass;
	}

};


// Class CoreUObject.TextBuffer
// 0x001C (0x0038 - 0x001C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.TextBuffer");
		return pStaticClass;
	}

};


// Class CoreUObject.Field
// 0x0004 (0x0020 - 0x001C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Field");
		return pStaticClass;
	}

};


// Class CoreUObject.Struct
// 0x0038 (0x0058 - 0x0020)
class UStruct : public UField
{
public:
	class UStruct*                                     SuperStruct;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertiesSize;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad[0x28];                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Struct");
		return pStaticClass;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0010 (0x0068 - 0x0058)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return pStaticClass;
	}

};


// Class CoreUObject.Package
// 0x00E4 (0x0100 - 0x001C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x001C(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Package");
		return pStaticClass;
	}

};


// Class CoreUObject.Class
// 0x00F8 (0x0150 - 0x0058)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0058(0x00F8) MISSED OFFSET

	inline UObject* GetDefaultObject(bool bCreateIfNeeded = true)
	{
        static const int GetDefaultObject_Index = 107;
		return static_cast<UObject*>(GetVFunction<UObject*(*)(UClass*, bool)>(this, GetDefaultObject_Index)(this, bCreateIfNeeded));
	}

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Class");
		return pStaticClass;
	}

};


// Class CoreUObject.Function
// 0x0028 (0x0080 - 0x0058)
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               pad[0xC];                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Function");
		return pStaticClass;
	}

};


// Class CoreUObject.DelegateFunction
// 0x0000 (0x0080 - 0x0080)
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return pStaticClass;
	}

};


// Class CoreUObject.DynamicClass
// 0x0048 (0x0198 - 0x0150)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0150(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.DynamicClass");
		return pStaticClass;
	}

};


// Class CoreUObject.PackageMap
// 0x008C (0x00A8 - 0x001C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x001C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.PackageMap");
		return pStaticClass;
	}

};


// Class CoreUObject.Enum
// 0x0020 (0x0040 - 0x0020)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Enum");
		return pStaticClass;
	}

};


// Class CoreUObject.Property
// 0x0030 (0x0050 - 0x0020)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Property");
		return pStaticClass;
	}

};


// Class CoreUObject.EnumProperty
// 0x0008 (0x0058 - 0x0050)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.EnumProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.LinkerPlaceholderClass
// 0x0138 (0x0288 - 0x0150)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0150(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return pStaticClass;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0084 (0x00A0 - 0x001C)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x001C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return pStaticClass;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x0138 (0x01B8 - 0x0080)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0080(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return pStaticClass;
	}

};


// Class CoreUObject.MetaData
// 0x007C (0x0098 - 0x001C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x001C(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.MetaData");
		return pStaticClass;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0004 (0x0020 - 0x001C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return pStaticClass;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0008 (0x0058 - 0x0050)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0058 - 0x0050)
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return pStaticClass;
	}

};


// Class CoreUObject.BoolProperty
// 0x0008 (0x0058 - 0x0050)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.BoolProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.NumericProperty
// 0x0000 (0x0050 - 0x0050)
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.NumericProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.ByteProperty
// 0x0008 (0x0058 - 0x0050)
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ByteProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000 (0x0058 - 0x0058)
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.ClassProperty
// 0x0000 (0x0058 - 0x0058)
class UClassProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.ClassProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0008 (0x0058 - 0x0050)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000 (0x0050 - 0x0050)
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000 (0x0050 - 0x0050)
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.FloatProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.IntProperty
// 0x0000 (0x0050 - 0x0050)
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.IntProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.Int16Property
// 0x0000 (0x0050 - 0x0050)
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Int16Property");
		return pStaticClass;
	}

};


// Class CoreUObject.Int64Property
// 0x0000 (0x0050 - 0x0050)
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Int64Property");
		return pStaticClass;
	}

};


// Class CoreUObject.Int8Property
// 0x0000 (0x0050 - 0x0050)
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.Int8Property");
		return pStaticClass;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0058 - 0x0050)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0058 - 0x0058)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.MapProperty
// 0x0030 (0x0080 - 0x0050)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.MapProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0058 - 0x0050)
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.NameProperty
// 0x0000 (0x0050 - 0x0050)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.NameProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.SetProperty
// 0x0020 (0x0070 - 0x0050)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.SetProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.SoftObjectProperty
// 0x0000 (0x0058 - 0x0058)
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.SoftClassProperty
// 0x0000 (0x0058 - 0x0058)
class USoftClassProperty : public USoftObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.StrProperty
// 0x0000 (0x0050 - 0x0050)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.StrProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.StructProperty
// 0x0008 (0x0058 - 0x0050)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.StructProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.UInt16Property
// 0x0000 (0x0050 - 0x0050)
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.UInt16Property");
		return pStaticClass;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000 (0x0050 - 0x0050)
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.UInt32Property");
		return pStaticClass;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000 (0x0050 - 0x0050)
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.UInt64Property");
		return pStaticClass;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0058 - 0x0058)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return pStaticClass;
	}

};


// Class CoreUObject.TextProperty
// 0x0000 (0x0050 - 0x0050)
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class CoreUObject.TextProperty");
		return pStaticClass;
	}

};


}

