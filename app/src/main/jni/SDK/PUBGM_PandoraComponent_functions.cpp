// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PandoraComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 errMsg                         (Parm, ZeroConstructor)
// int                            iId                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            iType                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSend                          (Parm, ZeroConstructor, IsPlainOldData)

void UPandoraBpFunctionLibrary::Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test");

	UPandoraBpFunctionLibrary_Tnm2Test_Params params;
	params.errMsg = errMsg;
	params.iId = iId;
	params.iType = iType;
	params.bSend = bSend;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*           Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void UPandoraBpFunctionLibrary::SetGameInstance(class UGameInstance* Instance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance");

	UPandoraBpFunctionLibrary_SetGameInstance_Params params;
	params.Instance = Instance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickOpenPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop");

	UPandoraBpFunctionLibrary_OnClickOpenPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit");

	UPandoraBpFunctionLibrary_OnClickInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose");

	UPandoraBpFunctionLibrary_OnClickClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora
// (Final, Native, Static, Public, BlueprintCallable)

void UPandoraBpFunctionLibrary::LogoutPandora()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora");

	UPandoraBpFunctionLibrary_LogoutPandora_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InOpenId                       (Parm, ZeroConstructor)
// struct FString                 InRoleId                       (Parm, ZeroConstructor)
// struct FString                 InAppId                        (Parm, ZeroConstructor)
// struct FString                 InPlatId                       (Parm, ZeroConstructor)
// struct FString                 InAccType                      (Parm, ZeroConstructor)
// struct FString                 InArea                         (Parm, ZeroConstructor)
// struct FString                 InPartion                      (Parm, ZeroConstructor)
// struct FString                 InCloudTest                    (Parm, ZeroConstructor)
// struct FString                 InAccessToken                  (Parm, ZeroConstructor)
// struct FString                 InSdkVersion                   (Parm, ZeroConstructor)
// struct FString                 InGameVersion                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPandoraBpFunctionLibrary::InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora");

	UPandoraBpFunctionLibrary_InitPandora_Params params;
	params.InOpenId = InOpenId;
	params.InRoleId = InRoleId;
	params.InAppId = InAppId;
	params.InPlatId = InPlatId;
	params.InAccType = InAccType;
	params.InArea = InArea;
	params.InPartion = InPartion;
	params.InCloudTest = InCloudTest;
	params.InAccessToken = InAccessToken;
	params.InSdkVersion = InSdkVersion;
	params.InGameVersion = InGameVersion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::GetHappyMessage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage");

	UPandoraBpFunctionLibrary_GetHappyMessage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraRichTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UPandoraRichTextBox::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraRichTextBox.SetText");

	UPandoraRichTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PandoraComponent.PandoraRichTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPandoraRichTextBox::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraRichTextBox.GetText");

	UPandoraRichTextBox_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaActor.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaActor::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaActor.CallLuaMember");

	APandoraLuaActor_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaPawn.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaPawn::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaPawn.CallLuaMember");

	APandoraLuaPawn_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaCharacter.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaCharacter::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaCharacter.CallLuaMember");

	APandoraLuaCharacter_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaController.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaController.CallLuaMember");

	APandoraLuaController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaPlayerController.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaPlayerController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaPlayerController.CallLuaMember");

	APandoraLuaPlayerController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaGameModeBase.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaGameModeBase::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaGameModeBase.CallLuaMember");

	APandoraLuaGameModeBase_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaHUD.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar APandoraLuaHUD::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaHUD.CallLuaMember");

	APandoraLuaHUD_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetStringFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPandoraLuaBPVar        Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraLuaBlueprintLibrary::GetStringFromVar(const struct FPandoraLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.GetStringFromVar");

	UPandoraLuaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetObjectFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPandoraLuaBPVar        Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPandoraLuaBlueprintLibrary::GetObjectFromVar(const struct FPandoraLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.GetObjectFromVar");

	UPandoraLuaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetNumberFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPandoraLuaBPVar        Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPandoraLuaBlueprintLibrary::GetNumberFromVar(const struct FPandoraLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.GetNumberFromVar");

	UPandoraLuaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetIntFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPandoraLuaBPVar        Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPandoraLuaBlueprintLibrary::GetIntFromVar(const struct FPandoraLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.GetIntFromVar");

	UPandoraLuaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.GetBoolFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPandoraLuaBPVar        Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPandoraLuaBlueprintLibrary::GetBoolFromVar(const struct FPandoraLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.GetBoolFromVar");

	UPandoraLuaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromString");

	UPandoraLuaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CreateVarFromObject(class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromObject");

	UPandoraLuaBlueprintLibrary_CreateVarFromObject_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromNumber");

	UPandoraLuaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromInt");

	UPandoraLuaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CreateVarFromBool");

	UPandoraLuaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLuaWithArgs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CallToLuaWithArgs(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLuaWithArgs");

	UPandoraLuaBlueprintLibrary_CallToLuaWithArgs_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLua
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaBlueprintLibrary::CallToLua(const struct FString& FunctionName, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaBlueprintLibrary.CallToLua");

	UPandoraLuaBlueprintLibrary_CallToLua_Params params;
	params.FunctionName = FunctionName;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PandoraComponent.PandoraLuaDelegate.EventTrigger
// (Final, Native, Public, BlueprintCallable)

void UPandoraLuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaDelegate.EventTrigger");

	UPandoraLuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PandoraComponent.PandoraLuaUserWidget.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPandoraLuaBPVar> Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPandoraLuaBPVar        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPandoraLuaBPVar UPandoraLuaUserWidget::CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraLuaUserWidget.CallLuaMember");

	UPandoraLuaUserWidget_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

