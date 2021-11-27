// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Landscape_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeLODDistributionSettingConsoleVariable
// (Native, Public, BlueprintCallable)

void ALandscapeProxy::ChangeLODDistributionSettingConsoleVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistributionSettingConsoleVariable");

	ALandscapeProxy_ChangeLODDistributionSettingConsoleVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeLOD0DistributionSettingConsoleVariable
// (Native, Public, BlueprintCallable)

void ALandscapeProxy::ChangeLOD0DistributionSettingConsoleVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLOD0DistributionSettingConsoleVariable");

	ALandscapeProxy_ChangeLOD0DistributionSettingConsoleVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangebUseScreenSizeLOD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbUseScreenSizeLOD            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangebUseScreenSizeLOD");

	ALandscapeProxy_ChangebUseScreenSizeLOD_Params params;
	params.InbUseScreenSizeLOD = InbUseScreenSizeLOD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureTrample
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FIdeaGrassFieldData     GrassFieldData                 (Parm)

void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureTrample");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureTrample_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureSkill
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FIdeaGrassFieldData     GrassFieldData                 (Parm)

void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureSkill");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureSkill_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FIdeaGrassFieldData     GrassFieldData                 (Parm)

void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureFade");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureFade_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FIdeaGrassFieldData     GrassFieldData                 (Parm)

void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTexture");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTexture_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

