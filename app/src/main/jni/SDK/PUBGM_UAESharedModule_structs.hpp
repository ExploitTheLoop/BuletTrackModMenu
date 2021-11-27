#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UAESharedModule.EUAEBlackboardType
enum class EUAEBlackboardType : uint8_t
{
	EBT_Object                     = 0,
	EBT_WeakObjectPtr              = 1,
	EBT_Class                      = 2,
	EBT_Enum                       = 3,
	EBT_Int                        = 4,
	EBT_UInt                       = 5,
	EBT_Float                      = 6,
	EBT_Bool                       = 7,
	EBT_String                     = 8,
	EBT_Name                       = 9,
	EBT_Vector                     = 10,
	EBT_Rotator                    = 11,
	EBT_MAX                        = 12
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UAESharedModule.UAEBlackboardParameterDefaultValue
// 0x0088
struct FUAEBlackboardParameterDefaultValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UAESharedModule.UAEBlackboardParameterDefaultValue.DefaultObject
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty UAESharedModule.UAEBlackboardParameterDefaultValue.DefaultClass
	unsigned char                                      DefaultEnum;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                DefaultInt;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFloat;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultBool;                                              // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FString                                     DefaultString;                                            // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FName                                       DefaultName;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultVector;                                            // 0x0078(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct UAESharedModule.UAEBlackboardParameter
// 0x0098
struct FUAEBlackboardParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EUAEBlackboardType>               Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FUAEBlackboardParameterDefaultValue         DefaultValue;                                             // 0x0010(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct UAESharedModule.UAEBlackboardContainer
// 0x02D0
struct FUAEBlackboardContainer
{
	TMap<struct FName, class UObject*>                 ObjectParamMap;                                           // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UObject>>  WeakObjectParamMap;                                       // 0x003C(0x0050) (ZeroConstructor)
	TMap<struct FName, class UClass*>                  ClassParamMap;                                            // 0x0078(0x0050) (ZeroConstructor)
	TMap<struct FName, unsigned char>                  EnumParamMap;                                             // 0x00B4(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            IntParamMap;                                              // 0x00F0(0x0050) (ZeroConstructor)
	TMap<struct FName, uint32_t>                       UIntParamMap;                                             // 0x012C(0x0050) (ZeroConstructor)
	TMap<struct FName, float>                          FloatParamMap;                                            // 0x0168(0x0050) (ZeroConstructor)
	TMap<struct FName, bool>                           BoolParamMap;                                             // 0x01A4(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FString>                 StringParamMap;                                           // 0x01E0(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FName>                   NameParamMap;                                             // 0x021C(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FVector>                 VectorParamMap;                                           // 0x0258(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FRotator>                RotatorParamMap;                                          // 0x0294(0x0050) (ZeroConstructor)
};

// ScriptStruct UAESharedModule.UAEBlackboardKeySelector
// 0x0008
struct FUAEBlackboardKeySelector
{
	struct FName                                       SelectedKeyName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

