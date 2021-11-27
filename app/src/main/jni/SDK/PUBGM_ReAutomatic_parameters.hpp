#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ReAutomatic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReAutomatic.AutomaticCommonHelper.IsClassOf
struct UAutomaticCommonHelper_IsClassOf_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName
struct UAutomaticPlatformHelper_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition
struct UAutomaticUIHelper_IsWidgetVisibleWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible
struct UAutomaticUIHelper_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex
struct UAutomaticUIHelper_IsWidgetTextMatchRegex_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType
struct UAutomaticUIHelper_IsWidgetMatchType_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUIType                                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition
struct UAutomaticUIHelper_FindWidgetObjectWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject
struct UAutomaticUIHelper_FindUWidgetObject_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

