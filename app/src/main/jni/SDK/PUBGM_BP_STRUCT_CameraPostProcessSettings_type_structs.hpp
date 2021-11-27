#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_CameraPostProcessSettings_type.BP_STRUCT_CameraPostProcessSettings_type
// 0x00D8
struct FBP_STRUCT_CameraPostProcessSettings_type
{
	int                                                ID_9_6DDED0804ABABB7E21825CAE0BFB83A4;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Method_19_7777E5806E9E62D27DA90767044756D4;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HighQualityGaussianDoFOnMobile_8_767B59C049AE0B4B17E35358027731A5;// 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     ApertureFstop_0_3C9D42407298D18B4EC4D6B2074E8A90;         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FocalDistance_6_1FF851400B99AE5F6695D1370C4CBC35;         // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DepthBlurkmfor50_2_42A970C02AC0115B3D32FC2901718E90;      // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DepthBlurRadius_3_33EB49C0524E798F3CEE7CE20F937E73;       // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FocalRegion_7_782F7F8054963A12397464B409B73A8E;           // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NearTransitionRegion_12_1B2B52803A553DC02302A3AD06774C4E; // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FarTransitionRegion_5_528FD7405048D389193787430D33704E;   // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Scale_14_0CAF0740551A369F06C987A3082E2995;                // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MaxBokehSize_10_2B8677C059F3F4C101764A6805FEB5E5;         // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NearBlurSize_11_43B99AC01DFD3E1B69D786E507F7FE15;         // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FarBlurSize_4_51911F8012AC9A8A40FAFE4C0BFCBA45;           // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Shape_15_26F1A9800A01877806E6CE8C082E57D5;                // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Occlusion_13_54D7390038BB10D2131FD7620784DE7E;            // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ColorThreshold_1_21AC78403E9774ED643A78EC07242D24;        // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SizeThreshold_16_1B4ADF4029CA57D70523D5C7070708F4;        // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkyDistance_17_00C0C5C07A9D118B796380C10885F6B5;          // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VignetteSize_18_60EC6580565041B043CE534A091EC045;         // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

