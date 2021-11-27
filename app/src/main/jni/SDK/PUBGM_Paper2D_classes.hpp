#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Paper2D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0018 (0x0188 - 0x0170)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SlotDisplayName;                                          // 0x0178(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return pStaticClass;
	}

};


// Class Paper2D.PaperCharacter
// 0x0010 (0x0600 - 0x05F0)
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                   // 0x05F0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x05F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperCharacter");
		return pStaticClass;
	}

};


// Class Paper2D.PaperFlipbook
// 0x001C (0x0038 - 0x001C)
class UPaperFlipbook : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                // 0x0020(0x000C) (Edit, ZeroConstructor)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EFlipbookCollisionMode>           CollisionSource;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return pStaticClass;
	}


	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0000 (0x02E0 - 0x02E0)
class APaperFlipbookActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return pStaticClass;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0030 (0x0600 - 0x05D0)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	unsigned char                                      bLooping : 1;                                             // 0x05D0(0x0001) (Net)
	unsigned char                                      bReversePlayback : 1;                                     // 0x05D0(0x0001) (Net)
	unsigned char                                      bPlaying : 1;                                             // 0x05D0(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x05D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CachedFrameIndex;                                         // 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x05DC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x05EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        // 0x05F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return pStaticClass;
	}


	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0000 (0x02E0 - 0x02E0)
class APaperGroupedSpriteActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return pStaticClass;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0020 (0x05F0 - 0x05D0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x05D0(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x14];                                      // 0x05DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return pStaticClass;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0004 (0x0020 - 0x001C)
class UPaperRuntimeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return pStaticClass;
	}

};


// Class Paper2D.PaperSprite
// 0x006C (0x0088 - 0x001C)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	struct FVector2D                                   SourceUV;                                                 // 0x0024(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   SourceDimension;                                          // 0x002C(0x0008) (Edit, IsPlainOldData)
	class UTexture2D*                                  SourceTexture;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x000C) (Edit, ZeroConstructor)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0044(0x0008) (IsPlainOldData)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x004C(0x0008) (IsPlainOldData)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0060(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<enum ESpriteCollisionMode>             SpriteCollisionDomain;                                    // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlternateMaterialSplitIndex;                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x007C(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperSprite");
		return pStaticClass;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0000 (0x02E0 - 0x02E0)
class APaperSpriteActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return pStaticClass;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0004 (0x0020 - 0x001C)
class UPaperSpriteAtlas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return pStaticClass;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return pStaticClass;
	}


	static struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};


// Class Paper2D.PaperSpriteComponent
// 0x0010 (0x05E0 - 0x05D0)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return pStaticClass;
	}


	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0008 (0x02E8 - 0x02E0)
class APaperTerrainActor : public AActor
{
public:
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x02E0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x02E4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0040 (0x05F0 - 0x05B0)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	int                                                RandomSeed;                                               // 0x05B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOverlapAmount;                                     // 0x05B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TerrainColor;                                             // 0x05B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                ReparamStepsPerSegment;                                   // 0x05C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESpriteCollisionMode>             SpriteCollisionDomain;                                    // 0x05CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x05D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x05D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x05D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return pStaticClass;
	}


	void SetTerrainColor(const struct FLinearColor& NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0010 (0x0030 - 0x0020)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor)
	class UPaperSprite*                                InteriorFill;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (0x0680 - 0x0670)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTileLayer
// 0x0054 (0x0070 - 0x001C)
class UPaperTileLayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	int                                                LayerWidth;                                               // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeight;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionOffsetOverride;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerColor;                                               // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0054(0x000C) (ZeroConstructor)
	class UPaperTileSet*                               TileSet;                                                  // 0x0060(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<int>                                        AllocatedGrid;                                            // 0x0064(0x000C) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTileMap
// 0x0074 (0x0090 - 0x001C)
class UPaperTileMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MapHeight;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileX;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileY;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerLayer;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x003C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
	class UMaterialInterface*                          Material;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x006C(0x000C) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              CollisionThickness;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESpriteCollisionMode>             SpriteCollisionDomain;                                    // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETileMapProjectionMode>           ProjectionMode;                                           // 0x007D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LayerNameIndex;                                           // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMap");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0000 (0x02E0 - 0x02E0)
class APaperTileMapActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return pStaticClass;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0040 (0x0610 - 0x05D0)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                TileHeight;                                               // 0x05D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x05D4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x05D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x05DC(0x000C) (ZeroConstructor, Deprecated)
	struct FLinearColor                                TileMapColor;                                             // 0x05E8(0x0010) (Edit, IsPlainOldData)
	int                                                UseSingleLayerIndex;                                      // 0x05F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSingleLayer;                                          // 0x05FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05FD(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0604(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return pStaticClass;
	}


	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0074 (0x0090 - 0x001C)
class UPaperTileSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	class UTexture2D*                                  TileSheet;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0028(0x000C) (Edit, ZeroConstructor)
	struct FIntMargin                                  BorderMargin;                                             // 0x0034(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntPoint                                   DrawingOffset;                                            // 0x004C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                WidthInTiles;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeightInTiles;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0064(0x000C) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0070(0x000C) (ZeroConstructor)
	int                                                TileWidth;                                                // 0x007C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0080(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Margin;                                                   // 0x0084(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Spacing;                                                  // 0x0088(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.PaperTileSet");
		return pStaticClass;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return pStaticClass;
	}


	static struct FPaperTileInfo MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	static struct FName GetTileUserData(const struct FPaperTileInfo& Tile);
	static struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	static void BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};


}

