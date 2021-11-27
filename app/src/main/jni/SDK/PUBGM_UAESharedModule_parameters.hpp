#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAESharedModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboardParameter
struct UOwnBlackboardInterface_GetOwnBlackboardParameter_Params
{
	TArray<struct FUAEBlackboardParameter>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboard
struct UOwnBlackboardInterface_GetOwnBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsWeakObject
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsVector
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     VectorValue;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsString
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsRotator
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    RotatorValue;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsObject
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsName
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsInt
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsFloat
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsEnum
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsClass
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsBool
struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistWeakObject
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistVector
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistString
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistRotator
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistObject
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistName
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistInt
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistFloat
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistEnum
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistClass
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistBool
struct UUAEBlackboardBlueprintFunctionLibrary_IsExistBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakObject
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakActor
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakActor_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsVector
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsString
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsRotator
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsObject
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsName
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsInt
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsFloat
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsEnum
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsClass
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsBool
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsActor
struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsActor_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboard
struct UUAEBlackboardBlueprintFunctionLibrary_FillBlackboard_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	TArray<struct FUAEBlackboardParameter>             ParamList;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.AddValueByParam
struct UUAEBlackboardBlueprintFunctionLibrary_AddValueByParam_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // (Parm, OutParm, ReferenceParm)
	struct FUAEBlackboardParameter                     NewParam;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsWeakObject
struct UUAEBlackboard_SetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsVector
struct UUAEBlackboard_SetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsString
struct UUAEBlackboard_SetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsRotator
struct UUAEBlackboard_SetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsObject
struct UUAEBlackboard_SetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsName
struct UUAEBlackboard_SetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsInt
struct UUAEBlackboard_SetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsFloat
struct UUAEBlackboard_SetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsEnum
struct UUAEBlackboard_SetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsClass
struct UUAEBlackboard_SetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.SetValueAsBool
struct UUAEBlackboard_SetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistWeakObject
struct UUAEBlackboard_IsExistWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistVector
struct UUAEBlackboard_IsExistVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistString
struct UUAEBlackboard_IsExistString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistRotator
struct UUAEBlackboard_IsExistRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistObject
struct UUAEBlackboard_IsExistObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistName
struct UUAEBlackboard_IsExistName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistInt
struct UUAEBlackboard_IsExistInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistFloat
struct UUAEBlackboard_IsExistFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistEnum
struct UUAEBlackboard_IsExistEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistClass
struct UUAEBlackboard_IsExistClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.IsExistBool
struct UUAEBlackboard_IsExistBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsWeakObject
struct UUAEBlackboard_GetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsWeakActor
struct UUAEBlackboard_GetValueAsWeakActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsVector
struct UUAEBlackboard_GetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsString
struct UUAEBlackboard_GetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsRotator
struct UUAEBlackboard_GetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsObject
struct UUAEBlackboard_GetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsName
struct UUAEBlackboard_GetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsInt
struct UUAEBlackboard_GetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsFloat
struct UUAEBlackboard_GetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsEnum
struct UUAEBlackboard_GetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsClass
struct UUAEBlackboard_GetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsBool
struct UUAEBlackboard_GetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.GetValueAsActor
struct UUAEBlackboard_GetValueAsActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAESharedModule.UAEBlackboard.AddValueByParam
struct UUAEBlackboard_AddValueByParam_Params
{
	struct FUAEBlackboardParameter                     NewParam;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

