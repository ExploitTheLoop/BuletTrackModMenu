// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyModelShowActorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachSuperCarAttachToAttachPoint
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::DetachSuperCarAttachToAttachPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachSuperCarAttachToAttachPoint");

	ALobbyModelShowActorBP_C_DetachSuperCarAttachToAttachPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReadyLua
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnAsyncReadyLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReadyLua");

	ALobbyModelShowActorBP_C_OnAsyncReadyLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyContentsInLua
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::DestroyContentsInLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyContentsInLua");

	ALobbyModelShowActorBP_C_DestroyContentsInLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetLoadedClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AsBattle_Item_Handle_Base      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetLoadedClass(int ID, class UClass** AsBattle_Item_Handle_Base, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetLoadedClass");

	ALobbyModelShowActorBP_C_GetLoadedClass_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsBattle_Item_Handle_Base != nullptr)
		*AsBattle_Item_Handle_Base = params.AsBattle_Item_Handle_Base;
	if (Success != nullptr)
		*Success = params.Success;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryShowModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreDownload                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::TryShowModel(int resID, int BPID, bool bIgnoreDownload)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryShowModel");

	ALobbyModelShowActorBP_C_TryShowModel_Params params;
	params.resID = resID;
	params.BPID = BPID;
	params.bIgnoreDownload = bIgnoreDownload;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PreChangeWeaponAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::PreChangeWeaponAvatar(int resID, int BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PreChangeWeaponAvatar");

	ALobbyModelShowActorBP_C_PreChangeWeaponAvatar_Params params;
	params.resID = resID;
	params.BPID = BPID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TriggerDownloadRes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::TriggerDownloadRes(int ItemId, int BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TriggerDownloadRes");

	ALobbyModelShowActorBP_C_TriggerDownloadRes_Params params;
	params.ItemId = ItemId;
	params.BPID = BPID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.CreaetAndSetWeaponDynamicMat
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::CreaetAndSetWeaponDynamicMat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.CreaetAndSetWeaponDynamicMat");

	ALobbyModelShowActorBP_C_CreaetAndSetWeaponDynamicMat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            commonActorResId               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowBag(int commonActorResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBag");

	ALobbyModelShowActorBP_C_ShowBag_Params params;
	params.commonActorResId = commonActorResId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetHolderBack
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::SetHolderBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetHolderBack");

	ALobbyModelShowActorBP_C_SetHolderBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCastShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CastShadow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetCastShadow(bool CastShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCastShadow");

	ALobbyModelShowActorBP_C_SetCastShadow_Params params;
	params.CastShadow = CastShadow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeShowTypeCanRotateBack
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::MakeShowTypeCanRotateBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeShowTypeCanRotateBack");

	ALobbyModelShowActorBP_C_MakeShowTypeCanRotateBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessIcon3DAttachTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::ProcessIcon3DAttachTexture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessIcon3DAttachTexture");

	ALobbyModelShowActorBP_C_ProcessIcon3DAttachTexture_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnIcon3dAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnIcon3dAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnIcon3dAsyncReady");

	ALobbyModelShowActorBP_C_OnIcon3dAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowIcon3D(int resID, bool isSync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3D");

	ALobbyModelShowActorBP_C_ShowIcon3D_Params params;
	params.resID = resID;
	params.isSync = isSync;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3dAsycOrSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowIcon3dAsycOrSync(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowIcon3dAsycOrSync");

	ALobbyModelShowActorBP_C_ShowIcon3dAsycOrSync_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyAllContent
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::DestroyAllContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyAllContent");

	ALobbyModelShowActorBP_C_DestroyAllContent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMatParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::UpdateWeaponMatParam(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMatParam");

	ALobbyModelShowActorBP_C_UpdateWeaponMatParam_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetRotateSpeed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaX                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetRotateSpeed(float DeltaX, float DeltaY, float* Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetRotateSpeed");

	ALobbyModelShowActorBP_C_GetRotateSpeed_Params params;
	params.DeltaX = DeltaX;
	params.DeltaY = DeltaY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::UpdateWeaponMat(float RotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateWeaponMat");

	ALobbyModelShowActorBP_C_UpdateWeaponMat_Params params;
	params.RotateSpeed = RotateSpeed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParachuteAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnParachuteAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParachuteAsyncReady");

	ALobbyModelShowActorBP_C_OnParachuteAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnBagWidgetAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnBagWidgetAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnBagWidgetAsyncReady");

	ALobbyModelShowActorBP_C_OnBagWidgetAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnWeaponAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnWeaponAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnWeaponAsyncReady");

	ALobbyModelShowActorBP_C_OnWeaponAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnPlaneAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnPlaneAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnPlaneAsyncReady");

	ALobbyModelShowActorBP_C_OnPlaneAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessNextActor
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::ProcessNextActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ProcessNextActor");

	ALobbyModelShowActorBP_C_ProcessNextActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnDIYWeaponDecalFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::OnDIYWeaponDecalFinish(int RequestID, class UTextureRenderTarget2D* RT)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnDIYWeaponDecalFinish");

	ALobbyModelShowActorBP_C_OnDIYWeaponDecalFinish_Params params;
	params.RequestID = RequestID;
	params.RT = RT;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetDIYDecalNumPerFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetDIYDecalNumPerFrame(bool isSync, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetDIYDecalNumPerFrame");

	ALobbyModelShowActorBP_C_SetDIYDecalNumPerFrame_Params params;
	params.isSync = isSync;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackZ
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           rotateZ                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetRotateBackZ(bool rotateZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackZ");

	ALobbyModelShowActorBP_C_SetRotateBackZ_Params params;
	params.rotateZ = rotateZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Asset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ALobbyModelShowActorBP_C::SetWeaponCollision(const struct FString& Asset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponCollision");

	ALobbyModelShowActorBP_C_SetWeaponCollision_Params params;
	params.Asset = Asset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCanTouchRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canRotate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetCanTouchRotate(bool canRotate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetCanTouchRotate");

	ALobbyModelShowActorBP_C_SetCanTouchRotate_Params params;
	params.canRotate = canRotate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponPendantSocketType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponPendantSocketType       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetWeaponPendantSocketType(EWeaponPendantSocketType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetWeaponPendantSocketType");

	ALobbyModelShowActorBP_C_SetWeaponPendantSocketType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetSocketTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShowType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetSocketTransform(int ShowType, const struct FString& SocketName, struct FTransform* Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetSocketTransform");

	ALobbyModelShowActorBP_C_GetSocketTransform_Params params;
	params.ShowType = ShowType;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidgetAsycOrSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowBagWidgetAsycOrSync(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidgetAsycOrSync");

	ALobbyModelShowActorBP_C_ShowBagWidgetAsycOrSync_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachuteAsycOrSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowParachuteAsycOrSync(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachuteAsycOrSync");

	ALobbyModelShowActorBP_C_ShowParachuteAsycOrSync_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetComponentPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetComponentPosition(int SlotID, struct FVector* Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetComponentPosition");

	ALobbyModelShowActorBP_C_GetComponentPosition_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnRefitVehicleAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnRefitVehicleAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnRefitVehicleAsyncReady");

	ALobbyModelShowActorBP_C_OnRefitVehicleAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateCapsuleSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::UpdateCapsuleSize(float HalfHeight, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateCapsuleSize");

	ALobbyModelShowActorBP_C_UpdateCapsuleSize_Params params;
	params.HalfHeight = HalfHeight;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyForType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            exceptType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::DestroyForType(int exceptType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyForType");

	ALobbyModelShowActorBP_C_DestroyForType_Params params;
	params.exceptType = exceptType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnVehicleAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnVehicleAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnVehicleAsyncReady");

	ALobbyModelShowActorBP_C_OnVehicleAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnGrenadeAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnGrenadeAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnGrenadeAsyncReady");

	ALobbyModelShowActorBP_C_OnGrenadeAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowModel(int resID, int BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModel");

	ALobbyModelShowActorBP_C_ShowModel_Params params;
	params.resID = resID;
	params.BPID = BPID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowParachute(int resID, bool isSync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowParachute");

	ALobbyModelShowActorBP_C_ShowParachute_Params params;
	params.resID = resID;
	params.isSync = isSync;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowRefitVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VehicleID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowRefitVehicle(int VehicleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowRefitVehicle");

	ALobbyModelShowActorBP_C_ShowRefitVehicle_Params params;
	params.VehicleID = VehicleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetShowActorLocationRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetShowActorLocationRotation(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetShowActorLocationRotation");

	ALobbyModelShowActorBP_C_SetShowActorLocationRotation_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReady
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::OnAsyncReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnAsyncReady");

	ALobbyModelShowActorBP_C_OnAsyncReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ModelSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::ModelSimulatePhysics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ModelSimulatePhysics");

	ALobbyModelShowActorBP_C_ModelSimulatePhysics_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryRotate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::TryRotate(float* DeltaX, float* DeltaY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TryRotate");

	ALobbyModelShowActorBP_C_TryRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DeltaX != nullptr)
		*DeltaX = params.DeltaX;
	if (DeltaY != nullptr)
		*DeltaY = params.DeltaY;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          newLocationX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          newLocationY                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RotationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RotationZ                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::MakeRotation(float newLocationX, float newLocationY, float* RotationX, float* RotationY, float* RotationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeRotation");

	ALobbyModelShowActorBP_C_MakeRotation_Params params;
	params.newLocationX = newLocationX;
	params.newLocationY = newLocationY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RotationX != nullptr)
		*RotationX = params.RotationX;
	if (RotationY != nullptr)
		*RotationY = params.RotationY;
	if (RotationZ != nullptr)
		*RotationZ = params.RotationZ;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachModelCenter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CameraID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::AttachModelCenter(int CameraID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachModelCenter");

	ALobbyModelShowActorBP_C_AttachModelCenter_Params params;
	params.CameraID = CameraID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetShowTypeByItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemSubType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetShowTypeByItemType(int resID, int itemType, int ItemSubType, int* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetShowTypeByItemType");

	ALobbyModelShowActorBP_C_GetShowTypeByItemType_Params params;
	params.resID = resID;
	params.itemType = itemType;
	params.ItemSubType = ItemSubType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VehicleID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowVehicle(int VehicleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowVehicle");

	ALobbyModelShowActorBP_C_ShowVehicle_Params params;
	params.VehicleID = VehicleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RecordTmpVar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZSpeed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          backTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          disinteractDis                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YdisRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          yIntensity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           needXRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAutoRotateZ                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanRotateBack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canRotate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ALobbyModelShowActorBP_C::RecordTmpVar(int resID, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needXRotation, bool CanAutoRotateZ, bool CanRotateBack, bool canRotate, const struct FString& ExtraData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RecordTmpVar");

	ALobbyModelShowActorBP_C_RecordTmpVar_Params params;
	params.resID = resID;
	params.ZSpeed = ZSpeed;
	params.backTime = backTime;
	params.disinteractDis = disinteractDis;
	params.YdisRatio = YdisRatio;
	params.yIntensity = yIntensity;
	params.needXRotation = needXRotation;
	params.CanAutoRotateZ = CanAutoRotateZ;
	params.CanRotateBack = CanRotateBack;
	params.canRotate = canRotate;
	params.ExtraData = ExtraData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowWeapon(int resID, int BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowWeapon");

	ALobbyModelShowActorBP_C_ShowWeapon_Params params;
	params.resID = resID;
	params.BPID = BPID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowPlane
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowPlane(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowPlane");

	ALobbyModelShowActorBP_C_ShowPlane_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeSpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActorScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModelOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ALobbyModelShowActorBP_C::MakeSpawnTransform(float ActorScale, const struct FString& ModelOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.MakeSpawnTransform");

	ALobbyModelShowActorBP_C_MakeSpawnTransform_Params params;
	params.ActorScale = ActorScale;
	params.ModelOffset = ModelOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSync                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowBagWidget(int resID, bool isSync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowBagWidget");

	ALobbyModelShowActorBP_C_ShowBagWidget_Params params;
	params.resID = resID;
	params.isSync = isSync;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowGrenade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ShowGrenade(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowGrenade");

	ALobbyModelShowActorBP_C_ShowGrenade_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetAttachPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  attachPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetAttachPoint(class AActor** attachPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetAttachPoint");

	ALobbyModelShowActorBP_C_GetAttachPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (attachPoint != nullptr)
		*attachPoint = params.attachPoint;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ResetAttachPointRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::ResetAttachPointRotate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ResetAttachPointRotate");

	ALobbyModelShowActorBP_C_ResetAttachPointRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachFromAttachPoint
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::DetachFromAttachPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DetachFromAttachPoint");

	ALobbyModelShowActorBP_C_DetachFromAttachPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachToAttachPoint
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::AttachToAttachPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.AttachToAttachPoint");

	ALobbyModelShowActorBP_C_AttachToAttachPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParticleSystemFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::OnParticleSystemFinish(class UParticleSystemComponent* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.OnParticleSystemFinish");

	ALobbyModelShowActorBP_C_OnParticleSystemFinish_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.XAutoRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::XAutoRotate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.XAutoRotate");

	ALobbyModelShowActorBP_C_XAutoRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickProjectileEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::TickProjectileEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickProjectileEffect");

	ALobbyModelShowActorBP_C_TickProjectileEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayParticleEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ALobbyModelShowActorBP_C::PlayParticleEffect(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayParticleEffect");

	ALobbyModelShowActorBP_C_PlayParticleEffect_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayProjectileEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::PlayProjectileEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PlayProjectileEffect");

	ALobbyModelShowActorBP_C_PlayProjectileEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.IsModelValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::IsModelValid(bool* Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.IsModelValid");

	ALobbyModelShowActorBP_C_IsModelValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBaseItemHBClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AsBattle_Item_Handle_Base      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetBaseItemHBClass(bool* NewParam, class UClass** AsBattle_Item_Handle_Base)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBaseItemHBClass");

	ALobbyModelShowActorBP_C_GetBaseItemHBClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (AsBattle_Item_Handle_Base != nullptr)
		*AsBattle_Item_Handle_Base = params.AsBattle_Item_Handle_Base;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.StopAkEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::StopAkEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.StopAkEvent");

	ALobbyModelShowActorBP_C_StopAkEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateRotateLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 XRotateLimit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 YRotateLimit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ALobbyModelShowActorBP_C::UpdateRotateLimit(const struct FString& XRotateLimit, const struct FString& YRotateLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateRotateLimit");

	ALobbyModelShowActorBP_C_UpdateRotateLimit_Params params;
	params.XRotateLimit = XRotateLimit;
	params.YRotateLimit = YRotateLimit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateShowType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemSubType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::UpdateShowType(int resID, int itemType, int ItemSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UpdateShowType");

	ALobbyModelShowActorBP_C_UpdateShowType_Params params;
	params.resID = resID;
	params.itemType = itemType;
	params.ItemSubType = ItemSubType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetTouchStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetTouchStatus(bool Can)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetTouchStatus");

	ALobbyModelShowActorBP_C_SetTouchStatus_Params params;
	params.Can = Can;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::SetRotateBackStatus(bool Can)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.SetRotateBackStatus");

	ALobbyModelShowActorBP_C_SetRotateBackStatus_Params params;
	params.Can = Can;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotateY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::NeedRotateY(float X, float Y, bool* need)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotateY");

	ALobbyModelShowActorBP_C_NeedRotateY_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (need != nullptr)
		*need = params.need;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::NeedRotate(float X, float Y, bool* need)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.NeedRotate");

	ALobbyModelShowActorBP_C_NeedRotate_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (need != nullptr)
		*need = params.need;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RotateBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::RotateBack(float Delta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.RotateBack");

	ALobbyModelShowActorBP_C_RotateBack_Params params;
	params.Delta = Delta;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ZAutoRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::ZAutoRotate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ZAutoRotate");

	ALobbyModelShowActorBP_C_ZAutoRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyWeaponActor
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::DestroyWeaponActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.DestroyWeaponActor");

	ALobbyModelShowActorBP_C_DestroyWeaponActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetItemSubType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetItemSubType(int RowNum, int* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetItemSubType");

	ALobbyModelShowActorBP_C_GetItemSubType_Params params;
	params.RowNum = RowNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SubType != nullptr)
		*SubType = params.SubType;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBPID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            itemType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemSubType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::GetBPID(int RowName, int* BPID, int* itemType, int* ItemSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.GetBPID");

	ALobbyModelShowActorBP_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
	if (itemType != nullptr)
		*itemType = params.itemType;
	if (ItemSubType != nullptr)
		*ItemSubType = params.ItemSubType;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOffEquipmentByResID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::PutOffEquipmentByResID(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOffEquipmentByResID");

	ALobbyModelShowActorBP_C_PutOffEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOnEquipmentByResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::PutOnEquipmentByResID(int resID, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.PutOnEquipmentByResID");

	ALobbyModelShowActorBP_C_PutOnEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModelByResid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          XOffset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotator                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ZSpeed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          backTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          disinteractDis                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YdisRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          yIntensity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           needResetAutoRotation          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           needXRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ActorScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 XRotateLimit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 YRotateLimit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ModelOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           canAutoRotate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanRotateBack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canRotate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InitRotate                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 ExtraData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ALobbyModelShowActorBP_C::ShowModelByResid(int resID, float XOffset, const struct FRotator& Rotator, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needResetAutoRotation, bool needXRotation, float ActorScale, const struct FString& XRotateLimit, const struct FString& YRotateLimit, const struct FString& ModelOffset, bool canAutoRotate, bool CanRotateBack, bool canRotate, const struct FRotator& InitRotate, const struct FString& ExtraData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ShowModelByResid");

	ALobbyModelShowActorBP_C_ShowModelByResid_Params params;
	params.resID = resID;
	params.XOffset = XOffset;
	params.Rotator = Rotator;
	params.ZSpeed = ZSpeed;
	params.backTime = backTime;
	params.disinteractDis = disinteractDis;
	params.YdisRatio = YdisRatio;
	params.yIntensity = yIntensity;
	params.needResetAutoRotation = needResetAutoRotation;
	params.needXRotation = needXRotation;
	params.ActorScale = ActorScale;
	params.XRotateLimit = XRotateLimit;
	params.YRotateLimit = YRotateLimit;
	params.ModelOffset = ModelOffset;
	params.canAutoRotate = canAutoRotate;
	params.CanRotateBack = CanRotateBack;
	params.canRotate = canRotate;
	params.InitRotate = InitRotate;
	params.ExtraData = ExtraData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyModelShowActorBP_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.UserConstructionScript");

	ALobbyModelShowActorBP_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__FinishedFunc
// (BlueprintEvent)

void ALobbyModelShowActorBP_C::WeaponMatTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__FinishedFunc");

	ALobbyModelShowActorBP_C_WeaponMatTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__UpdateFunc
// (BlueprintEvent)

void ALobbyModelShowActorBP_C::WeaponMatTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.WeaponMatTimeline__UpdateFunc");

	ALobbyModelShowActorBP_C_WeaponMatTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveTick");

	ALobbyModelShowActorBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature");

	ALobbyModelShowActorBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	ALobbyModelShowActorBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALobbyModelShowActorBP_C::ReceiveDestroyed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveDestroyed");

	ALobbyModelShowActorBP_C_ReceiveDestroyed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.Projectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::Projectile(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.Projectile");

	ALobbyModelShowActorBP_C_Projectile_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickWeaponMat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          fromShake                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          toShake                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::TickWeaponMat(float fromShake, float toShake)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.TickWeaponMat");

	ALobbyModelShowActorBP_C_TickWeaponMat_Params params;
	params.fromShake = fromShake;
	params.toShake = toShake;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyModelShowActorBP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ReceiveBeginPlay");

	ALobbyModelShowActorBP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ExecuteUbergraph_LobbyModelShowActorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyModelShowActorBP_C::ExecuteUbergraph_LobbyModelShowActorBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function LobbyModelShowActorBP.LobbyModelShowActorBP_C.ExecuteUbergraph_LobbyModelShowActorBP");

	ALobbyModelShowActorBP_C_ExecuteUbergraph_LobbyModelShowActorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

