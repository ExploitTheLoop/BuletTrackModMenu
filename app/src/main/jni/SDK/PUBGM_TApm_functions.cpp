// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TApm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TApm.TApmHelper.ValidateDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTApmHelper::ValidateDevice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.ValidateDevice");

	UTApmHelper_ValidateDevice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TApm.TApmHelper.UpdateGameStatusToVmp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::UpdateGameStatusToVmp(int Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.UpdateGameStatusToVmp");

	UTApmHelper_UpdateGameStatusToVmp_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetVersionIden
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 versionName                    (Parm, ZeroConstructor)

void UTApmHelper::SetVersionIden(const struct FString& versionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetVersionIden");

	UTApmHelper_SetVersionIden_Params params;
	params.versionName = versionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetUserID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UTApmHelper::SetUserID(const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetUserID");

	UTApmHelper_SetUserID_Params params;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetTragetFrameRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::SetTragetFrameRate(int Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetTragetFrameRate");

	UTApmHelper_SetTragetFrameRate_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetQuality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::SetQuality(int Quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetQuality");

	UTApmHelper_SetQuality_Params params;
	params.Quality = Quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetPssManualMode
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::SetPssManualMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetPssManualMode");

	UTApmHelper_SetPssManualMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetLocale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Locale                         (Parm, ZeroConstructor)

void UTApmHelper::SetLocale(const struct FString& Locale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetLocale");

	UTApmHelper_SetLocale_Params params;
	params.Locale = Locale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.SetDeviceLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::SetDeviceLevel(int DeviceLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetDeviceLevel");

	UTApmHelper_SetDeviceLevel_Params params;
	params.DeviceLevel = DeviceLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.setAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::setAffinityForThread(int tid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.setAffinityForThread");

	UTApmHelper_setAffinityForThread_Params params;
	params.tid = tid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.requestResourceGuarantee
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            loadType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            applyType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::requestResourceGuarantee(int Condition, int loadType, int applyType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.requestResourceGuarantee");

	UTApmHelper_requestResourceGuarantee_Params params;
	params.Condition = Condition;
	params.loadType = loadType;
	params.applyType = applyType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.RequestPssSample
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::RequestPssSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.RequestPssSample");

	UTApmHelper_RequestPssSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.ReleaseStepEventContext
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::ReleaseStepEventContext()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.ReleaseStepEventContext");

	UTApmHelper_ReleaseStepEventContext_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.RegisterRomCallBackMeta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UTApmHelper::RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.RegisterRomCallBackMeta");

	UTApmHelper_RegisterRomCallBackMeta_Params params;
	params.OpenID = OpenID;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PutKVS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PutKVS(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVS");

	UTApmHelper_PutKVS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PutKVI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PutKVI(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVI");

	UTApmHelper_PutKVI_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PutKVD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PutKVD(const struct FString& Key, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVD");

	UTApmHelper_PutKVD_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueS");

	UTApmHelper_PostValueS_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueI3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            C                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI3(const struct FString& catgory, const struct FString& Key, int A, int B, int C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI3");

	UTApmHelper_PostValueI3_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueI2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI2(const struct FString& catgory, const struct FString& Key, int A, int B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI2");

	UTApmHelper_PostValueI2_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueI1
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI1(const struct FString& catgory, const struct FString& Key, int A)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI1");

	UTApmHelper_PostValueI1_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueF3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          C                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF3(const struct FString& catgory, const struct FString& Key, float A, float B, float C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF3");

	UTApmHelper_PostValueF3_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueF2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF2(const struct FString& catgory, const struct FString& Key, float A, float B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF2");

	UTApmHelper_PostValueF2_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostValueF1
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF1(const struct FString& catgory, const struct FString& Key, float A)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF1");

	UTApmHelper_PostValueF1_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostTrackState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostTrackState(float X, float Y, float Z, float Pitch, float Yaw, float Roll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostTrackState");

	UTApmHelper_PostTrackState_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostStreamEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            stepId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UTApmHelper::PostStreamEvent(int stepId, int Status, int code, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostStreamEvent");

	UTApmHelper_PostStreamEvent_Params params;
	params.stepId = stepId;
	params.Status = Status;
	params.code = code;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostStepEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 eventCategory                  (Parm, ZeroConstructor)
// int                            stepId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Msg                            (Parm, ZeroConstructor)
// struct FString                 extraKey                       (Parm, ZeroConstructor)

void UTApmHelper::PostStepEvent(const struct FString& eventCategory, int stepId, int Status, int code, const struct FString& Msg, const struct FString& extraKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostStepEvent");

	UTApmHelper_PostStepEvent_Params params;
	params.eventCategory = eventCategory;
	params.stepId = stepId;
	params.Status = Status;
	params.code = code;
	params.Msg = Msg;
	params.extraKey = extraKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostNTL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            latency                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostNTL(int latency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostNTL");

	UTApmHelper_PostNTL_Params params;
	params.latency = latency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostLargeValueS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostLargeValueS");

	UTApmHelper_PostLargeValueS_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostLagStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostLagStatus(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostLagStatus");

	UTApmHelper_PostLagStatus_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostGameStatusToTGPASS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostGameStatusToTGPASS(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostGameStatusToTGPASS");

	UTApmHelper_PostGameStatusToTGPASS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostGameStatusToTGPASMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> mapData                        (Parm, ZeroConstructor)

void UTApmHelper::PostGameStatusToTGPASMap(const struct FString& Key, TMap<struct FString, struct FString> mapData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostGameStatusToTGPASMap");

	UTApmHelper_PostGameStatusToTGPASMap_Params params;
	params.Key = Key;
	params.mapData = mapData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostGameStatusToTGPAIS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostGameStatusToTGPAIS(int Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostGameStatusToTGPAIS");

	UTApmHelper_PostGameStatusToTGPAIS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostFrame(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostFrame");

	UTApmHelper_PostFrame_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.PostEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Info                           (Parm, ZeroConstructor)
// bool                           savetolocal                    (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostEvent(int Key, const struct FString& Info, bool savetolocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostEvent");

	UTApmHelper_PostEvent_Params params;
	params.Key = Key;
	params.Info = Info;
	params.savetolocal = savetolocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.MarkLevelLoadCompleted
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkLevelLoadCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoadCompleted");

	UTApmHelper_MarkLevelLoadCompleted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.MarkLevelLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SceneName                      (Parm, ZeroConstructor)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::MarkLevelLoad(const struct FString& SceneName, int Quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoad");

	UTApmHelper_MarkLevelLoad_Params params;
	params.SceneName = SceneName;
	params.Quality = Quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.MarkLevelFin
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkLevelFin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelFin");

	UTApmHelper_MarkLevelFin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.MarkHideLoadingUI
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkHideLoadingUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkHideLoadingUI");

	UTApmHelper_MarkHideLoadingUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.MarkAppFinishLaunch
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkAppFinishLaunch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkAppFinishLaunch");

	UTApmHelper_MarkAppFinishLaunch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.LinkLastStepEventSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 eventCategory                  (Parm, ZeroConstructor)

void UTApmHelper::LinkLastStepEventSession(const struct FString& eventCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.LinkLastStepEventSession");

	UTApmHelper_LinkLastStepEventSession_Params params;
	params.eventCategory = eventCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.InitTGPA
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::InitTGPA()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.InitTGPA");

	UTApmHelper_InitTGPA_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.InitStepEventContext
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::InitStepEventContext()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.InitStepEventContext");

	UTApmHelper_InitStepEventContext_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.GetOptCfgStr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTApmHelper::GetOptCfgStr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetOptCfgStr");

	UTApmHelper_GetOptCfgStr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TApm.TApmHelper.GetDeviceLevelByQcc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ConfigName                     (Parm, ZeroConstructor)
// struct FString                 GPUFamily                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::GetDeviceLevelByQcc(const struct FString& ConfigName, const struct FString& GPUFamily)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevelByQcc");

	UTApmHelper_GetDeviceLevelByQcc_Params params;
	params.ConfigName = ConfigName;
	params.GPUFamily = GPUFamily;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TApm.TApmHelper.GetDeviceLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevel");

	UTApmHelper_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TApm.TApmHelper.GetDataFromTGPA
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTApmHelper::GetDataFromTGPA(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDataFromTGPA");

	UTApmHelper_GetDataFromTGPA_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function TApm.TApmHelper.EndTupleWrap
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndTupleWrap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndTupleWrap");

	UTApmHelper_EndTupleWrap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.EndTag
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndTag");

	UTApmHelper_EndTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.EndExclude
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndExclude()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndExclude");

	UTApmHelper_EndExclude_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.EnableDebugMode
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EnableDebugMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EnableDebugMode");

	UTApmHelper_EnableDebugMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.DumpEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 dumpfile                       (Parm, ZeroConstructor)

void UTApmHelper::DumpEvent(const struct FString& dumpfile)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.DumpEvent");

	UTApmHelper_DumpEvent_Params params;
	params.dumpfile = dumpfile;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.cancelAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::cancelAffinityForThread(int tid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.cancelAffinityForThread");

	UTApmHelper_cancelAffinityForThread_Params params;
	params.tid = tid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.BeginTupleWrap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UTApmHelper::BeginTupleWrap(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.BeginTupleWrap");

	UTApmHelper_BeginTupleWrap_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.BeginExclude
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::BeginExclude()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.BeginExclude");

	UTApmHelper_BeginExclude_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmHelper.AddTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void UTApmHelper::AddTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmHelper.AddTag");

	UTApmHelper_AddTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmSceneMarker.SetEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmSceneMarker::SetEnable(bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmSceneMarker.SetEnable");

	UTApmSceneMarker_SetEnable_Params params;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmSceneMarker.MarkOPScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTApmSceneMarker::MarkOPScene(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmSceneMarker.MarkOPScene");

	UTApmSceneMarker_MarkOPScene_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmSceneMarker.MarkFlowScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTApmSceneMarker::MarkFlowScene(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmSceneMarker.MarkFlowScene");

	UTApmSceneMarker_MarkFlowScene_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function TApm.TApmSceneMarker.CancelOPScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTApmSceneMarker::CancelOPScene(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function TApm.TApmSceneMarker.CancelOPScene");

	UTApmSceneMarker_CancelOPScene_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

