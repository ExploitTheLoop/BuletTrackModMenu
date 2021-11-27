// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlayerPrefs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPrefs.PlayerPrefs_C.SetPopupPolicyVersion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PolicyVersion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetPopupPolicyVersion(int PolicyVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetPopupPolicyVersion");

	UPlayerPrefs_C_SetPopupPolicyVersion_Params params;
	params.PolicyVersion = PolicyVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetGuaranteeFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetGuaranteeFlag(bool clicked)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetGuaranteeFlag");

	UPlayerPrefs_C_SetGuaranteeFlag_Params params;
	params.clicked = clicked;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetGuaranteeClickFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           clicked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetGuaranteeClickFlag(bool* clicked)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetGuaranteeClickFlag");

	UPlayerPrefs_C_GetGuaranteeClickFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (clicked != nullptr)
		*clicked = params.clicked;
}

// Function PlayerPrefs.PlayerPrefs_C.GetDecomposeIndexTriggerTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DecomposeTriggerTim            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetDecomposeIndexTriggerTime(int* DecomposeTriggerTim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetDecomposeIndexTriggerTime");

	UPlayerPrefs_C_GetDecomposeIndexTriggerTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecomposeTriggerTim != nullptr)
		*DecomposeTriggerTim = params.DecomposeTriggerTim;
}

// Function PlayerPrefs.PlayerPrefs_C.SetDecomposeIndexTriggerTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeStamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetDecomposeIndexTriggerTime(int TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetDecomposeIndexTriggerTime");

	UPlayerPrefs_C_SetDecomposeIndexTriggerTime_Params params;
	params.TimeStamp = TimeStamp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAnniversary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetClickTimeAnniversary(const struct FString& UId, int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAnniversary");

	UPlayerPrefs_C_SetClickTimeAnniversary_Params params;
	params.UId = UId;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAnniversary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeAnniversary(const struct FString& UId, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAnniversary");

	UPlayerPrefs_C_GetClickTimeAnniversary_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}

// Function PlayerPrefs.PlayerPrefs_C.GetCliickVehicleAcitivtyGuideExchange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetCliickVehicleAcitivtyGuideExchange");

	UPlayerPrefs_C_GetCliickVehicleAcitivtyGuideExchange_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}

// Function PlayerPrefs.PlayerPrefs_C.SetCliickVehicleAcitivtyGuideExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool isClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCliickVehicleAcitivtyGuideExchange");

	UPlayerPrefs_C_SetCliickVehicleAcitivtyGuideExchange_Params params;
	params.Key = Key;
	params.isClick = isClick;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeIceLucky
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetClickTimeIceLucky(int Time, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeIceLucky");

	UPlayerPrefs_C_SetClickTimeIceLucky_Params params;
	params.Time = Time;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeIceLucky
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeIceLucky(const struct FString& UUID, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeIceLucky");

	UPlayerPrefs_C_GetClickTimeIceLucky_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}

// Function PlayerPrefs.PlayerPrefs_C.SetIsVNGAdult
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::SetIsVNGAdult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetIsVNGAdult");

	UPlayerPrefs_C_SetIsVNGAdult_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetIsFirstTimeShowPrime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsfirstTimeOpenPrime           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetIsFirstTimeShowPrime(bool* IsfirstTimeOpenPrime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetIsFirstTimeShowPrime");

	UPlayerPrefs_C_GetIsFirstTimeShowPrime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsfirstTimeOpenPrime != nullptr)
		*IsfirstTimeOpenPrime = params.IsfirstTimeOpenPrime;
}

// Function PlayerPrefs.PlayerPrefs_C.SetIsFirstTimeShowPrime
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::SetIsFirstTimeShowPrime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetIsFirstTimeShowPrime");

	UPlayerPrefs_C_SetIsFirstTimeShowPrime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickHalloweenExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickHalloweenExchange(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickHalloweenExchange");

	UPlayerPrefs_C_SetHasClickHalloweenExchange_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickHalloweenExchange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetHasClickHalloweenExchange(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickHalloweenExchange");

	UPlayerPrefs_C_GetHasClickHalloweenExchange_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeHalloweenVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetClickTimeHalloweenVehicle(int Time, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeHalloweenVehicle");

	UPlayerPrefs_C_SetClickTimeHalloweenVehicle_Params params;
	params.Time = Time;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeHalloweenVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeHalloweenVehicle(const struct FString& UUID, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeHalloweenVehicle");

	UPlayerPrefs_C_GetClickTimeHalloweenVehicle_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}

// Function PlayerPrefs.PlayerPrefs_C.GetFaceInfoClickedIDAndTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Faceid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 TimeStamp                      (Parm, OutParm, ZeroConstructor)

void UPlayerPrefs_C::GetFaceInfoClickedIDAndTime(const struct FString& Faceid, struct FString* TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetFaceInfoClickedIDAndTime");

	UPlayerPrefs_C_GetFaceInfoClickedIDAndTime_Params params;
	params.Faceid = Faceid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStamp != nullptr)
		*TimeStamp = params.TimeStamp;
}

// Function PlayerPrefs.PlayerPrefs_C.SetFaceInfoClickedIDAndTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Faceid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetFaceInfoClickedIDAndTime(const struct FString& Faceid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFaceInfoClickedIDAndTime");

	UPlayerPrefs_C_SetFaceInfoClickedIDAndTime_Params params;
	params.Faceid = Faceid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetCursorFaceInfoID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CursorFaceInfoID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetCursorFaceInfoID(int* CursorFaceInfoID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetCursorFaceInfoID");

	UPlayerPrefs_C_GetCursorFaceInfoID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CursorFaceInfoID != nullptr)
		*CursorFaceInfoID = params.CursorFaceInfoID;
}

// Function PlayerPrefs.PlayerPrefs_C.SetCursorFaceInfoID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LastFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCursorFaceInfoID(int LastFace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCursorFaceInfoID");

	UPlayerPrefs_C_SetCursorFaceInfoID_Params params;
	params.LastFace = LastFace;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickInviteTeamAct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickInviteTeamAct(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickInviteTeamAct");

	UPlayerPrefs_C_SetHasClickInviteTeamAct_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickInviteTeamAct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetHasClickInviteTeamAct(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickInviteTeamAct");

	UPlayerPrefs_C_GetHasClickInviteTeamAct_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}

// Function PlayerPrefs.PlayerPrefs_C.GetHasClickUPassAct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetHasClickUPassAct(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickUPassAct");

	UPlayerPrefs_C_GetHasClickUPassAct_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}

// Function PlayerPrefs.PlayerPrefs_C.SetHasClickUPassAct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickUPassAct(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickUPassAct");

	UPlayerPrefs_C_SetHasClickUPassAct_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetShowSwitchSecondLanguageNextTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime               DateTime                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerPrefs_C::SetShowSwitchSecondLanguageNextTime(const struct FDateTime& DateTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetShowSwitchSecondLanguageNextTime");

	UPlayerPrefs_C_SetShowSwitchSecondLanguageNextTime_Params params;
	params.DateTime = DateTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetShowSwitchSecondLanguageNextTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime               DateTime                       (Parm, OutParm)

void UPlayerPrefs_C::GetShowSwitchSecondLanguageNextTime(struct FDateTime* DateTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetShowSwitchSecondLanguageNextTime");

	UPlayerPrefs_C_GetShowSwitchSecondLanguageNextTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;
}

// Function PlayerPrefs.PlayerPrefs_C.GetLoginFrequency
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            loginfreq                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetLoginFrequency(int* loginfreq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetLoginFrequency");

	UPlayerPrefs_C_GetLoginFrequency_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (loginfreq != nullptr)
		*loginfreq = params.loginfreq;
}

// Function PlayerPrefs.PlayerPrefs_C.SetLoginFrequency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetLoginFrequency(int CurrentDay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetLoginFrequency");

	UPlayerPrefs_C_SetLoginFrequency_Params params;
	params.CurrentDay = CurrentDay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.GetAirDropTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            outAirDropTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetAirDropTime(const struct FString& UId, int* outAirDropTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetAirDropTime");

	UPlayerPrefs_C_GetAirDropTime_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outAirDropTime != nullptr)
		*outAirDropTime = params.outAirDropTime;
}

// Function PlayerPrefs.PlayerPrefs_C.SetAirDropTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetAirDropTime(int InTime, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetAirDropTime");

	UPlayerPrefs_C_SetAirDropTime_Params params;
	params.InTime = InTime;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetMystery2LastTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetMystery2LastTime(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMystery2LastTime");

	UPlayerPrefs_C_SetMystery2LastTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetStoreGiftBoxList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerPrefs_C::SetStoreGiftBoxList(TArray<int>* BoxList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetStoreGiftBoxList");

	UPlayerPrefs_C_SetStoreGiftBoxList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}

// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAboutBind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            TimeNotBind                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TimeBind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeAboutBind(const struct FString& UId, int* TimeNotBind, int* TimeBind)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAboutBind");

	UPlayerPrefs_C_GetClickTimeAboutBind_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeNotBind != nullptr)
		*TimeNotBind = params.TimeNotBind;
	if (TimeBind != nullptr)
		*TimeBind = params.TimeBind;
}

// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAboutBind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeNotBind                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeBind                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetClickTimeAboutBind(int TimeNotBind, int TimeBind, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAboutBind");

	UPlayerPrefs_C_SetClickTimeAboutBind_Params params;
	params.TimeNotBind = TimeNotBind;
	params.TimeBind = TimeBind;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.IsEqualCurID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ids                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::IsEqualCurID(int ids, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.IsEqualCurID");

	UPlayerPrefs_C_IsEqualCurID_Params params;
	params.ids = ids;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}

// Function PlayerPrefs.PlayerPrefs_C.SetNewsIds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ids                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetNewsIds(int ids)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetNewsIds");

	UPlayerPrefs_C_SetNewsIds_Params params;
	params.ids = ids;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetMallSeeDict
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int, bool>                Dict                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetMallSeeDict(TMap<int, bool> Dict)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMallSeeDict");

	UPlayerPrefs_C_SetMallSeeDict_Params params;
	params.Dict = Dict;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetStoreBosList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerPrefs_C::SetStoreBosList(TArray<int>* BoxList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetStoreBosList");

	UPlayerPrefs_C_SetStoreBosList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}

// Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            coprsLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCorpsShopRedPoint(int coprsLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint");

	UPlayerPrefs_C_SetCorpsShopRedPoint_Params params;
	params.coprsLevel = coprsLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetFirstEnterMall
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::SetFirstEnterMall()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFirstEnterMall");

	UPlayerPrefs_C_SetFirstEnterMall_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetMysteryLastTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetMysteryLastTime(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMysteryLastTime");

	UPlayerPrefs_C_SetMysteryLastTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.RejectUserAgreement
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::RejectUserAgreement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.RejectUserAgreement");

	UPlayerPrefs_C_RejectUserAgreement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.AcceptUserAgreement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newVersion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::AcceptUserAgreement(int newVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptUserAgreement");

	UPlayerPrefs_C_AcceptUserAgreement_Params params;
	params.newVersion = newVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.ServerListClick
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::ServerListClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.ServerListClick");

	UPlayerPrefs_C_ServerListClick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::HasCloseLocation(bool UId, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation");

	UPlayerPrefs_C_HasCloseLocation_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}

// Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CloseLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetCloseLocation(bool CloseLocation, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation");

	UPlayerPrefs_C_SetCloseLocation_Params params;
	params.CloseLocation = CloseLocation;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::HasNearByNewTips(const struct FString& UId, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips");

	UPlayerPrefs_C_HasNearByNewTips_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}

// Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetNearByNewTipsRead(const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead");

	UPlayerPrefs_C_SetNearByNewTipsRead_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            isRed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetYXXYRedPoint(int isRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint");

	UPlayerPrefs_C_SetYXXYRedPoint_Params params;
	params.isRed = isRed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.AcceptGuestWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::AcceptGuestWarning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptGuestWarning");

	UPlayerPrefs_C_AcceptGuestWarning_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.RejectPolicy
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::RejectPolicy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.RejectPolicy");

	UPlayerPrefs_C_RejectPolicy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.AcceptPolicy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newVersion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::AcceptPolicy(int newVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptPolicy");

	UPlayerPrefs_C_AcceptPolicy_Params params;
	params.newVersion = newVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::SetFirstInLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby");

	UPlayerPrefs_C_SetFirstInLobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            arg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetTime(int arg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetTime");

	UPlayerPrefs_C_SetTime_Params params;
	params.arg = arg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.ClearCount
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::ClearCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.ClearCount");

	UPlayerPrefs_C_ClearCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.SetCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCount");

	UPlayerPrefs_C_SetCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerPrefs.PlayerPrefs_C.LoadData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UPlayerPrefs_C::LoadData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.LoadData");

	UPlayerPrefs_C_LoadData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PlayerPrefs.PlayerPrefs_C.SaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SaveDataState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SaveData(bool* SaveDataState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SaveData");

	UPlayerPrefs_C_SaveData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveDataState != nullptr)
		*SaveDataState = params.SaveDataState;
}

}

