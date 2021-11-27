#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Niagara_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0058 - 0x0048)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0048(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0020 (0x0078 - 0x0058)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0058(0x0020)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return pStaticClass;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x0080 - 0x0078)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraActor
// 0x0000 (0x02E0 - 0x02E0)
class ANiagaraActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraActor");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraComponent
// 0x0160 (0x0710 - 0x05B0)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x05B0(0x00E0) MISSED OFFSET
	unsigned char                                      bForceSolo : 1;                                           // 0x0690(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0691(0x001C) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x06AD(0x0001)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x06AD(0x0001)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x06AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06AE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSystemFinished;                                         // 0x06B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x06BC(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	struct FName                                       AutoAttachSocketName;                                     // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x06D3(0x0001) MISSED OFFSET
	int                                                PreviewDetailLevel;                                       // 0x06D4(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviewLODDistance;                                       // 0x06D8(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEnablePreviewDetailLevel : 1;                            // 0x06DC(0x0001) (Edit, Transient)
	unsigned char                                      bEnablePreviewLODDistance : 1;                            // 0x06DC(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData05[0x33];                                      // 0x06DD(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraComponent");
		return pStaticClass;
	}


	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};


// Class Niagara.NiagaraDataInterface
// 0x0008 (0x0028 - 0x0020)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0018 (0x0040 - 0x0028)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              LUTMinTime;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT : 1;                                              // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0150 (0x0190 - 0x0040)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0040(0x0054) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x0094(0x0054) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x00E8(0x0054) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x013C(0x0054) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0058 (0x0098 - 0x0040)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0040(0x0054) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0040 (0x0068 - 0x0028)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x002C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0034(0x000C) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SpecificBones;                                            // 0x0044(0x000C) (Edit, ZeroConstructor)
	TArray<struct FName>                               SpecificSockets;                                          // 0x0050(0x000C) (Edit, ZeroConstructor)
	bool                                               bUseTriangleSampling;                                     // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexSampling;                                       // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseSkeletonSampling;                                     // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x005F(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0018 (0x0040 - 0x0028)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x002C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0030(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x00A8 (0x00E8 - 0x0040)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0040(0x0054) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x0094(0x0054) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0150 (0x0190 - 0x0040)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0040(0x0054) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x0094(0x0054) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x00E8(0x0054) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x013C(0x0054) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0100 (0x0140 - 0x0040)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0040(0x0054) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x0094(0x0054) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x00E8(0x0054) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	bool                                               bTileX;                                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0004 (0x0020 - 0x001C)
class UNiagaraEditorDataBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraEmitter
// 0x00F4 (0x0110 - 0x001C)
class UNiagaraEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0024(0x001C)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0040(0x001C)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  // 0x005C(0x001C)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 // 0x0078(0x001C)
	unsigned char                                      bHasPendingFallbackEmitterChange : 1;                     // 0x0094(0x0001)
	unsigned char                                      bIsFallbackEmitter : 1;                                   // 0x0094(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	class UNiagaraEmitter*                             CPUFallbackEmitter;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseFallbackEmitter : 1;                                  // 0x009D(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x00A0(0x001C) (Edit, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x00C4(0x0001) (Edit)
	unsigned char                                      bFixedBounds : 1;                                         // 0x00C4(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x00C4(0x0001) (Edit)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x00C4(0x0001) (Edit)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x00C4(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FString                                     UniqueEmitterName;                                        // 0x00D0(0x000C) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x00DC(0x000C) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x00E8(0x000C) (Edit, ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x00F8(0x000C) (ZeroConstructor)
	class UNiagaraEmitter*                             Parent;                                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraEmitter*                             ParentAtLastMerge;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0004 (0x0020 - 0x001C)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0000 (0x0020 - 0x0020)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return pStaticClass;
	}


	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<enum EAttachLocation> LocationType, bool bAutoDestroy);
	static class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	static bool IsAllowNiagaraGPUParticles(class UObject* WorldContextObject);
	static int GetReadbackParticleCount();
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	static int GetGPUReadbackDelay();
	static int GetGPUParticleCount();
	static int GetDeadParticleCount();
	static int GetCPUParticleCount();
};


// Class Niagara.NiagaraRendererProperties
// 0x0008 (0x0028 - 0x0020)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	bool                                               bIsEnabled;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0250 (0x0278 - 0x0028)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	struct FVector                                     ColorAdd;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0038(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x0098(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00F8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0158(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x01B8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x0218(0x0060) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0498 (0x04C0 - 0x0028)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	ENiagaraSortMode                                   SortMode;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x0029(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x0029(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x002C(0x000C) (Edit, ZeroConstructor)
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0040(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00A0(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0100(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0160(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x01C0(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0220(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0280(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x02E0(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0340(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x03A0(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x0400(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0460(0x0060) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x00BC (0x00D8 - 0x001C)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0020(0x000C) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x002C(0x00AC)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return pStaticClass;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x002C (0x0048 - 0x001C)
class UNiagaraParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       Namespace;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0028(0x000C) (ZeroConstructor)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0038(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x02E0 - 0x02E0)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return pStaticClass;
	}


	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};


// Class Niagara.NiagaraPreviewAxis
// 0x0004 (0x0020 - 0x001C)
class UNiagaraPreviewAxis : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return pStaticClass;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0030 - 0x0020)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	int                                                Count;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0038 - 0x0030)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Max;                                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0038 - 0x0030)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Max;                                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (0x0040 - 0x0030)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	struct FVector2D                                   Max;                                                      // 0x0034(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (0x0048 - 0x0030)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVector                                     Max;                                                      // 0x0038(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0020 (0x0050 - 0x0030)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector4                                    Min;                                                      // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0040(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0050 - 0x0030)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0030(0x000C) MISSED OFFSET
	struct FLinearColor                                Max;                                                      // 0x003C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0030 (0x0310 - 0x02E0)
class ANiagaraPreviewGrid : public AActor
{
public:
	ENiagaraPreviewGridResetMode                       ResetMode;                                                // 0x02E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x02E4(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x02E8(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PreviewClass;                                             // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x02F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x02FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0300(0x000C) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return pStaticClass;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0590 (0x05B8 - 0x0028)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              UV0TilingDistance;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Scale;                                                 // 0x0030(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   UV0Offset;                                                // 0x0038(0x0008) (Edit, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              UV1TilingDistance;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Scale;                                                 // 0x0048(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   UV1Offset;                                                // 0x0050(0x0008) (Edit, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              CurveTension;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantFactor;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenSpaceTessellation;                                 // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0078(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00D8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0138(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0198(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x01F8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0258(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x02B8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0318(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x0378(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x03D8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0438(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0498(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x04F8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0558(0x0060) (Edit)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraScript
// 0x04CC (0x04E8 - 0x001C)
class UNiagaraScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x0020(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0024(0x0010) (IsPlainOldData)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0034(0x00AC)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreCPU;                             // 0x00E0(0x00C4) (Transient)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreGPU;                             // 0x01A4(0x00C4) (Transient)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x0268(0x0044)
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                        // 0x02AC(0x0044)
	unsigned char                                      UnknownData01[0x120];                                     // 0x02F0(0x0120) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x0410(0x00C0)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x04D0(0x000C) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x04DC(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraScript");
		return pStaticClass;
	}


	void OnCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x001C (0x0038 - 0x001C)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraSettings
// 0x0028 (0x0058 - 0x0030)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0030(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x003C(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0048(0x000C) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraSettings");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x06A0 (0x06C8 - 0x0028)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x002C(0x000C) (Edit, IsPlainOldData)
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0038(0x0008) (Edit, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0044(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x004C(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x004C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0058(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00B8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0118(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0178(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x01D8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0238(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x0298(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x02F8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0358(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03B8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0418(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0478(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x04D8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x0538(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0598(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x05F8(0x0060) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0658(0x0060) (Edit)
	unsigned char                                      UnknownData03[0x10];                                      // 0x06B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return pStaticClass;
	}

};


// Class Niagara.NiagaraSystem
// 0x0150 (0x0170 - 0x0020)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x002C(0x000C) (Edit, ZeroConstructor)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEmitterSpawnAttributes>      EmitterSpawnAttributes;                                   // 0x0040(0x000C) (ZeroConstructor)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x004C(0x00E8)
	struct FBox                                        FixedBounds;                                              // 0x0134(0x001C) (Edit, IsPlainOldData)
	bool                                               bAutoDeactivate;                                          // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x0164(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Niagara.NiagaraSystem");
		return pStaticClass;
	}

};


}

