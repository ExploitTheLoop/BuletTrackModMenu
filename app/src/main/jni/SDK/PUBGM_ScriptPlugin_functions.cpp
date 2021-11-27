// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ScriptPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScriptPlugin.ScriptContext.CallScriptFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContext::CallScriptFunction(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContext.CallScriptFunction");

	UScriptContext_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.PushScriptArrayIndexData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptContextComponent::PushScriptArrayIndexData(const struct FString& ParamName, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.PushScriptArrayIndexData");

	UScriptContextComponent_PushScriptArrayIndexData_Params params;
	params.ParamName = ParamName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)

void UScriptContextComponent::PushOneScriptPropertyValues(const struct FString& ParamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues");

	UScriptContextComponent_PushOneScriptPropertyValues_Params params;
	params.ParamName = ParamName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues
// (Native, Public, BlueprintCallable)

void UScriptContextComponent::PushAllScriptPropertyValues()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues");

	UScriptContextComponent_PushAllScriptPropertyValues_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.FetchScriptArrayIndexData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptContextComponent::FetchScriptArrayIndexData(const struct FString& ParamName, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.FetchScriptArrayIndexData");

	UScriptContextComponent_FetchScriptArrayIndexData_Params params;
	params.ParamName = ParamName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)

void UScriptContextComponent::FetchOneScriptPropertyValues(const struct FString& ParamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues");

	UScriptContextComponent_FetchOneScriptPropertyValues_Params params;
	params.ParamName = ParamName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues
// (Native, Public, BlueprintCallable)

void UScriptContextComponent::FetchAllScriptPropertyValues()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues");

	UScriptContextComponent_FetchAllScriptPropertyValues_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContextComponent::CallScriptFunctionWithoutFetch(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch");

	UScriptContextComponent_CallScriptFunctionWithoutFetch_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContextComponent::CallScriptFunction(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunction");

	UScriptContextComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperNetInterface::SendPacket_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState");

	UScriptHelperNetInterface_SendPacket_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ScriptPlugin.ScriptHelperNetInterface.Disconnect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UNetInterface> NetInterface                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperNetInterface::Disconnect(TScriptInterface<class UNetInterface>* NetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.Disconnect");

	UScriptHelperNetInterface_Disconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NetInterface != nullptr)
		*NetInterface = params.NetInterface;
}

// Function ScriptPlugin.ScriptHelperNetInterface.Connect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UNetInterface> NetInterface                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Timeout                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperNetInterface::Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.Connect");

	UScriptHelperNetInterface_Connect_Params params;
	params.Timeout = Timeout;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NetInterface != nullptr)
		*NetInterface = params.NetInterface;
}

// Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptPluginComponent::CallScriptFunction(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction");

	UScriptPluginComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ScriptPlugin.ScriptTestActor.TestFunction
// (Final, Native, Public)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFactor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMultiply                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScriptTestActor::TestFunction(float InValue, float InFactor, bool bMultiply)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptTestActor.TestFunction");

	AScriptTestActor_TestFunction_Params params;
	params.InValue = InValue;
	params.InFactor = InFactor;
	params.bMultiply = bMultiply;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ScriptPlugin.LuaClassBaseObj.ItsATest
// (Native, Public)
// Parameters:
// struct FPlayerInfo             Player1                        (Parm)
// TArray<int>                    nums                           (Parm, ZeroConstructor)
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Q                              (Parm, ZeroConstructor)
// TArray<struct FPlayerInfo>     Player2                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassBaseObj::ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.ItsATest");

	ALuaClassBaseObj_ItsATest_Params params;
	params.Player1 = Player1;
	params.nums = nums;
	params.X = X;
	params.Q = Q;
	params.Player2 = Player2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassBaseObj::HandleUIMessage(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage");

	ALuaClassBaseObj_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ScriptPlugin.LuaClassBaseObj.GetGameStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassBaseObj::GetGameStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.GetGameStatus");

	ALuaClassBaseObj_GetGameStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

