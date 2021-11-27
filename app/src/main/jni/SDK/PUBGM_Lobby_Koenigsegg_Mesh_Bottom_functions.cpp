// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Koenigsegg_Mesh_Bottom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RemoveCacheActor
// (Public, BlueprintCallable, BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::RemoveCacheActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RemoveCacheActor");

	ALobby_Koenigsegg_Mesh_Bottom_C_RemoveCacheActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ResetPlatform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::ResetPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ResetPlatform");

	ALobby_Koenigsegg_Mesh_Bottom_C_ResetPlatform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.GetSeqByBind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneObjectBindingID NewParam                       (Parm, OutParm)

void ALobby_Koenigsegg_Mesh_Bottom_C::GetSeqByBind(int Type, struct FMovieSceneObjectBindingID* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.GetSeqByBind");

	ALobby_Koenigsegg_Mesh_Bottom_C_GetSeqByBind_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateLevelSequnceActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 SluaHUID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            sequenceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     sequenceActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::CreateLevelSequnceActor(class UObject* SluaHUID, int sequenceType, class ULevelSequencePlayer** Player, class ALevelSequenceActor** sequenceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateLevelSequnceActor");

	ALobby_Koenigsegg_Mesh_Bottom_C_CreateLevelSequnceActor_Params params;
	params.SluaHUID = SluaHUID;
	params.sequenceType = sequenceType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (sequenceActor != nullptr)
		*sequenceActor = params.sequenceActor;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateSeq
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::CreateSeq(int Type, class UObject** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.CreateSeq");

	ALobby_Koenigsegg_Mesh_Bottom_C_CreateSeq_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TriggerRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::TriggerRotate(float Delta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TriggerRotate");

	ALobby_Koenigsegg_Mesh_Bottom_C_TriggerRotate_Params params;
	params.Delta = Delta;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.NeedRotate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::NeedRotate(float X, float Y, bool* need)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.NeedRotate");

	ALobby_Koenigsegg_Mesh_Bottom_C_NeedRotate_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (need != nullptr)
		*need = params.need;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TickRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::TickRotate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.TickRotate");

	ALobby_Koenigsegg_Mesh_Bottom_C_TickRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.UserConstructionScript");

	ALobby_Koenigsegg_Mesh_Bottom_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::Timeline_0__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__FinishedFunc");

	ALobby_Koenigsegg_Mesh_Bottom_C_Timeline_0__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::Timeline_0__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.Timeline_0__UpdateFunc");

	ALobby_Koenigsegg_Mesh_Bottom_C_Timeline_0__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ReceiveTick");

	ALobby_Koenigsegg_Mesh_Bottom_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature");

	ALobby_Koenigsegg_Mesh_Bottom_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	ALobby_Koenigsegg_Mesh_Bottom_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RotateSpecificAngle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::RotateSpecificAngle(float Delta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.RotateSpecificAngle");

	ALobby_Koenigsegg_Mesh_Bottom_C_RotateSpecificAngle_Params params;
	params.Delta = Delta;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.StopRotate
// (BlueprintCallable, BlueprintEvent)

void ALobby_Koenigsegg_Mesh_Bottom_C::StopRotate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.StopRotate");

	ALobby_Koenigsegg_Mesh_Bottom_C_StopRotate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobby_Koenigsegg_Mesh_Bottom_C::ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Koenigsegg_Mesh_Bottom.Lobby_Koenigsegg_Mesh_Bottom_C.ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom");

	ALobby_Koenigsegg_Mesh_Bottom_C_ExecuteUbergraph_Lobby_Koenigsegg_Mesh_Bottom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

