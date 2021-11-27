#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PandoraComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test
struct UPandoraBpFunctionLibrary_Tnm2Test_Params
{
	struct FString                                     errMsg;                                                   // (Parm, ZeroConstructor)
	int                                                iId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance
struct UPandoraBpFunctionLibrary_SetGameInstance_Params
{
	class UGameInstance*                               Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop
struct UPandoraBpFunctionLibrary_OnClickOpenPop_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit
struct UPandoraBpFunctionLibrary_OnClickInit_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose
struct UPandoraBpFunctionLibrary_OnClickClose_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora
struct UPandoraBpFunctionLibrary_LogoutPandora_Params
{
};

// Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora
struct UPandoraBpFunctionLibrary_InitPandora_Params
{
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRoleId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InPlatId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAccType;                                                // (Parm, ZeroConstructor)
	struct FString                                     InArea;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InPartion;                                                // (Parm, ZeroConstructor)
	struct FString                                     InCloudTest;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAccessToken;                                            // (Parm, ZeroConstructor)
	struct FString                                     InSdkVersion;                                             // (Parm, ZeroConstructor)
	struct FString                                     InGameVersion;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage
struct UPandoraBpFunctionLibrary_GetHappyMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraRichTextBox.SetText
struct UPandoraRichTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function PandoraComponent.PandoraRichTextBox.GetText
struct UPandoraRichTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaActor.CallLuaMember
struct APandoraLuaActor_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaPawn.CallLuaMember
struct APandoraLuaPawn_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaCharacter.CallLuaMember
struct APandoraLuaCharacter_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaController.CallLuaMember
struct APandoraLuaController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaPlayerController.CallLuaMember
struct APandoraLuaPlayerController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaGameModeBase.CallLuaMember
struct APandoraLuaGameModeBase_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaHUD.CallLuaMember
struct APandoraLuaHUD_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetStringFromVar
struct UPandoraLuaBlueprintLibrary_GetStringFromVar_Params
{
	struct FPandoraLuaBPVar                            Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetObjectFromVar
struct UPandoraLuaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FPandoraLuaBPVar                            Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetNumberFromVar
struct UPandoraLuaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FPandoraLuaBPVar                            Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetIntFromVar
struct UPandoraLuaBlueprintLibrary_GetIntFromVar_Params
{
	struct FPandoraLuaBPVar                            Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetBoolFromVar
struct UPandoraLuaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FPandoraLuaBPVar                            Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromString
struct UPandoraLuaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromObject
struct UPandoraLuaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromNumber
struct UPandoraLuaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromInt
struct UPandoraLuaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromBool
struct UPandoraLuaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLuaWithArgs
struct UPandoraLuaBlueprintLibrary_CallToLuaWithArgs_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLua
struct UPandoraLuaBlueprintLibrary_CallToLua_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.PandoraLuaDelegate.EventTrigger
struct UPandoraLuaDelegate_EventTrigger_Params
{
};

// Function PandoraComponent.PandoraLuaUserWidget.CallLuaMember
struct UPandoraLuaUserWidget_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPandoraLuaBPVar>                    Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPandoraLuaBPVar                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

