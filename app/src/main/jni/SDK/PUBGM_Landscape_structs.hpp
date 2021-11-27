#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.OverridePhyxMaterial
// 0x0018
struct FOverridePhyxMaterial
{
	TArray<class UPhysicalMaterial*>                   OriginalPhysxMaterial;                                    // 0x0000(0x000C) (Edit, ZeroConstructor)
	TArray<class UPhysicalMaterial*>                   OverridePhysxMaterial;                                    // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0008
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Landscape.VisibilityData
// 0x000C
struct FVisibilityData
{
	TArray<unsigned char>                              VisibilityData;                                           // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Landscape.LevelComponentMapValue
// 0x0100
struct FLevelComponentMapValue
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        IndexOffsetArray;                                         // 0x000C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        IndexCountArray;                                          // 0x0018(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        VertexOffsetIndex;                                        // 0x0024(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex1;                                             // 0x0030(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex2;                                             // 0x003C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex3;                                             // 0x0048(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex4;                                             // 0x0054(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex1;                                        // 0x0060(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex2;                                        // 0x006C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex3;                                        // 0x0078(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex4;                                        // 0x0084(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer1;                                     // 0x0090(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer2;                                     // 0x009C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer3;                                     // 0x00A8(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer4;                                     // 0x00B4(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling1Name;                                             // 0x00C0(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling2Name;                                             // 0x00CC(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling3Name;                                             // 0x00D8(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling4Name;                                             // 0x00E4(0x000C) (Edit, ZeroConstructor)
	int                                                Sibling1Idx;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling2Idx;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling3Idx;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling4Idx;                                              // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GrassVariety
// 0x0040
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrid;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PlacementJitter;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinLOD;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGrassScaling                                      Scaling;                                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0020(0x0008) (Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0028(0x0008) (Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0030(0x0008) (Edit)
	bool                                               RandomRotation;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeLightmap;                                    // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x003B(0x0001) (Edit)
	bool                                               bReceivesDecals;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Landscape.IdeaGrassFieldData
// 0x0070
struct FIdeaGrassFieldData
{
	class UTextureRenderTarget2D*                      ForceTextureRT;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TramplerPositionList;                                     // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRotator>                            TramplerDirectionList;                                    // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TramplerCutoff;                                           // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture*                                    TrampleTexture;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrampleScale;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SkillTexture;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CleanTextureScale;                                        // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GrassSpringness;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FVector4                                    GrassFieldRect;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      FeatureLevel;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0061(0x000F) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0008
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      End : 1;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x0024(0x000C) (IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x0030(0x000C) (IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0010
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TangentLen;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GrassInput
// 0x0040
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0030)
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0088
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ELandscapeLayerBlendType>         BlendType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                               // 0x0010(0x0030)
	struct FExpressionInput                            HeightInput;                                              // 0x0040(0x0030)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x0074(0x000C) (Edit, IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeColorMask
// 0x0001
struct FLandscapeColorMask
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeColorMaskLayer
// 0x0001
struct FLandscapeColorMaskLayer
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0020
struct FLandscapeEditToolRenderData
{
	class UMaterialInterface*                          ToolMaterial;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          GizmoMaterial;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedType;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelR;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelG;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelB;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelA;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DataTexture;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x003C
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LayerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0004
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0010
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0030
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0004(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   CenterAdjust;                                             // 0x0014(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x001C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<enum ELandscapeSplineMeshOrientation>  Orientation;                                              // 0x002C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<enum ESplineMeshAxis>                  ForwardAxis;                                              // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESplineMeshAxis>                  UpAxis;                                                   // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
};

}

