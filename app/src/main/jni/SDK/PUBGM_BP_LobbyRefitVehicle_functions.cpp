// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyRefitVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CanAutoPlayLua
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Param                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::CanAutoPlayLua(bool* Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CanAutoPlayLua");

	ABP_LobbyRefitVehicle_C_CanAutoPlayLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFadeLua
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           showAllTips                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::CheckRefitTipsFadeLua(float Yaw, bool showAllTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFadeLua");

	ABP_LobbyRefitVehicle_C_CheckRefitTipsFadeLua_Params params;
	params.Yaw = Yaw;
	params.showAllTips = showAllTips;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::ShowLoading(bool Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoading");

	ABP_LobbyRefitVehicle_C_ShowLoading_Params params;
	params.Show = Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCameraRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::ResetCameraRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCameraRotation");

	ABP_LobbyRefitVehicle_C_ResetCameraRotation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CreateDefaultRefitVehicleMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::CreateDefaultRefitVehicleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CreateDefaultRefitVehicleMesh");

	ABP_LobbyRefitVehicle_C_CreateDefaultRefitVehicleMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HasRefitVehicleDownloaded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasDownloaded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::HasRefitVehicleDownloaded(bool* HasDownloaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HasRefitVehicleDownloaded");

	ABP_LobbyRefitVehicle_C_HasRefitVehicleDownloaded_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HasDownloaded != nullptr)
		*HasDownloaded = params.HasDownloaded;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ChangeGroundShadow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LobbyRefitVehicle_C::ChangeGroundShadow(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ChangeGroundShadow");

	ABP_LobbyRefitVehicle_C_ChangeGroundShadow_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetRefitVehicleHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VehicleID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URefitVehicleHandle*     RefitVehicleHandle             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::GetRefitVehicleHandle(int VehicleID, class URefitVehicleHandle** RefitVehicleHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetRefitVehicleHandle");

	ABP_LobbyRefitVehicle_C_GetRefitVehicleHandle_Params params;
	params.VehicleID = VehicleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RefitVehicleHandle != nullptr)
		*RefitVehicleHandle = params.RefitVehicleHandle;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InitSlotSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int, struct FString>      slotSocket                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LobbyRefitVehicle_C::InitSlotSocket(TMap<int, struct FString> slotSocket)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InitSlotSocket");

	ABP_LobbyRefitVehicle_C_InitSlotSocket_Params params;
	params.slotSocket = slotSocket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryResetCloseUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TryResetCloseUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryResetCloseUp");

	ABP_LobbyRefitVehicle_C_TryResetCloseUp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetCastShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CastShadow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::SetCastShadow(bool CastShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetCastShadow");

	ABP_LobbyRefitVehicle_C_SetCastShadow_Params params;
	params.CastShadow = CastShadow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EnableCameraRotationLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::EnableCameraRotationLag(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EnableCameraRotationLag");

	ABP_LobbyRefitVehicle_C_EnableCameraRotationLag_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UpdateLastAutoPlayTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::UpdateLastAutoPlayTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UpdateLastAutoPlayTime");

	ABP_LobbyRefitVehicle_C_UpdateLastAutoPlayTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckAutoPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::CheckAutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckAutoPlay");

	ABP_LobbyRefitVehicle_C_CheckAutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryRotateSceneByTouch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           rotated                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::TryRotateSceneByTouch(bool* rotated)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryRotateSceneByTouch");

	ABP_LobbyRefitVehicle_C_TryRotateSceneByTouch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rotated != nullptr)
		*rotated = params.rotated;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryStopAutoPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TryStopAutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryStopAutoPlay");

	ABP_LobbyRefitVehicle_C_TryStopAutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetSlotSocketTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_LobbyRefitVehicle_C::GetSlotSocketTransform(int inInt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetSlotSocketTransform");

	ABP_LobbyRefitVehicle_C_GetSlotSocketTransform_Params params;
	params.inInt = inInt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetVectorAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          degree                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::GetVectorAngle(float* degree)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetVectorAngle");

	ABP_LobbyRefitVehicle_C_GetVectorAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (degree != nullptr)
		*degree = params.degree;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.DestroyFreeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::DestroyFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.DestroyFreeCamera");

	ABP_LobbyRefitVehicle_C_DestroyFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetYawToMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_LobbyRefitVehicle_C::GetYawToMesh(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetYawToMesh");

	ABP_LobbyRefitVehicle_C_GetYawToMesh_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           forceShowAll                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::CheckRefitTipsFade(bool forceShowAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFade");

	ABP_LobbyRefitVehicle_C_CheckRefitTipsFade_Params params;
	params.forceShowAll = forceShowAll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InterpVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Old                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::InterpVelocity(float New, float Old, float* Velocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InterpVelocity");

	ABP_LobbyRefitVehicle_C_InterpVelocity_Params params;
	params.New = New;
	params.Old = Old;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UserConstructionScript");

	ABP_LobbyRefitVehicle_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_LerpRotator__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_LerpRotator__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_LerpPosition__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_LerpPosition__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_AutoPlay__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_AutoPlay__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_BlendCamera__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::TimeLine_BlendCamera__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_out__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_out__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__FinishedFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_in__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__UpdateFunc
// (BlueprintEvent)

void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_in__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceiveTick");

	ABP_LobbyRefitVehicle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::ReceivePossessed(class AController** NewController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceivePossessed");

	ABP_LobbyRefitVehicle_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseupCameraEllipse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::SwitchCloseupCameraEllipse(int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseupCameraEllipse");

	ABP_LobbyRefitVehicle_C_SwitchCloseupCameraEllipse_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.AutoPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::AutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.AutoPlay");

	ABP_LobbyRefitVehicle_C_AutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.BlendCameraActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CameraActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              toTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::BlendCameraActor(class USceneComponent* CameraActor, const struct FTransform& toTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.BlendCameraActor");

	ABP_LobbyRefitVehicle_C_BlendCameraActor_Params params;
	params.CameraActor = CameraActor;
	params.toTransform = toTransform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseUpCameraLinear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::SwitchCloseUpCameraLinear(int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseUpCameraLinear");

	ABP_LobbyRefitVehicle_C_SwitchCloseUpCameraLinear_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.OnVehicleUpgradeSuccess
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::OnVehicleUpgradeSuccess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.OnVehicleUpgradeSuccess");

	ABP_LobbyRefitVehicle_C_OnVehicleUpgradeSuccess_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCloseUpCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::ResetCloseUpCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCloseUpCamera");

	ABP_LobbyRefitVehicle_C_ResetCloseUpCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EventOnAllMeshLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::EventOnAllMeshLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EventOnAllMeshLoad");

	ABP_LobbyRefitVehicle_C_EventOnAllMeshLoad_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoadingForTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::ShowLoadingForTime(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoadingForTime");

	ABP_LobbyRefitVehicle_C_ShowLoadingForTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetHighLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FreExp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::SetHighLight(float* invincible, float* FreExp, float* Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetHighLight");

	ABP_LobbyRefitVehicle_C_SetHighLight_Params params;
	params.invincible = invincible;
	params.FreExp = FreExp;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TrySetHilight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Freq                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::TrySetHilight(float invincible, float Freq, float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TrySetHilight");

	ABP_LobbyRefitVehicle_C_TrySetHilight_Params params;
	params.invincible = invincible;
	params.Freq = Freq;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.LuaBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyRefitVehicle_C::LuaBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.LuaBeginPlay");

	ABP_LobbyRefitVehicle_C_LuaBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ExecuteUbergraph_BP_LobbyRefitVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LobbyRefitVehicle_C::ExecuteUbergraph_BP_LobbyRefitVehicle(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ExecuteUbergraph_BP_LobbyRefitVehicle");

	ABP_LobbyRefitVehicle_C_ExecuteUbergraph_BP_LobbyRefitVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

