#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ACLPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (0x0060 - 0x0060)
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACLBase
// 0x0000 (0x0030 - 0x0030)
class UAnimCompress_ACLBase : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACL
// 0x0018 (0x0048 - 0x0030)
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	TEnumAsByte<enum EACLCompressionLevel>             CompressionLevel;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              DefaultVirtualVertexDistance;                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafetyFallbackThreshold;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorThreshold;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACLCustom
// 0x0028 (0x0058 - 0x0030)
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EACLCompressionLevel>             CompressionLevel;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EACLRotationFormat>               RotationFormat;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EACLVectorFormat>                 TranslationFormat;                                        // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EACLVectorFormat>                 ScaleFormat;                                              // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorThreshold;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantRotationThresholdAngle;                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantTranslationThreshold;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantScaleThreshold;                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClipRangeReduceRotations : 1;                            // 0x004C(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceTranslations : 1;                         // 0x004C(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceScales : 1;                               // 0x004C(0x0001) (Edit)
	unsigned char                                      bEnableSegmenting : 1;                                    // 0x004C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceRotations : 1;                         // 0x004C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceTranslations : 1;                      // 0x004C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceScales : 1;                            // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004D(0x0001) MISSED OFFSET
	uint16_t                                           IdealNumKeyFramesPerSegment;                              // 0x004E(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxNumKeyFramesPerSegment;                                // 0x0050(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return pStaticClass;
	}

};


}

