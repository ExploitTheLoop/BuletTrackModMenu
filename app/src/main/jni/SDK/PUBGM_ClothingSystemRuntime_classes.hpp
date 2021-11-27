#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClothingSystemRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0004 (0x0020 - 0x001C)
class UClothingAssetCustomData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingAsset
// 0x00F8 (0x0130 - 0x0038)
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothConfig                                ClothConfig;                                              // 0x003C(0x00BC) (Edit)
	TArray<struct FClothLODData>                       LODData;                                                  // 0x00F8(0x000C) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x0104(0x000C) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0110(0x000C) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x011C(0x000C) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClothingAssetCustomData*                    CustomData;                                               // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0020 - 0x0020)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return pStaticClass;
	}

};


}

