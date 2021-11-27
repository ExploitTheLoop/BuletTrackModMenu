// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyCameraManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyCameraManager.LobbyCameraManager_C.GetCaptureCameraForLevelSeq
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::GetCaptureCameraForLevelSeq(class UClass* ActorClass, class UObject* ContextObject, class AActor** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.GetCaptureCameraForLevelSeq");

	ULobbyCameraManager_C_GetCaptureCameraForLevelSeq_Params params;
	params.ActorClass = ActorClass;
	params.ContextObject = ContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function LobbyCameraManager.LobbyCameraManager_C.CreateLevelSequencePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULobbyCameraManager_C::CreateLevelSequencePlayer(class ULevelSequence* LevelSequence, class ALevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.CreateLevelSequencePlayer");

	ULobbyCameraManager_C_CreateLevelSequencePlayer_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}

// Function LobbyCameraManager.LobbyCameraManager_C.JumpToPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPlaybackPosition            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::JumpToPosition(float NewPlaybackPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.JumpToPosition");

	ULobbyCameraManager_C_JumpToPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.PauseLevelSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::PauseLevelSequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.PauseLevelSequence");

	ULobbyCameraManager_C_PauseLevelSequence_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchBackToLobbyCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::SwitchBackToLobbyCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.SwitchBackToLobbyCamera");

	ULobbyCameraManager_C_SwitchBackToLobbyCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ChangeCloseupCameraPosWithBlend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ULobbyCameraManager_C::ChangeCloseupCameraPosWithBlend(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ChangeCloseupCameraPosWithBlend");

	ULobbyCameraManager_C_ChangeCloseupCameraPosWithBlend_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchToCloseupCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::SwitchToCloseupCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.SwitchToCloseupCamera");

	ULobbyCameraManager_C_SwitchToCloseupCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequeceWithWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::BeginLevelSequeceWithWeapon(bool InputPin, int inInt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequeceWithWeapon");

	ULobbyCameraManager_C_BeginLevelSequeceWithWeapon_Params params;
	params.InputPin = InputPin;
	params.inInt = inInt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.WithdrawEnlargeLens
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::WithdrawEnlargeLens()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.WithdrawEnlargeLens");

	ULobbyCameraManager_C_WithdrawEnlargeLens_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.EnlargeLens
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CameraID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::EnlargeLens(float X, float Y, float Z, int CameraID, const struct FString& FOV, int blendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.EnlargeLens");

	ULobbyCameraManager_C_EnlargeLens_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.CameraID = CameraID;
	params.FOV = FOV;
	params.blendTime = blendTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.OnTrackEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULobbyCameraManager_C::OnTrackEvent(const struct FString& EventData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.OnTrackEvent");

	ULobbyCameraManager_C_OnTrackEvent_Params params;
	params.EventData = EventData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.Wpos2Spos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Wpos                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Spos                           (Parm, OutParm, IsPlainOldData)

void ULobbyCameraManager_C::Wpos2Spos(const struct FVector& Wpos, struct FVector2D* Spos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.Wpos2Spos");

	ULobbyCameraManager_C_Wpos2Spos_Params params;
	params.Wpos = Wpos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Spos != nullptr)
		*Spos = params.Spos;
}

// Function LobbyCameraManager.LobbyCameraManager_C.AttachToCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelatePosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ULobbyCameraManager_C::AttachToCamera(class AActor* Target, const struct FVector& RelatePosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.AttachToCamera");

	ULobbyCameraManager_C_AttachToCamera_Params params;
	params.Target = Target;
	params.RelatePosition = RelatePosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.CameraToWorldPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RelatePosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CameraRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 WorldPosition                  (Parm, OutParm, IsPlainOldData)

void ULobbyCameraManager_C::CameraToWorldPosition(const struct FVector& RelatePosition, const struct FVector& CameraPosition, const struct FVector& CameraRotation, struct FVector* WorldPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.CameraToWorldPosition");

	ULobbyCameraManager_C_CameraToWorldPosition_Params params;
	params.RelatePosition = RelatePosition;
	params.CameraPosition = CameraPosition;
	params.CameraRotation = CameraRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WorldPosition != nullptr)
		*WorldPosition = params.WorldPosition;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ToCameraSpacePosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CameraRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CameraSpacePosition            (Parm, OutParm, IsPlainOldData)

void ULobbyCameraManager_C::ToCameraSpacePosition(const struct FVector& WorldPosition, const struct FVector& CameraPosition, const struct FVector& CameraRotation, struct FVector* CameraSpacePosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ToCameraSpacePosition");

	ULobbyCameraManager_C_ToCameraSpacePosition_Params params;
	params.WorldPosition = WorldPosition;
	params.CameraPosition = CameraPosition;
	params.CameraRotation = CameraRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CameraSpacePosition != nullptr)
		*CameraSpacePosition = params.CameraSpacePosition;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoTargetCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::ChangetoTargetCamera(class AActor* TargetActor, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ChangetoTargetCamera");

	ULobbyCameraManager_C_ChangetoTargetCamera_Params params;
	params.TargetActor = TargetActor;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.OnStopLevelSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::OnStopLevelSequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.OnStopLevelSequence");

	ULobbyCameraManager_C_OnStopLevelSequence_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.StopLevelSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::StopLevelSequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.StopLevelSequence");

	ULobbyCameraManager_C_StopLevelSequence_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLobbyCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::ChangetoLobbyCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLobbyCamera");

	ULobbyCameraManager_C_ChangetoLobbyCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLevelSequenceCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::ChangetoLevelSequenceCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ChangetoLevelSequenceCamera");

	ULobbyCameraManager_C_ChangetoLevelSequenceCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequenceCloseup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeedFreezeEndFrame             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::BeginLevelSequenceCloseup(int ID, bool NeedFreezeEndFrame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.BeginLevelSequenceCloseup");

	ULobbyCameraManager_C_BeginLevelSequenceCloseup_Params params;
	params.ID = ID;
	params.NeedFreezeEndFrame = NeedFreezeEndFrame;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.GetExtraData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void ULobbyCameraManager_C::GetExtraData(struct FString* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.GetExtraData");

	ULobbyCameraManager_C_GetExtraData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function LobbyCameraManager.LobbyCameraManager_C.DestroyCloseupViewActor
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::DestroyCloseupViewActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.DestroyCloseupViewActor");

	ULobbyCameraManager_C_DestroyCloseupViewActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.LeaveCloseupView
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::LeaveCloseupView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.LeaveCloseupView");

	ULobbyCameraManager_C_LeaveCloseupView_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.GetCurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::GetCurrentCamera(class ACameraActor** Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.GetCurrentCamera");

	ULobbyCameraManager_C_GetCurrentCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function LobbyCameraManager.LobbyCameraManager_C.FetchCameraAdapt
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::FetchCameraAdapt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.FetchCameraAdapt");

	ULobbyCameraManager_C_FetchCameraAdapt_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::SwitchCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.SwitchCamera");

	ULobbyCameraManager_C_SwitchCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.MallFullScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::MallFullScreen()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.MallFullScreen");

	ULobbyCameraManager_C_MallFullScreen_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.UIHide");

	ULobbyCameraManager_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.UIShow
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyCameraManager_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.UIShow");

	ULobbyCameraManager_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyCameraManager_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.Construct");

	ULobbyCameraManager_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.Tick");

	ULobbyCameraManager_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyCameraManager.LobbyCameraManager_C.ExecuteUbergraph_LobbyCameraManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyCameraManager_C::ExecuteUbergraph_LobbyCameraManager(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyCameraManager.LobbyCameraManager_C.ExecuteUbergraph_LobbyCameraManager");

	ULobbyCameraManager_C_ExecuteUbergraph_LobbyCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

